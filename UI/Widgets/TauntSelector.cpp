class TauntSelector
{
public:

    __int64 __fastcall TauntSelector::TauntSelector(__int64 a1)
    {
      #1257 *MovieClip; // x22
      int TauntCount; // w23
      __int64 v4; // x24
      ChallengeDoneStreamEntry *TauntData; // x26
      const String *v6; // x0
      const char *v7; // x1
      MovieClip *v8; // x27
      TauntSelector::TauntButton *v9; // x26
      long double v10; // q0
      int v11; // w26
      const String *BtnExportName; // x0
      MovieClip *MovieClipByName; // x27
      TauntSelector::TauntButton *v14; // x26
      long double v15; // q0
      TauntSelector::TauntButton *v17; // [xsp+0h] [xbp-C0h] BYREF
      String v18; // [xsp+8h] [xbp-B8h] BYREF
      TauntSelector::TauntButton *v19; // [xsp+20h] [xbp-A0h] BYREF
      String v20; // [xsp+28h] [xbp-98h] BYREF
      String v21; // [xsp+40h] [xbp-80h] BYREF
      String v22; // [xsp+58h] [xbp-68h] BYREF
    
      String::String(&v22, "sc/ui_stickers.sc");
      String::String(&v21, "taunt_selector_new");
      DropGUIContainer::DropGUIContainer((#1375 *)a1, &v22, &v21);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046EA08;
      *(_QWORD *)(a1 + 96) = &off_10046EB60;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      *(_BYTE *)(a1 + 64) = 1;
      *(_DWORD *)(a1 + 216) = 0;
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      TauntCount = LogicDataTables::getTauntCount();
      if ( TauntCount >= 1 )
      {
        v4 = 0;
        while ( 1 )
        {
          TauntData = (ChallengeDoneStreamEntry *)LogicDataTables::getTauntData(v4);
          if ( (unsigned int)LogicTauntData::isInTauntMenu(TauntData) )
            break;
    LABEL_11:
          v4 = (unsigned int)(v4 + 1);
          if ( (int)v4 >= TauntCount )
            goto LABEL_12;
        }
        if ( *(int *)LogicTauntData::getExportName(TauntData) < 1 )
        {
          BtnExportName = (const String *)LogicTauntData::getBtnExportName(TauntData);
          String::String(&v18, BtnExportName);
          MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, &v18);
          if ( MovieClipByName )
          {
            v14 = (TauntSelector::TauntButton *)operator new(280);
            TauntSelector::TauntButton::TauntButton(v14, MovieClipByName, v4);
            v17 = v14;
            *(__n128 *)&v15 = CustomButton::setButtonListener(v14, a1 + 96);
            LogicArrayList<TauntSelector::TauntButton *>::add(a1 + 200, &v17, v15);
            (*(void (__fastcall **)(#1257 *, TauntSelector::TauntButton *))(*(_QWORD *)MovieClip + 160LL))(MovieClip, v14);
            v11 = 0;
            goto LABEL_10;
          }
        }
        else
        {
          v6 = (const String *)LogicTauntData::getBtnExportName(TauntData);
          String::String(&v20, v6);
          v8 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, &v20);
          if ( v8 )
          {
            v9 = (TauntSelector::TauntButton *)operator new(280);
            TauntSelector::TauntButton::TauntButton(v9, v8, v4);
            v19 = v9;
            *(__n128 *)&v10 = CustomButton::setButtonListener(v9, a1 + 96);
            LogicArrayList<TauntSelector::TauntButton *>::add(a1 + 200, &v19, v10);
            (*(void (__fastcall **)(#1257 *, TauntSelector::TauntButton *))(*(_QWORD *)MovieClip + 160LL))(MovieClip, v9);
            v11 = 0;
            goto LABEL_10;
          }
        }
        Debugger::warning((__siginfo *)"Not enough movie clips for all taunts!", v7);
        v11 = 2;
    LABEL_10:
        String::~String();
        if ( v11 )
          goto LABEL_12;
        goto LABEL_11;
      }
    LABEL_12:
      TauntSelector::setPanelVisible((BattleStartHUD *)a1, 0);
      return a1;
    }

    __int64 __fastcall TauntSelector::setPanelVisible(BattleStartHUD *this, char a2)
    {
      #1257 *MovieClip; // x0
      __int64 result; // x0
    
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      result = MovieClip::getMovieClipByName(MovieClip, "panel");
      if ( result )
        *(_BYTE *)(result + 8) = a2;
      return result;
    }

    // attributes: thunk
    void __fastcall TauntSelector::TauntSelector(TauntSelector *this)
    {
      __ZN13TauntSelectorC2Ev((__int64)this);
    }

    void __fastcall TauntSelector::~TauntSelector(BattleStartHUD *this)
    {
      _QWORD *v2; // x20
      int v3; // w8
      __int64 i; // x21
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)this = off_10046EA08;
      *((_QWORD *)this + 12) = &off_10046EB60;
      v2 = (_QWORD *)((char *)this + 200);
      v3 = *((_DWORD *)this + 53);
      if ( v3 >= 1 )
      {
        for ( i = 0; i < v3; ++i )
        {
          v5 = *(_QWORD *)(*v2 + 8 * i);
          if ( v5 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            v3 = *((_DWORD *)this + 53);
          }
        }
      }
      *((_DWORD *)this + 53) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_DWORD *)this + 54) = 0;
      v6 = *((_QWORD *)this + 25);
      if ( v6 )
        operator delete[](v6);
      *v2 = 0;
      v2[1] = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall TauntSelector::~TauntSelector(BattleStartHUD *this)
    {
      __ZN13TauntSelectorD2Ev(this);
    }

    void __fastcall TauntSelector::~TauntSelector(BattleStartHUD *this)
    {
      TauntSelector::~TauntSelector(this);
      operator delete(this);
    }

    __int64 __fastcall TauntSelector::touchReleased(LogicTutorialManager *a1, __int64 a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 CombatHUD; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      CombatHUD = BattleScreen::getCombatHUD(Instance);
      CombatHUD::showTauntSelector(CombatHUD, 0);
      return Sprite::touchReleased(a1, a2);
    }

    int *__fastcall TauntSelector::buttonClicked(int *result, int *a2)
    {
      int *v2; // x19
      __int64 v3; // x8
      __int64 v4; // x9
      LogicTutorialManager *v6; // x0
      LogicTutorialManager *Instance; // x0
      __int64 CombatHUD; // x0
    
      v2 = result;
      v3 = result[53];
      v4 = 8LL * ((int)v3 - 1);
      while ( v3-- >= 1 )
      {
        result = *(int **)(*((_QWORD *)v2 + 25) + v4);
        v4 -= 8;
        if ( result == a2 )
        {
          v6 = (LogicTutorialManager *)TauntSelector::TauntButton::sendTaunt((TauntSelector::TauntButton *)result);
          v2[54] = 1065353216;
          Instance = (LogicTutorialManager *)BattleScreen::getInstance(v6);
          CombatHUD = BattleScreen::getCombatHUD(Instance);
          return (int *)CombatHUD::showTauntSelector(CombatHUD, 0);
        }
      }
      return result;
    }

    float __fastcall TauntSelector::update(BattleStartHUD *this, float a2)
    {
      float result; // s0
    
      result = *((float *)this + 54) - a2;
      *((float *)this + 54) = result;
      return result;
    }

}; // end class TauntSelector
