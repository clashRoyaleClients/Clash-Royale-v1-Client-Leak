class LogicCollectMultiWinChestCommand
{
public:

    _QWORD *__fastcall LogicCollectMultiWinChestCommand::LogicCollectMultiWinChestCommand(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_1004673B8;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicCollectMultiWinChestCommand::destruct(__int64 result)
    {
      return LogicCommand::destruct(result);
    }

    __int64 LogicCollectMultiWinChestCommand::getCommandType()
    {
      return 523;
    }

    // attributes: thunk
    __int64 __fastcall LogicCollectMultiWinChestCommand::encode(__int64 a1, #1317 *a2)
    {
      return LogicCommand::encode(a1, a2);
    }

    // attributes: thunk
    void __fastcall LogicCollectMultiWinChestCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      LogicCommand::decode(a1, a2);
    }

    __int64 __fastcall LogicCollectMultiWinChestCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      #1146 *Home; // x0
      #1146 *v6; // x22
      LogicChest *v7; // x20
      __int64 result; // x0
      int v9; // w21
      int isClaimingReward; // w0
      char v11; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      v6 = Home;
      if ( !Home )
        return 1;
      if ( !(unsigned int)LogicClientHome::isCrownChestAvailable(Home) )
        return 2;
      v7 = (LogicChest *)*((_QWORD *)v6 + 23);
      if ( !v7 )
        return 3;
      if ( *((_BYTE *)v7 + 40) )
        return 4;
      v9 = a3 & 2;
      isClaimingReward = LogicClientHome::isClaimingReward(v6);
      v11 = isClaimingReward;
      if ( isClaimingReward )
        result = 5;
      else
        result = 0;
      if ( v9 )
      {
        if ( (v11 & 1) == 0 )
        {
          LogicChest::setClaimed(v7, a2, 3);
          return 0;
        }
      }
      return result;
    }

    _QWORD *__fastcall LogicCollectMultiWinChestCommand::~LogicCollectMultiWinChestCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicCollectMultiWinChestCommand::~LogicCollectMultiWinChestCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicCollectMultiWinChestCommand
