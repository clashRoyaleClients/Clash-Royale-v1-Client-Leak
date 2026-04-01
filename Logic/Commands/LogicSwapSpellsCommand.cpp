class LogicSwapSpellsCommand
{
public:

    _QWORD *__fastcall LogicSwapSpellsCommand::LogicSwapSpellsCommand(__int64 a1)
    {
      _QWORD *result; // x0
      __int64 v2; // x8
    
      result = (_QWORD *)LogicCommand::LogicCommand(a1);
      v2 = 0;
      *result = &off_100465C20;
      do
      {
        *((_DWORD *)result + v2 + 7) = -1;
        *((_BYTE *)result + v2++ + 36) = 0;
      }
      while ( v2 != 2 );
      return result;
    }

    __int64 __fastcall LogicSwapSpellsCommand::destruct(__int64 a1)
    {
      __int64 result; // x0
      __int64 i; // x8
    
      result = LogicCommand::destruct(a1);
      for ( i = 0; i != 2; ++i )
      {
        *(_DWORD *)(a1 + 4 * i + 28) = -1;
        *(_BYTE *)(a1 + i + 36) = 0;
      }
      return result;
    }

    __int64 LogicSwapSpellsCommand::getCommandType()
    {
      return 500;
    }

    __int64 __fastcall LogicSwapSpellsCommand::encode(__int64 a1, #1317 *a2)
    {
      LogicCommand::encode(a1, a2);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 32));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 36));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 37));
    }

    __int64 __fastcall LogicSwapSpellsCommand::decode(__int64 a1, ByteStreamHelper *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode((_DWORD *)a1, a2);
      *(_DWORD *)(a1 + 28) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_BYTE *)(a1 + 36) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 37) = result;
      return result;
    }

    __int64 __fastcall LogicSwapSpellsCommand::execute(__int64 a1, UnlockAccountPopup *a2, unsigned int a3, int a4)
    {
      #1146 *Home; // x0
      #1146 *v9; // x21
      int v10; // w8
      AcceptChallengeMessage *SelectedDeck; // x23
      GameInputField *SpellCollection; // x21
      __int64 v14; // x25
      int v15; // w8
      const char *v16; // x1
      __int64 Spell; // x0
      TextField *v18; // x24
      TextField *v19; // x25
      int v20; // w26
      int v21; // w28
      int v22; // w8
      #1147 *TutorialManager; // x27
      __int64 CurrentTutorial; // x0
      __int64 GameListener; // x0
      __int64 v26; // x0
      __int64 SpellData; // x26
      __int64 v28; // x0
      const char *v29; // x1
      __int64 v30; // x0
      __int64 v31; // x0
      int v32; // w8
      bool v33; // zf
      int v34; // w28
      TextField *v35; // x26
      __int64 v36; // x19
      void (__fastcall *v37)(__int64, String *); // x20
      __int64 v38; // x0
      __int64 v39; // x0
      __int64 v40; // x0
      __int64 v41; // x0
      __int64 v42; // x0
      int v43; // [xsp+4h] [xbp-9Ch]
      LogicMusicData *v44; // [xsp+8h] [xbp-98h]
      String v45; // [xsp+10h] [xbp-90h] BYREF
      unsigned __int8 v46; // [xsp+2Eh] [xbp-72h]
      unsigned __int8 v47; // [xsp+2Fh] [xbp-71h]
      int v48[2]; // [xsp+30h] [xbp-70h]
      __int128 v49; // [xsp+38h] [xbp-68h]
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      v9 = Home;
      if ( !Home )
        return 2;
      v10 = *(_DWORD *)(a1 + 28);
      if ( *(unsigned __int8 *)(a1 + 36) == *(unsigned __int8 *)(a1 + 37) && v10 == *(_DWORD *)(a1 + 32) )
        return 100;
      if ( v10 < 0 && (*(_DWORD *)(a1 + 32) & 0x80000000) != 0 )
        return 101;
      v49 = 0u;
      SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
      if ( !SelectedDeck )
        return 94;
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(v9);
      if ( !SpellCollection )
        return 95;
      v14 = 0;
      v46 = 0;
      v47 = 0;
      *(_QWORD *)v48 = -1;
      do
      {
        v15 = *(unsigned __int8 *)(a1 + v14 + 36);
        *(&v46 + v14) = v15;
        v16 = (const char *)*(unsigned int *)(a1 + 4 * v14 + 28);
        v48[v14] = (int)v16;
        if ( v15 )
        {
          if ( (unsigned int)v16 >= 8 )
            return (unsigned int)(v14 + 102);
          Spell = LogicSpellDeck::getSpell(SelectedDeck, v16);
        }
        else
        {
          if ( ((unsigned int)v16 & 0x80000000) != 0 || (int)v16 >= *((_DWORD *)SpellCollection + 3) )
            return (unsigned int)(v14 + 200);
          Spell = LogicSpellCollection::getSpell(SpellCollection, (int)v16);
        }
        *((_QWORD *)&v49 + v14++) = Spell;
      }
      while ( v14 < 2 );
      v18 = (TextField *)*((_QWORD *)&v49 + 1);
      v19 = (TextField *)v49;
      if ( v49 == 0 )
        return 300;
      if ( (_QWORD)v49 )
      {
        v20 = v46;
        v21 = v47;
      }
      else
      {
        v49 = *((unsigned __int64 *)&v49 + 1);
        v21 = v46;
        v20 = v47;
        v46 = v47;
        v47 = v21;
        v22 = v48[0];
        v48[0] = v48[1];
        v48[1] = v22;
        v19 = v18;
        v18 = 0;
      }
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(a2);
      CurrentTutorial = LogicTutorialManager::getCurrentTutorial(TutorialManager);
      if ( v20 && v21 )
      {
        if ( ((a3 >> 1) & 1) != 0 )
        {
          LogicSpellDeck::setSpell((__int64)SelectedDeck, v48[0], (__int64)v18);
          LogicSpellDeck::setSpell((__int64)SelectedDeck, v48[1], (__int64)v19);
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, TextField *, __int64))(*(_QWORD *)GameListener + 248LL))(GameListener, v19, 1);
          if ( v18 )
          {
            v26 = LogicGameMode::getGameListener(a2);
            (*(void (__fastcall **)(__int64, TextField *, __int64))(*(_QWORD *)v26 + 248LL))(v26, v18, 1);
          }
          return 0;
        }
        return 0;
      }
      if ( !(v21 | v20) )
      {
        if ( ((a3 >> 1) & 1) != 0 )
        {
          LogicSpellCollection::setSpell(SpellCollection, v48[0], v18);
          LogicSpellCollection::setSpell(SpellCollection, v48[1], v19);
          v30 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, TextField *, _QWORD))(*(_QWORD *)v30 + 248LL))(v30, v19, 0);
          v31 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, TextField *, _QWORD))(*(_QWORD *)v31 + 248LL))(v31, v18, 0);
        }
        return 0;
      }
      if ( v18 )
      {
        v44 = (LogicMusicData *)CurrentTutorial;
        if ( *((_DWORD *)v19 + 2) == *((_DWORD *)v18 + 2) )
        {
          SpellData = LogicSpell::getSpellData(v19);
          v28 = LogicSpell::getSpellData(v18);
          if ( (unsigned int)LogicData::equals(SpellData, v28) )
          {
            Debugger::warning((__siginfo *)"Game should show spell upgrade popup", v29);
            return 500;
          }
        }
      }
      else
      {
        v44 = (LogicMusicData *)CurrentTutorial;
        if ( v20 && !v21 )
          return 400;
      }
      v32 = v48[0];
      v33 = v21 == 0;
      if ( v21 )
        v34 = v48[1];
      else
        v34 = v48[0];
      if ( v33 )
        v32 = v48[1];
      v43 = v32;
      if ( v33 )
        v35 = v19;
      else
        v35 = v18;
      if ( !v33 )
        v18 = v19;
      if ( (unsigned int)LogicSpellDeck::canBeInserted(SelectedDeck, v18, v34) )
      {
        if ( ((a3 >> 1) & 1) != 0 )
        {
          LogicSpellDeck::setSpell((__int64)SelectedDeck, v34, (__int64)v18);
          v38 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, TextField *, __int64))(*(_QWORD *)v38 + 248LL))(v38, v18, 1);
          if ( v35 )
          {
            LogicSpellCollection::setSpell(SpellCollection, v43, v35);
            v39 = LogicGameMode::getGameListener(a2);
            (*(void (__fastcall **)(__int64, TextField *, _QWORD))(*(_QWORD *)v39 + 248LL))(v39, v35, 0);
          }
          else
          {
            LogicSpellCollection::removeSpell(SpellCollection, v43);
            if ( v44 && (unsigned int)LogicTutorialData::getFinishRequirement(v44) == 110 )
              LogicTutorialManager::setCurrentTutorialCompleted(TutorialManager);
            v40 = LogicGameMode::getGameListener(a2);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 80LL))(v40);
          }
          v41 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 80LL))(v41);
          v42 = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 88LL))(v42);
          return 0;
        }
        return 0;
      }
      if ( a4 )
      {
        v36 = LogicGameMode::getGameListener(a2);
        v37 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v36 + 176LL);
        String::String(&v45, "TID_TOO_MANY_SAME_SPELLS_IN_DECK");
        v37(v36, &v45);
        String::~String(&v45);
      }
      return 10;
    }

    __int64 __fastcall LogicSwapSpellsCommand::setSpells(__int64 result, int a2, char a3, int a4, char a5)
    {
      *(_DWORD *)(result + 28) = a2;
      *(_BYTE *)(result + 36) = a3;
      *(_DWORD *)(result + 32) = a4;
      *(_BYTE *)(result + 37) = a5;
      return result;
    }

    _QWORD *__fastcall LogicSwapSpellsCommand::~LogicSwapSpellsCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicSwapSpellsCommand::~LogicSwapSpellsCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicSwapSpellsCommand
