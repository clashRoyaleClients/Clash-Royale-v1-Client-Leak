class LevelUpPopup
{
public:

    __int64 __fastcall LevelUpPopup::LevelUpPopup(__int64 a1, __int64 a2)
    {
      __int64 v4; // x9
      __int64 v5; // x10
      __int64 v6; // x9
      __int64 v7; // x10
      const String *v8; // x2
      DisplayObject *v9; // x20
      Stage *v10; // x0
      Stage *Instance; // x0
      int v12; // w23
      __int64 v13; // x0
      const String *v14; // x2
      DisplayObject *v15; // x0
      long double v16; // q0
      Stage *v17; // x0
      Stage *v18; // x0
      int v19; // s8
      int v20; // s10
      Rect *v21; // x23
      tween::Bounce *PlayerAvatar; // x0
      #1364 *ExpLevelData; // x23
      GameButton *v24; // x25
      __int64 MovieClipByName; // x20
      MovieClip *v26; // x20
      const char *v27; // x1
      const String *String; // x0
      __int64 v29; // x22
      int TotalFrames; // w0
      #1257 *v31; // x0
      MovieClip *v32; // x20
      const char *v33; // x1
      LogicPageOpenedCommand *GlobalBounds; // x0
      LogicPageOpenedCommand *v35; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicJSONObject **EffectManager; // x24
      const AreaEffectObject *v38; // x2
      const AskForTVContentMessage *EffectByName; // x20
      float MidX; // s8
      Stage *v41; // x0
      long double MidY; // q0
      const char *v43; // x1
      #1257 *v44; // x24
      int SummonerLevel; // w20
      LogicMath *v46; // x26
      const char *v47; // x2
      Font *SummonerData; // x28
      int Hitpoints; // w25
      LogicMath *v50; // x20
      int v51; // w27
      __int64 Projectile; // x0
      int Damage; // w26
      __int64 v54; // x0
      int v55; // w28
      #1257 *v56; // x20
      #1257 *v57; // x20
      TextField *TextFieldByName; // x0
      const char *v59; // x1
      const char *v60; // x1
      #1257 *v61; // x21
      int TowerLevel; // w23
      LogicMath *v63; // x20
      const char *v64; // x2
      Font *PrincessTowerData; // x25
      int v66; // w24
      LogicMath *v67; // x27
      int v68; // w26
      __int64 v69; // x0
      int v70; // w23
      __int64 v71; // x0
      #1257 *v72; // x20
      #1257 *v73; // x20
      TextField *v74; // x0
      const char *v75; // x1
      LogicPageOpenedCommand *v76; // x0
      __int64 v77; // x0
      LogicPageOpenedCommand *v78; // x0
      __int64 v79; // x0
      NoAlliance *v80; // x20
      const AreaEffectObject *v81; // x2
      AreaEffectObject *SoundByName; // x0
      String v84; // [xsp+18h] [xbp-1B8h] BYREF
      String v85; // [xsp+30h] [xbp-1A0h] BYREF
      String v86; // [xsp+48h] [xbp-188h] BYREF
      String v87; // [xsp+60h] [xbp-170h] BYREF
      String v88; // [xsp+78h] [xbp-158h] BYREF
      String v89; // [xsp+90h] [xbp-140h] BYREF
      Rect v90[2]; // [xsp+A8h] [xbp-128h] BYREF
      String v91; // [xsp+B8h] [xbp-118h] BYREF
      String v92; // [xsp+D0h] [xbp-100h] BYREF
      String v93; // [xsp+E8h] [xbp-E8h] BYREF
      String v94; // [xsp+100h] [xbp-D0h] BYREF
      String v95; // [xsp+118h] [xbp-B8h] BYREF
      String v96; // [xsp+130h] [xbp-A0h] BYREF
      String v97; // [xsp+148h] [xbp-88h] BYREF
    
      String::String(&v97, "sc/ui.sc");
      String::String(&v96, "UI_menu_background");
      PopupBase::PopupBase(a1, &v97, &v96);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046F7E8;
      *(_QWORD *)(a1 + 96) = &off_10046F9C0;
      v4 = 272;
      do
      {
        v5 = a1 + v4;
        *(_DWORD *)v5 = 0;
        *(_QWORD *)(v5 + 4) = 0;
        *(_QWORD *)(v5 + 24) = 0;
        *(_QWORD *)(v5 + 32) = 0;
        *(_QWORD *)(v5 + 16) = 0;
        v4 += 40;
      }
      while ( v5 + 40 != a1 + 352 );
      v6 = 352;
      do
      {
        v7 = a1 + v6;
        *(_DWORD *)v7 = 0;
        *(_QWORD *)(v7 + 4) = 0;
        *(_QWORD *)(v7 + 24) = 0;
        *(_QWORD *)(v7 + 32) = 0;
        *(_QWORD *)(v7 + 16) = 0;
        v6 += 40;
      }
      while ( v7 + 40 != a1 + 432 );
      *(_DWORD *)(a1 + 248) = 0;
      *(_DWORD *)(a1 + 240) = 0;
      *(_BYTE *)(a1 + 244) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      String::String(&v95, "sc/ui.sc");
      String::String(&v94, "display_darken");
      *(_QWORD *)(a1 + 440) = StringTable::getMovieClip((#1308 *)&v95, &v94, v8);
      String::~String();
      String::~String();
      v9 = *(DisplayObject **)(a1 + 440);
      *((_BYTE *)v9 + 64) = 0;
      Instance = (Stage *)Stage::getInstance(v10);
      v12 = *((_DWORD *)Instance + 107);
      v13 = Stage::getInstance(Instance);
      DisplayObject::setPixelSnappedXY(v9, (float)v12 * 0.0, (float)*(int *)(v13 + 432) * 0.5);
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 440) + 40LL))(*(_QWORD *)(a1 + 440), 1.2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 440));
      String::String(&v93, "sc/ui.sc");
      String::String(&v92, "player_levelup");
      *(_QWORD *)(a1 + 432) = StringTable::getMovieClip((#1308 *)&v93, &v92, v14);
      String::~String();
      String::~String();
      v15 = *(DisplayObject **)(a1 + 432);
      *((_BYTE *)v15 + 64) = 0;
      *(__n128 *)&v16 = DisplayObject::setPixelSnappedXY(v15, 0.0, 0.0);
      v17 = (Stage *)(*(__int64 (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(
                       a1,
                       *(_QWORD *)(a1 + 432),
                       v16);
      v18 = (Stage *)Stage::getInstance(v17);
      v19 = *((_DWORD *)v18 + 107);
      v20 = *(_DWORD *)(Stage::getInstance(v18) + 432LL);
      v21 = (Rect *)operator new(16);
      Rect::Rect(v21, -(float)v19, -(float)v20, (float)v19, (float)v20);
      Sprite::setHitArea((OutOfSyncMessage *)a1, (#1261 *)v21);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      ExpLevelData = (#1364 *)LogicClientAvatar::getExpLevelData(PlayerAvatar);
      v24 = (GameButton *)operator new(264);
      GameButton::GameButton(v24);
      *(_QWORD *)(a1 + 232) = v24;
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 432), "ok_btn");
      MovieClip::changeTimelineChild(*(#1257 **)(a1 + 432), (#1249 *)MovieClipByName, *(#1249 **)(a1 + 232));
      *(_DWORD *)(MovieClipByName + 20) = 0;
      *(_DWORD *)(MovieClipByName + 16) = 1065353216;
      *(_DWORD *)(MovieClipByName + 24) = 0;
      *(_QWORD *)(MovieClipByName + 28) = 1065353216;
      *(_DWORD *)(MovieClipByName + 36) = 0;
      ColorTransform::reset((ColorTransform *)(MovieClipByName + 9));
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 232) + 288LL))(
        *(_QWORD *)(a1 + 232),
        MovieClipByName,
        1);
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 232), a1 + 96);
      v26 = *(MovieClip **)(*(_QWORD *)(a1 + 232) + 96LL);
      String = (const String *)StringTable::getString((#1308 *)"TID_LEVEL_UP_CONFIRM_BUTTON", v27);
      MovieClip::setText(v26, "txt", String);
      v29 = *(_QWORD *)(a1 + 432);
      *(_BYTE *)(v29 + 64) = 1;
      TotalFrames = MovieClip::getTotalFrames((#1257 *)v29);
      MovieClip::gotoAndStopFrameIndex((MovieClip *)v29, TotalFrames - 1);
      v31 = (#1257 *)MovieClip::getMovieClipByName((#1257 *)v29, "xp_icon");
      *(_QWORD *)(a1 + 448) = v31;
      v32 = (MovieClip *)MovieClip::getMovieClipByName(v31, "txt_levelup");
      String::format((String *)"%d", v33, a2);
      MovieClip::setText(v32, "TID_LEVELUP", &v91);
      String::~String();
      Rect::Rect(v90);
      GlobalBounds = (LogicPageOpenedCommand *)DisplayObject::getGlobalBounds(*(_QWORD *)(a1 + 448), v90);
      v35 = (LogicPageOpenedCommand *)HomeScreen::getInstance(GlobalBounds);
      RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(v35);
      EffectManager = (LogicJSONObject **)RenderSystem::getEffectManager(RenderSystem);
      String::String(&v89, "xp_levelup");
      EffectByName = (const AskForTVContentMessage *)LogicDataTables::getEffectByName(
                                                       (LogicKickAllianceMemberCommand *)&v89,
                                                       0,
                                                       v38);
      String::~String();
      MidX = Rect::getMidX(v90);
      LODWORD(v24) = *(_DWORD *)(Stage::getInstance(v41) + 428LL);
      MidY = Rect::getMidY(v90);
      EffectManager::addEffectNoLoopScreen(
        EffectManager,
        EffectByName,
        MidX + (float)((float)(int)v24 * 0.5),
        MidY,
        0,
        0,
        0,
        0);
      v44 = (#1257 *)MovieClip::getMovieClipByName((#1257 *)v29, "stats_wizard");
      if ( !v44 )
        Debugger::error((__siginfo *)"level up screen: cannot find stats_wizard", v43);
      SummonerLevel = LogicExpLevelData::getSummonerLevel(ExpLevelData);
      v46 = (LogicMath *)(unsigned int)(SummonerLevel - 1);
      Debugger::doAssert((Debugger *)(SummonerLevel > 1), (bool)"level up popup: invalid wizard level index", v47);
      SummonerData = (Font *)LogicDataTables::getSummonerData();
      Hitpoints = LogicCharacterData::getHitpoints(SummonerData, v46);
      v50 = (LogicMath *)(unsigned int)(SummonerLevel - 2);
      v51 = LogicCharacterData::getHitpoints(SummonerData, v50);
      if ( LogicCharacterData::getProjectile(SummonerData, 0) )
      {
        Projectile = LogicCharacterData::getProjectile(SummonerData, 0);
        Damage = LogicProjectileData::getDamage(Projectile, v46);
        v54 = LogicCharacterData::getProjectile(SummonerData, 0);
        v55 = LogicProjectileData::getDamage(v54, v50);
      }
      else
      {
        v55 = 0;
        Damage = 0;
      }
      *(_QWORD *)(a1 + 256) = v44;
      (*(void (__fastcall **)(#1257 *, long double))(*(_QWORD *)v44 + 80LL))(v44, COERCE_LONG_DOUBLE((unsigned __int128)0));
      *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 0;
      v56 = (#1257 *)MovieClip::getMovieClipByName(v44, "stat1");
      String::String(&v88, "Health");
      LevelUpPopup::Stat::set((#1406 *)(a1 + 272), v56, v51, Hitpoints, &v88, 9);
      String::~String();
      v57 = (#1257 *)MovieClip::getMovieClipByName(v44, "stat2");
      String::String(&v87, "Damage");
      LevelUpPopup::Stat::set((#1406 *)(a1 + 312), v57, v55, Damage, &v87, 1);
      String::~String();
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(v44, "TID_WIZARD");
      MovieClipHelper::scaleSingleLineText(TextFieldByName, v59);
      v61 = (#1257 *)MovieClip::getMovieClipByName((#1257 *)v29, "stats_towers");
      if ( !v61 )
        Debugger::error((__siginfo *)"level up screen: cannot find stats_towers", v60);
      TowerLevel = LogicExpLevelData::getTowerLevel(ExpLevelData);
      v63 = (LogicMath *)(unsigned int)(TowerLevel - 1);
      Debugger::doAssert((Debugger *)(TowerLevel > 1), (bool)"level up popup: invalid tower level index", v64);
      PrincessTowerData = (Font *)LogicDataTables::getPrincessTowerData();
      v66 = LogicCharacterData::getHitpoints(PrincessTowerData, v63);
      v67 = (LogicMath *)(unsigned int)(TowerLevel - 2);
      v68 = LogicCharacterData::getHitpoints(PrincessTowerData, v67);
      v69 = LogicCharacterData::getProjectile(PrincessTowerData, 0);
      v70 = LogicProjectileData::getDamage(v69, v63);
      v71 = LogicCharacterData::getProjectile(PrincessTowerData, 0);
      LODWORD(PrincessTowerData) = LogicProjectileData::getDamage(v71, v67);
      *(_QWORD *)(a1 + 264) = v61;
      (*(void (__fastcall **)(#1257 *, long double))(*(_QWORD *)v61 + 80LL))(v61, COERCE_LONG_DOUBLE((unsigned __int128)0));
      *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 0;
      v72 = (#1257 *)MovieClip::getMovieClipByName(v61, "stat1");
      String::String(&v86, "Health");
      LevelUpPopup::Stat::set((#1406 *)(a1 + 352), v72, v68, v66, &v86, 9);
      String::~String();
      v73 = (#1257 *)MovieClip::getMovieClipByName(v61, "stat2");
      String::String(&v85, "Damage");
      LevelUpPopup::Stat::set((#1406 *)(a1 + 392), v73, (int)PrincessTowerData, v70, &v85, 1);
      String::~String();
      v74 = (TextField *)MovieClip::getTextFieldByName(v61, "TID_TOWERS");
      MovieClipHelper::scaleSingleLineText(v74, v75);
      MovieClip::gotoAndPlay((MovieClip *)v29, 0, "stop");
      v77 = HomeScreen::getInstance(v76);
      v78 = (LogicPageOpenedCommand *)HomeScreen::setHUDVisible(v77, 0);
      v79 = HomeScreen::getInstance(v78);
      HomeScreen::setPagesVisible(v79, 0);
      v80 = (NoAlliance *)SoundManager::sm_pInstance;
      String::String(&v84, "sound_king_level_up");
      SoundByName = (AreaEffectObject *)LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v84, 0, v81);
      SoundManager::playSound(v80, SoundByName, 0xFFFFFFFFLL, 1.0, 0.0);
      String::~String();
      Rect::~Rect(v90);
      return a1;
    }

    // attributes: thunk
    void __fastcall LevelUpPopup::LevelUpPopup(LevelUpPopup *this, __int64 a2)
    {
      __ZN12LevelUpPopupC2Ei((__int64)this, a2);
    }

    void __fastcall LevelUpPopup::~LevelUpPopup(Modal *this)
    {
      Modal *v1; // x19
      LogicPageOpenedCommand *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      __int64 EffectManager; // x0
      __int64 v5; // x0
      LogicPageOpenedCommand *v6; // x0
      __int64 v7; // x0
      __int64 v8; // x1
      const char *v9; // x2
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x8
      char *v14; // x9
      __int64 i; // x8
      char *v16; // x9
    
      v1 = this;
      *(_QWORD *)this = off_10046F7E8;
      *((_QWORD *)this + 12) = &off_10046F9C0;
      if ( *((_DWORD *)this + 62) )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(this);
        RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
        EffectManager = RenderSystem::getEffectManager(RenderSystem);
        this = (Modal *)EffectManager::endPlayback(EffectManager, *((_DWORD *)v1 + 62));
      }
      v5 = HomeScreen::getInstance(this);
      v6 = (LogicPageOpenedCommand *)HomeScreen::setHUDVisible(v5, 1);
      v7 = HomeScreen::getInstance(v6);
      HomeScreen::setPagesVisible(v7, 1);
      v10 = *((_QWORD *)v1 + 29);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_QWORD *)v1 + 29) = 0;
      v11 = *((_QWORD *)v1 + 55);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_QWORD *)v1 + 55) = 0;
      v12 = *((_QWORD *)v1 + 54);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = 0;
      *((_DWORD *)v1 + 62) = 0;
      *((_DWORD *)v1 + 60) = 0;
      *((_BYTE *)v1 + 244) = 0;
      *((_QWORD *)v1 + 29) = 0;
      *((_QWORD *)v1 + 32) = 0;
      *((_QWORD *)v1 + 33) = 0;
      *((_QWORD *)v1 + 55) = 0;
      *((_QWORD *)v1 + 56) = 0;
      *((_QWORD *)v1 + 54) = 0;
      do
      {
        v14 = (char *)v1 + v13;
        *((_DWORD *)v14 + 98) = 0;
        *(_QWORD *)((char *)v1 + v13 + 396) = 0;
        *((_QWORD *)v14 + 52) = 0;
        *((_QWORD *)v14 + 53) = 0;
        *((_QWORD *)v14 + 51) = 0;
        v13 -= 40;
      }
      while ( v13 != -80 );
      for ( i = 0; i != -80; i -= 40 )
      {
        v16 = (char *)v1 + i;
        *((_DWORD *)v16 + 78) = 0;
        *(_QWORD *)((char *)v1 + i + 316) = 0;
        *((_QWORD *)v16 + 42) = 0;
        *((_QWORD *)v16 + 43) = 0;
        *((_QWORD *)v16 + 41) = 0;
      }
      PopupBase::~PopupBase(v1, v8, v9);
    }

    // attributes: thunk
    void __fastcall LevelUpPopup::~LevelUpPopup(Modal *this)
    {
      __ZN12LevelUpPopupD2Ev(this);
    }

    void __fastcall LevelUpPopup::~LevelUpPopup(Modal *this)
    {
      LevelUpPopup::~LevelUpPopup(this);
      operator delete(this);
    }

    _QWORD *__fastcall LevelUpPopup::buttonClicked(_QWORD *result, __int64 a2)
    {
      if ( result[29] == a2 )
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 352LL))(result);
      return result;
    }

    __int64 __fastcall LevelUpPopup::update(__int64 a1, long double a2)
    {
      float v2; // s8
      __int64 result; // x0
      long double v5; // q1
      long double v6; // q2
      float v7; // s3
      float v8; // s2
      float v9; // s0
      LevelUpPopup::Stat *v10; // x20
      __int64 v11; // x22
      bool v12; // cc
      LevelUpPopup::Stat *v13; // x19
      __int64 v14; // x20
      float v15; // [xsp+0h] [xbp-50h]
      long double v16; // [xsp+10h] [xbp-40h]
    
      v2 = *(float *)&a2;
      PopupBase::update((MiniTimer *)a1, a2);
      *(float *)(a1 + 240) = *(float *)(a1 + 240) + v2;
      if ( *(_BYTE *)(a1 + 244) && (unsigned int)MovieClip::isStopped(*(#1257 **)(a1 + 432)) )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      result = MovieClip::isStopped(*(#1257 **)(a1 + 432));
      if ( (_DWORD)result )
      {
        v7 = *(float *)(a1 + 240);
        v8 = (float)(v7 + -0.7) / 0.7;
        if ( v8 >= 0.0 )
        {
          v9 = 1.0;
          if ( v8 <= 1.0 )
            v9 = (float)(v7 + -0.7) / 0.7;
        }
        else
        {
          v9 = 0.0;
        }
        *(float *)&v6 = (float)(v7 + -2.7) / 0.7;
        if ( *(float *)&v6 >= 0.0 )
        {
          LODWORD(v5) = 1.0;
          if ( *(float *)&v6 <= 1.0 )
            v5 = v6;
        }
        else
        {
          *(_OWORD *)&v5 = 0u;
        }
        v16 = v5;
        v15 = v9;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 80LL))(*(_QWORD *)(a1 + 256));
        *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 1;
        if ( v15 >= 1.0 )
        {
          v10 = (LevelUpPopup::Stat *)(a1 + 272);
          v11 = 1;
          do
          {
            if ( !(unsigned int)LevelUpPopup::Stat::update(v10, v2) )
              break;
            v10 = (LevelUpPopup::Stat *)((char *)v10 + 40);
            v12 = v11++ < 2;
          }
          while ( v12 );
        }
        result = (*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 264) + 80LL))(
                   *(_QWORD *)(a1 + 264),
                   v16);
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 1;
        if ( *(float *)&v16 >= 1.0 )
        {
          v13 = (LevelUpPopup::Stat *)(a1 + 352);
          v14 = 1;
          do
          {
            result = LevelUpPopup::Stat::update(v13, v2);
            if ( !(_DWORD)result )
              break;
            v13 = (LevelUpPopup::Stat *)((char *)v13 + 40);
            v12 = v14++ < 2;
          }
          while ( v12 );
        }
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 256) + 8LL) = 0;
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + 8LL) = 0;
      }
      return result;
    }

    // attributes: thunk
    MiniTimer *__fastcall LevelUpPopup::fadeOut(MatchmakeFailedMessage *this)
    {
      return PopupBase::fadeOut(this);
    }

    __int64 LevelUpPopup::useModal()
    {
      return 0;
    }

    __int64 __fastcall LevelUpPopup::touchReleased(__int64 a1, __int64 a2)
    {
      const char *v4; // x1
      __int64 v5; // x21
      const char *v6; // x1
    
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, *(unsigned int *)(a2 + 76)) )
      {
        if ( *(float *)(a1 + 240) > 3.0 && !*(_BYTE *)(a1 + 244) )
        {
          MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 432), "stop", "end");
          *(_BYTE *)(a1 + 244) = 1;
        }
        *(_DWORD *)(a1 + 240) = 1148846080;
        v5 = -80;
        do
        {
          LevelUpPopup::Stat::update(a1 + v5 + 352, v4, 1000.0);
          LevelUpPopup::Stat::update(a1 + v5 + 432, v6, 1000.0);
          v5 += 40;
        }
        while ( v5 );
      }
      return PopupBase::touchReleased(a1, a2);
    }

    __int64 LevelUpPopup::getPopupType()
    {
      return 15;
    }

    __int64 LevelUpPopup::isFadeInEnabled()
    {
      return 0;
    }

    __int64 LevelUpPopup::isFadeOutEnabled()
    {
      return 0;
    }

}; // end class LevelUpPopup
