class LogicChallengeCommand
{
public:

    void __fastcall LogicChallengeCommand::LogicChallengeCommand(LogicChallengeCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_100464600;
      *((_QWORD *)v1 + 4) = 0;
    }

    void __fastcall LogicChallengeCommand::destruct(String **this)
    {
      void *v2; // x20
    
      LogicCommand::destruct((LogicCommand *)this);
      v2 = *(this + 4);
      if ( v2 )
      {
        String::~String(*(this + 4));
        operator delete(v2);
      }
      *(this + 4) = 0;
    }

    __int64 __fastcall LogicChallengeCommand::execute(SoundManager *this, UnlockAccountPopup *a2, char a3)
    {
      tween::Bounce *PlayerAvatar; // x21
      LogicDataTables *Home; // x0
      LogicKickAllianceMemberCommand *v8; // x0
      int v9; // w23
      const #1355 *GoldData; // x0
      int v11; // w22
      #1146 *v12; // x0
      AcceptChallengeMessage *LogicDeck; // x0
      int isFull; // w8
      __int64 result; // x0
      __int64 v16; // x0
      __int64 GameListener; // x0
    
      PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
      Home = (LogicDataTables *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      if ( !*(_BYTE *)(LogicDataTables::getGlobals(Home) + 480LL) )
        return 2;
      if ( !PlayerAvatar )
        return 5;
      v8 = (LogicKickAllianceMemberCommand *)(*(__int64 (__fastcall **)(SoundManager *, UnlockAccountPopup *))(*(_QWORD *)this + 56LL))(
                                               this,
                                               a2);
      v9 = (int)v8;
      GoldData = (const #1355 *)LogicDataTables::getGoldData(v8);
      if ( !(unsigned int)LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, v9, 1, this, 0) )
        return 3;
      v11 = a3 & 2;
      v12 = (#1146 *)LogicGameMode::getHome(a2);
      LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(v12, 0);
      isFull = LogicSpellDeck::isFull(LogicDeck);
      if ( isFull )
        result = 0;
      else
        result = 4;
      if ( v11 )
      {
        if ( ((isFull ^ 1) & 1) == 0 )
        {
          v16 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 256LL))(v16, *((_QWORD *)this + 4));
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 400LL))(GameListener);
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall LogicChallengeCommand::getCommandType(SoundManager *this)
    {
      return 534;
    }

    __int64 __fastcall LogicChallengeCommand::encode(SoundManager *this, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
    
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *((_QWORD *)this + 4) )
      {
        v4(a2, 1);
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      }
      else
      {
        v4(a2, 0);
      }
      return LogicCommand::encode(this, a2);
    }

    __int64 __fastcall LogicChallengeCommand::decode(SoundManager *this, #1225 *a2)
    {
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
        *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      return LogicCommand::decode(this, a2);
    }

    __int64 __fastcall LogicChallengeCommand::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall LogicChallengeCommand::getCommandGoldCost(SoundManager *this, const UnlockAccountPopup *a2)
    {
      return *(unsigned int *)(LogicDataTables::getGlobals(this) + 476LL);
    }

    void __fastcall LogicChallengeCommand::~LogicChallengeCommand(SoundManager *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicChallengeCommand::~LogicChallengeCommand(SoundManager *this)
    {
      operator delete(this);
    }

}; // end class LogicChallengeCommand
