class TauntSelector::TauntButton
{
public:

    __int64 __fastcall TauntSelector::TauntButton::sendTaunt(int *a1)
    {
      LogicChest *Instance; // x0
      UnlockAccountPopup *LogicGame; // x0
      const char *Tick; // x21
      LogicBattleEvent *v5; // x19
      VisitHomeMessage *v6; // x0
      const #1236 *AccountId; // x0
      LogicTutorialManager *v8; // x0
      LogicTutorialManager *v9; // x0
    
      Instance = (LogicChest *)BattleScreen::getInstance((LogicTutorialManager *)a1);
      LogicGame = (UnlockAccountPopup *)GameScreen::getLogicGame(Instance);
      Tick = (const char *)LogicGameMode::getTick(LogicGame);
      v5 = (LogicBattleEvent *)operator new(48);
      v6 = (VisitHomeMessage *)GameMode::getInstance();
      AccountId = (const #1236 *)GameMode::getAccountId(v6);
      LogicBattleEvent::LogicBattleEvent(v5, AccountId);
      LogicBattleEvent::setType((__int64)v5, 3);
      LogicBattleEvent::setParam(v5, 0, a1[68]);
      v8 = (LogicTutorialManager *)LogicBattleEvent::setTick(v5, Tick);
      v9 = (LogicTutorialManager *)BattleScreen::getInstance(v8);
      return BattleScreen::sendBattleEvent(v9, v5, 1);
    }

    __int64 __fastcall TauntSelector::TauntButton::TauntButton(__int64 a1, #1257 *a2, __int64 a3)
    {
      const char *v6; // x2
      Debugger *v7; // x0
      long double v8; // q0
      ChallengeDoneStreamEntry *TauntData; // x21
      #1308 *TID; // x0
      const String *v11; // x1
      #1308 *String; // x22
      #1395 *TextFieldByName; // x0
      const String *v14; // x2
      DataIcon *v15; // x22
      const String *FileName; // x23
      const String *IconExportName; // x0
      String v19; // [xsp+8h] [xbp-48h] BYREF
    
      GameButton::GameButton((GameButton *)a1);
      *(_QWORD *)a1 = off_10046EB80;
      *(_DWORD *)(a1 + 272) = -1;
      *(_QWORD *)(a1 + 264) = 0;
      if ( (a3 & 0x80000000) != 0 )
        v7 = 0;
      else
        v7 = (Debugger *)((int)LogicDataTables::getTauntCount() > (int)a3);
      *(__n128 *)&v8 = Debugger::doAssert(v7, (bool)"", v6);
      (*(void (__fastcall **)(__int64, #1257 *, __int64, long double))(*(_QWORD *)a1 + 280LL))(a1, a2, 1, v8);
      *(_DWORD *)(a1 + 272) = a3;
      TauntData = (ChallengeDoneStreamEntry *)LogicDataTables::getTauntData(a3);
      if ( MovieClip::getTextFieldByName(a2, "txt") )
      {
        TID = (#1308 *)LogicData::getTID((__int64)TauntData);
        String = StringTable::getString(TID, v11);
        TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(a2, "txt");
        MovieClipHelper::setTextVerticallyCentered(TextFieldByName, (const String *)String, v14);
      }
      if ( *(int *)LogicTauntData::getExportName(TauntData) >= 1 )
      {
        v15 = (DataIcon *)operator new(112);
        FileName = (const String *)LogicTauntData::getFileName(TauntData);
        IconExportName = (const String *)LogicData::getIconExportName((__int64)TauntData);
        DataIcon::DataIcon(v15, FileName, IconExportName);
        *(_QWORD *)(a1 + 264) = v15;
        String::String(&v19, "image");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v15,
          a2,
          &v19,
          0,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          1,
          0,
          1,
          1);
        String::~String();
        (*(void (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, *(_QWORD *)(a1 + 264));
      }
      return a1;
    }

    void __fastcall TauntSelector::TauntButton::~TauntButton(#1372 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10046EB80;
      v2 = *((_QWORD *)this + 33);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_DWORD *)this + 68) = -1;
      *((_QWORD *)this + 33) = 0;
      GameButton::~GameButton(this);
    }

    // attributes: thunk
    void __fastcall TauntSelector::TauntButton::~TauntButton(#1372 *this)
    {
      __ZN13TauntSelector11TauntButtonD2Ev(this);
    }

    void __fastcall TauntSelector::TauntButton::~TauntButton(#1372 *this)
    {
      TauntSelector::TauntButton::~TauntButton(this);
      operator delete(this);
    }

}; // end class TauntSelector::TauntButton
