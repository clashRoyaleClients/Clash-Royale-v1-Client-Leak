class LogicKickAllianceMemberCommand
{
public:

    _QWORD *__fastcall LogicKickAllianceMemberCommand::LogicKickAllianceMemberCommand(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100465A58;
      result[4] = 0;
      result[5] = 0;
      return result;
    }

    void __fastcall LogicKickAllianceMemberCommand::destruct(__int64 a1)
    {
      void *v2; // x20
      void *v3; // x0
    
      LogicCommand::destruct(a1);
      v2 = *(void **)(a1 + 32);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 32));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 32) = 0;
      v3 = *(void **)(a1 + 40);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }

    __int64 LogicKickAllianceMemberCommand::getCommandType()
    {
      return 526;
    }

    __int64 __fastcall LogicKickAllianceMemberCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 32));
      return ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 40));
    }

    __int64 __fastcall LogicKickAllianceMemberCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(ByteStreamHelper *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 40) = result;
      return result;
    }

    __int64 __fastcall LogicKickAllianceMemberCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      __int64 PlayerAvatar; // x0
      tween::Bounce *v7; // x20
      __int64 AllianceRoleData; // x0
      int v9; // w8
      __int64 result; // x0
      __int64 v11; // x0
    
      if ( !LogicGameMode::getHome(a2) )
        return 1;
      PlayerAvatar = LogicGameMode::getPlayerAvatar(a2);
      v7 = (tween::Bounce *)PlayerAvatar;
      if ( !PlayerAvatar )
        return 2;
      if ( !LogicClientAvatar::getAllianceRoleData(PlayerAvatar) )
        return 3;
      AllianceRoleData = LogicClientAvatar::getAllianceRoleData(v7);
      v9 = *(unsigned __int8 *)(AllianceRoleData + 108);
      result = 4 * (unsigned int)(*(_BYTE *)(AllianceRoleData + 108) == 0);
      if ( (a3 & 2) != 0 )
      {
        if ( v9 )
        {
          v11 = LogicClientAvatar::getChangeListener(v7);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(
            v11,
            *(_QWORD *)(a1 + 40),
            *(_QWORD *)(a1 + 32));
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicKickAllianceMemberCommand::setMessage(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 32) = a2;
      return result;
    }

    void __fastcall LogicKickAllianceMemberCommand::setAvatarId(__int64 a1, __int64 a2)
    {
      void *v4; // x0
    
      v4 = *(void **)(a1 + 40);
      if ( v4 )
        operator delete(v4);
      *(_QWORD *)(a1 + 40) = a2;
    }

    _QWORD *__fastcall LogicKickAllianceMemberCommand::~LogicKickAllianceMemberCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicKickAllianceMemberCommand::~LogicKickAllianceMemberCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicKickAllianceMemberCommand
