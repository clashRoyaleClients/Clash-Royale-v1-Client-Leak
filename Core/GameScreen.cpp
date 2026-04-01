class GameScreen
{
public:

    __int64 GameScreen::touchMoved()
    {
      return 0;
    }

    __int64 GameScreen::touchReleased()
    {
      return 0;
    }

    void __fastcall GameScreen::touchCancelled(LogicChest *this)
    {
      ;
    }

    void __fastcall GameScreen::pingUpdated(LogicChest *this)
    {
      ;
    }

    _QWORD *__fastcall GameScreen::GameScreen(_QWORD *a1, __int64 a2)
    {
      LogicGameListener::LogicGameListener((LogicSummoner *)a1);
      *a1 = off_100467950;
      TutorialManager::TutorialManager((TutorialManager *)(a1 + 1));
      a1[16] = a2;
      return a1;
    }

    __int64 __fastcall GameScreen::getGame(LogicChest *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall GameScreen::getLogicGame(LogicChest *this)
    {
      return *(_QWORD *)(*((_QWORD *)this + 16) + 112LL);
    }

    __int64 __fastcall GameScreen::enter(LogicGameListener *a1)
    {
      return LogicGameMode::setGameListener(*(LogicGameMode **)(*((_QWORD *)a1 + 16) + 112LL), a1);
    }

    __int64 __fastcall GameScreen::exit(__int64 a1)
    {
      return LogicGameMode::setGameListener(*(LogicGameMode **)(*(_QWORD *)(a1 + 128) + 112LL), 0);
    }

    __int64 GameScreen::touchPressed()
    {
      return 0;
    }

    void __fastcall GameScreen::showFloaterText(BadgePopup *a1, #1308 *a2)
    {
      Stage *Instance; // x20
      float v4; // s1
      const String *v5; // x1
      #1308 *String; // x0
      float v7[2]; // [xsp+8h] [xbp-18h] BYREF
    
      Instance = (Stage *)GUI::getInstance(a1);
      v7[0] = GUI::getDefaultFloaterPos(Instance);
      v7[1] = v4;
      String = StringTable::getString(a2, v5);
      GUI::showFloaterTextAt((__int64)Instance, v7, (const String *)String, -1, 0.0);
    }

    __int64 __fastcall GameScreen::tutorialStarted(__int64 a1, LogicMusicData *a2)
    {
      return TutorialManager::tutorialStarted((_QWORD *)(a1 + 8), a2);
    }

    LogicPageOpenedCommand *__fastcall GameScreen::tutorialFinished(__int64 a1, const LogicMusicData *a2)
    {
      return TutorialManager::tutorialFinished(a1 + 8, a2);
    }

    __int64 __fastcall GameScreen::playSound(__int64 a1, __int64 a2)
    {
      return SoundManager::playSound(
               SoundManager::sm_pInstance,
               a2,
               0xFFFFFFFFLL,
               1.0,
               COERCE_LONG_DOUBLE((unsigned __int128)0));
    }

    __int64 __fastcall GameScreen::achievementCompleted(BadgePopup *a1, tween::Bounce *a2, const LogicAchievementData *a3)
    {
      vm_address_t *Id; // x20
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 v8; // x0
      vm_address_t *v9; // x0
      __int64 v10; // x0
      BadgePopup *State; // x0
      __int64 v12; // x0
      __int64 result; // x0
    
      if ( GUI::getInstance(a1) )
      {
        Id = (vm_address_t *)LogicClientAvatar::getId(a2);
        Instance = GameMode::getInstance(Id);
        PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
        v8 = LogicClientAvatar::getId(PlayerAvatar);
        v9 = (vm_address_t *)LogicLong::equals(Id, v8);
        if ( (_DWORD)v9 )
        {
          v10 = GameMode::getInstance(v9);
          State = (BadgePopup *)LogicGameMode::getState(*(_QWORD *)(v10 + 112));
          if ( (_DWORD)State == 1 )
          {
            v12 = GUI::getInstance(State);
            GUI::showAchievementCompleted(v12, (__int64)a3);
          }
        }
      }
      result = GameCenterManager::sm_pInstance;
      if ( GameCenterManager::sm_pInstance )
        return GameCenterManager::refreshAchievement((GameCenterManager *)GameCenterManager::sm_pInstance, a3);
      return result;
    }

    _QWORD *__fastcall GameScreen::~GameScreen(_QWORD *a1)
    {
      *a1 = off_100467950;
      TutorialManager::~TutorialManager(a1 + 1);
      return a1;
    }

    void __fastcall GameScreen::~GameScreen(_QWORD *a1)
    {
      *a1 = off_100467950;
      TutorialManager::~TutorialManager(a1 + 1);
      operator delete(a1);
    }

    void __fastcall GameScreen::debugDraw(LogicChest *this)
    {
      ;
    }

}; // end class GameScreen
