class ChestItem
{
public:

    void __fastcall ChestItem::ChestItem(ChestItem *this, #1257 *a2)
    {
      #1257 *v4; // x1
      __int64 MovieClipByName; // x0
      __int64 v6; // x0
      __int64 TextFieldByName; // x22
      Rect *v8; // x21
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      int v12; // w8
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      const char *v16; // x2
    
      GameButton::GameButton(this);
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 33) = 0x29AFFFFFFFFLL;
      *(_QWORD *)this = off_10046B1F0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      DropGUIContainer::putLocalizedTIDsToTextFields(a2, v4);
      (*(void (__fastcall **)(ChestItem *, #1257 *, __int64))(*(_QWORD *)this + 280LL))(this, a2, 1);
      MovieClipByName = MovieClip::getMovieClipByName(a2, "clock");
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 64) = 0;
      v6 = MovieClip::getMovieClipByName(a2, "txt_time_left");
      if ( v6 )
        *(_BYTE *)(v6 + 64) = 0;
      TextFieldByName = MovieClip::getTextFieldByName(a2, "hit_area");
      if ( TextFieldByName )
      {
        v8 = (Rect *)operator new(16);
        Rect::Rect(v8);
        DisplayObject::getBounds(TextFieldByName, a2, v8);
        Sprite::setHitArea(a2, (#1261 *)v8);
      }
      v9 = MovieClip::getMovieClipByName(a2, "txt_time_left");
      *((_QWORD *)this + 34) = MovieClip::getTextFieldByName(v9, "txt");
      v10 = MovieClip::getMovieClipByName(a2, "txt_gems_required");
      v11 = MovieClip::getTextFieldByName(v10, "txt");
      *((_QWORD *)this + 35) = v11;
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 64);
      else
        v12 = 0;
      *((_DWORD *)this + 78) = v12;
      v13 = MovieClip::getMovieClipByName(a2, "txt_tap_to_open");
      *((_QWORD *)this + 37) = v13;
      if ( v13 )
        *(_BYTE *)(v13 + 8) = 0;
      v14 = MovieClip::getMovieClipByName(a2, "arena");
      if ( v14 )
        *((_QWORD *)this + 36) = MovieClip::getTextFieldByName(v14, "txt");
      v15 = MovieClip::getMovieClipByName(a2, "chest");
      *((_QWORD *)this + 38) = v15;
      Debugger::doAssert((Debugger *)(v15 != 0), (bool)"no 'chest' clip in chest item!", v16);
      if ( *((_DWORD *)this + 67) != 1 )
      {
        MovieClip::gotoAndPlay(*((MovieClip **)this + 12), &stru_1004F8970, &stru_1004F8988);
        *((_DWORD *)this + 67) = 1;
      }
      *((float *)this + 81) = (*(float (__fastcall **)(ChestItem *))(*(_QWORD *)this + 96LL))(this);
    }

    __int64 __fastcall ChestItem::setState(__int64 result, const char *a2)
    {
      int v2; // w19
      __int64 v3; // x20
    
      v2 = (int)a2;
      v3 = result;
      if ( (int)a2 > 5 || *(_DWORD *)(result + 268) == (_DWORD)a2 )
      {
        if ( (int)a2 >= 6 )
          Debugger::error((__siginfo *)"..?", a2);
      }
      else
      {
        result = MovieClip::gotoAndPlay(
                   *(MovieClip **)(result + 96),
                   (const String *)&s_chestEnterStateAnimLabels + 2 * (unsigned int)a2,
                   (const String *)&s_chestEnterStateAnimLabels + 2 * (unsigned int)a2 + 1);
        if ( v2 == 4 )
        {
          result = ChestItem::updateChestProgress((#1316 *)v3);
        }
        else if ( v2 == 3 || v2 == 2 )
        {
          result = ChestItem::updateTimeRequired((ChestItem *)v3);
        }
        *(_DWORD *)(v3 + 268) = v2;
      }
      return result;
    }

    // attributes: thunk
    void __fastcall ChestItem::ChestItem(ChestItem *this, #1257 *a2)
    {
      __ZN9ChestItemC2EP9MovieClip(this, a2);
    }

    void __fastcall ChestItem::~ChestItem(DeviceLinkCodeReceivedScreen *a1)
    {
      *((_QWORD *)a1 + 40) = 0;
      *((_QWORD *)a1 + 33) = 0x29AFFFFFFFFLL;
      *((_QWORD *)a1 + 39) = 0;
      *(_QWORD *)a1 = off_10046B1F0;
      *((_QWORD *)a1 + 37) = 0;
      *((_QWORD *)a1 + 38) = 0;
      *((_QWORD *)a1 + 35) = 0;
      *((_QWORD *)a1 + 36) = 0;
      *((_QWORD *)a1 + 34) = 0;
      GameButton::~GameButton(a1);
    }

    void __fastcall ChestItem::~ChestItem(DeviceLinkCodeReceivedScreen *a1)
    {
      *((_QWORD *)a1 + 40) = 0;
      *((_QWORD *)a1 + 33) = 0x29AFFFFFFFFLL;
      *(_QWORD *)a1 = off_10046B1F0;
      *((_QWORD *)a1 + 38) = 0;
      *((_QWORD *)a1 + 39) = 0;
      *((_QWORD *)a1 + 36) = 0;
      *((_QWORD *)a1 + 37) = 0;
      *((_QWORD *)a1 + 34) = 0;
      *((_QWORD *)a1 + 35) = 0;
      GameButton::~GameButton(a1);
      operator delete(a1);
    }

    __int64 __fastcall ChestItem::buttonPressed(CustomButton *a1)
    {
      CustomButton::buttonPressed(a1);
      return ChestItem::clicked(a1);
    }

    __int64 __fastcall ChestItem::clicked(#1316 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      __int64 result; // x0
      __int64 v5; // x0
      CoOpenStreamEntry *v6; // x0
      __int64 ChestWithID; // x0
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 66));
      if ( result )
      {
        v5 = GameMode::getInstance();
        v6 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v5 + 112));
        ChestWithID = LogicClientHome::getChestWithID(v6, *((_DWORD *)this + 66));
        if ( (unsigned int)LogicChest::isUnlocked(ChestWithID) )
          return ChestItem::claim(this);
        else
          return ChestItem::showInfo(this);
      }
      return result;
    }

    __int64 __fastcall ChestItem::update(#1316 *this, float a2)
    {
      __int64 result; // x0
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      const LogicSpawnPointData *ChestWithID; // x0
    
      result = MovieClip::isPlaying(*((_QWORD *)this + 12));
      if ( (result & 1) == 0 )
      {
        Instance = GameMode::getInstance();
        Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
        ChestWithID = (const LogicSpawnPointData *)LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 66));
        result = ChestItem::setLogicChest(this, ChestWithID);
        if ( *((_DWORD *)this + 67) == 4 )
          return ChestItem::updateChestProgress(this);
      }
      return result;
    }

    __int64 __fastcall ChestItem::getLogicChest(#1316 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      return LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 66));
    }

    void __fastcall ChestItem::setLogicChest(#1316 *this, const LogicSpawnPointData *a2)
    {
      __int64 TreasureChestData; // x0
      LogicDataTables *Arena; // x0
      __int64 v6; // x21
      HomeScreen *Globals; // x0
      #1271 *v8; // x22
      #1308 *TID; // x0
      const String *v10; // x1
      #1308 *String; // x0
      #1271 *v12; // x21
      int v13; // w8
      #1271 *v14; // x20
      __int64 v15; // x1
      String v16; // [xsp+0h] [xbp-50h] BYREF
      String v17; // [xsp+18h] [xbp-38h] BYREF
    
      if ( !a2 )
      {
        *((_BYTE *)this + 64) = 0;
        *((_DWORD *)this + 66) = -1;
        v14 = (#1271 *)*((_QWORD *)this + 36);
        String::String(&v16, "");
        TextField::setText(v14, &v16);
        String::~String();
        if ( *((_DWORD *)this + 67) == 1 )
          return;
        MovieClip::gotoAndPlay(*((MovieClip **)this + 12), &stru_1004F8970, &stru_1004F8988);
        v13 = 1;
        goto LABEL_11;
      }
      *((_BYTE *)this + 64) = 1;
      *((_DWORD *)this + 66) = *((_DWORD *)a2 + 4);
      ChestItem::setChestGraphics(this, a2);
      TreasureChestData = LogicChest::getTreasureChestData(a2);
      Arena = (LogicDataTables *)LogicTreasureChestData::getArena(TreasureChestData);
      v6 = (__int64)Arena;
      if ( !Arena
        || (Globals = (HomeScreen *)LogicDataTables::getGlobals(Arena), v6 == LogicGlobals::getStartingArena(Globals)) )
      {
        v12 = (#1271 *)*((_QWORD *)this + 36);
        String::String(&v17, "");
        TextField::setText(v12, &v17);
        String::~String();
      }
      else
      {
        v8 = (#1271 *)*((_QWORD *)this + 36);
        TID = (#1308 *)LogicData::getTID(v6);
        String = StringTable::getString(TID, v10);
        TextField::setText(v8, (const String *)String);
      }
      if ( (unsigned int)LogicChest::isUnlocked(a2) )
      {
        if ( *((_DWORD *)this + 67) == 5 )
          return;
        MovieClip::gotoAndPlay(*((MovieClip **)this + 12), &stru_1004F8A30, &stru_1004F8A48);
        v13 = 5;
    LABEL_11:
        *((_DWORD *)this + 67) = v13;
        return;
      }
      if ( (unsigned int)LogicChest::isUnlocking(a2) )
        v15 = 4;
      else
        v15 = 3;
      ChestItem::setState((__int64)this, (const char *)v15);
    }

    void __fastcall ChestItem::updateChestProgress(#1316 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      _BOOL8 v4; // x0
      const char *v5; // x2
      __int64 v6; // x0
      CoOpenStreamEntry *v7; // x0
      __int64 ChestWithID; // x0
      int UnlockingSecondsLeft; // w20
      __int64 v10; // x0
      CoOpenStreamEntry *v11; // x0
      LogicSpawnPointData *v12; // x0
      int isUnlocking; // w0
      #1271 *v14; // x21
      __int64 v15; // x0
      CoOpenStreamEntry *v16; // x0
      EndClientTurnMessage *v17; // x0
      const LogicSpawnPointData *v18; // x1
      #1271 *SpeedUpCost; // x0
      const char *v20; // x4
      String v21; // [xsp+8h] [xbp-38h] BYREF
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      v4 = LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 66)) != 0;
      Debugger::doAssert((Debugger *)v4, (bool)"no logic chest", v5);
      if ( *((_QWORD *)this + 34) )
      {
        v6 = GameMode::getInstance();
        v7 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v6 + 112));
        ChestWithID = LogicClientHome::getChestWithID(v7, *((_DWORD *)this + 66));
        UnlockingSecondsLeft = LogicChest::getUnlockingSecondsLeft(ChestWithID);
        v10 = GameMode::getInstance();
        v11 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v10 + 112));
        v12 = (LogicSpawnPointData *)LogicClientHome::getChestWithID(v11, *((_DWORD *)this + 66));
        isUnlocking = LogicChest::isUnlocking(v12);
        v14 = (#1271 *)*((_QWORD *)this + 34);
        TimeUtil::getTimeString(UnlockingSecondsLeft, isUnlocking, &v21);
        TextField::setText(v14, &v21);
        String::~String();
      }
      if ( *((_QWORD *)this + 35) )
      {
        v15 = GameMode::getInstance();
        v16 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v15 + 112));
        v17 = (EndClientTurnMessage *)LogicClientHome::getChestWithID(v16, *((_DWORD *)this + 66));
        SpeedUpCost = (#1271 *)LogicSpeedUpExploringCommand::getSpeedUpCost(v17, v18);
        MovieClipHelper::setDiamondPriceText(*((#1395 **)this + 35), SpeedUpCost, *((_DWORD *)this + 78), 0, v20);
      }
    }

    __int64 __fastcall ChestItem::claim(#1316 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      __int64 result; // x0
      LogicPageOpenedCommand *v5; // x0
      LogicAreaEffectObject *BattlePage; // x0
      LogicStartRewardClaimCommand *v7; // x20
      __int64 v8; // x0
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = LogicClientHome::isClaimingReward(Home);
      if ( (result & 1) == 0 )
      {
        v5 = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)result);
        BattlePage = (LogicAreaEffectObject *)HomeScreen::getBattlePage(v5);
        result = BattlePage::isMatchmaking(BattlePage);
        if ( (result & 1) == 0 )
        {
          v7 = (LogicStartRewardClaimCommand *)operator new(32);
          LogicStartRewardClaimCommand::LogicStartRewardClaimCommand(v7);
          LogicStartRewardClaimCommand::setChestId((__int64)v7, *((_DWORD *)this + 66));
          v8 = GameMode::getInstance();
          return GameMode::addCommand(v8, v7, 1);
        }
      }
      return result;
    }

    BadgePopup *__fastcall ChestItem::showInfo(#1316 *this)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      BadgePopup *result; // x0
      __int64 v5; // x0
      BadgePopup *PopupByType; // x0
      BadgePopup *v7; // x0
      ChestInfoPopup *v8; // x20
      BadgePopup *v9; // x0
      __int64 v10; // x0
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = (BadgePopup *)LogicClientHome::getChestWithID(Home, *((_DWORD *)this + 66));
      if ( result )
      {
        v5 = GUI::getInstance(result);
        PopupByType = (BadgePopup *)GUI::getPopupByType(v5, 6);
        if ( PopupByType )
          PopupByType = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)PopupByType + 352LL))(PopupByType);
        v7 = (BadgePopup *)GUI::getInstance(PopupByType);
        result = (BadgePopup *)GUI::getTopPopup(v7);
        if ( !result )
        {
          v8 = (ChestInfoPopup *)operator new(312);
          v9 = ChestInfoPopup::ChestInfoPopup(v8, this);
          v10 = GUI::getInstance(v9);
          return (BadgePopup *)GUI::showPopup(v10, v8, 0, 0, 0);
        }
      }
      return result;
    }

    void __fastcall ChestItem::setChestGraphics(#1316 *this, const LogicSpawnPointData *a2)
    {
      __int64 TreasureChestData; // x0
      const String *FileName; // x0
      __int64 v6; // x0
      const String *ExportName; // x0
      const char *v8; // x0
      const String *v9; // x2
      #1249 *MovieClip; // x20
      __int64 v11; // x0
      String v12; // [xsp+8h] [xbp-58h] BYREF
      String v13; // [xsp+20h] [xbp-40h] BYREF
      String v14; // [xsp+38h] [xbp-28h] BYREF
    
      TreasureChestData = LogicChest::getTreasureChestData(a2);
      FileName = (const String *)LogicTreasureChestData::getFileName(TreasureChestData);
      String::String(&v14, FileName);
      v6 = LogicChest::getTreasureChestData(a2);
      ExportName = (const String *)LogicTreasureChestData::getExportName(v6);
      String::String(&v13, ExportName);
      if ( MovieClip::getExportName(*((_QWORD *)this + 38)) )
      {
        v8 = (const char *)MovieClip::getExportName(*((_QWORD *)this + 38));
        String::String(&v12, v8);
      }
      else
      {
        String::String(&v12, "");
      }
      if ( (String::equals(&v13, &v12) & 1) == 0 )
      {
        MovieClip = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)&v14, &v13, v9);
        MovieClip::changeTimelineChild(*((#1257 **)this + 12), *((#1249 **)this + 38), MovieClip);
        v11 = *((_QWORD *)this + 38);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *((_QWORD *)this + 38) = MovieClip;
      }
      String::~String();
      String::~String();
      String::~String();
    }

    __int64 __fastcall ChestItem::speedUp(int *a1)
    {
      LogicPageOpenedCommand *Instance; // x0
      LogicAreaEffectObject *BattlePage; // x0
      __int64 result; // x0
      LogicSpeedUpExploringCommand *v5; // x19
      __int64 v6; // x20
      BadgePopup *v7; // x0
      __int64 v8; // x0
      __int64 (__fastcall *v9)(__int64); // x1
    
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
      BattlePage = (LogicAreaEffectObject *)HomeScreen::getBattlePage(Instance);
      result = BattlePage::isMatchmaking(BattlePage);
      if ( (result & 1) == 0 )
      {
        v5 = (LogicSpeedUpExploringCommand *)operator new(40);
        LogicSpeedUpExploringCommand::LogicSpeedUpExploringCommand(v5);
        LogicSpeedUpExploringCommand::setChestId((__int64)v5, a1[66]);
        v6 = GameMode::getInstance();
        LogicSpeedUpExploringCommand::setClaimImmediately((__int64)v5, 1);
        if ( !(unsigned int)GameMode::simulateCommand(v6, (__int64)v5, *(_QWORD *)(v6 + 112), 1) )
        {
          (**(void (__fastcall ***)(LogicSpeedUpExploringCommand *))v5)(v5);
          v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL);
          result = (__int64)v5;
          return v9(result);
        }
        v7 = (BadgePopup *)GameMode::addCommand(v6, v5, 1);
        v8 = GUI::getInstance(v7);
        result = GUI::getPopupByType(v8, 6);
        if ( result )
        {
          v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 352LL);
          return v9(result);
        }
      }
      return result;
    }

    __int64 __fastcall ChestItem::startOpening(__int64 a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      __int64 result; // x0
      LogicStartExploringCommand *v5; // x20
      __int64 v6; // x0
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = LogicClientHome::getFreeWorkers(Home);
      if ( (int)result >= 1 )
      {
        v5 = (LogicStartExploringCommand *)operator new(32);
        LogicStartExploringCommand::LogicStartExploringCommand(v5);
        LogicStartExploringCommand::setChestId(v5, *(_DWORD *)(a1 + 264));
        v6 = GameMode::getInstance();
        return GameMode::addCommand(v6, v5, 1);
      }
      return result;
    }

    __int64 __fastcall ChestItem::chestClaimed(LogicSpawnPointData *a1)
    {
      __int64 Instance; // x0
      LogicPageOpenedCommand *HomeScreen; // x0
      const LogicRefreshAchievementsCommand *TreasureChestData; // x20
      ChestOpenAnimationPopup *v5; // x19
      Stage *v6; // x0
      __int64 v7; // x0
      BadgePopup *v8; // x0
      __int64 v9; // x0
      LogicDataTables *v10; // x0
      __int64 v11; // x19
      __int64 ClaimChestSound; // x1
    
      Instance = GameMode::getInstance();
      HomeScreen = (LogicPageOpenedCommand *)GameMode::getHomeScreen(Instance);
      HomeScreen::setWaitingForResponse(HomeScreen, 1);
      TreasureChestData = (const LogicRefreshAchievementsCommand *)LogicChest::getTreasureChestData(a1);
      v5 = (ChestOpenAnimationPopup *)operator new(504);
      ChestOpenAnimationPopup::ChestOpenAnimationPopup(v5, TreasureChestData);
      v7 = Stage::getInstance(v6);
      DisplayObject::setPixelSnappedXY(v5, (float)*(int *)(v7 + 428) * 0.5, 0.0);
      v9 = GUI::getInstance(v8);
      v10 = (LogicDataTables *)GUI::showPopup(v9, v5, 0, 0, 0);
      v11 = SoundManager::sm_pInstance;
      ClaimChestSound = LogicDataTables::getClaimChestSound(v10);
      return SoundManager::playSound(v11, ClaimChestSound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
    }

    __n128 __fastcall ChestItem::showTapNotification(__int64 a1, int a2)
    {
      MovieClip *v3; // x0
      __n128 result; // q0
    
      v3 = *(MovieClip **)(a1 + 296);
      if ( v3 && *(_DWORD *)(a1 + 268) == 3 )
      {
        *((_BYTE *)v3 + 8) = a2;
        if ( a2 )
          return MovieClip::gotoAndPlayFrameIndex(v3, 0, -1);
      }
      return result;
    }

    void __fastcall ChestItem::showLandEffect(__int64 a1)
    {
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      LogicSpawnPointData *ChestWithID; // x0
      const char *v5; // x1
      __int64 TreasureChestData; // x0
      __int64 SlotLandEffect; // x19
      LogicPageOpenedCommand *GlobalBounds; // x0
      __int64 v9; // x20
      long double v10; // q0
      long double v11; // q8
      long double MidY; // q0
      Rect v13[2]; // [xsp+0h] [xbp-30h] BYREF
    
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ChestWithID = (LogicSpawnPointData *)LogicClientHome::getChestWithID(Home, *(_DWORD *)(a1 + 264));
      if ( ChestWithID )
      {
        TreasureChestData = LogicChest::getTreasureChestData(ChestWithID);
        SlotLandEffect = LogicTreasureChestData::getSlotLandEffect(TreasureChestData);
        Rect::Rect(v13);
        GlobalBounds = (LogicPageOpenedCommand *)DisplayObject::getGlobalBounds(a1, v13);
        v9 = HomeScreen::getInstance(GlobalBounds);
        *(float *)&v10 = Rect::getMidX(v13);
        v11 = v10;
        MidY = Rect::getMidY(v13);
        HomeScreen::addEffectAt(v9, SlotLandEffect, v11, MidY);
        Rect::~Rect(v13);
      }
      else
      {
        Debugger::warning((__siginfo *)"chest item: showLandEffect: called with no logic chest", v5);
      }
    }

    void __fastcall ChestItem::updateTimeRequired(__int64 a1)
    {
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x20
      __int64 Instance; // x0
      CoOpenStreamEntry *Home; // x0
      LogicSpawnPointData *ChestWithID; // x0
      __int64 TreasureChestData; // x0
      int TotalTimeTakenSeconds; // w0
      __int64 v9; // x0
      CoOpenStreamEntry *v10; // x0
      EndClientTurnMessage *v11; // x0
      const LogicSpawnPointData *v12; // x1
      #1271 *SpeedUpCost; // x0
      const char *v14; // x4
      String v15; // [xsp+8h] [xbp-28h] BYREF
    
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "txt_time_required");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "txt");
      Instance = GameMode::getInstance();
      Home = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      ChestWithID = (LogicSpawnPointData *)LogicClientHome::getChestWithID(Home, *(_DWORD *)(a1 + 264));
      TreasureChestData = LogicChest::getTreasureChestData(ChestWithID);
      TotalTimeTakenSeconds = LogicTreasureChestData::getTotalTimeTakenSeconds(TreasureChestData);
      TimeUtil::getTimeString(TotalTimeTakenSeconds, 0, &v15);
      TextField::setText(TextFieldByName, &v15);
      String::~String();
      if ( *(_QWORD *)(a1 + 280) )
      {
        v9 = GameMode::getInstance();
        v10 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v9 + 112));
        v11 = (EndClientTurnMessage *)LogicClientHome::getChestWithID(v10, *(_DWORD *)(a1 + 264));
        SpeedUpCost = (#1271 *)LogicSpeedUpExploringCommand::getSpeedUpCost(v11, v12);
        MovieClipHelper::setDiamondPriceText(*(#1395 **)(a1 + 280), SpeedUpCost, *(_DWORD *)(a1 + 312), 0, v14);
      }
    }

}; // end class ChestItem
