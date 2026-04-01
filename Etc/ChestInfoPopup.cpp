class ChestInfoPopup
{
public:

    __int64 __fastcall ChestInfoPopup::ChestInfoPopup(__int64 a1, #1316 *a2)
    {
      const char *v4; // x2
      _BOOL8 v5; // x0
      const char *v6; // x2
      __int64 v7; // x0
      __int64 v8; // x0
      MovieClip *MovieClipByName; // x0
      #1257 *MovieClip; // x0
      MovieClip *v11; // x0
      LogicSpawnPointData *LogicChest; // x21
      const LogicRefreshAchievementsCommand *TreasureChestData; // x0
      ChestInfoPopup *updated; // x0
      ChestInfoPopup *TextFieldByName; // x0
      Stage *v16; // x0
      int v17; // s8
      #1257 *v18; // x0
      #1249 *v19; // x20
      float MidX; // s8
      float v21; // s9
      long double v22; // q0
      LogicRefreshAchievementsCommand *v23; // x0
      AreaEffectObject *TapSound; // x8
      #1257 *v25; // x0
      __int64 v26; // x0
      #1257 *v27; // x0
      __int64 v28; // x0
      #1257 *v29; // x0
      __int64 v30; // x0
      Rect v32[2]; // [xsp+0h] [xbp-70h] BYREF
      String v33; // [xsp+10h] [xbp-60h] BYREF
      String v34; // [xsp+28h] [xbp-48h] BYREF
    
      String::String(&v34, "sc/ui.sc");
      String::String(&v33, "popup_chest_info_new");
      PopupBase::PopupBase(a1, &v34, &v33);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_100470E70;
      *(_QWORD *)(a1 + 96) = &off_100471048;
      memset((void *)(a1 + 232), 0, 0x50u);
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", v4);
      v5 = ChestItem::getLogicChest(a2) != 0;
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      *(_QWORD *)(a1 + 232) = a2;
      v7 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "speedup_button", 1);
      *(_QWORD *)(a1 + 240) = v7;
      *(_QWORD *)(a1 + 248) = MovieClip::getTextFieldByName(*(_QWORD *)(v7 + 96), "txt");
      v8 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button", 1);
      *(_QWORD *)(a1 + 256) = v8;
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(v8 + 96), "clock");
      if ( MovieClipByName )
        MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v11 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "rect");
      *(_QWORD *)(a1 + 304) = v11;
      MovieClip::gotoAndStop(v11, "idle");
      LogicChest = (LogicSpawnPointData *)ChestItem::getLogicChest(a2);
      TreasureChestData = (const LogicRefreshAchievementsCommand *)LogicChest::getTreasureChestData(LogicChest);
      ChestInfoPopup::initWithData((JoinableAllianceListMessage *)a1, TreasureChestData);
      updated = (ChestInfoPopup *)ChestInfoPopup::updateSpeedupCost((ChestInfoPopup *)a1, LogicChest);
      ChestInfoPopup::updateTime(updated, LogicChest, *(TextField **)(a1 + 280));
      TextFieldByName = (ChestInfoPopup *)MovieClip::getTextFieldByName(
                                            *(_QWORD *)(*(_QWORD *)(a1 + 256) + 96LL),
                                            "time_text");
      v16 = (Stage *)ChestInfoPopup::updateTime(TextFieldByName, LogicChest, TextFieldByName);
      v17 = *(_DWORD *)(Stage::getInstance(v16) + 428LL);
      Rect::Rect(v32);
      DisplayObject::getGlobalBounds(a2, v32);
      DisplayObject::setPixelSnappedXY((DisplayObject *)a1, (float)v17 * 0.5, *(float *)&v32[0].bottom);
      v18 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v19 = (#1249 *)MovieClip::getMovieClipByName(v18, "tip");
      if ( v19 )
      {
        MidX = Rect::getMidX(v32);
        v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(a1)));
        v22 = DisplayObject::getX(v19);
        DisplayObject::setX(v19, (float)(MidX - v21) + *(float *)&v22);
      }
      v23 = (LogicRefreshAchievementsCommand *)LogicChest::getTreasureChestData(LogicChest);
      TapSound = (AreaEffectObject *)LogicTreasureChestData::getTapSound(v23);
      if ( TapSound )
        SoundManager::playSound((NoAlliance *)SoundManager::sm_pInstance, TapSound, 0xFFFFFFFFLL, 1.0, 0.0);
      v25 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v26 = MovieClip::getMovieClipByName(v25, "darken_spot");
      if ( v26 )
        *(_BYTE *)(v26 + 64) = 0;
      v27 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v28 = MovieClip::getMovieClipByName(v27, "chest");
      if ( v28 )
        *(_BYTE *)(v28 + 64) = 0;
      v29 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      v30 = MovieClip::getMovieClipByName(v29, "darken_grad");
      if ( v30 )
        *(_BYTE *)(v30 + 64) = 0;
      Rect::~Rect(v32);
      return a1;
    }

    void __fastcall ChestInfoPopup::initWithData(
            JoinableAllianceListMessage *this,
            const LogicRefreshAchievementsCommand *a2)
    {
      #1308 *Arena; // x0
      const AreaEffectObject *v5; // x1
      #1308 *LocalizedName; // x21
      const AreaEffectObject *v7; // x1
      #1308 *v8; // x0
      String *TotalSpellCount; // x23
      __int64 RarityRare; // x0
      String *MinSpellCountForRarity; // x22
      __int64 RarityEpic; // x0
      String *v13; // x21
      __int64 v14; // x24
      HomeScreen *Globals; // x0
      const char *v16; // x1
      int MinGold; // w24
      __int64 v18; // x24
      __int64 MaxGold; // x0
      const char *v20; // x1
      String *v21; // x0
      int v22; // w1
      int v23; // w1
      int v24; // w1
      int v25; // w1
      __int64 MovieClip; // x0
      #1395 *TextFieldByName; // x0
      const String *v28; // x2
      #1257 *v29; // x0
      #1257 *MovieClipByName; // x0
      __int64 v31; // x0
      const String *v32; // x2
      const char *AnimExportName; // x8
      #1257 *v34; // x20
      __int64 v35; // x0
      __int64 v36; // x0
      __int64 v37; // x0
      #1257 *v38; // x0
      __int64 Name; // x0
      const String *v40; // x1
      String v41; // [xsp+10h] [xbp-1C0h] BYREF
      String v42; // [xsp+28h] [xbp-1A8h] BYREF
      String v43; // [xsp+40h] [xbp-190h] BYREF
      String v44; // [xsp+58h] [xbp-178h] BYREF
      String v45; // [xsp+70h] [xbp-160h] BYREF
      String v46; // [xsp+88h] [xbp-148h] BYREF
      String v47; // [xsp+A0h] [xbp-130h] BYREF
      String v48; // [xsp+B8h] [xbp-118h] BYREF
      String v49; // [xsp+D0h] [xbp-100h] BYREF
      String v50; // [xsp+E8h] [xbp-E8h] BYREF
      String v51; // [xsp+100h] [xbp-D0h] BYREF
      String v52; // [xsp+118h] [xbp-B8h] BYREF
      String v53; // [xsp+130h] [xbp-A0h] BYREF
      String v54; // [xsp+160h] [xbp-70h] BYREF
      String v55; // [xsp+178h] [xbp-58h] BYREF
    
      Arena = (#1308 *)LogicTreasureChestData::getArena((__int64)a2);
      LocalizedName = StringTable::getLocalizedName(Arena, v5);
      v8 = StringTable::getLocalizedName(a2, v7);
      GUIContainer::setText(this, "title", (const String *)v8, 1);
      GUIContainer::setText(this, "arena", (const String *)LocalizedName, 1);
      TotalSpellCount = (String *)LogicTreasureChestData::getTotalSpellCount((__int64)a2);
      RarityRare = LogicDataTables::getRarityRare();
      MinSpellCountForRarity = (String *)LogicTreasureChestData::getMinSpellCountForRarity((__int64)a2, RarityRare);
      RarityEpic = LogicDataTables::getRarityEpic();
      v13 = (String *)LogicTreasureChestData::getMinSpellCountForRarity((__int64)a2, RarityEpic);
      String::String(&v55);
      v14 = LogicTreasureChestData::getArena((__int64)a2);
      Globals = (HomeScreen *)LogicDataTables::getGlobals();
      if ( v14 == LogicGlobals::getStartingArena(Globals) )
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_BASIC", v16);
        String::operator=(&v55);
      }
      else if ( (_DWORD)v13 == 1 )
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_ONE_EPIC", v16);
        String::operator=(&v55);
      }
      else if ( (int)v13 < 2 )
      {
        if ( (_DWORD)MinSpellCountForRarity == 1 )
        {
          StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_ONE_RARE", v16);
          String::operator=(&v55);
        }
        else
        {
          if ( (int)MinSpellCountForRarity < 2 )
            StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_BASIC", v16);
          else
            StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_MULTIPLE_RARES", v16);
          String::operator=(&v55);
        }
      }
      else
      {
        StringTable::getString((#1308 *)"TID_CHEST_DESCRIPTION_MULTIPLE_EPICS", v16);
        String::operator=(&v55);
      }
      String::String(&v54);
      MinGold = LogicTreasureChestData::getMinGold((__int64)a2);
      if ( MinGold >= (int)LogicTreasureChestData::getMaxGold((__int64)a2) )
      {
        v21 = (String *)LogicTreasureChestData::getMinGold((__int64)a2);
        String::valueOf(&v53, v21, v22);
        String::operator=(&v54);
        String::~String();
      }
      else
      {
        v18 = LogicTreasureChestData::getMinGold((__int64)a2);
        MaxGold = LogicTreasureChestData::getMaxGold((__int64)a2);
        String::format((String *)"%d-%d", v20, v18, MaxGold);
        String::operator=(&v54);
        String::~String();
      }
      String::String(&v48, "<GOLD_COUNT>");
      String::replace(&v49, &v55, &v48, &v54);
      String::String(&v47, "<CARD_COUNT>");
      String::valueOf(&v46, TotalSpellCount, v23);
      String::replace(&v50, &v49, &v47, &v46);
      String::String(&v45, "<RARE_COUNT>");
      String::valueOf(&v44, MinSpellCountForRarity, v24);
      String::replace(&v51, &v50, &v45, &v44);
      String::String(&v43, "<EPIC_COUNT>");
      String::valueOf(&v42, v13, v25);
      String::replace(&v52, &v51, &v43, &v42);
      String::operator=(&v55);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(MovieClip, "text");
      MovieClipHelper::setTextVerticallyCentered(TextFieldByName, &v55, v28);
      v29 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(v29, "timer");
      *((_QWORD *)this + 33) = MovieClipByName;
      *((_QWORD *)this + 37) = MovieClip::getMovieClipByName(MovieClipByName, "clock");
      *((_QWORD *)this + 35) = MovieClip::getTextFieldByName(*((_QWORD *)this + 33), "time_text");
      v31 = GUIContainer::getMovieClip(this);
      *((_QWORD *)this + 34) = MovieClip::getTextFieldByName(v31, "TID_UNLOCK_WARNING");
      AnimExportName = (const char *)LogicTreasureChestData::getAnimExportName((__int64)a2);
      if ( *(_DWORD *)AnimExportName )
      {
        v34 = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_chest.sc", AnimExportName, v32);
        v35 = MovieClip::getMovieClipByName(v34, "glow_common");
        if ( v35 )
          *(_BYTE *)(v35 + 8) = 0;
        v36 = MovieClip::getMovieClipByName(v34, "glow_rare");
        if ( v36 )
          *(_BYTE *)(v36 + 8) = 0;
        v37 = MovieClip::getMovieClipByName(v34, "glow_epic");
        if ( v37 )
          *(_BYTE *)(v37 + 8) = 0;
        v38 = (#1257 *)GUIContainer::getMovieClip(this);
        MovieClip::changeTimelineChild(v38, "chest", v34);
        MovieClip::gotoAndPlay(v34, 0, "popup");
      }
      else
      {
        Name = LogicData::getName(a2);
        operator+(&v41, "no anim export name set for ", Name);
        Debugger::warning((__siginfo *)&v41, v40);
        String::~String();
      }
      String::~String();
      String::~String();
    }

    #1271 *__fastcall ChestInfoPopup::updateSpeedupCost(#1271 *result, EndClientTurnMessage *a2)
    {
      #1271 *v3; // x19
      unsigned __int8 v4; // w8
      #1271 *SpeedUpCost; // x1
      const char *v6; // x4
    
      v3 = result;
      if ( *((_QWORD *)result + 31) )
      {
        v4 = atomic_load((unsigned __int8 *)&`guard variable for'ChestInfoPopup::updateSpeedupCost(LogicChest const*)::origColor);
        if ( (v4 & 1) == 0 )
        {
          if ( __cxa_guard_acquire((__guard *)&`guard variable for'ChestInfoPopup::updateSpeedupCost(LogicChest const*)::origColor) )
          {
            ChestInfoPopup::updateSpeedupCost(LogicChest const*)::origColor = *(_DWORD *)(*((_QWORD *)v3 + 31) + 64LL);
            __cxa_guard_release((__guard *)&`guard variable for'ChestInfoPopup::updateSpeedupCost(LogicChest const*)::origColor);
          }
        }
        SpeedUpCost = (#1271 *)LogicSpeedUpExploringCommand::getSpeedUpCost(a2, a2);
        return MovieClipHelper::setDiamondPriceText(
                 *((#1395 **)v3 + 31),
                 SpeedUpCost,
                 ChestInfoPopup::updateSpeedupCost(LogicChest const*)::origColor,
                 0,
                 v6);
      }
      return result;
    }

    void __fastcall ChestInfoPopup::updateTime(__int64 a1, LogicSpawnPointData *a2, #1271 *a3)
    {
      __int64 v5; // x1
      int v6; // w2
      _BOOL4 isUnlocking; // w20
      int UnlockingSecondsLeft; // w0
      __int64 TreasureChestData; // x0
      String v10; // [xsp+8h] [xbp-38h] BYREF
    
      if ( a3 )
      {
        isUnlocking = LogicChest::isUnlocking(a2);
        if ( isUnlocking )
        {
          UnlockingSecondsLeft = LogicChest::getUnlockingSecondsLeft((__int64)a2, v5, v6);
        }
        else
        {
          TreasureChestData = LogicChest::getTreasureChestData(a2);
          UnlockingSecondsLeft = LogicTreasureChestData::getTotalTimeTakenSeconds(TreasureChestData);
        }
        TimeUtil::getTimeString(UnlockingSecondsLeft, isUnlocking, &v10);
        TextField::setText(a3, &v10);
        String::~String();
      }
    }

    // attributes: thunk
    void __fastcall ChestInfoPopup::ChestInfoPopup(ChestInfoPopup *this, #1316 *a2)
    {
      __ZN14ChestInfoPopupC2EP9ChestItem((__int64)this, a2);
    }

    void __fastcall ChestInfoPopup::~ChestInfoPopup(_QWORD *a1)
    {
      __int64 v2; // x1
      const char *v3; // x2
    
      *a1 = off_100470E70;
      a1[12] = &off_100471048;
      memset(a1 + 29, 0, 0x50u);
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1, v2, v3);
    }

    void __fastcall ChestInfoPopup::~ChestInfoPopup(_QWORD *a1)
    {
      __int64 v2; // x1
      const char *v3; // x2
    
      *a1 = off_100470E70;
      a1[12] = &off_100471048;
      memset(a1 + 29, 0, 0x50u);
      PopupBase::~PopupBase((MatchmakeFailedMessage *)a1, v2, v3);
      operator delete(a1);
    }

    __int64 __fastcall ChestInfoPopup::buttonClicked(__int64 result, __int64 a2)
    {
      __int64 v2; // x19
    
      v2 = result;
      if ( *(_QWORD *)(result + 240) == a2 )
        return ChestItem::speedUp(*(int **)(result + 232));
      if ( *(_QWORD *)(result + 256) == a2 )
      {
        ChestItem::startOpening(*(_QWORD *)(result + 232));
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 352LL))(v2);
      }
      return result;
    }

    void __fastcall ChestInfoPopup::update(__int64 a1, long double a2)
    {
      #1316 *v3; // x0
      __int64 LogicChest; // x0
      EndClientTurnMessage *v5; // x20
      #1271 *updated; // x0
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      bool v9; // w8
      __int64 v10; // x9
      __int64 v11; // x8
    
      PopupBase::update((MiniTimer *)a1, a2);
      v3 = *(#1316 **)(a1 + 232);
      if ( v3 )
      {
        LogicChest = ChestItem::getLogicChest(v3);
        v5 = (EndClientTurnMessage *)LogicChest;
        if ( !LogicChest || (LogicChest::isUnlocked(LogicChest) & 1) != 0 || *((_BYTE *)v5 + 40) )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
        }
        else if ( LogicChest::isUnlocking(v5) )
        {
          updated = ChestInfoPopup::updateSpeedupCost((#1271 *)a1, v5);
          ChestInfoPopup::updateTime((__int64)updated, v5, *(#1271 **)(a1 + 280));
          *(_BYTE *)(*(_QWORD *)(a1 + 272) + 8LL) = 0;
          *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 0;
          *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 240) + 8LL) = 1;
          if ( (unsigned int)MovieClip::isStopped(*(#1257 **)(a1 + 296)) )
            MovieClip::play(*(MovieClip **)(a1 + 296));
          if ( (unsigned int)MovieClip::isStopped(*(#1257 **)(a1 + 304)) )
            MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 304), "opening_start", "opening_end");
        }
        else
        {
          Instance = GameMode::getInstance();
          Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
          v9 = (int)LogicClientHome::getFreeWorkers(Home) < 1;
          v10 = *(_QWORD *)(a1 + 272);
          *(_BYTE *)(v10 + 8) = v9;
          *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 0;
          v11 = *(_QWORD *)(a1 + 240);
          if ( *(_BYTE *)(v10 + 8) )
          {
            *(_BYTE *)(v11 + 8) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 0;
          }
          else
          {
            *(_BYTE *)(v11 + 8) = 0;
            *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 1;
            if ( (unsigned int)MovieClip::isPlaying(*(_QWORD *)(a1 + 296)) )
              MovieClip::stop(*(MovieClip **)(a1 + 296));
          }
          if ( (unsigned int)MovieClip::isPlaying(*(_QWORD *)(a1 + 304)) )
            MovieClip::gotoAndStop(*(MovieClip **)(a1 + 304), "idle");
        }
      }
    }

    __int64 __fastcall ChestInfoPopup::useModal(JoinableAllianceListMessage *this)
    {
      return 1;
    }

    __int64 __fastcall ChestInfoPopup::getPopupType(JoinableAllianceListMessage *this)
    {
      return 6;
    }

}; // end class ChestInfoPopup
