class TutorialPopup
{
public:

    void __fastcall TutorialPopup::TutorialPopup(TutorialPopup *this, const LogicMusicData *a2)
    {
      const String *FileName; // x20
      const String *PopupExportName; // x0
      __int64 MovieClip; // x0
      int FrameIndex; // w23
      __int64 v8; // x0
      int v9; // w24
      MovieClip *v10; // x0
      #1375 *v11; // x23
      const String *v12; // x24
      const String *BubbleExportName; // x0
      #1308 *ButtonTID; // x22
      __int64 v15; // x23
      void (__fastcall *v16)(__int64, #1308 *, _QWORD); // x24
      const String *v17; // x1
      #1308 *String; // x0
      #1257 *v19; // x0
      __int64 v20; // x0
      MovieClip *v21; // x21
      const char *v22; // x1
      const String *v23; // x0
      #1257 *v24; // x0
      #1257 *v25; // x0
      MovieClip *MovieClipByName; // x21
      const char *v27; // x1
      MovieClip *v28; // x21
      void *v29; // x22
      LogicDataTables *v30; // x0
      __int64 Globals; // x0
      const char *v32; // x1
      #1257 *v33; // x0
      const char *v34; // x2
      #1249 *v35; // x21
      #1257 *v36; // x0
      #1014 *v37; // x22
      Stage *v38; // x0
      Stage *Instance; // x0
      int v40; // w23
      int v41; // w24
      OutOfSyncMessage *v42; // x21
      Rect *v43; // x22
      int v44; // [xsp+8h] [xbp-98h] BYREF
      int v45; // [xsp+Ch] [xbp-94h] BYREF
      String v46; // [xsp+10h] [xbp-90h] BYREF
      String v47; // [xsp+28h] [xbp-78h] BYREF
      String v48; // [xsp+40h] [xbp-60h] BYREF
      String v49; // [xsp+58h] [xbp-48h] BYREF
    
      FileName = (const String *)LogicTutorialData::getFileName(a2);
      PopupExportName = (const String *)LogicTutorialData::getPopupExportName(a2);
      PopupBase::PopupBase(this, FileName, PopupExportName);
      *(_QWORD *)this = off_100463710;
      *((_QWORD *)this + 12) = &off_1004638E8;
      *((_BYTE *)this + 256) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 70) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 29) = a2;
      MovieClip = GUIContainer::getMovieClip(this);
      FrameIndex = MovieClip::getFrameIndex(MovieClip, "appear_start");
      v8 = GUIContainer::getMovieClip(this);
      v9 = MovieClip::getFrameIndex(v8, "appear_end");
      v10 = (MovieClip *)GUIContainer::getMovieClip(this);
      if ( FrameIndex < 0 )
        MovieClip::playOnceRecursive(v10);
      else
        MovieClip::gotoAndPlayFrameIndex(v10, FrameIndex, v9);
      if ( *(_DWORD *)LogicTutorialData::getBubbleExportName(a2) )
      {
        v11 = (#1375 *)operator new(192);
        v12 = (const String *)LogicTutorialData::getFileName(a2);
        BubbleExportName = (const String *)LogicTutorialData::getBubbleExportName(a2);
        DropGUIContainer::DropGUIContainer(v11, v12, BubbleExportName);
        *((_QWORD *)this + 34) = v11;
        (*(void (__fastcall **)(TutorialPopup *, #1375 *))(*(_QWORD *)this + 160LL))(this, v11);
        TutorialPopup::initBubbleText(this);
        ButtonTID = (#1308 *)LogicTutorialData::getButtonTID(a2);
        if ( *(_DWORD *)ButtonTID )
        {
          v15 = DropGUIContainer::addGameButton(*((DropGUIContainer **)this + 34), "button", 1);
          *((_QWORD *)this + 30) = v15;
          v16 = *(void (__fastcall **)(__int64, #1308 *, _QWORD))(*(_QWORD *)v15 + 352LL);
          String = StringTable::getString(ButtonTID, v17);
          v16(v15, String, 0);
          CustomButton::setButtonListener(*((_QWORD *)this + 30), (char *)this + 96);
          GameButton::setIdleNotice(*((GameButton **)this + 30), 1);
        }
        else
        {
          v37 = (#1014 *)operator new(264);
          GameButton::GameButton(v37);
          *((_QWORD *)this + 31) = v37;
          v38 = (Stage *)CustomButton::setButtonListener(v37, (char *)this + 96);
          *(_BYTE *)(*((_QWORD *)this + 31) + 64LL) = 1;
          Instance = (Stage *)Stage::getInstance(v38);
          v40 = *((_DWORD *)Instance + 107);
          v41 = *(_DWORD *)(Stage::getInstance(Instance) + 432LL);
          v42 = (OutOfSyncMessage *)*((_QWORD *)this + 31);
          v43 = (Rect *)operator new(16);
          Rect::Rect(v43, 0.0, -(float)v41, (float)v40, 0.0);
          Sprite::setHitArea(v42, (#1261 *)v43);
          (*(void (__fastcall **)(TutorialPopup *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 31));
        }
      }
      else if ( (unsigned int)LogicTutorialData::isNPCMode(a2) )
      {
        v19 = (#1257 *)GUIContainer::getMovieClip(this);
        if ( MovieClip::getMovieClipByName(v19, "ok_button") )
        {
          v20 = DropGUIContainer::addGameButton(this, "ok_button", 1);
          *((_QWORD *)this + 30) = v20;
          v21 = *(MovieClip **)(v20 + 96);
          v23 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_BEGIN", v22);
          MovieClip::setText(v21, "txt", v23);
        }
        v24 = (#1257 *)GUIContainer::getMovieClip(this);
        if ( MovieClip::getMovieClipByName(v24, "card_01") )
          TutorialPopup::addDeckSpells(this);
        v25 = (#1257 *)GUIContainer::getMovieClip(this);
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v25, "bar");
        if ( MovieClipByName )
        {
          String::String(&v49, "7");
          MovieClip::setText(MovieClipByName, "txt", &v49);
          String::~String(&v49);
          v28 = (MovieClip *)MovieClip::getMovieClipByName(MovieClipByName, "TID_MAX_ELIXIR");
          if ( v28 )
          {
            v29 = StringTable::getString((#1308 *)"TID_MAX_ELIXIR", v27);
            v30 = (LogicDataTables *)String::String(&v47, "<MAX_MANA>");
            Globals = LogicDataTables::getGlobals(v30);
            String::format((String *)"%d", v32, *(unsigned int *)(Globals + 148));
            String::replace(&v48, v29, &v47, &v46);
            MovieClip::setText(v28, "TID_MAX_ELIXIR", &v48);
            String::~String(&v48);
            String::~String(&v46);
            String::~String(&v47);
          }
        }
        v33 = (#1257 *)GUIContainer::getMovieClip(this);
        v35 = (#1249 *)MovieClip::getMovieClipByName(v33, "panel");
        if ( v35 )
        {
          *((_QWORD *)this + 33) = ResourceManager::getMovieClip((ResourceManager *)"sc/ui_panels.sc", "panel_ingame", v34);
          v36 = (#1257 *)GUIContainer::getMovieClip(this);
          MovieClip::changeTimelineChild(v36, v35, *((#1249 **)this + 33));
          MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 33), 0);
        }
        LogicArrayList<int>::ensureCapacity((__int64)this + 304, 2);
        v45 = 10;
        LogicArrayList<int>::add((__int64)this + 304, &v45);
        v44 = 24;
        LogicArrayList<int>::add((__int64)this + 304, &v44);
      }
    }

    __n128 __fastcall TutorialPopup::initBubbleText(AllianceStreamEntryRemovedMessage *this)
    {
      int v2; // w20
      __n128 result; // q0
      #1257 *MovieClip; // x0
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x20
      #1308 *BubbleTID; // x0
      const String *v8; // x1
      #1308 *String; // x0
      #1271 *v10; // x1
      MovieClip *v11; // x0
    
      v2 = *((_DWORD *)this + 70);
      if ( v2 < (int)LogicTutorialData::getBubbleTIDCount(*((_QWORD *)this + 29)) )
      {
        MovieClip = (#1257 *)GUIContainer::getMovieClip(*((#1254 **)this + 34));
        MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "bubble");
        if ( MovieClipByName )
        {
          TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "txt");
          BubbleTID = (#1308 *)LogicTutorialData::getBubbleTID(*((_QWORD *)this + 29), *((unsigned int *)this + 70));
          String = StringTable::getString(BubbleTID, v8);
          TextField::setText(TextFieldByName, (const String *)String);
          MovieClipHelper::setTextFieldVerticallyCentered(TextFieldByName, v10);
          ++*((_DWORD *)this + 70);
          v11 = (MovieClip *)GUIContainer::getMovieClip(*((#1254 **)this + 34));
          return MovieClip::gotoAndPlay(v11, "appear_start", "appear_end");
        }
      }
      return result;
    }

    void __fastcall TutorialPopup::addDeckSpells(vm_address_t *this)
    {
      vm_address_t *Instance; // x0
      UnbindFacebookAccountMessage *v3; // x20
      VisitHomeMessage *v4; // x0
      int *AccountId; // x0
      unsigned int AccountIndex; // w0
      const char *v7; // x2
      __int64 LeaderByIndex; // x20
      __int64 v9; // x22
      TextField *Spell; // x25
      #1257 *MovieClip; // x24
      const char *v12; // x1
      #1249 *MovieClipByName; // x24
      __int64 v14; // x26
      __int64 v15; // x25
      #1257 *v16; // x0
      __int64 v17; // [xsp+10h] [xbp-60h] BYREF
      String v18; // [xsp+18h] [xbp-58h] BYREF
    
      Instance = (vm_address_t *)GameMode::getInstance(this);
      v3 = *(UnbindFacebookAccountMessage **)(Instance[14] + 168);
      v4 = (VisitHomeMessage *)GameMode::getInstance(Instance);
      AccountId = (int *)GameMode::getAccountId(v4);
      AccountIndex = LogicBattle::getAccountIndex(v3, *AccountId, AccountId[1]);
      LeaderByIndex = LogicBattle::getLeaderByIndex(v3, AccountIndex, v7);
      LogicArrayList<LogicSpell *>::ensureCapacity((__int64)(this + 36), 4);
      v9 = 0;
      do
      {
        Spell = (TextField *)LogicSummoner::getSpell(LeaderByIndex, v9);
        MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
        v9 = (unsigned int)(v9 + 1);
        String::format((String *)"card_0%d", v12, v9);
        MovieClipByName = (#1249 *)MovieClip::getMovieClipByName(MovieClip, &v18);
        String::~String(&v18);
        if ( MovieClipByName )
        {
          v14 = LogicSpell::clone(Spell);
          v17 = v14;
          v15 = operator new(464);
          SpellItem::SpellItem(v15, v14, 0, 0);
          *(_BYTE *)(v15 + 64) = 0;
          LogicArrayList<LogicSpell *>::add((__int64)(this + 36), &v17);
          v16 = (#1257 *)GUIContainer::getMovieClip((#1254 *)this);
          MovieClip::changeTimelineChild(v16, MovieClipByName, (#1249 *)v15);
          (*(void (__fastcall **)(#1249 *))(*(_QWORD *)MovieClipByName + 8LL))(MovieClipByName);
        }
      }
      while ( (int)v9 < 4 );
    }

    // attributes: thunk
    void __fastcall TutorialPopup::TutorialPopup(TutorialPopup *this, const LogicMusicData *a2)
    {
      __ZN13TutorialPopupC2EPK17LogicTutorialData(this, a2);
    }

    void __fastcall TutorialPopup::~TutorialPopup(AllianceStreamEntryRemovedMessage *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      _QWORD *v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      void *v8; // x20
      __int64 v9; // x8
      __int64 v10; // x0
    
      *(_QWORD *)this = off_100463710;
      *((_QWORD *)this + 12) = &off_1004638E8;
      v2 = *((_QWORD *)this + 33);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 33) = 0;
      v3 = *((_QWORD *)this + 34);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 34) = 0;
      v4 = *((_QWORD *)this + 31);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 31) = 0;
      v5 = (_QWORD *)((char *)this + 288);
      v6 = *((int *)this + 75);
      if ( (int)v6 >= 1 )
      {
        v7 = v6 - 1;
        do
        {
          v8 = *(void **)(*v5 + 8 * v7);
          if ( v8 )
          {
            LogicSpell::destruct(*(TextField **)(*v5 + 8 * v7));
            operator delete(v8);
          }
          v9 = v7-- + 1;
        }
        while ( v9 > 1 );
      }
      *((_DWORD *)this + 75) = 0;
      *((_BYTE *)this + 256) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 70) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      v10 = *((_QWORD *)this + 38);
      if ( v10 )
        operator delete[](v10);
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      if ( *v5 )
        operator delete[](*v5);
      *v5 = 0;
      *((_QWORD *)this + 37) = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall TutorialPopup::~TutorialPopup(AllianceStreamEntryRemovedMessage *this)
    {
      __ZN13TutorialPopupD2Ev(this);
    }

    void __fastcall TutorialPopup::~TutorialPopup(AllianceStreamEntryRemovedMessage *this)
    {
      TutorialPopup::~TutorialPopup(this);
      operator delete(this);
    }

    void __fastcall TutorialPopup::buttonClicked(AllianceStreamEntryRemovedMessage *this, #1251 *a2)
    {
      int v4; // w21
      MovieClip *MovieClip; // x0
      const char *v6; // x1
    
      if ( *((#1251 **)this + 31) == a2 )
      {
        v4 = *((_DWORD *)this + 70);
        if ( v4 >= (int)LogicTutorialData::getBubbleTIDCount(*((_QWORD *)this + 29)) )
        {
          (*(void (__fastcall **)(AllianceStreamEntryRemovedMessage *))(*(_QWORD *)this + 352LL))(this);
        }
        else
        {
          MovieClip = (MovieClip *)GUIContainer::getMovieClip(*((#1254 **)this + 34));
          MovieClip::gotoAndPlay(MovieClip, "disappear_start", "disappear_end");
        }
      }
      if ( *((#1251 **)this + 30) == a2 )
      {
        if ( (unsigned int)LogicTutorialData::getFinishRequirement(*((LogicMusicData **)this + 29)) == 8 )
          (*(void (__fastcall **)(AllianceStreamEntryRemovedMessage *))(*(_QWORD *)this + 352LL))(this);
        if ( (unsigned int)LogicTutorialData::getFinishRequirement(*((LogicMusicData **)this + 29)) == 105 )
        {
          if ( LogicTutorialData::getLocationData(*((LogicMusicData **)this + 29)) )
            Debugger::error((__siginfo *)"tutorial: TODO!", v6);
        }
      }
    }

    __int64 __fastcall TutorialPopup::fadeOut(AllianceStreamEntryRemovedMessage *this)
    {
      MovieClip *MovieClip; // x0
      #1254 *v3; // x0
      MovieClip *v4; // x0
      GameMode *Instance; // x21
      __int64 v6; // x22
      #1132 *v7; // x0
      #1132 *v8; // x20
    
      if ( ((*(__int64 (__fastcall **)(AllianceStreamEntryRemovedMessage *))(*(_QWORD *)this + 360LL))(this) & 1) == 0 )
      {
        MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
        MovieClip::gotoAndPlay(MovieClip, "disappear_start", "disappear_end");
        v3 = (#1254 *)*((_QWORD *)this + 34);
        if ( v3 )
        {
          v4 = (MovieClip *)GUIContainer::getMovieClip(v3);
          MovieClip::gotoAndPlay(v4, "disappear_start", "disappear_end");
        }
        Instance = (GameMode *)GameMode::getInstance((vm_address_t *)v3);
        v6 = *(_QWORD *)(*((_QWORD *)Instance + 14) + 168LL);
        v7 = (#1132 *)operator new(32);
        v8 = v7;
        if ( v6 )
        {
          LogicCompleteTutorialBattleCommand::LogicCompleteTutorialBattleCommand(v7);
          LogicCompleteTutorialBattleCommand::setTutorialData(v8, *((const LogicMusicData **)this + 29));
        }
        else
        {
          LogicCompleteTutorialHomeCommand::LogicCompleteTutorialHomeCommand(v7);
          LogicCompleteTutorialHomeCommand::setTutorialData(v8, *((const LogicMusicData **)this + 29));
        }
        GameMode::addCommand(Instance, v8, 0);
      }
      return PopupBase::fadeOut(this);
    }

    __int64 __fastcall TutorialPopup::allowClosingFromModalTapping(AllianceStreamEntryRemovedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall TutorialPopup::useModal(LogicMusicData **this)
    {
      return LogicTutorialData::isPopupDarkening(*(this + 29));
    }

    __int64 __fastcall TutorialPopup::getTutorialData(AllianceStreamEntryRemovedMessage *this)
    {
      return *((_QWORD *)this + 29);
    }

    __int64 __fastcall TutorialPopup::update(AllianceStreamEntryRemovedMessage *this, float a2)
    {
      BadgePopup *Instance; // x0
      __int64 v5; // x20
      __int64 Sound; // x0
      #1254 *v7; // x0
      #1257 *MovieClip; // x0
      int CurrentFrame; // w20
      #1257 *v10; // x0
      #1257 *v11; // x0
      int v12; // w20
      __int64 v13; // x8
      __int64 v14; // x22
      const AreaEffectObject *v15; // x2
      __int64 SoundByName; // x24
      __int64 v17; // x8
      String v19; // [xsp+8h] [xbp-68h] BYREF
    
      Instance = (BadgePopup *)GUI::getInstance(this);
      if ( (unsigned int)GUI::needToHideTutorialPopup(Instance) )
      {
        *((_BYTE *)this + 8) = 0;
      }
      else
      {
        *((_BYTE *)this + 8) = 1;
        if ( !*((_BYTE *)this + 256) )
        {
          *((_BYTE *)this + 256) = 1;
          v5 = SoundManager::sm_pInstance;
          Sound = LogicTutorialData::getSound(*((_QWORD *)this + 29));
          SoundManager::playSound(v5, Sound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        v7 = (#1254 *)*((_QWORD *)this + 34);
        if ( v7 )
        {
          MovieClip = (#1257 *)GUIContainer::getMovieClip(v7);
          CurrentFrame = MovieClip::getCurrentFrame(MovieClip);
          v10 = (#1257 *)GUIContainer::getMovieClip(*((#1254 **)this + 34));
          if ( CurrentFrame == (unsigned int)MovieClip::getTotalFrames(v10) - 1 )
            TutorialPopup::initBubbleText(this);
        }
        v11 = (#1257 *)GUIContainer::getMovieClip(this);
        v12 = MovieClip::getCurrentFrame(v11);
        v13 = *((int *)this + 79);
        if ( (int)v13 >= 1 )
        {
          v14 = v13 - 1;
          do
          {
            if ( v12 >= *(_DWORD *)(*((_QWORD *)this + 38) + 4 * v14) )
            {
              String::String(&v19, "sound_text_bubble_appear");
              SoundByName = LogicDataTables::getSoundByName((#1004 *)&v19, 0, v15);
              String::~String(&v19);
              SoundManager::playSound(
                SoundManager::sm_pInstance,
                SoundByName,
                0xFFFFFFFFLL,
                1.0,
                COERCE_LONG_DOUBLE((unsigned __int128)0));
              LogicArrayList<int>::remove((__int64 *)this + 38, v14);
            }
            v17 = v14-- + 1;
          }
          while ( v17 > 1 );
        }
      }
      return PopupBase::update(this, a2);
    }

    __int64 __fastcall TutorialPopup::getPopupType(AllianceStreamEntryRemovedMessage *this)
    {
      return 7;
    }

    __int64 __fastcall TutorialPopup::isFadeOutEnabled(AllianceStreamEntryRemovedMessage *this)
    {
      return 1;
    }

}; // end class TutorialPopup
