class LogicAllianceUnitReceivedCommand
{
public:

    void __fastcall LogicAllianceUnitReceivedCommand::LogicAllianceUnitReceivedCommand(
            LogicAllianceUnitReceivedCommand *this)
    {
      LogicServerCommand *v1; // x0
    
      v1 = LogicServerCommand::LogicServerCommand(this);
      *(_QWORD *)v1 = &off_10045FFB8;
      *((_QWORD *)v1 + 4) = 0;
      *((_QWORD *)v1 + 5) = 0;
    }

    void __fastcall LogicAllianceUnitReceivedCommand::destruct(String **this)
    {
      _QWORD *v2; // x19
      String *v3; // x20
      String *v4; // t1
    
      LogicServerCommand::destruct((LogicServerCommand *)this);
      v4 = *(this + 4);
      v2 = this + 4;
      v3 = v4;
      if ( v4 )
      {
        String::~String(v3);
        operator delete(v3);
      }
      *v2 = 0;
      v2[1] = 0;
    }

    __int64 __fastcall LogicAllianceUnitReceivedCommand::getCommandType(LogicDataTables *this)
    {
      return 211;
    }

    __int64 __fastcall LogicAllianceUnitReceivedCommand::encode(LogicDataTables *this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      ByteStreamHelper::writeDataReference((int)a2, *((#916 **)this + 5));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicAllianceUnitReceivedCommand::decode(LogicDataTables *this, #1225 *a2)
    {
      int v4; // w2
    
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 5) = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, v4);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicAllianceUnitReceivedCommand::execute(LogicDataTables *this, #1028 *a2)
    {
      __int64 Home; // x0
      #1146 *v5; // x21
      TextField *SpellByData; // x0
      TextField *v7; // x22
      void (*v8)(void); // x8
      TextField *v10; // x22
      LogicTimeUtil *v11; // x0
      int MinutesSince1970; // w0
      #927 *SpellCollection; // x0
      __int64 GameListener; // x0
    
      Home = LogicGameMode::getHome(a2);
      v5 = (#1146 *)Home;
      if ( !Home )
        return 1;
      SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, *((_QWORD *)this + 5));
      v7 = SpellByData;
      if ( !SpellByData )
      {
        v10 = (TextField *)operator new(48);
        LogicSpell::LogicSpell(v10);
        v11 = (LogicTimeUtil *)LogicSpell::setSpellData(v10, *((_QWORD *)this + 5));
        MinutesSince1970 = LogicTimeUtil::getMinutesSince1970(v11);
        *((_DWORD *)v10 + 2) = 0;
        *((_DWORD *)v10 + 3) = MinutesSince1970;
        SpellCollection = (#927 *)LogicClientHome::getSpellCollection(v5);
        LogicSpellCollection::addSpell(SpellCollection, v10);
        v8 = *(void (**)(void))(*(_QWORD *)LogicGameMode::getGameListener(a2) + 80LL);
        goto LABEL_7;
      }
      LogicSpell::addMaterial(SpellByData, 1);
      if ( LogicSpell::getListener(v7) )
      {
        v8 = *(void (**)(void))(*(_QWORD *)LogicSpell::getListener(v7) + 64LL);
    LABEL_7:
        v8();
      }
      GameListener = LogicGameMode::getGameListener(a2);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)GameListener + 304LL))(
        GameListener,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5));
      return 0;
    }

    __int64 __fastcall LogicAllianceUnitReceivedCommand::serverCanRunIfNotConnected(LogicDataTables *this)
    {
      return 1;
    }

    void __fastcall LogicAllianceUnitReceivedCommand::~LogicAllianceUnitReceivedCommand(LogicDataTables *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicAllianceUnitReceivedCommand::~LogicAllianceUnitReceivedCommand(LogicDataTables *this)
    {
      operator delete(this);
    }

}; // end class LogicAllianceUnitReceivedCommand
