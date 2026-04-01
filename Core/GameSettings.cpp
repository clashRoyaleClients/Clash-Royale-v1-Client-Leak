class GameSettings
{
public:

    void __fastcall GameSettings::GameSettings(GameSettings *this, const String *a2)
    {
      const String *v3; // x1
      const String *v4; // x1
      const String *v5; // x1
      const String *v6; // x1
      const String *v7; // x1
      const String *v8; // x1
      const String *v9; // x1
      const String *v10; // x1
      const String *v11; // x1
      const String *v12; // x1
      const String *v13; // x1
      const String *v14; // x1
      String v15; // [xsp+0h] [xbp-A0h] BYREF
      String v16; // [xsp+18h] [xbp-88h] BYREF
      String v17; // [xsp+30h] [xbp-70h] BYREF
      String v18; // [xsp+48h] [xbp-58h] BYREF
      String v19; // [xsp+60h] [xbp-40h] BYREF
      String v20; // [xsp+78h] [xbp-28h] BYREF
    
      *((_BYTE *)this + 24) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_SFX_VOLUME, a2) )
      {
        Application::getKeyValue((Application *)&SETTING_SFX_VOLUME, v3);
        *(_DWORD *)this = LogicStringUtil::convertToInt((LogicStringUtil *)&v20, v4);
        String::~String(&v20);
      }
      else
      {
        *(_DWORD *)this = 100;
      }
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_MUSIC_VOLUME, v3) )
      {
        Application::getKeyValue((Application *)&SETTING_MUSIC_VOLUME, v5);
        *((_DWORD *)this + 1) = LogicStringUtil::convertToInt((LogicStringUtil *)&v19, v6);
        String::~String(&v19);
      }
      else
      {
        *((_DWORD *)this + 1) = 100;
      }
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_CACHED_TROPHIES, v5) )
      {
        Application::getKeyValue((Application *)&SETTING_CACHED_TROPHIES, v7);
        *((_DWORD *)this + 2) = LogicStringUtil::convertToInt((LogicStringUtil *)&v18, v8);
        String::~String(&v18);
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
      }
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_CACHED_NPC_WINS, v7) )
      {
        Application::getKeyValue((Application *)&SETTING_CACHED_NPC_WINS, v9);
        *((_DWORD *)this + 4) = LogicStringUtil::convertToInt((LogicStringUtil *)&v17, v10);
        String::~String(&v17);
      }
      else
      {
        *((_DWORD *)this + 4) = 0;
      }
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_CACHED_EXP_LEVEL, v9) )
      {
        Application::getKeyValue((Application *)&SETTING_CACHED_EXP_LEVEL, v11);
        *((_DWORD *)this + 5) = LogicStringUtil::convertToInt((LogicStringUtil *)&v16, v12);
        String::~String(&v16);
      }
      else
      {
        *((_DWORD *)this + 5) = 1;
      }
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_CACHED_ARENA_INDEX, v11) )
      {
        Application::getKeyValue((Application *)&SETTING_CACHED_ARENA_INDEX, v13);
        *((_DWORD *)this + 3) = LogicStringUtil::convertToInt((LogicStringUtil *)&v15, v14);
        String::~String(&v15);
      }
      else
      {
        *((_DWORD *)this + 3) = 0;
      }
      *((_BYTE *)this + 24) = Application::existsKeyValue((Application *)&SETTING_CACHED_HAS_BEEN_IN_CLAN, v13);
    }

    void __fastcall GameSettings::constructInstance(ClanPage *this)
    {
      GameSettings *v1; // x19
      const String *v2; // x1
    
      v1 = (GameSettings *)operator new(28);
      GameSettings::GameSettings(v1, v2);
      GameSettings::sm_pInstance = (__int64)v1;
    }

    void __fastcall GameSettings::destructInstance(ClanPage *this)
    {
      if ( GameSettings::sm_pInstance )
        operator delete((void *)GameSettings::sm_pInstance);
      GameSettings::sm_pInstance = 0;
    }

    void __fastcall GameSettings::setCachedExpLevel(ClanPage *this, String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      *((_DWORD *)this + 5) = (_DWORD)a2;
      String::valueOf(&v3, a2, (int)a2);
      Application::storeKeyValue((Application *)&SETTING_CACHED_EXP_LEVEL, &v3, v2);
      String::~String(&v3);
    }

    __int64 __fastcall GameSettings::getCachedExpLevel(ClanPage *this)
    {
      return *((unsigned int *)this + 5);
    }

    void __fastcall GameSettings::setCachedArenaIndex(ClanPage *this, String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      *((_DWORD *)this + 3) = (_DWORD)a2;
      String::valueOf(&v3, a2, (int)a2);
      Application::storeKeyValue((Application *)&SETTING_CACHED_ARENA_INDEX, &v3, v2);
      String::~String(&v3);
    }

    __int64 __fastcall GameSettings::getCachedArenaIndex(ClanPage *this)
    {
      return *((unsigned int *)this + 3);
    }

    void __fastcall GameSettings::setCachedNpcWins(ClanPage *this, String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      *((_DWORD *)this + 4) = (_DWORD)a2;
      String::valueOf(&v3, a2, (int)a2);
      Application::storeKeyValue((Application *)&SETTING_CACHED_NPC_WINS, &v3, v2);
      String::~String(&v3);
    }

    __int64 __fastcall GameSettings::getCachedNpcWins(ClanPage *this)
    {
      return *((unsigned int *)this + 4);
    }

    void __fastcall GameSettings::setCachedTrophies(ClanPage *this, String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      *((_DWORD *)this + 2) = (_DWORD)a2;
      String::valueOf(&v3, a2, (int)a2);
      Application::storeKeyValue((Application *)&SETTING_CACHED_TROPHIES, &v3, v2);
      String::~String(&v3);
    }

    __int64 __fastcall GameSettings::getCachedTrophies(ClanPage *this)
    {
      return *((unsigned int *)this + 2);
    }

    void __fastcall GameSettings::setCachedHasBeenInClan(ClanPage *this, const String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      *((_BYTE *)this + 24) = (_BYTE)a2;
      if ( (_DWORD)a2 )
      {
        String::String(&v3, "1");
        Application::storeKeyValue((Application *)&SETTING_CACHED_HAS_BEEN_IN_CLAN, &v3, v2);
        String::~String(&v3);
      }
      else
      {
        Application::removeKeyValue((Application *)&SETTING_CACHED_HAS_BEEN_IN_CLAN, a2);
      }
    }

    __int64 __fastcall GameSettings::getCachedHasBeenInClan(ClanPage *this)
    {
      return *((unsigned __int8 *)this + 24);
    }

    void __fastcall GameSettings::enableMusic(ClanPage *this, int a2)
    {
      __int64 v2; // x9
      const String *v3; // x2
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      if ( a2 )
        v2 = 100;
      else
        v2 = 0;
      *((_DWORD *)this + 1) = v2;
      String::valueOf(&v4, (String *)v2, a2);
      Application::storeKeyValue((Application *)&SETTING_MUSIC_VOLUME, &v4, v3);
      String::~String(&v4);
    }

    bool __fastcall GameSettings::isMusicEnabled(ClanPage *this)
    {
      return *((_DWORD *)this + 1) != 0;
    }

    void __fastcall GameSettings::enableSfx(ClanPage *this, int a2)
    {
      __int64 v2; // x9
      const String *v3; // x2
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      if ( a2 )
        v2 = 100;
      else
        v2 = 0;
      *(_DWORD *)this = v2;
      String::valueOf(&v4, (String *)v2, a2);
      Application::storeKeyValue((Application *)&SETTING_SFX_VOLUME, &v4, v3);
      String::~String(&v4);
    }

    bool __fastcall GameSettings::isSfxEnabled(ClanPage *this)
    {
      return *(_DWORD *)this != 0;
    }

    void __fastcall GameSettings::setIAPInfoShown(ClanPage *this)
    {
      const String *v1; // x2
      String v2; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v2, "TRUE");
      Application::storeKeyValue((Application *)&SETTING_IAP_INFO, &v2, v1);
      String::~String(&v2);
    }

    __int64 __fastcall GameSettings::isIAPInfoShown(ClanPage *this, const String *a2)
    {
      return Application::existsKeyValue((Application *)&SETTING_IAP_INFO, a2);
    }

    __int64 __fastcall GameSettings::setSelectedLanguage(ClanPage *this, const String *a2, const String *a3)
    {
      return Application::storeKeyValue((Application *)&SETTING_LANGUAGE, a2, a3);
    }

    String *__usercall GameSettings::getSelectedLanguage@<X0>(String *__return_ptr a1@<X8>, const String *a2@<X1>)
    {
      const String *v4; // x1
    
      if ( (unsigned int)Application::existsKeyValue((Application *)&SETTING_LANGUAGE, a2) )
        return (String *)Application::getKeyValue((Application *)&SETTING_LANGUAGE, v4);
      else
        return String::String(a1, "");
    }

    void __fastcall GameSettings::setLandscapeReplay(ClanPage *this, const String *a2)
    {
      const String *v2; // x2
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      if ( (_DWORD)a2 )
      {
        String::String(&v3, "1");
        Application::storeKeyValue((Application *)&SETTING_LANDSCAPE_REPLAY, &v3, v2);
        String::~String(&v3);
      }
      else
      {
        Application::removeKeyValue((Application *)&SETTING_LANDSCAPE_REPLAY, a2);
      }
    }

    __int64 __fastcall GameSettings::isLandscapeReplay(ClanPage *this, const String *a2)
    {
      return Application::existsKeyValue((Application *)&SETTING_LANDSCAPE_REPLAY, a2);
    }

    void __fastcall GameSettings::refreshCachedValues(vm_address_t *this)
    {
      vm_address_t *Instance; // x0
      __int64 v3; // x0
      __int64 PlayerAvatar; // x0
      tween::Bounce *v5; // x20
      String *v6; // x22
      String *NpcWinCount; // x21
      String *ExpLevel; // x8
      const LogicData *v9; // x2
      __int64 AchievementByName; // x21
      const String *isAchievementCompleted; // x8
      String *v12; // x1
      String v13; // [xsp+8h] [xbp-38h] BYREF
    
      Instance = (vm_address_t *)GameMode::getInstance(this);
      if ( Instance )
      {
        v3 = GameMode::getInstance(Instance);
        PlayerAvatar = GameMode::getPlayerAvatar(v3);
        v5 = (tween::Bounce *)PlayerAvatar;
        if ( PlayerAvatar )
        {
          v6 = (String *)*(unsigned int *)(PlayerAvatar + 64);
          NpcWinCount = (String *)LogicClientAvatar::getNpcWinCount(PlayerAvatar);
          ExpLevel = (String *)LogicClientAvatar::getExpLevel(v5);
          if ( *((_DWORD *)this + 5) != (_DWORD)ExpLevel )
            GameSettings::setCachedExpLevel((ClanPage *)this, ExpLevel);
          if ( *((_DWORD *)this + 2) != (_DWORD)v6 )
            GameSettings::setCachedTrophies((ClanPage *)this, v6);
          if ( *((_DWORD *)this + 4) != (_DWORD)NpcWinCount )
            GameSettings::setCachedNpcWins((ClanPage *)this, NpcWinCount);
          String::String(&v13, "com.supercell.scroll.teamplayer");
          AchievementByName = LogicDataTables::getAchievementByName((LogicDataTables *)&v13, 0, v9);
          String::~String(&v13);
          isAchievementCompleted = (const String *)LogicClientAvatar::isAchievementCompleted(v5, AchievementByName);
          if ( (_DWORD)isAchievementCompleted != *((unsigned __int8 *)this + 24) )
            GameSettings::setCachedHasBeenInClan((ClanPage *)this, isAchievementCompleted);
          if ( LogicClientAvatar::getArena(v5) )
          {
            v12 = (String *)*(unsigned int *)(LogicClientAvatar::getArena(v5) + 144);
            if ( *((_DWORD *)this + 3) != (_DWORD)v12 )
              GameSettings::setCachedArenaIndex((ClanPage *)this, v12);
          }
        }
      }
    }

}; // end class GameSettings
