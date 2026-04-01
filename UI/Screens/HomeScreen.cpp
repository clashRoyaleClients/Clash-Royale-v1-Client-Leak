class HomeScreen
{
public:

    __int64 __fastcall HomeScreen::getInstance(LogicPageOpenedCommand *this)
    {
      __int64 Instance; // x0
    
      Instance = GameMode::getInstance();
      return GameMode::getHomeScreen(Instance);
    }

    __int64 HomeScreen::destructStatics()
    {
      __int64 result; // x0
    
      result = HomeScreen::sm_pPendingArenaChangedPopup;
      if ( HomeScreen::sm_pPendingArenaChangedPopup )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)HomeScreen::sm_pPendingArenaChangedPopup + 8LL))(HomeScreen::sm_pPendingArenaChangedPopup);
      HomeScreen::sm_pPendingArenaChangedPopup = 0;
      return result;
    }

    _QWORD *__fastcall HomeScreen::HomeScreen(_QWORD *a1, __int64 a2)
    {
      _QWORD *result; // x0
    
      result = GameScreen::GameScreen(a1, a2);
      result[23] = 0;
      *result = off_10046D790;
      result[17] = &off_10046D9B0;
      result[21] = 0;
      result[22] = 0;
      result[19] = 0;
      result[20] = 0;
      result[18] = 0;
      return result;
    }

    _QWORD *__fastcall HomeScreen::~HomeScreen(_QWORD *a1)
    {
      a1[23] = 0;
      a1[17] = &off_10046D9B0;
      a1[21] = 0;
      a1[22] = 0;
      a1[19] = 0;
      a1[20] = 0;
      a1[18] = 0;
      *a1 = off_100467950;
      TutorialManager::~TutorialManager(a1 + 1);
      return a1;
    }

    void __fastcall HomeScreen::~HomeScreen(_QWORD *a1)
    {
      a1[23] = 0;
      a1[17] = &off_10046D9B0;
      a1[21] = 0;
      a1[22] = 0;
      a1[19] = 0;
      a1[20] = 0;
      a1[18] = 0;
      *a1 = off_100467950;
      TutorialManager::~TutorialManager(a1 + 1);
      operator delete(a1);
    }

    __int64 __fastcall HomeScreen::enter(__int64 a1)
    {
      __int64 Instance; // x0
      __int64 v3; // x1
      __int64 v4; // x2
      const String *v5; // x3
      CharacterAnimator *v6; // x0
      __darwin_pthread_mutex_t *isInitialized; // x0
      AllianceStream *v8; // x0
      AskForAvatarStreamMessage *v9; // x20
      __int64 v10; // x0
      __int64 v11; // x20
      AreaEffectObject *MenuMusic; // x0
      Stage *v13; // x0
      int *v14; // x0
      float v15; // s8
      __int64 v16; // x20
      PageGUI *v17; // x21
      const char *v18; // x1
      int i; // w23
      SpellPage *v20; // x22
      MainHUD *v21; // x21
      const ChangeAllianceMemberRoleOkMessage *DataFromTable; // x21
      RenderSystem *v23; // x20
      BadgePopup *v24; // x0
      __int64 v25; // x0
      __int64 Layer; // x0
      VisitHomeMessage *v27; // x0
      int v28; // w1
      AskForTVContentMessage *v29; // x20
      pthread_attr_t *v30; // x0
      const String *v31; // x1
      PiranhaMessage *v32; // x20
      __int64 HomeId; // x0
      __int64 v34; // x0
      __int64 result; // x0
    
      GameScreen::enter((LogicGameListener *)a1);
      Instance = GameMode::getInstance();
      if ( Instance )
      {
        GameMode::getInstance();
        Instance = GameMode::getPlayerAvatar();
        if ( Instance )
        {
          if ( *(_BYTE *)(Instance + 68) )
            Instance = (__int64)HelpshiftManager::start((HelpshiftTitan *)HelpshiftManager::sm_pInstance, v3, v4, v5);
        }
      }
      v6 = (CharacterAnimator *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)Instance);
      isInitialized = (__darwin_pthread_mutex_t *)AllianceStream::isInitialized(v6);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v8 = (AllianceStream *)AllianceStream::getInstance(isInitialized);
        AllianceStream::initialize(v8);
      }
      if ( AvatarStreamManager::sm_pInstance && !*(_BYTE *)(AvatarStreamManager::sm_pInstance + 36) )
      {
        v9 = (AskForAvatarStreamMessage *)operator new(72);
        AskForAvatarStreamMessage::AskForAvatarStreamMessage(v9);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v9);
      }
      v10 = GameMode::getInstance();
      LogicGameMode::getHome(*(UnlockAccountPopup **)(v10 + 112));
      v11 = SoundManager::sm_pInstance;
      MenuMusic = (AreaEffectObject *)LogicDataTables::getMenuMusic();
      SoundManager::playMusic(v11, MenuMusic);
      v14 = (int *)Stage::getInstance(v13);
      v15 = (float)v14[108];
      if ( !NotificationManager::sm_pInstance )
        v14 = (int *)NotificationManager::constructInstance();
      v16 = *(_QWORD *)(GameMain::getInstance((AllianceStreamMessage *)v14) + 72);
      v17 = (PageGUI *)operator new(152);
      PageGUI::PageGUI(v17, 0, 0, 768, (int)v15);
      *(_QWORD *)(a1 + 144) = v17;
      PageGUI::setWrapAroundEnabled((__int64)v17, 0);
      for ( i = 0; i < 5; ++i )
      {
        switch ( i )
        {
          case 0:
            v20 = (SpellPage *)operator new(376);
            ShopPage::ShopPage((__int64)v20);
            break;
          case 1:
            v20 = (SpellPage *)operator new(464);
            SpellPage::SpellPage(v20);
            break;
          case 2:
            v20 = (SpellPage *)operator new(592);
            BattlePage::BattlePage(v20);
            break;
          case 3:
            v20 = (SpellPage *)operator new(304);
            ClanPage::ClanPage(v20);
            break;
          case 4:
            v20 = (SpellPage *)operator new(288);
            FeedPage::FeedPage(v20);
            break;
          default:
            Debugger::error((__siginfo *)"add page object allocation to switch case!", v18);
            return result;
        }
        PageGUI::addPage(*(MessageManager **)(a1 + 144), v20, 0xFFFFFFFFLL);
      }
      PageGUI::setCurrentPage(*(#1249 ***)(a1 + 144), 2);
      if ( ClanPage::sm_pendingGoToClan )
      {
        PageGUI::setCurrentPage(*(#1249 ***)(a1 + 144), 3);
        ClanPage::sm_pendingGoToClan = 0;
      }
      if ( FeedPage::sm_pendingGoToFeed )
      {
        PageGUI::setCurrentPage(*(#1249 ***)(a1 + 144), 4);
        FeedPage::sm_pendingGoToFeed = 0;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 160LL))(v16, *(_QWORD *)(a1 + 144));
      v21 = (MainHUD *)operator new(488);
      MainHUD::MainHUD(v21);
      *(_QWORD *)(a1 + 152) = v21;
      (*(void (__fastcall **)(__int64, MainHUD *))(*(_QWORD *)v16 + 160LL))(v16, v21);
      *(_WORD *)(a1 + 190) = 257;
      DataFromTable = (const ChangeAllianceMemberRoleOkMessage *)LogicDataTables::getDataFromTable(15);
      v23 = (RenderSystem *)operator new(344);
      RenderSystem::RenderSystem(v23, DataFromTable, 0, 0, 1);
      *(_QWORD *)(a1 + 168) = v23;
      v25 = GUI::getInstance(v24);
      Layer = GUI::getLayer(v25, 4u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Layer + 160LL))(Layer, *(_QWORD *)(a1 + 168));
      v27 = (VisitHomeMessage *)GameMode::getInstance();
      GameMode::saveOffline(v27, &GameMode::OFFLINE_SAVE_FILE_HOME);
      MessageManager::sendKeepAliveMessage((MessageManager *)MessageManager::sm_pInstance);
      if ( NewsManager::sm_pInstance )
        NewsManager::refreshNewsEntries((#1306 *)NewsManager::sm_pInstance, v28);
      if ( RoyalTvManager::sm_pInstance && !*(_BYTE *)(RoyalTvManager::sm_pInstance + 36) )
      {
        v29 = (AskForTVContentMessage *)operator new(72);
        AskForTVContentMessage::AskForTVContentMessage(v29);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v29);
      }
      v30 = (pthread_attr_t *)GameMode::getInstance();
      if ( (unsigned int)GameMode::isHelpshiftEnabled(v30) )
      {
        HelpshiftManager::updateMetadata((_BYTE *)HelpshiftManager::sm_pInstance, v31);
        HelpshiftManager::requestNotificationCount((HelpshiftTitan *)HelpshiftManager::sm_pInstance);
      }
      v32 = (PiranhaMessage *)operator new(80);
      AskForBattleReplayStreamMessage::AskForBattleReplayStreamMessage((__int64)v32);
      GameMode::getInstance();
      HomeId = GameMode::getHomeId();
      v34 = LogicLong::clone(HomeId);
      AskForBattleReplayStreamMessage::setHomeId((__int64)v32, v34);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v32);
    }

    __int64 __fastcall HomeScreen::exit(LogicPageOpenedCommand *this)
    {
      CharacterAnimator *Instance; // x0
      __darwin_pthread_mutex_t *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      Instance = (CharacterAnimator *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)this);
      v3 = (__darwin_pthread_mutex_t *)Instance;
      if ( Instance )
      {
        if ( (unsigned int)AllianceStream::isChallenging(Instance) )
          AllianceStream::setChallengeActive(v3, 0);
        (*(void (__fastcall **)(__darwin_pthread_mutex_t *))(v3->__sig + 40))(v3);
      }
      SoundManager::stopMusic((_DWORD *)SoundManager::sm_pInstance);
      TutorialManager::releaseContent((int *)this + 2);
      v4 = *((_QWORD *)this + 18);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 18) = 0;
      v5 = *((_QWORD *)this + 19);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 19) = 0;
      v6 = *((_QWORD *)this + 21);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 21) = 0;
      return GameScreen::exit((__int64)this);
    }

    __int64 __fastcall HomeScreen::update(MessageManager **this, long double a2, float a3)
    {
      __int64 Instance; // x0
      int TotalValueOfPendingDataGained; // w21
      LogicAreaEffectObject *PageItemAt; // x0
      char isAnimatingNewChest; // w20
      LogicAreaEffectObject *v9; // x0
      BadgePopup *v10; // x0
      __int64 v11; // x0
      DisplayObject *v12; // x20
      BadgePopup *v13; // x0
      __int64 v14; // x0
      NoAlliance *v15; // x20
      float MusicPassedTime; // s0
      __int64 v17; // x20
      AreaEffectObject *MenuMusic; // x0
      AllianceStreamMessage *v19; // x0
      GameMain *v20; // x0
      AllianceStreamMessage *IsIAPWarningNeeded; // x0
      GameMain *v22; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 v24; // x0
      DonatorEntry *TutorialManager; // x0
      LogicMusicData *CurrentTutorial; // x0
      DisplayObject *v27; // x20
      BadgePopup *v28; // x0
      __int64 v29; // x0
      __int64 v30; // x20
      void (__fastcall *v31)(__int64, float); // x21
      float Alpha; // s0
      float v33; // s1
      __int64 v34; // x20
      void (__fastcall *v35)(__int64, float); // x21
      float v36; // s0
      float v37; // s1
      __darwin_pthread_mutex_t *v38; // x0
      __darwin_pthread_mutex_t *v39; // x0
      __int64 v40; // x0
    
      if ( HomeScreen::sm_pPendingArenaChangedPopup )
      {
        Instance = GUI::getInstance((BadgePopup *)this);
        TotalValueOfPendingDataGained = GUI::getTotalValueOfPendingDataGained(Instance, 3);
        PageItemAt = (LogicAreaEffectObject *)PageGUI::getPageItemAt(*(this + 18), 2);
        isAnimatingNewChest = BattlePage::isAnimatingNewChest(PageItemAt);
        v9 = (LogicAreaEffectObject *)PageGUI::getPageItemAt(*(this + 18), 2);
        v10 = (BadgePopup *)BattlePage::isAnimatingArenaChange(v9);
        if ( TotalValueOfPendingDataGained <= 0 && (isAnimatingNewChest & 1) == 0 && ((unsigned __int8)v10 & 1) == 0 )
        {
          v11 = GUI::getInstance(v10);
          GUI::showPopup(v11, (DisplayObject *)HomeScreen::sm_pPendingArenaChangedPopup, 1, 0, 0);
          HomeScreen::sm_pPendingArenaChangedPopup = 0;
        }
      }
      if ( AvatarStreamManager::sm_pInstance
        && (unsigned int)AvatarStreamManager::shouldShowReceivedDonations(AvatarStreamManager::sm_pInstance) )
      {
        v12 = (DisplayObject *)operator new(272);
        v13 = (BadgePopup *)DonationBriefingPopup::DonationBriefingPopup((__int64)v12);
        v14 = GUI::getInstance(v13);
        GUI::showPopup(v14, v12, 1, 0, 0);
      }
      v15 = (NoAlliance *)SoundManager::sm_pInstance;
      MusicPassedTime = SoundManager::getMusicPassedTime((NoAlliance *)SoundManager::sm_pInstance);
      if ( MusicPassedTime >= SoundManager::getMusicDuration(v15) )
      {
        v17 = SoundManager::sm_pInstance;
        MenuMusic = (AreaEffectObject *)LogicDataTables::getMenuMusic();
        SoundManager::playMusic(v17, MenuMusic);
      }
      v19 = (AllianceStreamMessage *)GameMode::getInstance();
      if ( *((_BYTE *)v19 + 229) )
      {
        v20 = (GameMain *)GameMain::getInstance(v19);
        IsIAPWarningNeeded = (AllianceStreamMessage *)GameMain::IsIAPWarningNeeded(v20);
        if ( (_DWORD)IsIAPWarningNeeded )
        {
          v22 = (GameMain *)GameMain::getInstance(IsIAPWarningNeeded);
          GameMain::showIAPInfo(v22);
        }
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        if ( (LogicClientAvatar::getNameSetByUser(PlayerAvatar) & 1) == 0 )
        {
          v24 = GameMode::getInstance();
          TutorialManager = (DonatorEntry *)LogicGameMode::getTutorialManager(*(_QWORD *)(v24 + 112));
          CurrentTutorial = (LogicMusicData *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
          if ( CurrentTutorial )
          {
            if ( (unsigned int)LogicTutorialData::getFinishRequirement(CurrentTutorial) == 102 )
            {
              v27 = (DisplayObject *)operator new(320);
              v28 = (BadgePopup *)EnterNamePopup::EnterNamePopup((__int64)v27);
              v29 = GUI::getInstance(v28);
              GUI::showPopup(v29, v27, 1, 0, 0);
            }
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 18) + 272LL))(*(this + 18), a2);
      v30 = (__int64)*(this + 18);
      v31 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v30 + 80LL);
      Alpha = DisplayObject::getAlpha(v30);
      if ( *((_BYTE *)this + 190) )
        v33 = *(float *)&a2;
      else
        v33 = -*(float *)&a2;
      v31(v30, Alpha + (float)(v33 * 6.0));
      MainHUD::update(*(this + 19), *(float *)&a2);
      v34 = (__int64)*(this + 19);
      v35 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v34 + 80LL);
      v36 = DisplayObject::getAlpha(v34);
      if ( *((_BYTE *)this + 191) )
        v37 = *(float *)&a2;
      else
        v37 = -*(float *)&a2;
      v35(v34, v36 + (float)(v37 * 6.0));
      if ( GameSettings::sm_pInstance )
        GameSettings::refreshCachedValues((vm_address_t *)GameSettings::sm_pInstance);
      v38 = (__darwin_pthread_mutex_t *)NotificationManager::sm_pInstance;
      if ( NotificationManager::sm_pInstance )
        v38 = (__darwin_pthread_mutex_t *)NotificationManager::update(NotificationManager::sm_pInstance);
      v39 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(v38);
      if ( v39 )
      {
        v40 = AllianceStream::getInstance(v39);
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v40 + 32LL))(v40, a2);
      }
      TutorialManager::update((AllianceSearch *)(this + 1), *(float *)&a2);
      return RenderSystem::update(*(this + 21), *(float *)&a2);
    }

    __int64 __fastcall HomeScreen::getBattlePage(MessageManager **this)
    {
      return PageGUI::getPageItemAt(*(this + 18), 2);
    }

    void HomeScreen::buttonClicked()
    {
      ;
    }

    __int64 __fastcall HomeScreen::chestsChanged(MessageManager **this)
    {
      LogicAreaEffectObject *PageItemAt; // x0
    
      PageItemAt = (LogicAreaEffectObject *)PageGUI::getPageItemAt(*(this + 18), 2);
      return BattlePage::chestsChanged(PageItemAt);
    }

    LogicDoSpellCommand *__fastcall HomeScreen::showReward(LogicPageOpenedCommand *this, const ChallengeFailedMessage *a2)
    {
      __int64 Instance; // x0
      LogicDoSpellCommand *result; // x0
    
      *((_BYTE *)this + 188) = 0;
      Instance = GUI::getInstance(this);
      result = (LogicDoSpellCommand *)GUI::getPopupByType(Instance, 14);
      if ( result )
        return (LogicDoSpellCommand *)ChestOpenAnimationPopup::showReward(result, a2);
      return result;
    }

    __int64 __fastcall HomeScreen::setWaitingForResponse(__int64 this, char a2)
    {
      *(_BYTE *)(this + 188) = a2;
      return this;
    }

    void __fastcall HomeScreen::extraGoldReceived(LogicPageOpenedCommand *this, const TextField *a2, int a3)
    {
      __int64 Instance; // x0
      LogicDoSpellCommand *PopupByType; // x0
    
      Instance = GUI::getInstance(this);
      PopupByType = (LogicDoSpellCommand *)GUI::getPopupByType(Instance, 14);
      if ( PopupByType )
        ChestOpenAnimationPopup::extraGoldReceived(PopupByType, a2, a3);
    }

    void __fastcall HomeScreen::notEnoughResources(
            LogicPageOpenedCommand *this,
            const #1355 *a2,
            int a3,
            PvpMatchmakeNotificationMessage *a4,
            char a5)
    {
      BadgePopup *v5; // x19
      Stage *v6; // x20
      float v7; // s1
      const char *v8; // x1
      PvpMatchmakeNotificationMessage *v9; // x20
      LogicBuyResourcesCommand *v10; // x19
      __int64 (__fastcall *v11)(LogicBuyResourcesCommand *, _QWORD); // x20
      __int64 Instance; // x0
      __int64 (__fastcall *v13)(LogicBuyResourcesCommand *, _QWORD); // x21
      __int64 v14; // x0
      const char *v15; // x1
      String *v16; // x21
      void *String; // x20
      int v18; // w1
      const char *v19; // x1
      const String *v20; // x0
      String *v21; // x21
      ConfirmPopup *v22; // x20
      BadgePopup *v23; // x0
      __int64 v24; // x0
      _QWORD v25[3]; // [xsp+0h] [xbp-70h] BYREF
      String v26; // [xsp+18h] [xbp-58h] BYREF
      String v27; // [xsp+30h] [xbp-40h] BYREF
      float v28[2]; // [xsp+48h] [xbp-28h] BYREF
    
      if ( a4 || (a5 & 1) != 0 )
      {
        if ( a4 )
          v9 = (PvpMatchmakeNotificationMessage *)LogicCommand::clone(a4);
        else
          v9 = 0;
        v10 = (LogicBuyResourcesCommand *)operator new(40);
        LogicBuyResourcesCommand::LogicBuyResourcesCommand(v10);
        LogicBuyResourcesCommand::setCommand((__int64)v10, v9);
        v11 = *(__int64 (__fastcall **)(LogicBuyResourcesCommand *, _QWORD))(*(_QWORD *)v10 + 104LL);
        Instance = GameMode::getInstance();
        LODWORD(v11) = v11(v10, *(_QWORD *)(Instance + 112));
        v13 = *(__int64 (__fastcall **)(LogicBuyResourcesCommand *, _QWORD))(*(_QWORD *)v10 + 96LL);
        v14 = GameMode::getInstance();
        v16 = (String *)v13(v10, *(_QWORD *)(v14 + 112));
        if ( (_DWORD)v11 )
        {
          String = StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES_TEXT_ROUNDED_UP", v15);
          String::String(&v26, "<GOLD>");
          String::valueOf(v25, v16, v18);
          String::replace(&v27, String, &v26, v25);
          String::~String();
          String::~String();
        }
        else
        {
          v20 = (const String *)StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES_TEXT", v15);
          String::String(&v27, v20);
        }
        v21 = (String *)StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES_TITLE", v19);
        v22 = (ConfirmPopup *)operator new(384);
        ConfirmPopup::ConfirmPopup(v22, 11, (__int64)v10, v21, (#1271 *)&v27);
        v24 = GUI::getInstance(v23);
        GUI::showPopup(v24, v22, 1, 0, 0);
        String::~String();
      }
      else
      {
        v5 = (BadgePopup *)StringTable::getString((#1308 *)"TID_NOT_ENOUGH_RESOURCES", (const char *)a2);
        v6 = (Stage *)GUI::getInstance(v5);
        v28[0] = GUI::getDefaultFloaterPos(v6);
        v28[1] = v7;
        GUI::showFloaterTextAt((__int64)v6, v28, (const String *)v5, -1, 0.0);
        Debugger::warning((__siginfo *)"HomeScreen::notEnoughResources: pCommand is NULL.", v8);
      }
    }

    __int64 __fastcall HomeScreen::notEnoughDiamonds(__int64 a1, const char *a2)
    {
      BadgePopup *String; // x19
      Stage *Instance; // x20
      float v4; // s1
      ConfirmPopup *v5; // x19
      const char *v6; // x1
      const String *v7; // x20
      const char *v8; // x1
      const String *v9; // x0
      BadgePopup *v10; // x0
      __int64 v11; // x0
      float v13[2]; // [xsp+8h] [xbp-18h] BYREF
    
      String = (BadgePopup *)StringTable::getString((#1308 *)"TID_NOT_ENOUGH_DIAMONDS", a2);
      Instance = (Stage *)GUI::getInstance(String);
      v13[0] = GUI::getDefaultFloaterPos(Instance);
      v13[1] = v4;
      GUI::showFloaterTextAt((__int64)Instance, v13, (const String *)String, -1, 0.0);
      v5 = (ConfirmPopup *)operator new(384);
      v7 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_GO_SHOP_TITLE", v6);
      v9 = (const String *)StringTable::getString((#1308 *)"TID_CONFIRM_GO_SHOP_TEXT", v8);
      ConfirmPopup::ConfirmPopup(v5, 23, v7, v9);
      v11 = GUI::getInstance(v10);
      return GUI::showPopup(v11, v5, 1, 1, 0);
    }

    #1375 *__fastcall HomeScreen::getMovieClip(ResourceManager *a1, const String *a2, const String *a3)
    {
      #1375 *MovieClip; // x19
      #1257 *v4; // x1
    
      MovieClip = (#1375 *)ResourceManager::getMovieClip(a1, a2, a3);
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v4);
      return MovieClip;
    }

    __int64 __fastcall HomeScreen::isWaitingForResponse(LogicPageOpenedCommand *this)
    {
      return *((unsigned __int8 *)this + 188);
    }

    __int64 __fastcall HomeScreen::addEffectAt(__int64 a1, LogicKickAllianceMemberCommand *a2, float a3, float a4)
    {
      const AreaEffectObject *v6; // x2
      __int64 EffectByName; // x0
      long double v8; // q0
      long double v9; // q1
      int v11; // [xsp+8h] [xbp-18h]
      int v12; // [xsp+Ch] [xbp-14h]
    
      DisplayObject::localToGlobal(a3, a4);
      EffectByName = LogicDataTables::getEffectByName(a2, 0, v6);
      LODWORD(v9) = v11;
      LODWORD(v8) = v12;
      return HomeScreen::addEffectAt(a1, EffectByName, v8, v9);
    }

    Effect *__fastcall HomeScreen::addEffectAt(__int64 a1, const AskForTVContentMessage *a2, float a3, long double a4)
    {
      LogicJSONObject *v7; // x0
      LogicJSONObject **EffectManager; // x0
    
      v7 = *(LogicJSONObject **)(a1 + 168);
      if ( !v7 )
        return 0;
      EffectManager = (LogicJSONObject **)RenderSystem::getEffectManager(v7);
      return EffectManager::addEffectNoLoopScreen(EffectManager, a2, a3, a4, 0, 0, 0, 0);
    }

    __int64 __fastcall HomeScreen::avatarNameChanged(BadgePopup *a1, int a2)
    {
      __int64 Instance; // x0
      BadgePopup *NamePopup; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      BadgePopup *v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      Stage *v11; // x19
      const char *v12; // x1
      void *String; // x0
      __int64 result; // x0
    
      Instance = GUI::getInstance(a1);
      NamePopup = (BadgePopup *)GUI::getNamePopup(Instance);
      if ( NamePopup )
      {
        v5 = GUI::getInstance(NamePopup);
        v6 = GUI::getNamePopup(v5);
        NamePopup = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 352LL))(v6);
      }
      v7 = GUI::getInstance(NamePopup);
      v8 = (BadgePopup *)GUI::getNameChangeWindow(v7);
      if ( v8 )
      {
        v9 = GUI::getInstance(v8);
        v10 = GUI::getNameChangeWindow(v9);
        v8 = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 352LL))(v10);
      }
      if ( a2 == 1 )
      {
        v11 = (Stage *)GUI::getInstance(v8);
        String = StringTable::getString((#1308 *)"TID_NAME_CHANGED_SUCCESS", v12);
        GUI::showCenteredFloaterText(v11, (__int64)String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      result = GameStateManager::getInstance();
      if ( result )
      {
        result = GameStateManager::getInstance();
        *(_BYTE *)(result + 96) = 0;
      }
      return result;
    }

    void *__fastcall HomeScreen::getAnalyticsName(LogicPageOpenedCommand *this)
    {
      return &TITLE_HOME_SCREEN;
    }

    __int64 __fastcall HomeScreen::getRootSprite(LogicPageOpenedCommand *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall HomeScreen::getBottomGUIRootIndex(LogicPageOpenedCommand *this)
    {
      return (unsigned int)Sprite::getNumChildren(*((_QWORD *)this + 19)) - 1;
    }

    __int64 __fastcall HomeScreen::getCurrentPage(MessageManager **this)
    {
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      return PageGUI::getCurrentPageIndex(*(this + 18));
    }

    __int64 __fastcall HomeScreen::gotoPage(__int64 a1, int a2, int a3)
    {
      #1249 **v3; // x0
    
      v3 = *(#1249 ***)(a1 + 144);
      if ( a3 )
        return PageGUI::scrollToPage((__int64)v3, a2);
      else
        return PageGUI::setCurrentPage(v3, a2);
    }

    __int64 __fastcall HomeScreen::getPageGUI(LogicPageOpenedCommand *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall HomeScreen::getSpellPage(MessageManager **this)
    {
      return PageGUI::getPageItemAt(*(this + 18), 1);
    }

    __int64 __fastcall HomeScreen::getClanPage(MessageManager **this)
    {
      return PageGUI::getPageItemAt(*(this + 18), 3);
    }

    __int64 __fastcall HomeScreen::getShopPage(MessageManager **this)
    {
      return PageGUI::getPageItemAt(*(this + 18), 0);
    }

    __int64 __fastcall HomeScreen::getFeedPage(MessageManager **this)
    {
      return PageGUI::getPageItemAt(*(this + 18), 4);
    }

    __int64 __fastcall HomeScreen::getMainHUD(LogicPageOpenedCommand *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall HomeScreen::spellUpgradeDone(MessageManager **this, const TextField *a2)
    {
      __int64 Instance; // x0
      __int64 PopupByType; // x0
      UpgradeSpellPopup *v6; // x21
      BadgePopup *v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 HomeScreen; // x0
      ShopItem *PageItemAt; // x0
      const InitState *SpellData; // x0
      __int64 result; // x0
      SpellItem *v14; // x20
      int PreviousLevelUpgradeExp; // w1
    
      Instance = GUI::getInstance((BadgePopup *)this);
      PopupByType = GUI::getPopupByType(Instance, 0);
      if ( PopupByType )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)PopupByType + 352LL))(PopupByType);
      v6 = (UpgradeSpellPopup *)operator new(408);
      UpgradeSpellPopup::UpgradeSpellPopup(v6, (int *)a2);
      v8 = GUI::getInstance(v7);
      GUI::showPopup(v8, v6, 0, 0, 0);
      v9 = GameMode::getInstance();
      HomeScreen = GameMode::getHomeScreen(v9);
      PageItemAt = (ShopItem *)PageGUI::getPageItemAt(*(MessageManager **)(HomeScreen + 144), 1);
      SpellPage::showFusionEffect(PageItemAt, a2);
      SpellData = (const InitState *)LogicSpell::getSpellData(a2);
      HomeScreen::refreshSpell((LogicPageOpenedCommand *)this, SpellData);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      result = PageGUI::getCurrentPageIndex(*(this + 18));
      if ( (_DWORD)result == 1 )
      {
        result = LogicSpell::getListener(a2);
        if ( result )
        {
          v14 = (SpellItem *)(result - 264);
          if ( result != 264 )
          {
            PreviousLevelUpgradeExp = LogicSpell::getPreviousLevelUpgradeExp(a2);
            return SpellItem::addPendingExpGained(v14, PreviousLevelUpgradeExp);
          }
        }
      }
      return result;
    }

    void __fastcall HomeScreen::refreshSpell(LogicPageOpenedCommand *this, const InitState *a2)
    {
      CharacterAnimator *Instance; // x0
      #1314 *PageItemAt; // x0
    
      Instance = (CharacterAnimator *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)this);
      if ( Instance )
        AllianceStream::refreshSpell(Instance, a2);
      PageItemAt = (#1314 *)PageGUI::getPageItemAt(*((MessageManager **)this + 18), 0);
      if ( PageItemAt )
        ShopPage::refreshSpells(PageItemAt);
    }

    __int64 __fastcall HomeScreen::chestClaimed(
            MessageManager **this,
            const LogicSpawnPointData *a2,
            LogicSpawnPointData *a3)
    {
      BattlePage *PageItemAt; // x0
    
      if ( (_DWORD)a3 != 1 )
        return ChestItem::chestClaimed(a2);
      PageItemAt = (BattlePage *)PageGUI::getPageItemAt(*(this + 18), 2);
      return BattlePage::chestClaimed(PageItemAt, a2);
    }

    LogicDataTables *__fastcall HomeScreen::allianceCreated(MessageManager **this)
    {
      Stage *Instance; // x20
      float v3; // s1
      const char *v4; // x1
      const String *String; // x0
      __int64 v6; // x0
      __int64 HomeScreen; // x0
      ColorTransform *PageItemAt; // x0
      float v10[2]; // [xsp+8h] [xbp-18h] BYREF
    
      Instance = (Stage *)GUI::getInstance((BadgePopup *)this);
      v10[0] = GUI::getDefaultFloaterPos(Instance);
      v10[1] = v3;
      String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_CREATE_OK", v4);
      GUI::showFloaterTextAt((__int64)Instance, v10, String, -1, 0.0);
      v6 = GameMode::getInstance();
      HomeScreen = GameMode::getHomeScreen(v6);
      MainHUD::refreshAllianceStatus(*(LogicClientAvatar **)(HomeScreen + 152));
      PageItemAt = (ColorTransform *)PageGUI::getPageItemAt(*(this + 18), 3);
      return ClanPage::refreshAllianceStatus(PageItemAt);
    }

    LogicDataTables *__fastcall HomeScreen::allianceJoined(MessageManager **this)
    {
      __int64 PlayerAvatar; // x0
      tween::Bounce *v3; // x21
      const char *v4; // x1
      const String *String; // x0
      BadgePopup *v6; // x0
      Stage *Instance; // x20
      float v8; // s1
      __int64 AllianceName; // x0
      __darwin_pthread_mutex_t *v10; // x0
      CharacterAnimator *v11; // x0
      __int64 v12; // x0
      __int64 HomeScreen; // x0
      ColorTransform *PageItemAt; // x0
      String v16; // [xsp+0h] [xbp-70h] BYREF
      String v17; // [xsp+18h] [xbp-58h] BYREF
      float v18[2]; // [xsp+30h] [xbp-40h] BYREF
      String v19; // [xsp+38h] [xbp-38h] BYREF
    
      GameMode::getInstance();
      PlayerAvatar = GameMode::getPlayerAvatar();
      v3 = (tween::Bounce *)PlayerAvatar;
      if ( PlayerAvatar )
      {
        PlayerAvatar = LogicClientAvatar::isInAlliance((tween::Bounce *)PlayerAvatar);
        if ( (_DWORD)PlayerAvatar )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_JOINED", v4);
          v6 = (BadgePopup *)String::String(&v19, String);
          Instance = (Stage *)GUI::getInstance(v6);
          v18[0] = GUI::getDefaultFloaterPos(Instance);
          v18[1] = v8;
          String::String(&v16, "<name>");
          AllianceName = LogicClientAvatar::getAllianceName(v3);
          String::replace(&v17, &v19, &v16, AllianceName);
          GUI::showFloaterTextAt((__int64)Instance, v18, &v17, -1, 0.0);
          String::~String();
          String::~String();
          String::~String();
        }
      }
      v10 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)PlayerAvatar);
      if ( v10 )
      {
        v11 = (CharacterAnimator *)AllianceStream::getInstance(v10);
        AllianceStream::clearLastSeenItem(v11);
      }
      v12 = GameMode::getInstance();
      HomeScreen = GameMode::getHomeScreen(v12);
      MainHUD::refreshAllianceStatus(*(LogicClientAvatar **)(HomeScreen + 152));
      PageItemAt = (ColorTransform *)PageGUI::getPageItemAt(*(this + 18), 3);
      return ClanPage::refreshAllianceStatus(PageItemAt);
    }

    LogicDataTables *__fastcall HomeScreen::allianceLeft(MessageManager **this, int a2)
    {
      Stage *Instance; // x20
      const char *v5; // x1
      float DefaultFloaterPos; // s0
      int v7; // s1
      const String *String; // x2
      float *v9; // x1
      __darwin_pthread_mutex_t *v10; // x0
      __darwin_pthread_mutex_t *v11; // x0
      CharacterAnimator *v12; // x0
      __darwin_pthread_mutex_t *v13; // x0
      CharacterAnimator *v14; // x0
      __int64 v15; // x0
      __int64 HomeScreen; // x0
      ColorTransform *PageItemAt; // x0
      _DWORD v19[2]; // [xsp+0h] [xbp-30h] BYREF
      _DWORD v20[2]; // [xsp+8h] [xbp-28h] BYREF
    
      Instance = (Stage *)GUI::getInstance((BadgePopup *)this);
      DefaultFloaterPos = GUI::getDefaultFloaterPos(Instance);
      if ( a2 )
      {
        *(float *)v20 = DefaultFloaterPos;
        v20[1] = v7;
        String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_KICK", v5);
        v9 = (float *)v20;
      }
      else
      {
        *(float *)v19 = DefaultFloaterPos;
        v19[1] = v7;
        String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_LEFT", v5);
        v9 = (float *)v19;
      }
      GUI::showFloaterTextAt((__int64)Instance, v9, String, -1, 0.0);
      v11 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(v10);
      if ( v11 )
      {
        v12 = (CharacterAnimator *)AllianceStream::getInstance(v11);
        v13 = (__darwin_pthread_mutex_t *)AllianceStream::removeAllEntries(v12);
        v14 = (CharacterAnimator *)AllianceStream::getInstance(v13);
        AllianceStream::clearLastSeenItem(v14);
      }
      v15 = GameMode::getInstance();
      HomeScreen = GameMode::getHomeScreen(v15);
      MainHUD::refreshAllianceStatus(*(LogicClientAvatar **)(HomeScreen + 152));
      PageItemAt = (ColorTransform *)PageGUI::getPageItemAt(*(this + 18), 3);
      return ClanPage::refreshAllianceStatus(PageItemAt);
    }

    vm_address_t *__fastcall HomeScreen::allianceSettingsChanged(MessageManager **this)
    {
      BadgePopup *Instance; // x0
      BadgePopup *TopPopup; // x0
      BadgePopup *v4; // x0
      __int64 v5; // x0
      BadgePopup *v6; // x0
      BadgePopup *v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 HomeScreen; // x0
      ColorTransform *PageItemAt; // x0
      __int64 v12; // x1
      int v13; // w2
    
      Instance = (BadgePopup *)GUI::getInstance((BadgePopup *)this);
      TopPopup = (BadgePopup *)GUI::getTopPopup(Instance);
      if ( TopPopup )
      {
        v4 = (BadgePopup *)GUI::getInstance(TopPopup);
        v5 = GUI::getTopPopup(v4);
        v6 = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 328LL))(v5);
        if ( (_DWORD)v6 == 32 )
        {
          v7 = (BadgePopup *)GUI::getInstance(v6);
          v8 = GUI::getTopPopup(v7);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 352LL))(v8);
        }
      }
      v9 = GameMode::getInstance();
      HomeScreen = GameMode::getHomeScreen(v9);
      MainHUD::refreshAllianceStatus(*(LogicClientAvatar **)(HomeScreen + 152));
      PageItemAt = (ColorTransform *)PageGUI::getPageItemAt(*(this + 18), 3);
      return ClanPage::reloadAllianceInfo(PageItemAt, v12, v13);
    }

    __int64 __fastcall HomeScreen::enterMatchmaking(MessageManager **this)
    {
      LogicAreaEffectObject *PageItemAt; // x0
    
      PageItemAt = (LogicAreaEffectObject *)PageGUI::getPageItemAt(*(this + 18), 2);
      return BattlePage::setMatchmaking(PageItemAt, 1);
    }

    void __fastcall HomeScreen::onNotEnoughWorkers(LogicPageOpenedCommand *this, const PvpMatchmakeNotificationMessage *a2)
    {
      ;
    }

    void HomeScreen::addResourcesToLoad()
    {
      ;
    }

    __int64 __fastcall HomeScreen::matchmakingGoldBought(LogicPageOpenedCommand *this, const char *a2)
    {
      return Debugger::warning((__siginfo *)"matchmakingGoldBought called, its DEPRECATE!", a2);
    }

    __int64 __fastcall HomeScreen::resourcePackBought(MessageManager **this, const #1363 *a2)
    {
      const char *v4; // x1
      const String *String; // x0
      int v6; // w1
      #1308 *TID; // x0
      const String *v8; // x1
      #1308 *v9; // x0
      BadgePopup *v10; // x0
      Stage *Instance; // x21
      float v12; // s1
      __int64 result; // x0
      float v14[2]; // [xsp+8h] [xbp-B8h] BYREF
      String v15; // [xsp+10h] [xbp-B0h] BYREF
      String v16; // [xsp+28h] [xbp-98h] BYREF
      String v17; // [xsp+40h] [xbp-80h] BYREF
      String v18; // [xsp+58h] [xbp-68h] BYREF
      String v19; // [xsp+70h] [xbp-50h] BYREF
      String v20; // [xsp+88h] [xbp-38h] BYREF
    
      if ( GUI::getInstance((BadgePopup *)this) )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_RESOURCES_BOUGHT", v4);
        String::String(&v20, String);
        String::String(&v18, "<name>");
        String::valueOf(&v17, (String *)*((unsigned int *)a2 + 28), v6);
        String::replace(&v19, &v20, &v18, &v17);
        String::operator=(&v20);
        String::~String();
        String::~String();
        String::~String();
        String::String(&v15, "<type>");
        TID = (#1308 *)LogicData::getTID(*((_QWORD *)a2 + 13));
        v9 = StringTable::getString(TID, v8);
        String::replace(&v16, &v20, &v15, v9);
        String::operator=(&v20);
        String::~String();
        String::~String();
        Instance = (Stage *)GUI::getInstance(v10);
        v14[0] = GUI::getDefaultFloaterPos(Instance);
        v14[1] = v12;
        GUI::showFloaterTextAt((__int64)Instance, v14, &v20, -1, 0.0);
        String::~String();
      }
      result = PageGUI::getPageItemAt(*(this + 18), 0);
      if ( result )
        return ShopPage::resourcesBought(result, *((_DWORD *)a2 + 28), *((LogicPageOpenedCommand **)a2 + 13));
      return result;
    }

    sigval __fastcall HomeScreen::cardBought(MessageManager **this, const InitState *a2)
    {
      BadgePopup *Instance; // x0
      Stage *v5; // x21
      float v6; // s1
      const char *v7; // x1
      void *String; // x22
      #1308 *TID; // x0
      const String *v10; // x1
      #1308 *v11; // x0
      #1314 *PageItemAt; // x0
      __int64 v13; // x0
      NoAlliance *v14; // x20
      LogicGameObjectManagerListener *Rarity; // x0
      AreaEffectObject *BuySound; // x0
      String v18; // [xsp+8h] [xbp-58h] BYREF
      String v19; // [xsp+20h] [xbp-40h] BYREF
      float v20[2]; // [xsp+38h] [xbp-28h] BYREF
    
      Instance = (BadgePopup *)GUI::getInstance((BadgePopup *)this);
      if ( Instance )
      {
        v5 = (Stage *)GUI::getInstance(Instance);
        v20[0] = GUI::getDefaultFloaterPos(v5);
        v20[1] = v6;
        String = StringTable::getString((#1308 *)"TID_CARD_BOUGHT", v7);
        String::String(&v18, "<name>");
        TID = (#1308 *)LogicData::getTID((__int64)a2);
        v11 = StringTable::getString(TID, v10);
        String::replace(&v19, String, &v18, v11);
        GUI::showFloaterTextAt((__int64)v5, v20, &v19, -1, 0.0);
        String::~String();
        String::~String();
      }
      PageItemAt = (#1314 *)PageGUI::getPageItemAt(*(this + 18), 0);
      ShopPage::refreshSpells(PageItemAt);
      v13 = PageGUI::getPageItemAt(*(this + 18), 0);
      ShopPage::cardBought(v13, (__int64)a2);
      v14 = (NoAlliance *)SoundManager::sm_pInstance;
      Rarity = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(a2);
      BuySound = (AreaEffectObject *)LogicRarityData::getBuySound(Rarity);
      return SoundManager::playSound(v14, BuySound, 0xFFFFFFFFLL, 1.0, 0.0);
    }

    __int64 __fastcall HomeScreen::newCardBought(__int64 a1, const LogicSpellData *a2)
    {
      SpellPage *PageItemAt; // x0
    
      PageItemAt = (SpellPage *)PageGUI::getPageItemAt(*(MessageManager **)(a1 + 144), 1);
      return SpellPage::newCardBought(PageItemAt, a2);
    }

    void __fastcall HomeScreen::chestBought(LogicPageOpenedCommand *this, const LogicRefreshAchievementsCommand *a2)
    {
      ;
    }

    __int64 __fastcall HomeScreen::onChestLimitFull(__int64 a1, const char *a2)
    {
      const String *String; // x20
      const char *v3; // x1
      const String *v4; // x21
      ConfirmPopup *v5; // x19
      BadgePopup *v6; // x0
      __int64 Instance; // x0
    
      String = (const String *)StringTable::getString((#1308 *)"TID_NEED_TO_REMOVE_CHESTS_TITLE", a2);
      v4 = (const String *)StringTable::getString((#1308 *)"TID_NEED_TO_REMOVE_CHESTS_TEXT", v3);
      v5 = (ConfirmPopup *)operator new(384);
      ConfirmPopup::ConfirmPopup(v5, 9, String, v4);
      Instance = GUI::getInstance(v6);
      return GUI::showPopup(Instance, v5, 1, 0, 0);
    }

    __int64 __fastcall HomeScreen::getRenderSystem(LogicPageOpenedCommand *this)
    {
      return *((_QWORD *)this + 21);
    }

    __int64 __fastcall HomeScreen::setPagesVisible(__int64 this, char a2)
    {
      *(_BYTE *)(this + 190) = a2;
      return this;
    }

    __int64 __fastcall HomeScreen::setHUDVisible(__int64 this, char a2)
    {
      *(_BYTE *)(this + 191) = a2;
      return this;
    }

    __int64 __fastcall HomeScreen::spellPlaceChanged(MessageManager **this, const TextField *a2, bool a3)
    {
      ShopItem *PageItemAt; // x0
    
      PageItemAt = (ShopItem *)PageGUI::getPageItemAt(*(this + 18), 1);
      return SpellPage::spellPlaceChanged(PageItemAt, a2, a3);
    }

    __int64 __fastcall HomeScreen::spellUpgraded(LogicPageOpenedCommand *this, const TextField *a2)
    {
      __int64 Listener; // x0
    
      Listener = LogicSpell::getListener(a2);
      if ( Listener )
        return SpellItem::levelChanged((SpellItem *)(Listener - 264));
      else
        return SpellItem::levelChanged(0);
    }

    __int64 __fastcall HomeScreen::spellCollectionChanged(MessageManager **this)
    {
      SpellPage *PageItemAt; // x0
    
      PageItemAt = (SpellPage *)PageGUI::getPageItemAt(*(this + 18), 1);
      return SpellPage::collectionChanged(PageItemAt);
    }

    __int64 __fastcall HomeScreen::deckChanged(MessageManager **this)
    {
      SpellPage *PageItemAt; // x0
    
      PageItemAt = (SpellPage *)PageGUI::getPageItemAt(*(this + 18), 1);
      return SpellPage::deckChanged(PageItemAt);
    }

    void __fastcall HomeScreen::starCollectionIncreased(__int64 a1, int a2)
    {
      int v3; // w23
      LogicAreaEffectObject *PageItemAt; // x0
      __int64 v5; // x20
      int v6; // w21
      float v7; // s10
      int v8; // w23
      float v9; // s8
      BadgePopup *v10; // x0
      __int64 Instance; // x0
      Rect v12[2]; // [xsp+0h] [xbp-80h] BYREF
    
      v3 = a2 - 1;
      if ( a2 >= 1 )
      {
        PageItemAt = (LogicAreaEffectObject *)PageGUI::getPageItemAt(*(MessageManager **)(a1 + 144), 2);
        v5 = *(_QWORD *)(BattlePage::getPlayButton(PageItemAt) + 96);
        Rect::Rect(v12);
        DisplayObject::getBounds(v5, 0, v12);
        v6 = 0;
        v7 = (float)((float)v3 * 80.0) * 0.5;
        v8 = DataGained::MAX_RANDOM_OFFSET_PERCENT;
        DataGained::MAX_RANDOM_OFFSET_PERCENT = 0;
        do
        {
          v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(v12)));
          Instance = GUI::getInstance(v10);
          GUI::addDataGained(
            Instance,
            v5,
            (String *)3,
            1,
            0,
            (float)((float)v6 * 80.0) - v7,
            v9 * -0.8,
            (float)((float)v6 * 0.095) + 0.4,
            (float)v6 * 0.32);
          ++v6;
        }
        while ( v6 < a2 );
        DataGained::MAX_RANDOM_OFFSET_PERCENT = v8;
        Rect::~Rect(v12);
      }
    }

    LogicAreaEffectObject *__fastcall HomeScreen::onArenaChanged(
            MessageManager **a1,
            const DonateItem *a2,
            const DonateItem *a3)
    {
      ChatStreamItem *v6; // x22
      LogicAreaEffectObject *result; // x0
    
      if ( GUI::getInstance((BadgePopup *)a1) && a2 && a3 )
      {
        if ( HomeScreen::sm_pPendingArenaChangedPopup )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)HomeScreen::sm_pPendingArenaChangedPopup + 8LL))(HomeScreen::sm_pPendingArenaChangedPopup);
        HomeScreen::sm_pPendingArenaChangedPopup = 0;
        v6 = (ChatStreamItem *)operator new(336);
        ArenaChangedPopup::ArenaChangedPopup(v6, a2, a3);
        HomeScreen::sm_pPendingArenaChangedPopup = (__int64)v6;
      }
      result = (LogicAreaEffectObject *)PageGUI::getPageItemAt(a1[18], 2);
      if ( result )
        return (LogicAreaEffectObject *)BattlePage::refreshArena(result);
      return result;
    }

    void __fastcall HomeScreen::onDiamondsBought(MessageManager **this, String *a2)
    {
      const AreaEffectObject *v4; // x2
      AreaEffectObject *SoundByName; // x21
      const AreaEffectObject *v6; // x2
      AreaEffectObject *v7; // x21
      BadgePopup *sival_ptr; // x0
      const char *v9; // x1
      const String *String; // x0
      int v11; // w1
      BadgePopup *v12; // x0
      Stage *Instance; // x0
      LogicKickAllianceMemberCommand *PageItemAt; // x0
      __int64 v15; // x20
      LogicPageOpenedCommand *DiamondData; // x0
      __int64 v17; // x0
      _QWORD v18[3]; // [xsp+0h] [xbp-B0h] BYREF
      String v19; // [xsp+18h] [xbp-98h] BYREF
      String v20; // [xsp+30h] [xbp-80h] BYREF
      String v21; // [xsp+48h] [xbp-68h] BYREF
      String v22; // [xsp+60h] [xbp-50h] BYREF
      String v23; // [xsp+78h] [xbp-38h] BYREF
    
      if ( GameMode::getInstance() )
      {
        String::String(&v23, "Get diamonds");
        SoundByName = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v23, 0, v4);
        String::~String();
        if ( SoundByName && SoundManager::sm_pInstance )
          SoundManager::playSound((NoAlliance *)SoundManager::sm_pInstance, SoundByName, 0xFFFFFFFFLL, 1.0, 0.0);
        String::String(&v22, "sound_purchase_gems");
        v7 = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v22, 0, v6);
        String::~String();
        if ( v7 )
        {
          sival_ptr = (BadgePopup *)SoundManager::sm_pInstance;
          if ( SoundManager::sm_pInstance )
            sival_ptr = (BadgePopup *)SoundManager::playSound(
                                        (NoAlliance *)SoundManager::sm_pInstance,
                                        v7,
                                        0xFFFFFFFFLL,
                                        1.0,
                                        0.0).sival_ptr;
        }
        if ( GUI::getInstance(sival_ptr) )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_DIAMONDS_BOUGHT_SUCCESSFULLY", v9);
          String::String(&v21, String);
          String::String(&v19, "<number>");
          String::valueOf(v18, a2, v11);
          String::replace(&v20, &v21, &v19, v18);
          String::operator=(&v21);
          String::~String();
          String::~String();
          String::~String();
          Instance = (Stage *)GUI::getInstance(v12);
          GUI::showCenteredFloaterText(Instance, (__int64)&v21, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          String::~String();
        }
        PageItemAt = (LogicKickAllianceMemberCommand *)PageGUI::getPageItemAt(*(this + 18), 0);
        v15 = (__int64)PageItemAt;
        if ( PageItemAt )
        {
          DiamondData = (LogicPageOpenedCommand *)LogicDataTables::getDiamondData(PageItemAt);
          ShopPage::resourcesBought(v15, (int)a2, DiamondData);
        }
        v17 = GameMode::getInstance();
        if ( (unsigned int)LogicGameMode::getState(*(_QWORD *)(v17 + 112)) )
        {
          if ( HelpshiftManager::sm_pInstance )
            HelpshiftManager::storeAvatarTier((vm_address_t *)HelpshiftManager::sm_pInstance);
        }
      }
    }

    void __fastcall HomeScreen::pingUpdated(LogicPageOpenedCommand *this)
    {
      ;
    }

    __int64 __fastcall HomeScreen::spellCollectionSorted(MessageManager **this)
    {
      SpellPage *PageItemAt; // x0
    
      PageItemAt = (SpellPage *)PageGUI::getPageItemAt(*(this + 18), 1);
      return SpellPage::collectionSorted(PageItemAt);
    }

    __int64 __fastcall HomeScreen::addPendingDataGainedFromBattle(int a1, int a2)
    {
      _DWORD v3[2]; // [xsp+8h] [xbp-8h] BYREF
    
      v3[0] = a1;
      v3[1] = a2;
      return LogicArrayList<HomeScreen::PendingDataGained>::add(&HomeScreen::sm_pendingDataGainedBattle, v3);
    }

    void __fastcall HomeScreen::spellRecieved(LogicPageOpenedCommand *this, const String *a2, const InitState *a3)
    {
      const String *String; // x0
      #1308 *TID; // x0
      const String *v7; // x1
      #1308 *v8; // x0
      BadgePopup *v9; // x0
      Stage *Instance; // x19
      float v11; // s1
      float v12[2]; // [xsp+0h] [xbp-90h] BYREF
      String v13; // [xsp+8h] [xbp-88h] BYREF
      String v14; // [xsp+20h] [xbp-70h] BYREF
      String v15; // [xsp+38h] [xbp-58h] BYREF
      String v16; // [xsp+50h] [xbp-40h] BYREF
      String v17; // [xsp+68h] [xbp-28h] BYREF
    
      String = (const String *)StringTable::getString((#1308 *)"TID_DONATION_RECEIVED", (const char *)a2);
      String::String(&v17, String);
      String::String(&v15, "<name>");
      String::replace(&v16, &v17, &v15, a2);
      String::operator=(&v17);
      String::~String();
      String::~String();
      String::String(&v13, "<spell>");
      TID = (#1308 *)LogicData::getTID((__int64)a3);
      v8 = StringTable::getString(TID, v7);
      String::replace(&v14, &v17, &v13, v8);
      String::operator=(&v17);
      String::~String();
      String::~String();
      Instance = (Stage *)GUI::getInstance(v9);
      v12[0] = GUI::getDefaultFloaterPos(Instance);
      v12[1] = v11;
      GUI::showFloaterTextAt((__int64)Instance, v12, &v17, -1, 0.0);
      String::~String();
    }

    __darwin_pthread_mutex_t *__fastcall HomeScreen::rewardFromDonate(
            __darwin_pthread_mutex_t *a1,
            int a2,
            const LogicLong *a3,
            const LogicSpellData *a4)
    {
      __darwin_pthread_mutex_t *result; // x0
      AllianceStream *Instance; // x0
    
      result = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(a1);
      if ( result )
      {
        Instance = (AllianceStream *)AllianceStream::getInstance(result);
        return (__darwin_pthread_mutex_t *)AllianceStream::rewardFromDonate(Instance, a2, a3, a4);
      }
      return result;
    }

    BadgePopup *__fastcall HomeScreen::spellsChanged(MessageManager **a1)
    {
      BadgePopup *Instance; // x0
      __int64 v3; // x0
      BadgePopup *PopupByType; // x0
      BadgePopup *v5; // x20
      __int64 v6; // x0
      BadgePopup *v7; // x0
      BadgePopup *v8; // x20
      __int64 v9; // x0
      __int64 v10; // x0
      _DWORD *v11; // x20
      BadgePopup *PageItemAt; // x0
      #1314 *v13; // x0
      BadgePopup *result; // x0
      Stage *v15; // x19
      const char *v16; // x1
      void *String; // x1
    
      Instance = (BadgePopup *)GUI::getInstance((BadgePopup *)a1);
      if ( Instance )
      {
        v3 = GUI::getInstance(Instance);
        PopupByType = (BadgePopup *)GUI::getPopupByType(v3, 27);
        v5 = PopupByType;
        if ( PopupByType )
        {
          PopupByType = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)PopupByType + 328LL))(PopupByType);
          if ( (_DWORD)PopupByType == 27 )
          {
            PopupByType = (BadgePopup *)*((_QWORD *)v5 + 29);
            if ( PopupByType )
            {
              PopupByType = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)PopupByType + 64LL))(PopupByType);
              if ( (_DWORD)PopupByType )
                PopupByType = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v5 + 352LL))(v5);
            }
          }
        }
        v6 = GUI::getInstance(PopupByType);
        v7 = (BadgePopup *)GUI::getPopupByType(v6, 8);
        v8 = v7;
        if ( v7 )
        {
          v7 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v7 + 328LL))(v7);
          if ( (_DWORD)v7 == 8 && *((_DWORD *)v8 + 15) == 11 )
          {
            v7 = (BadgePopup *)*((_QWORD *)v8 + 29);
            if ( v7 )
            {
              v7 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v7 + 32LL))(v7);
              if ( (_DWORD)v7 == 514 )
                v7 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)v8 + 352LL))(v8);
            }
          }
        }
        v9 = GUI::getInstance(v7);
        v10 = GUI::getPopupByType(v9, 8);
        v11 = (_DWORD *)v10;
        if ( v10 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 328LL))(v10) == 8 && v11[15] == 23 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 352LL))(v11);
      }
      PageItemAt = (BadgePopup *)PageGUI::getPageItemAt(a1[18], 0);
      if ( PageItemAt )
      {
        v13 = (#1314 *)PageGUI::getPageItemAt(a1[18], 0);
        ShopPage::refreshSpells(v13);
      }
      result = (BadgePopup *)GUI::getInstance(PageItemAt);
      if ( result )
      {
        v15 = (Stage *)GUI::getInstance(result);
        String = StringTable::getString((#1308 *)"TID_SHOP_SPELLS_REFRESHED", v16);
        return (BadgePopup *)GUI::showCenteredFloaterText(
                               v15,
                               (__int64)String,
                               0xFFFFFFFFLL,
                               COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      return result;
    }

    __int64 __fastcall HomeScreen::startChallengeDialog(__darwin_pthread_mutex_t *a1)
    {
      __darwin_pthread_mutex_t *Instance; // x0
      const char *v2; // x1
    
      Instance = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(a1);
      if ( !Instance )
        Debugger::error((__siginfo *)"alliance stream should not be null when starting a challenge", v2);
      return AllianceStream::setChallengeActive(Instance, 1);
    }

    void __fastcall HomeScreen::achievementCompleted(BadgePopup *a1, tween::Bounce *a2, __int64 a3)
    {
      __int64 Id; // x20
      tween::Bounce *PlayerAvatar; // x0
      __int64 v7; // x0
      __int64 Instance; // x0
      BadgePopup *State; // x0
      __int64 v10; // x0
    
      if ( GUI::getInstance(a1) )
      {
        Id = LogicClientAvatar::getId(a2);
        GameMode::getInstance();
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
        v7 = LogicClientAvatar::getId(PlayerAvatar);
        if ( (unsigned int)LogicLong::equals(Id, v7) )
        {
          Instance = GameMode::getInstance();
          State = (BadgePopup *)LogicGameMode::getState(*(_QWORD *)(Instance + 112));
          if ( (_DWORD)State == 1 )
          {
            v10 = GUI::getInstance(State);
            GUI::showAchievementCompleted(v10, a3);
          }
        }
      }
      if ( GameCenterManager::sm_pInstance )
        GameCenterManager::refreshAchievement(GameCenterManager::sm_pInstance, a3);
    }

    void __fastcall HomeScreen::achievementRewardClaimed(BadgePopup *a1, const #1351 *a2)
    {
      BadgePopup *Instance; // x0
      BadgePopup *v4; // x0
      __int64 TopPopup; // x0
      BadgePopup *v6; // x0
      BadgePopup *v7; // x0
      EventScreenItem *v8; // x0
      BadgePopup *v9; // x0
      BadgePopup *v10; // x0
      EventScreenItem *v11; // x0
    
      Instance = (BadgePopup *)GUI::getInstance(a1);
      if ( Instance )
      {
        v4 = (BadgePopup *)GUI::getInstance(Instance);
        TopPopup = GUI::getTopPopup(v4);
        v6 = (BadgePopup *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 328LL))(TopPopup);
        if ( (_DWORD)v6 == 42 )
        {
          v7 = (BadgePopup *)GUI::getInstance(v6);
          v8 = (EventScreenItem *)GUI::getTopPopup(v7);
          v9 = (BadgePopup *)AchievementsPopup::achievementClaimed(v8, a2);
          v10 = (BadgePopup *)GUI::getInstance(v9);
          v11 = (EventScreenItem *)GUI::getTopPopup(v10);
          AchievementsPopup::refresh(v11);
        }
      }
      if ( GameCenterManager::sm_pInstance )
        GameCenterManager::refreshAchievement(GameCenterManager::sm_pInstance, (__int64)a2);
    }

}; // end class HomeScreen
