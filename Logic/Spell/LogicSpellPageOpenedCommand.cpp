class LogicSpellPageOpenedCommand
{
public:

    _QWORD *__fastcall LogicSpellPageOpenedCommand::LogicSpellPageOpenedCommand(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      *result = &off_100469DD0;
      result[4] = 0;
      result[5] = 0;
      return result;
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(a1);
      *(_DWORD *)(a1 + 44) = 0;
      return result;
    }

    __int64 LogicSpellPageOpenedCommand::getCommandType()
    {
      return 525;
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      return ByteStreamHelper::encodeSpellList(a2, a1 + 32);
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      LogicCommand::decode(a1, a2);
      return ByteStreamHelper::decodeSpellList(a2, a1 + 8);
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::execute(__int64 a1, UnlockAccountPopup *a2, char a3)
    {
      #1146 *Home; // x19
      __int64 PlayerAvatar; // x8
      __int64 result; // x0
      __int64 v9; // x8
      __int64 v10; // x21
      LogicSpellPageOpenedCommand *SpellByData; // x0
      LogicSpell *v12; // x1
      __int64 v13; // x8
      AcceptChallengeMessage *SelectedDeck; // x20
      int SpellCnt; // w0
      unsigned __int64 v16; // x21
      LogicSpellPageOpenedCommand *Spell; // x0
      LogicSpell *v18; // x1
      int v19; // w8
      GameInputField *SpellCollection; // x19
      int v21; // w8
      int v22; // w20
      LogicSpellPageOpenedCommand *v23; // x0
      LogicSpell *v24; // x1
      int v25; // w8
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      PlayerAvatar = LogicGameMode::getPlayerAvatar(a2);
      if ( PlayerAvatar )
        result = 0;
      else
        result = 5;
      if ( (a3 & 2) != 0 && PlayerAvatar )
      {
        v9 = *(int *)(a1 + 44);
        if ( (int)v9 < 1 )
        {
          SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
          SpellCnt = LogicSpellDeck::getSpellCnt((__int64)SelectedDeck);
          v16 = (unsigned int)(SpellCnt - 1);
          if ( SpellCnt >= 1 )
          {
            do
            {
              Spell = (LogicSpellPageOpenedCommand *)LogicSpellDeck::getSpell(SelectedDeck, (const char *)v16);
              LogicSpellPageOpenedCommand::updateSpellState(Spell, v18);
              v19 = v16 + 1;
              v16 = (unsigned int)(v16 - 1);
            }
            while ( v19 > 1 );
          }
          SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
          v21 = *((_DWORD *)SpellCollection + 3);
          v22 = v21 - 1;
          if ( v21 >= 1 )
          {
            do
            {
              v23 = (LogicSpellPageOpenedCommand *)LogicSpellCollection::getSpell(SpellCollection, v22);
              LogicSpellPageOpenedCommand::updateSpellState(v23, v24);
              v25 = v22-- + 1;
            }
            while ( v25 > 1 );
          }
        }
        else
        {
          v10 = v9 - 1;
          do
          {
            SpellByData = (LogicSpellPageOpenedCommand *)LogicClientHome::getSpellByData(
                                                           Home,
                                                           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10));
            if ( SpellByData )
              LogicSpellPageOpenedCommand::updateSpellState(SpellByData, v12);
            v13 = v10-- + 1;
          }
          while ( v13 > 1 );
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::updateSpellState(TextField *a1)
    {
      __int64 result; // x0
      __int64 Listener; // x0
    
      LogicSpell::setShowNewCount((__int64)a1, 0);
      LogicSpell::setShowNewIcon((__int64)a1, 0);
      LogicSpell::clearNewUpgradeAvailable((__int64)a1);
      result = LogicSpell::getListener(a1);
      if ( result )
      {
        Listener = LogicSpell::getListener(a1);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Listener + 72LL))(Listener);
      }
      return result;
    }

    __int64 __fastcall LogicSpellPageOpenedCommand::addSpell(__int64 a1, __int64 a2)
    {
      __int64 v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      return LogicArrayList<LogicSpellData const*>::add(a1 + 32, &v3);
    }

    _QWORD *__fastcall LogicSpellPageOpenedCommand::~LogicSpellPageOpenedCommand(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *a1 = &off_100469DD0;
      v3 = a1 + 4;
      v2 = a1[4];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      *a1 = &off_1004646C8;
      *(_QWORD *)((char *)a1 + 20) = 0;
      return a1;
    }

    void __fastcall LogicSpellPageOpenedCommand::~LogicSpellPageOpenedCommand(_QWORD *a1)
    {
      __int64 v2; // x0
    
      *a1 = &off_100469DD0;
      v2 = a1[4];
      if ( v2 )
        operator delete[](v2);
      operator delete(a1);
    }

}; // end class LogicSpellPageOpenedCommand
