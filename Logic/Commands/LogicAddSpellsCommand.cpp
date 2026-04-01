class LogicAddSpellsCommand
{
public:

    void __fastcall LogicAddSpellsCommand::LogicAddSpellsCommand(LogicAddSpellsCommand *this)
    {
      _QWORD *v2; // x0
    
      LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)this = &off_100464D50;
      *((_QWORD *)this + 4) = 0;
      v2 = (_QWORD *)operator new(16);
      *v2 = 0;
      v2[1] = 0;
      *((_QWORD *)this + 4) = v2;
    }

    // attributes: thunk
    void __fastcall LogicAddSpellsCommand::LogicAddSpellsCommand(LogicAddSpellsCommand *this)
    {
      __ZN21LogicAddSpellsCommandC2Ev(this);
    }

    void __fastcall LogicAddSpellsCommand::destruct(HelpshiftManager *this)
    {
      _QWORD *v2; // x20
    
      LogicServerCommand::destruct(this);
      v2 = (_QWORD *)*((_QWORD *)this + 4);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 4) = 0;
    }

    __int64 __fastcall LogicAddSpellsCommand::execute(HelpshiftManager *this, UnlockAccountPopup *a2)
    {
      #1146 *Home; // x0
      GameInputField *SpellCollection; // x0
      GameInputField *v6; // x21
      __int64 v7; // x8
      int v8; // w23
      TextField *v9; // x22
      __int64 v10; // x25
      TextField *v11; // x22
      __int64 GameListener; // x19
      void (__fastcall *v13)(__int64, String *); // x20
      String v15; // [xsp+8h] [xbp-58h] BYREF
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      SpellCollection = (GameInputField *)LogicClientHome::getSpellCollection(Home);
      v6 = SpellCollection;
      v7 = *((_QWORD *)this + 4);
      v8 = *(_DWORD *)(v7 + 12);
      if ( v8 >= 1 )
      {
        v9 = **(TextField ***)v7;
        LogicSpellCollection::addSpell(SpellCollection, v9);
        LogicSpell::setShowNewIcon((__int64)v9, 1);
        if ( v8 != 1 )
        {
          v10 = 1;
          do
          {
            v11 = *(TextField **)(**((_QWORD **)this + 4) + 8 * v10);
            LogicSpellCollection::addSpell(v6, v11);
            LogicSpell::setShowNewIcon((__int64)v11, 1);
            ++v10;
          }
          while ( v8 != (_DWORD)v10 );
        }
        if ( ((v8 - 1) & 0x80000000) == 0 )
        {
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 80LL))(GameListener);
          v13 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)GameListener + 176LL);
          String::String(&v15, "TID_CO_OPEN_SPELLS_RECEIVED");
          v13(GameListener, &v15);
          String::~String(&v15);
        }
      }
      return 0;
    }

    __int64 __fastcall LogicAddSpellsCommand::getCommandType(HelpshiftManager *this)
    {
      return 216;
    }

    __int64 __fastcall LogicAddSpellsCommand::encode(HelpshiftManager *this, #1226 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
    
      v4 = *(unsigned int *)(*((_QWORD *)this + 4) + 12LL);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v4);
      if ( (int)v4 >= 1 )
      {
        v5 = 0;
        do
          LogicSpell::encode(*(AreaEffectObject ***)(**((_QWORD **)this + 4) + 8 * v5++), a2);
        while ( (_DWORD)v4 != (_DWORD)v5 );
      }
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicAddSpellsCommand::decode(HelpshiftManager *this, #1225 *a2)
    {
      int v4; // w21
      int v5; // w23
      LogicSpell *v6; // x22
      int v7; // w2
      LogicSpell *v9; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v4 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(v6);
          v9 = v6;
          LogicSpell::decode(v6, a2, v7);
          LogicArrayList<LogicSpell *>::add(*((_QWORD *)this + 4), (__int64 *)&v9);
          ++v5;
        }
        while ( v5 < v4 );
      }
      return LogicServerCommand::decode(this, a2);
    }

    void __fastcall LogicAddSpellsCommand::~LogicAddSpellsCommand(HelpshiftManager *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicAddSpellsCommand::~LogicAddSpellsCommand(HelpshiftManager *this)
    {
      operator delete(this);
    }

}; // end class LogicAddSpellsCommand
