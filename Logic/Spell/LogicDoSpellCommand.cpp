class LogicDoSpellCommand
{
public:

    void __fastcall LogicDoSpellCommand::LogicDoSpellCommand(LogicDoSpellCommand *this)
    {
      LogicCommand::LogicCommand(this);
      *(_QWORD *)this = &off_10045E878;
      LogicVector2::LogicVector2((LogicDoSpellCommand *)((char *)this + 32));
      *((_DWORD *)this + 7) = 0;
      *((_QWORD *)this + 5) = 0;
    }

    // attributes: thunk
    void __fastcall LogicDoSpellCommand::LogicDoSpellCommand(LogicDoSpellCommand *this)
    {
      __ZN19LogicDoSpellCommandC2Ev(this);
    }

    __int64 __fastcall LogicDoSpellCommand::destruct(AskForJoinableAlliancesListMessage *this)
    {
      void *v2; // x20
      __int64 result; // x0
    
      LogicVector2::destruct((AskForJoinableAlliancesListMessage *)((char *)this + 32));
      v2 = (void *)*((_QWORD *)this + 5);
      if ( v2 )
      {
        LogicSpell::destruct(*((TextField **)this + 5));
        operator delete(v2);
      }
      *((_QWORD *)this + 5) = 0;
      result = LogicCommand::destruct(this);
      *((_DWORD *)this + 7) = 0;
      *((_QWORD *)this + 5) = 0;
      return result;
    }

    __int64 __fastcall LogicDoSpellCommand::getCommandType(AskForJoinableAlliancesListMessage *this)
    {
      return 1;
    }

    __int64 __fastcall LogicDoSpellCommand::encode(TextField **this, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
      const LogicVector2 *v5; // x2
    
      LogicCommand::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(this + 5) )
      {
        v4(a2, 1);
        LogicSpell::encode(*(this + 5), a2);
      }
      else
      {
        v4(a2, 0);
      }
      return ByteStreamHelper::encodeVector(a2, (ChecksumEncoder *)(this + 4), v5);
    }

    __int64 __fastcall LogicDoSpellCommand::decode(AskForJoinableAlliancesListMessage *this, #1225 *a2)
    {
      LogicVector2 *v4; // x2
      TextField *v5; // x21
    
      LogicCommand::decode(this, a2);
      *((_DWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v5 = (TextField *)operator new(48);
        LogicSpell::LogicSpell(v5);
        LogicSpell::decode(v5, a2);
        *((_QWORD *)this + 5) = v5;
      }
      return ByteStreamHelper::decodeVector(a2, (AskForJoinableAlliancesListMessage *)((char *)this + 32), v4);
    }

    __int64 __fastcall LogicDoSpellCommand::execute(
            AskForJoinableAlliancesListMessage *this,
            #1028 *a2,
            char a3,
            _BOOL4 a4)
    {
      UnbindFacebookAccountMessage *v9; // x24
      int HigherInt; // w23
      int LowerInt; // w0
      int AccountIndex; // w0
      __int64 LeaderByIndex; // x0
      GameMode *v14; // x21
      __int64 RealOwnerAccountId; // x23
      __int64 ExecutorAccountId; // x0
      __int64 SpellIndex; // x8
      TextField *Spell; // x26
      const #895 *SpellData; // x23
      int v20; // w28
      int Mana; // w0
      int v22; // w27
      __int64 v23; // x25
      __int64 GameListener; // x0
      int v25; // w0
      __int64 v26; // x24
      #1147 *TutorialManager; // x22
      #943 *CurrentTutorial; // x27
      #943 *v29; // x0
      #962 *AvatarByAccountID; // x19
      int SpellUsageStat; // w0
      int v32; // w1
      int v33; // [xsp+8h] [xbp-58h]
      unsigned int v34; // [xsp+Ch] [xbp-54h]
    
      if ( *((_DWORD *)this + 7) > 7u )
        return 1;
      v9 = (UnbindFacebookAccountMessage *)*((_QWORD *)a2 + 21);
      if ( !v9 )
        return 2;
      if ( (LogicBattle::isFinished(*((UnbindFacebookAccountMessage **)a2 + 21)) & 1) != 0 )
        return 3;
      if ( (LogicBattle::isEndConditionMatched(v9) & 1) != 0 )
        return 4;
      HigherInt = LogicLong::getHigherInt((char *)this + 20);
      LowerInt = LogicLong::getLowerInt((char *)this + 20);
      AccountIndex = LogicBattle::getAccountIndex(v9, HigherInt, LowerInt);
      LeaderByIndex = LogicBattle::getLeaderByIndex(v9, AccountIndex);
      v14 = (GameMode *)LeaderByIndex;
      if ( !LeaderByIndex )
        return 5;
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)LeaderByIndex + 200LL))(LeaderByIndex) )
        return 6;
      RealOwnerAccountId = LogicGameObject::getRealOwnerAccountId(v14);
      ExecutorAccountId = LogicCommand::getExecutorAccountId(this);
      if ( !(unsigned int)LogicLong::equals(RealOwnerAccountId, ExecutorAccountId) )
        return 7;
      if ( !(*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v14 + 152LL))(v14) )
        return 8;
      if ( (unsigned int)LogicSummoner::hasDeck(v14) )
      {
        SpellIndex = LogicSummoner::getSpellIndex(v14, *((unsigned int *)this + 7));
        if ( (unsigned int)SpellIndex > 3 )
          return 9;
        Spell = (TextField *)LogicSummoner::getSpell(v14, SpellIndex);
        if ( !Spell )
          return 10;
      }
      else
      {
        Spell = (TextField *)*((_QWORD *)this + 5);
        if ( !Spell )
          return 11;
      }
      SpellData = (const #895 *)LogicSpell::getSpellData(Spell);
      if ( !SpellData )
        return 12;
      v20 = a3 & 2;
      if ( (a3 & 2) != 0 )
        Mana = LogicSummoner::getMana(v14);
      else
        Mana = LogicSummoner::getSimulatedMana(v14);
      v22 = Mana;
      v23 = LogicSummoner::calculateManaCost(v14, SpellData);
      if ( v22 >= (int)v23 )
      {
        v25 = LogicBattle::checkSpellPosition(v9, *((_DWORD *)this + 8), *((_DWORD *)this + 9), SpellData, a4);
        if ( v25 )
          return (unsigned int)(v25 + 14);
        v26 = *((unsigned int *)this + 8);
        v34 = *((_DWORD *)this + 9);
        TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(a2);
        CurrentTutorial = (#943 *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
        if ( CurrentTutorial )
        {
          v29 = (#943 *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
          if ( (LogicTutorialData::isDisableSpells(v29) & 1) != 0 )
            return 22;
          v33 = 1;
        }
        else
        {
          v33 = 0;
        }
        if ( v20 )
        {
          LogicSummoner::useSpell(v14, Spell, v26, v34, 0, 0);
          LogicSummoner::updateSimulatedMana(v14, v26, v34, 0, (unsigned int)-(int)v23);
          LogicSummoner::setSimulatedLastSpellDeckIndex(v14, -1);
          if ( v33 && (unsigned int)LogicTutorialData::getFinishRequirement(CurrentTutorial) == 5 )
            LogicTutorialManager::setCurrentTutorialCompleted(TutorialManager);
          AvatarByAccountID = (#962 *)LogicGameMode::getAvatarByAccountID(
                                        a2,
                                        *((unsigned int *)this + 5),
                                        *((unsigned int *)this + 6));
          SpellUsageStat = LogicClientAvatar::getSpellUsageStat(AvatarByAccountID, SpellData);
          LogicClientAvatar::setSpellUsageStat(AvatarByAccountID, SpellData, (unsigned int)(SpellUsageStat + 1));
        }
        else
        {
          LogicSummoner::updateSimulatedMana(v14, v26, v34, SpellData, v23);
          v32 = *((_DWORD *)this + 7);
          if ( v32 != -1 )
            LogicSummoner::setSimulatedLastSpellDeckIndex(v14, v32);
        }
        return 0;
      }
      else
      {
        if ( a4 )
        {
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)GameListener + 240LL))(
            GameListener,
            *((unsigned int *)this + 8),
            *((unsigned int *)this + 9));
        }
        return 13;
      }
    }

    __int64 __fastcall LogicDoSpellCommand::setCoordinate(AskForJoinableAlliancesListMessage *this, int a2, int a3)
    {
      return LogicVector2::set((AskForJoinableAlliancesListMessage *)((char *)this + 32), a2, a3);
    }

    __int64 __fastcall LogicDoSpellCommand::getJSONForReplay(AskForJoinableAlliancesListMessage *this)
    {
      __int64 JSONForReplay; // x19
      #1232 *v3; // x21
      #1232 *v4; // x21
      #1232 *v5; // x21
      String v7; // [xsp+8h] [xbp-68h] BYREF
      String v8; // [xsp+20h] [xbp-50h] BYREF
      String v9; // [xsp+38h] [xbp-38h] BYREF
    
      JSONForReplay = LogicCommand::getJSONForReplay(this);
      String::String(&v9, "idx");
      v3 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v3, *((_DWORD *)this + 7));
      LogicJSONObject::put(JSONForReplay, &v9, v3);
      String::~String(&v9);
      String::String(&v8, "px");
      v4 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v4, *((_DWORD *)this + 8));
      LogicJSONObject::put(JSONForReplay, &v8, v4);
      String::~String(&v8);
      String::String(&v7, "py");
      v5 = (#1232 *)operator new(16);
      LogicJSONNumber::LogicJSONNumber(v5, *((_DWORD *)this + 9));
      LogicJSONObject::put(JSONForReplay, &v7, v5);
      String::~String(&v7);
      return JSONForReplay;
    }

    __int64 __fastcall LogicDoSpellCommand::loadFromJSON(AskForJoinableAlliancesListMessage *this, #1234 *a2)
    {
      #1232 *JSONNumber; // x21
      const char *v5; // x1
      #1232 *v6; // x21
      const char *v7; // x1
      #1232 *v8; // x20
      const char *v9; // x1
      __int64 result; // x0
      String v11; // [xsp+8h] [xbp-68h] BYREF
      String v12; // [xsp+20h] [xbp-50h] BYREF
      String v13; // [xsp+38h] [xbp-38h] BYREF
    
      LogicCommand::loadFromJSON(this, a2);
      String::String(&v13, "idx");
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v13);
      String::~String(&v13);
      if ( !JSONNumber )
        Debugger::error((__siginfo *)"LogicDoSpellCommand::loadFromJSON m_spellIndex not found!", v5);
      *((_DWORD *)this + 7) = LogicJSONNumber::getIntValue(JSONNumber);
      String::String(&v12, "px");
      v6 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v12);
      String::~String(&v12);
      if ( !v6 )
        Debugger::error((__siginfo *)"LogicDoSpellCommand::loadFromJSON m_coordinate.x not found!", v7);
      *((_DWORD *)this + 8) = LogicJSONNumber::getIntValue(v6);
      String::String(&v11, "py");
      v8 = (#1232 *)LogicJSONObject::getJSONNumber(a2, &v11);
      String::~String(&v11);
      if ( !v8 )
        Debugger::error((__siginfo *)"LogicDoSpellCommand::loadFromJSON m_coordinate.y not found!", v9);
      result = LogicJSONNumber::getIntValue(v8);
      *((_DWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall LogicDoSpellCommand::setSpellDeckIndex(__int64 this, int a2)
    {
      *(_DWORD *)(this + 28) = a2;
      return this;
    }

    void __fastcall LogicDoSpellCommand::~LogicDoSpellCommand(AskForJoinableAlliancesListMessage *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicDoSpellCommand::~LogicDoSpellCommand(AskForJoinableAlliancesListMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicDoSpellCommand
