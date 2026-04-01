class ChestOpenAnimationPopup
{
public:

    void __fastcall ChestOpenAnimationPopup::ChestOpenAnimationPopup(ChestOpenAnimationPopup *this, const #941 *a2)
    {
      long double v2; // q8
      __int64 MovieClip; // x0
      const char *v6; // x2
      Stage *v7; // x21
      Stage *Instance; // x0
      int v9; // w22
      __int64 v10; // x0
      const char *v11; // x2
      DisplayObject *v12; // x0
      #1257 *v13; // x0
      Stage *MovieClipByName; // x0
      Stage *v15; // x0
      int v16; // s8
      int v17; // s9
      Rect *v18; // x21
      const String *OpenInstanceName; // x21
      __int64 v20; // x22
      const String *v21; // x2
      float v22; // s0
      __int64 v23; // x0
      __int64 v24; // x0
      __int64 v25; // x0
      __int64 v26; // x0
      #1047 *OpenEffect; // x0
      const AskForTVContentMessage *v28; // x20
      #1047 *v29; // x0
      #1047 *v30; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x0
      #1047 *v33; // x0
      #1047 *v34; // x0
      #1047 *v35; // x0
      const AreaEffectObject *v36; // x2
      __int64 SoundByName; // x20
      int *v38; // x0
      int v39; // w8
      String v40; // [xsp+18h] [xbp-A8h] BYREF
      float v41; // [xsp+30h] [xbp-90h]
      float v42; // [xsp+34h] [xbp-8Ch]
      String v43; // [xsp+38h] [xbp-88h] BYREF
      String v44; // [xsp+50h] [xbp-70h] BYREF
      String v45; // [xsp+68h] [xbp-58h] BYREF
    
      String::String(&v45, "sc/ui.sc");
      String::String(&v44, "UI_menu_background");
      PopupBase::PopupBase(this, &v45, &v44);
      String::~String(&v44);
      String::~String(&v45);
      *((_DWORD *)this + 105) = 0;
      *(_QWORD *)this = off_100461D88;
      *((_QWORD *)this + 12) = &off_100461F60;
      *((_DWORD *)this + 100) = 0;
      *((_DWORD *)this + 101) = 0;
      *((_WORD *)this + 198) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_DWORD *)this + 69) = -1;
      *((_DWORD *)this + 104) = 0;
      *((_DWORD *)this + 64) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_BYTE *)this + 272) = 0;
      *((_BYTE *)this + 273) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_DWORD *)this + 113) = 0;
      memset((char *)this + 304, 0, 0x5Cu);
      *((_QWORD *)this + 54) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 53) = 0;
      *((_QWORD *)this + 61) = 0;
      *((_QWORD *)this + 62) = 0;
      *((_QWORD *)this + 59) = 0;
      *((_QWORD *)this + 60) = 0;
      *((_QWORD *)this + 58) = 0;
      *((_DWORD *)this + 112) = -1;
      MovieClip = GUIContainer::getMovieClip(this);
      LODWORD(v2) = 1067030938;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)MovieClip + 40LL))(MovieClip, v2);
      v7 = (Stage *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "display_darken", v6);
      *((_QWORD *)this + 62) = v7;
      *((_BYTE *)v7 + 64) = 0;
      Instance = (Stage *)Stage::getInstance(v7);
      v9 = *((_DWORD *)Instance + 107);
      v10 = Stage::getInstance(Instance);
      DisplayObject::setPixelSnappedXY(v7, (float)v9 * 0.0, (float)*(int *)(v10 + 432) * 0.5);
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 62) + 40LL))(*((_QWORD *)this + 62), v2);
      (*(void (__fastcall **)(ChestOpenAnimationPopup *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 62));
      v12 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_chest.sc", "open_chest", v11);
      *((_QWORD *)this + 61) = v12;
      *((_BYTE *)v12 + 64) = 0;
      DisplayObject::setPixelSnappedXY(v12, 0.0, 0.0);
      (*(void (__fastcall **)(ChestOpenAnimationPopup *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 61));
      v13 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClipByName = (Stage *)MovieClip::getMovieClipByName(v13, "arena");
      if ( MovieClipByName )
        *((_BYTE *)MovieClipByName + 8) = 0;
      v15 = (Stage *)Stage::getInstance(MovieClipByName);
      v16 = *((_DWORD *)v15 + 107);
      v17 = *(_DWORD *)(Stage::getInstance(v15) + 432LL);
      v18 = (Rect *)operator new(16);
      Rect::Rect(v18, -(float)v16, -(float)v17, (float)v16, (float)v17);
      Sprite::setHitArea(this, (#1261 *)v18);
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "card") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "chest_wood") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "chest_iron") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "chest_gold") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "chest_magical") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 61), "chest_star") + 8) = 0;
      OpenInstanceName = (const String *)LogicTreasureChestData::getOpenInstanceName(a2);
      v20 = MovieClip::getMovieClipByName(*((#1257 **)this + 61), OpenInstanceName);
      *((_QWORD *)this + 58) = v20;
      operator+(&v43, "open chest popup: cannot find chest with instance name:", OpenInstanceName);
      Debugger::doAssert((Debugger *)(v20 != 0), (bool)&v43, v21);
      String::~String(&v43);
      v22 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 64LL))(*((_QWORD *)this + 58));
      *((float *)this + 121) = v22;
      *((float *)this + 120) = v22;
      v23 = MovieClip::getMovieClipByName(*((#1257 **)this + 58), "cards_left");
      *((_QWORD *)this + 59) = MovieClip::getTextFieldByName(v23, "txt");
      v24 = MovieClip::getMovieClipByName(*((#1257 **)this + 58), "glow_common");
      *((_QWORD *)this + 39) = v24;
      *(_BYTE *)(v24 + 8) = 0;
      v25 = MovieClip::getMovieClipByName(*((#1257 **)this + 58), "glow_rare");
      *((_QWORD *)this + 40) = v25;
      *(_BYTE *)(v25 + 8) = 0;
      v26 = MovieClip::getMovieClipByName(*((#1257 **)this + 58), "glow_epic");
      *((_QWORD *)this + 41) = v26;
      *(_BYTE *)(v26 + 8) = 0;
      LOG("#### chest open: state %d -> %d\n", *((_DWORD *)this + 64), 0);
      *((_DWORD *)this + 64) = 0;
      MovieClip::gotoAndPlay(*((MovieClip **)this + 61), 0, "stop");
      OpenEffect = (#1047 *)LogicTreasureChestData::getOpenEffect(a2);
      v28 = OpenEffect;
      if ( OpenEffect )
      {
        v29 = (#1047 *)DisplayObject::localToGlobal(0.0, 0.0);
        v30 = (#1047 *)HomeScreen::getInstance(v29);
        RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(v30);
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        OpenEffect = (#1047 *)EffectManager::addEffectNoLoopScreen(EffectManager, v28, v42, v41, 0, 0, 0, 0);
      }
      v33 = (#1047 *)HomeScreen::getInstance(OpenEffect);
      v34 = (#1047 *)HomeScreen::setHUDVisible(v33, 0);
      v35 = (#1047 *)HomeScreen::getInstance(v34);
      HomeScreen::setPagesVisible(v35, 0);
      String::String(&v40, "sound_openChest_loop_gold");
      SoundByName = LogicDataTables::getSoundByName((#1004 *)&v40, 0, v36);
      String::~String(&v40);
      v38 = (int *)SoundManager::playSound(
                     SoundManager::sm_pInstance,
                     SoundByName,
                     0xFFFFFFFFLL,
                     1.0,
                     COERCE_LONG_DOUBLE((unsigned __int128)0));
      if ( v38 )
        v39 = *v38;
      else
        v39 = -1;
      *((_DWORD *)this + 69) = v39;
      SoundManager::fadeMusic(
        (SoundManager *)SoundManager::sm_pInstance,
        *(float *)(SoundManager::sm_pInstance + 56),
        0.25,
        1.0);
    }

    __int64 __fastcall ChestOpenAnimationPopup::setState(__int64 result, int a2, int a3)
    {
      __int64 v4; // x19
      const char *v6; // x2
      MovieClip *v7; // x0
      const char *v8; // x2
    
      v4 = result;
      if ( *(_DWORD *)(result + 256) != a2 || a3 != 0 )
      {
        result = LOG("#### chest open: state %d -> %d\n", *(_DWORD *)(result + 256), a2);
        *(_DWORD *)(v4 + 256) = a2;
        switch ( a2 )
        {
          case 0:
            v7 = *(MovieClip **)(v4 + 488);
            v8 = "stop";
            goto LABEL_10;
          case 1:
            MovieClip::gotoAndStop(*(MovieClip **)(v4 + 488), "stop");
            v7 = *(MovieClip **)(v4 + 464);
            *((_BYTE *)v7 + 8) = 1;
            v8 = "idle";
    LABEL_10:
            result = MovieClip::gotoAndPlay(v7, 0, v8);
            break;
          case 2:
            Debugger::doAssert(
              (Debugger *)(*(_QWORD *)(v4 + 264) != 0),
              (bool)"trying to collect while LogicReward is not set!",
              v6);
            MovieClip::gotoAndStop(*(MovieClip **)(v4 + 464), "idle");
            *(_DWORD *)(v4 + 260) = 0;
            result = ChestOpenAnimationPopup::advanceCollectState((LogicDoSpellCommand *)v4);
            break;
          case 3:
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 352LL))(v4);
            break;
          default:
            return result;
        }
      }
      return result;
    }

    // attributes: thunk
    void __fastcall ChestOpenAnimationPopup::ChestOpenAnimationPopup(ChestOpenAnimationPopup *this, const #941 *a2)
    {
      __ZN23ChestOpenAnimationPopupC2EPK22LogicTreasureChestData(this, a2);
    }

    void __fastcall ChestOpenAnimationPopup::~ChestOpenAnimationPopup(LogicDoSpellCommand *this)
    {
      #1047 *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x0
      int v5; // w1
      #1047 *v6; // x0
      #1047 *v7; // x0
      #1047 *v8; // x0
      #1047 *v9; // x0
      #1012 *v10; // x0
      void *v11; // x0
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
      void *v16; // x20
    
      *(_QWORD *)this = off_100461D88;
      *((_QWORD *)this + 12) = &off_100461F60;
      if ( *((_DWORD *)this + 112) != -1 )
      {
        Instance = (#1047 *)HomeScreen::getInstance(this);
        RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        EffectManager::removeEffect(EffectManager, *((_DWORD *)this + 112));
        *((_DWORD *)this + 112) = -1;
      }
      v5 = *((_DWORD *)this + 69);
      if ( (v5 & 0x80000000) == 0 )
        SoundManager::stopSound((#1040 *)SoundManager::sm_pInstance, v5);
      v6 = (#1047 *)SoundManager::fadeMusic(
                      (SoundManager *)SoundManager::sm_pInstance,
                      *(float *)(SoundManager::sm_pInstance + 56),
                      1.0,
                      1.0);
      v7 = (#1047 *)HomeScreen::getInstance(v6);
      v8 = (#1047 *)HomeScreen::setHUDVisible(v7, 1);
      v9 = (#1047 *)HomeScreen::getInstance(v8);
      HomeScreen::setPagesVisible(v9, 1);
      v10 = (#1012 *)*((_QWORD *)this + 33);
      if ( v10 )
      {
        LogicReward::destruct(v10);
        v11 = (void *)*((_QWORD *)this + 33);
        if ( v11 )
          operator delete(v11);
        *((_QWORD *)this + 33) = 0;
      }
      v12 = *((_QWORD *)this + 43);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_QWORD *)this + 43) = 0;
      v13 = *((_QWORD *)this + 35);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 35) = 0;
      v14 = *((_QWORD *)this + 62);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 62) = 0;
      v15 = *((_QWORD *)this + 61);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = (void *)*((_QWORD *)this + 29);
      *((_DWORD *)this + 105) = 0;
      *((_DWORD *)this + 100) = 0;
      *((_DWORD *)this + 101) = 0;
      *((_BYTE *)this + 396) = 0;
      *((_BYTE *)this + 397) = 0;
      *((_DWORD *)this + 104) = 0;
      *((_DWORD *)this + 64) = 0;
      *((_DWORD *)this + 69) = -1;
      *((_QWORD *)this + 30) = v16;
      *((_QWORD *)this + 33) = 0;
      *((_BYTE *)this + 272) = 0;
      *((_BYTE *)this + 273) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_DWORD *)this + 113) = 0;
      memset((char *)this + 304, 0, 0x5Cu);
      *((_QWORD *)this + 54) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 53) = 0;
      *((_QWORD *)this + 61) = 0;
      *((_QWORD *)this + 62) = 0;
      *((_QWORD *)this + 59) = 0;
      *((_QWORD *)this + 60) = 0;
      *((_QWORD *)this + 58) = 0;
      *((_DWORD *)this + 112) = -1;
      if ( v16 )
        operator delete(v16);
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall ChestOpenAnimationPopup::~ChestOpenAnimationPopup(LogicDoSpellCommand *this)
    {
      __ZN23ChestOpenAnimationPopupD2Ev(this);
    }

    void __fastcall ChestOpenAnimationPopup::~ChestOpenAnimationPopup(LogicDoSpellCommand *this)
    {
      ChestOpenAnimationPopup::~ChestOpenAnimationPopup(this);
      operator delete(this);
    }

    __int64 __fastcall ChestOpenAnimationPopup::touchReleased(LogicDoSpellCommand *a1, __int64 a2)
    {
      ChestOpenAnimationPopup::advanceState(a1);
      if ( *((_DWORD *)a1 + 65) == 4 )
        ChestOpenAnimationPopup::advanceState(a1);
      return PopupBase::touchReleased(a1, a2);
    }

    __int64 __fastcall ChestOpenAnimationPopup::advanceState(LogicDoSpellCommand *this)
    {
      int v1; // w1
      LogicRefreshAchievementsCommand *v2; // x19
      vm_address_t *refreshed; // x0
      GameMode *Instance; // x0
    
      switch ( *((_DWORD *)this + 64) )
      {
        case 0:
          v1 = 1;
          goto LABEL_7;
        case 1:
          if ( !*((_QWORD *)this + 33) )
            goto LABEL_10;
          v1 = 2;
          goto LABEL_7;
        case 2:
          if ( *((_DWORD *)this + 65) == 5 )
          {
            v1 = 3;
    LABEL_7:
            ChestOpenAnimationPopup::setState((__int64)this, v1, 0);
          }
          else
          {
            ChestOpenAnimationPopup::advanceCollectState(this);
          }
    LABEL_10:
          v2 = (LogicRefreshAchievementsCommand *)operator new(32);
          refreshed = (vm_address_t *)LogicRefreshAchievementsCommand::LogicRefreshAchievementsCommand(v2);
          Instance = (GameMode *)GameMode::getInstance(refreshed);
          return GameMode::addCommand(Instance, v2, 1);
        case 3:
          (*(void (__fastcall **)(LogicDoSpellCommand *))(*(_QWORD *)this + 352LL))(this);
          goto LABEL_10;
        default:
          goto LABEL_10;
      }
    }

    __int64 __fastcall ChestOpenAnimationPopup::isFadeInEnabled(LogicDoSpellCommand *this)
    {
      return 0;
    }

    __int64 __fastcall ChestOpenAnimationPopup::isFadeOutEnabled(LogicDoSpellCommand *this)
    {
      return 0;
    }

    __int64 ChestOpenAnimationPopup::canShowAchievemntCompleted()
    {
      return 0;
    }

    #1257 *__fastcall ChestOpenAnimationPopup::update(#1257 **this, float a2)
    {
      int v4; // w8
      #1257 *result; // x0
      float v6; // s0
      float v7; // s1
      float v8; // s2
      float v9; // s2
    
      PopupBase::update((MatchmakeFailedMessage *)this, a2);
      v4 = *((_DWORD *)this + 64);
      if ( v4 == 2 )
      {
        ChestOpenAnimationPopup::updateCollectState((LogicDoSpellCommand *)this, a2);
      }
      else if ( v4 == 1 )
      {
        if ( (unsigned int)MovieClip::isStopped(*(this + 58)) && *(this + 33) )
        {
          ChestOpenAnimationPopup::advanceState((LogicDoSpellCommand *)this);
          ChestOpenAnimationPopup::updateCardsLeftValue((LogicDoSpellCommand *)this);
        }
      }
      else if ( !v4 && (unsigned int)MovieClip::isStopped(*(this + 61)) )
      {
        ChestOpenAnimationPopup::advanceState((LogicDoSpellCommand *)this);
      }
      result = *(this + 35);
      if ( result )
      {
        result = (#1257 *)MovieClip::isStopped(result);
        if ( (_DWORD)result )
        {
          result = *(this + 35);
          if ( result )
            result = (#1257 *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)result + 8LL))(result);
          *(this + 35) = 0;
        }
      }
      if ( *(this + 58) )
      {
        if ( (int)Sprite::getTouchCount(this) <= 0 )
          v6 = *((float *)this + 121);
        else
          v6 = 0.93;
        v7 = *((float *)this + 120);
        v8 = v7 - v6;
        if ( (float)(v7 - v6) < 0.0 )
          v8 = -v8;
        if ( v8 > 0.025 )
        {
          v9 = (float)(a2 * 4.0) / 0.016667;
          if ( v9 >= 1.0 )
            v6 = (float)(v6 + (float)(v7 * (float)(v9 + -1.0))) / v9;
          else
            v6 = *((float *)this + 120);
        }
        *((float *)this + 120) = v6;
        return (#1257 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(this + 58) + 40LL))(*(this + 58));
      }
      return result;
    }

    __int64 __fastcall ChestOpenAnimationPopup::updateCardsLeftValue(LogicDoSpellCommand *this, __int64 a2, const char *a3)
    {
      __int64 *v4; // x8
      int v5; // w10
      bool v6; // cc
      _BOOL4 v7; // w10
      int v8; // w11
      int v9; // w20
      __int64 v10; // x8
      __int64 result; // x0
    
      Debugger::doAssert(
        (Debugger *)(*((_QWORD *)this + 33) != 0),
        (bool)"cannot update cards left value until rewards is set",
        a3);
      v4 = (__int64 *)*((_QWORD *)this + 33);
      v5 = *((_DWORD *)v4 + 3);
      v6 = v5 <= 0;
      v7 = v5 > 0;
      if ( v6 )
        v8 = 1;
      else
        v8 = 2;
      if ( *((int *)v4 + 2) <= 0 )
        v9 = v7;
      else
        v9 = v8;
      v10 = *v4;
      if ( v10 )
        v9 += *(_DWORD *)(v10 + 12);
      TextField::setNumberText(*((TextField **)this + 59), v9, 0);
      result = MovieClip::getMovieClipByName(*((#1257 **)this + 58), "glow");
      if ( result )
        *(_BYTE *)(result + 8) = v9 > 0;
      return result;
    }

    #1257 *__fastcall ChestOpenAnimationPopup::updateCollectState(
            LogicDoSpellCommand *this,
            float a2,
            __int64 a3,
            const char *a4)
    {
      float v6; // s0
      float v7; // s1
      float v8; // s0
      float v9; // s0
      MovieClip *MovieClipByName; // x20
      MovieClip *v11; // x20
      MovieClip *v12; // x20
      __int64 v13; // x20
      void (__fastcall *v14)(__int64, float); // x21
      float Alpha; // s0
      __int64 v16; // x20
      void (__fastcall *v17)(__int64, float); // x21
      float v18; // s0
      vm_address_t *v19; // x0
      float v20; // s0
      float v21; // s1
      float v22; // s10
      __int64 Instance; // x0
      #962 *PlayerAvatar; // x0
      int v25; // w2
      int v26; // w1
      float v27; // s0
      float v28; // s2
      float v29; // s0
      #1257 *result; // x0
      float v31; // s0
      __int64 v32; // x20
      float v33; // s0
      float v34; // s8
      String v35; // [xsp+8h] [xbp-88h] BYREF
      String v36; // [xsp+20h] [xbp-70h] BYREF
      String v37; // [xsp+38h] [xbp-58h] BYREF
    
      switch ( *((_DWORD *)this + 65) )
      {
        case 1:
          Debugger::doAssert(
            (Debugger *)(*((_QWORD *)this + 43) != 0),
            (bool)"chest open popup: collect appear state has no appear clip?",
            a4);
          if ( (unsigned int)MovieClip::isStopped(*((#1257 **)this + 43)) )
            goto LABEL_26;
          break;
        case 2:
          if ( (unsigned int)MovieClip::isStopped(*((#1257 **)this + 43))
            && (unsigned int)MovieClip::isStopped(*((#1257 **)this + 44)) )
          {
            v6 = *((float *)this + 97) + a2;
            *((float *)this + 97) = v6;
            v7 = *((float *)this + 98);
            if ( v6 >= v7 )
              goto LABEL_26;
            if ( v6 > 0.0 && v7 > 0.0 )
              ChestOpenAnimationPopup::setRewardCountProgress(
                this,
                v6 / v7,
                *((_DWORD *)this + 94),
                *((_DWORD *)this + 95),
                *((_DWORD *)this + 96));
          }
          break;
        case 3:
          v8 = *((float *)this + 104);
          if ( v8 <= 0.0 )
          {
            v13 = *((_QWORD *)this + 42);
            v14 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v13 + 80LL);
            Alpha = DisplayObject::getAlpha(v13);
            v14(v13, Alpha - (float)(a2 * 3.0));
            v16 = *((_QWORD *)this + 45);
            v17 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 80LL);
            v18 = DisplayObject::getAlpha(v16);
            v17(v16, (float)(a2 * 3.0) + v18);
            if ( DisplayObject::getAlpha(*((_QWORD *)this + 45)) >= 1.0 )
            {
              v20 = (float)*((int *)this + 102) * 0.005;
              v21 = 0.5;
              if ( v20 >= 0.5 )
              {
                v21 = 0.7;
                if ( v20 <= 0.7 )
                  v21 = (float)*((int *)this + 102) * 0.005;
              }
              v22 = a2 / v21;
              Instance = GameMode::getInstance(v19);
              PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(Instance);
              v25 = LogicClientAvatar::getGold(PlayerAvatar) - *((_DWORD *)this + 105);
              v26 = v25 - *((_DWORD *)this + 102);
              v27 = v22 + *((float *)this + 103);
              v28 = v27 <= 1.0 ? v22 + *((float *)this + 103) : 1.0;
              v29 = v27 >= 0.0 ? v28 : 0.0;
              *((float *)this + 103) = v29;
              ChestOpenAnimationPopup::setRewardCountProgress(this, v29, v26, v25, -1);
              if ( *((float *)this + 103) >= 1.0 )
    LABEL_26:
                ChestOpenAnimationPopup::advanceCollectState(this);
            }
          }
          else
          {
            v9 = v8 - a2;
            *((float *)this + 104) = v9;
            if ( v9 <= 0.0 )
            {
              MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "txt_card_level_epic");
              String::String(&v37, "");
              MovieClip::setText(MovieClipByName, "txt", &v37);
              String::~String(&v37);
              v11 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "txt_card_level_rare");
              String::String(&v36, "");
              MovieClip::setText(v11, "txt", &v36);
              String::~String(&v36);
              v12 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 43), "txt_card_level_common");
              String::String(&v35, "");
              MovieClip::setText(v12, "txt", &v35);
              String::~String(&v35);
            }
          }
          break;
        case 5:
          if ( !*((_QWORD *)this + 35) )
            ChestOpenAnimationPopup::advanceState(this);
          break;
        default:
          break;
      }
      result = (#1257 *)*((_QWORD *)this + 43);
      if ( result )
      {
        if ( *((float *)this + 114) > 0.0 )
        {
          result = (#1257 *)MovieClip::isStopped(result);
          if ( (_DWORD)result )
          {
            v31 = *((float *)this + 114) - a2;
            if ( v31 <= 0.0 )
              v31 = 0.0;
            *((float *)this + 114) = v31;
            v32 = *((_QWORD *)this + 45);
            if ( v32 )
            {
              v33 = sinf(
                      (float)((float)((float)(v31 / -0.14) + 1.0) * 3.1416)
                    + (float)((float)((float)(v31 / -0.14) + 1.0) * 3.1416));
              v34 = v33 * 0.06;
              ColorTransform::setAddColor((ColorTransform *)(v32 + 9), v33 * 0.25, v33 * 0.25, v33 * 0.25);
              (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                v34 + *((float *)this + 115));
              return (#1257 *)(*(__int64 (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 45) + 56LL))(
                                *((_QWORD *)this + 45),
                                *((float *)this + 115) - v34);
            }
          }
        }
      }
      return result;
    }

    void __fastcall ChestOpenAnimationPopup::setRewardCountProgress(
            LogicDoSpellCommand *this,
            float a2,
            int a3,
            const char *a4,
            __int64 a5)
    {
      int v6; // w21
      float v10; // s1
      float v11; // s0
      float v12; // s2
      float v13; // s1
      __int64 v14; // x20
      MovieClip *v15; // x0
      int v16; // w8
      int v17; // w9
      float v18; // s1
      int v19; // w1
      const char *v20; // x1
      #1271 *TextFieldByName; // x23
      MovieClip *MovieClipByName; // x0
      vm_address_t *v23; // x0
      __int64 Instance; // x0
      #962 *PlayerAvatar; // x0
      __int64 v26; // x0
      const char *v27; // x1
      #1271 *v28; // x21
      const String *String; // x0
      MovieClip *v30; // x0
      String v31; // [xsp+18h] [xbp-58h] BYREF
    
      v6 = (int)a4;
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 43) != 0), (bool)"", a4);
      v10 = 0.0;
      v11 = 1.0;
      if ( a2 <= 1.0 )
        v12 = a2;
      else
        v12 = 1.0;
      if ( a2 >= 0.0 )
        v10 = v12;
      v13 = (float)a3
          + (float)((float)(v6 - a3)
                  * (float)(v10 + (float)((float)(1.0 - (float)((float)(1.0 - v10) * (float)(1.0 - v10))) * 0.0)));
      v14 = (unsigned int)(int)v13;
      v15 = (MovieClip *)*((_QWORD *)this + 45);
      if ( v15 )
      {
        v16 = *((_DWORD *)this + 100);
        if ( v16 >= 1 )
        {
          v17 = *((_DWORD *)this + 96);
          if ( v17 >= 1 )
          {
            v18 = v13 / (float)v17;
            if ( v18 >= 0.0 )
            {
              if ( v18 <= 1.0 )
                v11 = v18;
            }
            else
            {
              v11 = 0.0;
            }
            v19 = (int)(float)((float)(v11 * (float)v16) + 0.5);
            if ( *((_BYTE *)this + 396) && v19 == v16 )
              v19 = *((_DWORD *)this + 101);
            MovieClip::gotoAndStopFrameIndex(v15, v19);
            v15 = (MovieClip *)*((_QWORD *)this + 45);
          }
        }
        TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v15, "card_count");
        if ( TextFieldByName )
        {
          String::format((String *)"%d/%d", v20, v14, a5);
          TextField::setText(TextFieldByName, &v31);
          String::~String(&v31);
        }
        else
        {
          MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 45), "gold");
          if ( MovieClipByName )
          {
            v23 = (vm_address_t *)MovieClip::setNumberText(MovieClipByName, "txt", v14, 1);
            Instance = GameMode::getInstance(v23);
            PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(Instance);
            if ( (int)LogicClientAvatar::getMaxGold(PlayerAvatar) <= v6 )
            {
              v26 = MovieClip::getTextFieldByName(*((_QWORD *)this + 45), "total_gold");
              v28 = (#1271 *)v26;
              if ( v26 )
              {
                *(_BYTE *)(v26 + 8) = 1;
                String = (const String *)StringTable::getString((#1308 *)"TID_GOLD_CAP_FULL", v27);
                TextField::setText(v28, String);
              }
            }
          }
          else
          {
            v30 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 45), "gems");
            if ( v30 )
              MovieClip::setNumberText(v30, "txt", v14, 1);
          }
        }
      }
      if ( (int)v14 > *((_DWORD *)this + 113) && *((float *)this + 114) <= 0.0 )
      {
        *((_DWORD *)this + 114) = 1041194025;
        *((_DWORD *)this + 113) = v14;
      }
    }

    // attributes: thunk
    __int64 __fastcall ChestOpenAnimationPopup::fadeOut(LogicDoSpellCommand *this)
    {
      return PopupBase::fadeOut(this);
    }

    __int64 __fastcall ChestOpenAnimationPopup::allowClosingFromModalTapping(LogicDoSpellCommand *this)
    {
      return 0;
    }

    _QWORD *__fastcall ChestOpenAnimationPopup::showReward(LogicDoSpellCommand *this, const #1012 *a2)
    {
      _QWORD *result; // x0
      _QWORD *v4; // x19
      __int64 v5; // t1
      __int64 v6; // x22
      vm_address_t *v7; // x0
      __int64 Instance; // x0
      _QWORD *v9; // x20
      __int64 v10; // x8
      __int64 v11; // x23
      __int64 v12; // x24
      AreaEffectObject *SpellData; // x21
      __int64 SpellByData; // x0
      int v15; // w25
      _DWORD *v16; // x8
      __int64 v17; // x8
    
      if ( *((_QWORD *)this + 33) )
        return (_QWORD *)Debugger::warning(
                           (__siginfo *)"chest open popup: opening multiple chests simultaneously?",
                           (const char *)a2);
      result = (_QWORD *)LogicReward::clone(a2);
      *((_QWORD *)this + 33) = result;
      v5 = *((_QWORD *)this + 29);
      v4 = (_QWORD *)((char *)this + 232);
      v4[1] = v5;
      v6 = *result;
      if ( *result )
      {
        v7 = (vm_address_t *)std::vector<ChestOpenAnimationPopup::DataPrevState>::resize(v4, *(int *)(v6 + 12), 0, 0);
        Instance = GameMode::getInstance(v7);
        result = (_QWORD *)LogicGameMode::getHome(*(#1028 **)(Instance + 112));
        v9 = result;
        v10 = *(int *)(v6 + 12);
        if ( (int)v10 >= 1 )
        {
          v11 = v10 - 1;
          v12 = 12 * v10 - 4;
          do
          {
            SpellData = (AreaEffectObject *)LogicSpell::getSpellData(*(TextField **)(*(_QWORD *)v6 + 8 * v11));
            SpellByData = LogicClientHome::getSpellByData(v9, SpellData);
            if ( SpellByData )
              v15 = *(_DWORD *)(SpellByData + 16);
            else
              v15 = 0;
            result = (_QWORD *)LogicData::getGlobalID(SpellData);
            v16 = (_DWORD *)(*v4 + v12);
            *(v16 - 2) = (_DWORD)result;
            *(v16 - 1) = v15;
            *v16 = 0;
            v17 = v11-- + 1;
            v12 -= 12;
          }
          while ( v17 > 1 );
        }
      }
      return result;
    }

    void __fastcall ChestOpenAnimationPopup::extraGoldReceived(LogicDoSpellCommand *this, const TextField *a2, int a3)
    {
      AreaEffectObject *SpellData; // x0
      int GlobalID; // w0
      __int64 v8; // x8
      int v9; // w9
      __int64 v10; // x8
      __int64 v11; // x9
      __int64 v12; // x10
      int *v13; // x8
      bool v14; // zf
      AreaEffectObject *v15; // x0
      __int64 Name; // x0
      const String *v17; // x1
      String v18; // [xsp+8h] [xbp-38h] BYREF
    
      SpellData = (AreaEffectObject *)LogicSpell::getSpellData(a2);
      GlobalID = LogicData::getGlobalID(SpellData);
      v8 = *((_QWORD *)this + 29);
      v9 = -1431655765 * ((*((_QWORD *)this + 30) - v8) >> 2);
      v10 = v8 + 12LL * (v9 - 1);
      v11 = v9 + 1LL;
      v12 = v10 + 12;
      while ( --v11 > 0 )
      {
        v13 = (int *)(v12 - 12);
        v14 = *(_DWORD *)(v12 - 12) == GlobalID;
        v12 -= 12;
        if ( v14 )
          goto LABEL_7;
      }
      v13 = &ChestOpenAnimationPopup::getDataPrevState(int)::notFound;
      GlobalID = ChestOpenAnimationPopup::getDataPrevState(int)::notFound;
    LABEL_7:
      if ( GlobalID )
      {
        v13[2] += a3;
        *((_DWORD *)this + 105) += a3;
      }
      else
      {
        v15 = (AreaEffectObject *)LogicSpell::getSpellData(a2);
        Name = LogicData::getName(v15);
        operator+(&v18, "chest open anim, prev state not found for spell: ", Name);
        Debugger::warning((__siginfo *)&v18, v17);
        String::~String(&v18);
      }
    }

    void __fastcall ChestOpenAnimationPopup::advanceCollectState(LogicDoSpellCommand *this)
    {
      const char *v2; // x1
      __int64 Instance; // x0
      #962 *PlayerAvatar; // x0
      int Gold; // w0
      int v6; // w8
      __int64 v7; // x1
      const char *v8; // x2
    
      switch ( *((_DWORD *)this + 65) )
      {
        case 0:
          if ( (ChestOpenAnimationPopup::collectNextItemFromChest(this) & 1) != 0 )
            goto LABEL_6;
          Debugger::warning((__siginfo *)"chest open popup: empty chest!?", v2);
          if ( *((_DWORD *)this + 65) != 5 )
          {
            v6 = 5;
            goto LABEL_15;
          }
          return;
        case 1:
          goto LABEL_6;
        case 2:
          ChestOpenAnimationPopup::setRewardCountProgress(
            this,
            1.0,
            *((_DWORD *)this + 94),
            (const char *)*((unsigned int *)this + 95),
            *((unsigned int *)this + 96));
          if ( *((int *)this + 102) <= 0 && !*((_BYTE *)this + 397) )
            goto LABEL_9;
    LABEL_6:
          ChestOpenAnimationPopup::setCollectSubState(this);
          break;
        case 3:
          if ( *((int *)this + 102) < 1 )
            goto LABEL_10;
          Instance = GameMode::getInstance((vm_address_t *)this);
          PlayerAvatar = (#962 *)GameMode::getPlayerAvatar(Instance);
          Gold = LogicClientAvatar::getGold(PlayerAvatar);
          ChestOpenAnimationPopup::setRewardCountProgress(
            this,
            1.0,
            Gold - *((_DWORD *)this + 105) - *((_DWORD *)this + 102),
            (const char *)(unsigned int)(Gold - *((_DWORD *)this + 105)),
            0xFFFFFFFFLL);
    LABEL_9:
          if ( *((_DWORD *)this + 65) != 4 )
          {
    LABEL_10:
            v6 = 4;
    LABEL_15:
            *((_DWORD *)this + 65) = v6;
          }
          break;
        case 4:
          if ( (ChestOpenAnimationPopup::collectNextItemFromChest(this) & 1) != 0 )
          {
            ChestOpenAnimationPopup::setCollectSubState(this);
          }
          else if ( *((_DWORD *)this + 65) != 5 )
          {
            *((_DWORD *)this + 65) = 5;
          }
          ChestOpenAnimationPopup::updateCardsLeftValue(this, v7, v8);
          return;
        default:
          return;
      }
    }

    __int64 __fastcall ChestOpenAnimationPopup::setCollectSubState(__int64 this, int a2, const char *a3)
    {
      __int64 v3; // x19
      MovieClip *v4; // x0
      MovieClip *v5; // x0
      MovieClip *v6; // x0
      __int64 v7; // x1
      const char *v8; // x2
      __int64 v9; // x0
      #1047 *v10; // x0
      #1047 *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x0
      LogicBackgroundDecoData *v14; // x20
      int v15; // w1
      DonateAllianceUnitMessage *v16; // x0
      const char *v17; // x1
      __int64 MovieClipByName; // x20
      #1257 *v19; // x0
      __int64 v20; // x0
      const char *v21; // x1
      #1271 *TextFieldByName; // x21
      const String *String; // x0
      __int64 v24; // x0
      const char *v25; // x1
      #1271 *v26; // x20
      __int64 v27; // x21
      int v28; // w1
      #1047 *v29; // x0
      #1047 *v30; // x0
      LogicJSONObject *v31; // x0
      LogicBackgroundDecoData *v32; // x0
      String v33; // [xsp+28h] [xbp-78h] BYREF
      String v34; // [xsp+40h] [xbp-60h] BYREF
      String v35; // [xsp+58h] [xbp-48h] BYREF
      float v36; // [xsp+70h] [xbp-30h]
      float v37; // [xsp+74h] [xbp-2Ch]
      float v38; // [xsp+78h] [xbp-28h]
      float v39; // [xsp+7Ch] [xbp-24h]
    
      v3 = this;
      if ( *(_DWORD *)(this + 260) != a2 )
      {
        *(_DWORD *)(this + 260) = a2;
        if ( a2 == 3 )
        {
          ChestOpenAnimationPopup::setRewardCountProgress(
            (LogicDoSpellCommand *)this,
            1.0,
            *(_DWORD *)(this + 376),
            (const char *)*(unsigned int *)(this + 380),
            *(unsigned int *)(this + 384));
          MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(v3 + 344), "progress_gold");
          if ( !MovieClipByName )
            Debugger::error((__siginfo *)"cannot find progress_gold to show card extra gold", v17);
          v19 = *(#1257 **)(v3 + 360);
          *(_QWORD *)(v3 + 336) = v19;
          v20 = MovieClip::getMovieClipByName(v19, "txt_upgrade_available");
          if ( v20 )
          {
            TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v20, "TID_UPGRADE_AVAILABLE");
            if ( TextFieldByName )
            {
              String = (const String *)StringTable::getString((#1308 *)"TID_STACK_FULL", v21);
              TextField::setText(TextFieldByName, String);
            }
          }
          *(_QWORD *)(v3 + 360) = MovieClipByName;
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)MovieClipByName + 80LL))(
            MovieClipByName,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          v24 = *(_QWORD *)(v3 + 360);
          *(_BYTE *)(v24 + 8) = 1;
          v26 = (#1271 *)MovieClip::getTextFieldByName(v24, "TID_YOUR_GOLD");
          if ( v26 )
          {
            v27 = StringTable::getString((#1308 *)"TID_MAX_LEVEL_EXTRA_GOLD_PROGRESS_BAR", v25);
            String::String(&v34, "<VALUE>");
            String::valueOf(&v33, (String *)*(unsigned int *)(v3 + 408), v28);
            String::replace(&v35, v27, &v34, &v33);
            String::~String(&v33);
            String::~String(&v34);
            TextField::setText(v26, &v35);
            String::~String(&v35);
          }
          this = MovieClip::getTextFieldByName(*(_QWORD *)(v3 + 360), "total_gold");
          if ( this )
            *(_BYTE *)(this + 8) = 0;
        }
        else if ( a2 == 2 )
        {
          Debugger::doAssert((Debugger *)(*(_QWORD *)(this + 344) != 0), (bool)"", a3);
          MovieClip::gotoAndStop(*(MovieClip **)(v3 + 344), "stop");
          v4 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(v3 + 344), "card_epic");
          MovieClip::gotoAndStop(v4, "stop");
          v5 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(v3 + 344), "card_rare");
          MovieClip::gotoAndStop(v5, "stop");
          v6 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(v3 + 344), "card_common");
          MovieClip::gotoAndStop(v6, "stop");
          v9 = *(_QWORD *)(v3 + 360);
          if ( v9 )
            *(float *)(v3 + 460) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
          if ( *(_QWORD *)(v3 + 440) )
          {
            v10 = (#1047 *)DisplayObject::localToGlobal(0.0, 0.0);
            Instance = (#1047 *)HomeScreen::getInstance(v10);
            RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
            EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
            v14 = EffectManager;
            v15 = *(_DWORD *)(v3 + 448);
            if ( v15 != -1 )
              EffectManager::removeEffect(EffectManager, v15);
            v16 = (DonateAllianceUnitMessage *)EffectManager::addLoopingEffectScreen(
                                                 v14,
                                                 *(const AskForTVContentMessage **)(v3 + 440),
                                                 v37,
                                                 v36,
                                                 0,
                                                 0,
                                                 0,
                                                 0);
            *(_DWORD *)(v3 + 448) = Effect::getEffectId(v16);
          }
          return ChestOpenAnimationPopup::updateCardsLeftValue((LogicDoSpellCommand *)v3, v7, v8);
        }
        else if ( a2 == 1 && *(_QWORD *)(this + 432) )
        {
          v29 = (#1047 *)DisplayObject::localToGlobal(0.0, 0.0);
          v30 = (#1047 *)HomeScreen::getInstance(v29);
          v31 = (LogicJSONObject *)HomeScreen::getRenderSystem(v30);
          v32 = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(v31);
          return EffectManager::addEffectNoLoopScreen(
                   v32,
                   *(const AskForTVContentMessage **)(v3 + 432),
                   v39,
                   v38,
                   0,
                   0,
                   0,
                   0);
        }
      }
      return this;
    }

    __int64 __fastcall ChestOpenAnimationPopup::collectNextItemFromChest(
            LogicDoSpellCommand *this,
            __int64 a2,
            const char *a3)
    {
      const char *v4; // x2
      MovieClip *v5; // x0
      MovieClip *v6; // x0
      MovieClip *v7; // x0
      #1047 *v8; // x0
      #1047 *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x0
      #1004 *v12; // x0
      _QWORD *v13; // x23
      __int64 *v14; // x8
      const #1355 *v15; // x21
      LogicDoSpellCommand *GoldData; // x0
      String *v17; // x4
      vm_address_t *CardClipForResource; // x20
      __int64 v19; // x0
      #1004 *PlayerAvatar; // x0
      int v21; // w22
      AreaEffectObject *v22; // x0
      #1004 *ResourceCount; // x0
      int v24; // w8
      const AreaEffectObject *v25; // x2
      const AreaEffectObject *v26; // x2
      const #1355 *v27; // x21
      LogicDoSpellCommand *DiamondData; // x0
      String *v29; // x4
      __int64 v30; // x0
      #962 *v31; // x0
      #1004 *Diamonds; // x0
      const AreaEffectObject *v33; // x2
      const AreaEffectObject *v34; // x2
      __int64 v35; // x9
      int v36; // w8
      TextField **v37; // x10
      TextField *v38; // x22
      _QWORD *v39; // x9
      vm_address_t *SpellData; // x21
      __int64 v41; // x0
      __int64 Home; // x0
      TextField *SpellByData; // x23
      int GlobalID; // w0
      const char *v45; // x2
      __int64 v46; // x8
      int v47; // w9
      __int64 v48; // x10
      __int64 v49; // x8
      __int64 v50; // x9
      int *v51; // x20
      bool v52; // zf
      #1257 **v53; // x21
      #1257 *v54; // x1
      const char *v55; // x1
      int v56; // w8
      int v57; // w24
      int v58; // w25
      int v59; // w8
      int v60; // w20
      String *v61; // x5
      float v62; // s0
      float v63; // s1
      LogicDataTables *Rarity; // x22
      LogicDataTables *v65; // x22
      __int64 v66; // x8
      LogicGameObjectManagerListener *v67; // x0
      LogicGameObjectManagerListener *v68; // x0
      #1257 *v69; // x0
      LogicDoSpellCommand *v70; // x0
      __int64 v71; // x19
      __int64 MovieClipByName; // x20
      const String *v73; // x2
      MovieClip *v74; // x0
      MovieClip *v75; // x20
      MovieClip *v76; // x0
      __int64 v77; // x0
      MovieClip *v78; // x0
      String v80; // [xsp+8h] [xbp-E8h] BYREF
      String v81; // [xsp+20h] [xbp-D0h] BYREF
      String v82; // [xsp+38h] [xbp-B8h] BYREF
      String v83; // [xsp+50h] [xbp-A0h] BYREF
      String v84; // [xsp+68h] [xbp-88h] BYREF
      String v85; // [xsp+80h] [xbp-70h] BYREF
      String v86; // [xsp+98h] [xbp-58h] BYREF
    
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 64) == 2), (bool)"", a3);
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 33) != 0), (bool)"", v4);
      v5 = (MovieClip *)*((_QWORD *)this + 39);
      *((_BYTE *)v5 + 8) = 0;
      MovieClip::gotoAndStopFrameIndex(v5, 0);
      v6 = (MovieClip *)*((_QWORD *)this + 40);
      *((_BYTE *)v6 + 8) = 0;
      MovieClip::gotoAndStopFrameIndex(v6, 0);
      v7 = (MovieClip *)*((_QWORD *)this + 41);
      *((_BYTE *)v7 + 8) = 0;
      v8 = (#1047 *)MovieClip::gotoAndStopFrameIndex(v7, 0);
      *((_QWORD *)this + 51) = 0;
      *((_QWORD *)this + 54) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 53) = 0;
      if ( *((_DWORD *)this + 112) != -1 )
      {
        Instance = (#1047 *)HomeScreen::getInstance(v8);
        RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        EffectManager::removeEffect(EffectManager, *((_DWORD *)this + 112));
        *((_DWORD *)this + 112) = -1;
      }
      String::String(&v86);
      v12 = (#1004 *)String::String(&v85);
      v13 = (_QWORD *)((char *)this + 424);
      *((_QWORD *)this + 46) = *((_QWORD *)this + 39);
      v14 = (__int64 *)*((_QWORD *)this + 33);
      v15 = (const #1355 *)*((unsigned int *)v14 + 2);
      if ( (int)v15 >= 1 )
      {
        *((_DWORD *)v14 + 2) = 0;
        GoldData = (LogicDoSpellCommand *)LogicDataTables::getGoldData(v12);
        CardClipForResource = (vm_address_t *)ChestOpenAnimationPopup::getCardClipForResource(
                                                GoldData,
                                                v15,
                                                (int)&v86,
                                                &v85,
                                                v17);
        v19 = GameMode::getInstance(CardClipForResource);
        PlayerAvatar = (#1004 *)GameMode::getPlayerAvatar(v19);
        v21 = (int)PlayerAvatar;
        v22 = (AreaEffectObject *)LogicDataTables::getGoldData(PlayerAvatar);
        ResourceCount = (#1004 *)LogicClientAvatar::getResourceCount(v21, v22);
        v24 = (_DWORD)ResourceCount - *((_DWORD *)this + 105);
        *((_DWORD *)this + 95) = v24;
        *((_DWORD *)this + 94) = v24 - (_DWORD)v15;
        *((_DWORD *)this + 96) = -1;
        *((_DWORD *)this + 98) = 1058642330;
        *v13 = LogicDataTables::getGoldData(ResourceCount);
        String::String(&v84, "openChest_get_gold");
        *((_QWORD *)this + 54) = LogicDataTables::getEffectByName((#1004 *)&v84, 0, v25);
        String::~String(&v84);
        String::String(&v83, "openChest_loop_gold");
        *((_QWORD *)this + 55) = LogicDataTables::getEffectByName((#1004 *)&v83, 0, v26);
        String::~String(&v83);
        goto LABEL_32;
      }
      v27 = (const #1355 *)*((unsigned int *)v14 + 3);
      if ( (int)v27 >= 1 )
      {
        *((_DWORD *)v14 + 3) = 0;
        DiamondData = (LogicDoSpellCommand *)LogicDataTables::getDiamondData(v12);
        CardClipForResource = (vm_address_t *)ChestOpenAnimationPopup::getCardClipForResource(
                                                DiamondData,
                                                v27,
                                                (int)&v86,
                                                &v85,
                                                v29);
        v30 = GameMode::getInstance(CardClipForResource);
        v31 = (#962 *)GameMode::getPlayerAvatar(v30);
        Diamonds = (#1004 *)LogicClientAvatar::getDiamonds(v31);
        *((_DWORD *)this + 95) = (_DWORD)Diamonds;
        *((_DWORD *)this + 94) = (_DWORD)Diamonds - (_DWORD)v27;
        *((_DWORD *)this + 96) = -1;
        *((_DWORD *)this + 98) = 1053609165;
        *v13 = LogicDataTables::getDiamondData(Diamonds);
        String::String(&v82, "openChest_get_gem");
        *((_QWORD *)this + 54) = LogicDataTables::getEffectByName((#1004 *)&v82, 0, v33);
        String::~String(&v82);
        String::String(&v81, "openChest_loop_gem");
        *((_QWORD *)this + 55) = LogicDataTables::getEffectByName((#1004 *)&v81, 0, v34);
        String::~String(&v81);
        goto LABEL_32;
      }
      v35 = *v14;
      if ( !*v14 || (v36 = *(_DWORD *)(v35 + 12), v36 < 1) )
      {
        v53 = (#1257 **)((char *)this + 344);
        v54 = (#1257 *)*((_QWORD *)this + 43);
    LABEL_35:
        ChestOpenAnimationPopup::setGainedCardClip(this, v54);
        v71 = 0;
        *v53 = 0;
        goto LABEL_44;
      }
      v37 = *(TextField ***)v35;
      v38 = **(TextField ***)v35;
      *(_DWORD *)(v35 + 12) = v36 - 1;
      if ( v36 >= 2 )
      {
        v39 = v37 + 1;
        do
        {
          *(v39 - 1) = *v39;
          --v36;
          ++v39;
        }
        while ( v36 > 1 );
      }
      SpellData = (vm_address_t *)LogicSpell::getSpellData(v38);
      v41 = GameMode::getInstance(SpellData);
      Home = LogicGameMode::getHome(*(#1028 **)(v41 + 112));
      SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, SpellData);
      GlobalID = LogicData::getGlobalID((AreaEffectObject *)SpellData);
      v46 = *((_QWORD *)this + 29);
      v47 = -1431655765 * ((*((_QWORD *)this + 30) - v46) >> 2);
      v48 = v46 + 12LL * (v47 - 1);
      v49 = v47 + 1LL;
      v50 = v48 + 12;
      while ( --v49 > 0 )
      {
        v51 = (int *)(v50 - 12);
        v52 = *(_DWORD *)(v50 - 12) == GlobalID;
        v50 -= 12;
        if ( v52 )
          goto LABEL_19;
      }
      v51 = &ChestOpenAnimationPopup::getDataPrevState(int)::notFound;
      GlobalID = ChestOpenAnimationPopup::getDataPrevState(int)::notFound;
    LABEL_19:
      Debugger::doAssert(
        (Debugger *)(GlobalID != 0),
        (bool)"reward: no prev state for spell found, spells were added after showReward call?",
        v45);
      v57 = v51[1];
      v56 = v51[2];
      v58 = *((_DWORD *)SpellByData + 4);
      *((_DWORD *)this + 102) = v56;
      *((_DWORD *)this + 103) = 0;
      *((_DWORD *)this + 104) = 1065353216;
      v59 = *((_DWORD *)this + 105) - v56;
      *((_DWORD *)this + 105) = v59;
      if ( v59 < 0 )
      {
        Debugger::warning((__siginfo *)"ChestOpenAnim: total extra gold negative!", v55);
        *((_DWORD *)this + 105) = 0;
      }
      *((_BYTE *)this + 396) = LogicSpell::isLevelMax(SpellByData);
      v60 = *((_DWORD *)SpellByData + 4);
      *((_BYTE *)this + 397) = v60 >= (int)LogicSpell::getMaxMaterialCount(SpellByData);
      CardClipForResource = (vm_address_t *)ChestOpenAnimationPopup::getCardClipForSpell(
                                              v38,
                                              (const TextField *)(unsigned int)(*((_DWORD *)SpellByData + 2) + 1),
                                              (v57 < 1) & (unsigned __int8)(*((_DWORD *)SpellByData + 2) == 0),
                                              (bool)&v86,
                                              &v85,
                                              v61);
      *((_DWORD *)this + 94) = v57;
      *((_DWORD *)this + 95) = v58;
      *((_DWORD *)this + 96) = LogicSpell::getMaterialCountForNextLevel(SpellByData);
      v62 = 0.15;
      v63 = (float)(v58 - v57) * 0.15;
      *((float *)this + 98) = v63;
      if ( v63 >= 0.15 )
      {
        v62 = 1.1;
        if ( v63 <= 1.1 )
          v62 = (float)(v58 - v57) * 0.15;
      }
      *((float *)this + 98) = v62;
      if ( v38 )
      {
        LogicSpell::destruct(v38);
        operator delete(v38);
      }
      Rarity = (LogicDataTables *)LogicSpellData::getRarity((InitState *)SpellData);
      if ( Rarity == (LogicDataTables *)LogicDataTables::getRarityEpic(Rarity) )
      {
        v66 = *((_QWORD *)this + 41);
        goto LABEL_30;
      }
      v65 = (LogicDataTables *)LogicSpellData::getRarity((InitState *)SpellData);
      if ( v65 == (LogicDataTables *)LogicDataTables::getRarityRare(v65) )
      {
        v66 = *((_QWORD *)this + 40);
    LABEL_30:
        *((_QWORD *)this + 46) = v66;
      }
      v67 = (LogicGameObjectManagerListener *)LogicSpellData::getRarity((InitState *)SpellData);
      *((_QWORD *)this + 54) = LogicRarityData::getAppearEffect(v67);
      v68 = (LogicGameObjectManagerListener *)LogicSpellData::getRarity((InitState *)SpellData);
      *((_QWORD *)this + 55) = LogicRarityData::getLoopEffect(v68);
    LABEL_32:
      v53 = (#1257 **)((char *)this + 344);
      v54 = (#1257 *)*((_QWORD *)this + 43);
      if ( !CardClipForResource )
        goto LABEL_35;
      v69 = (#1257 *)*((_QWORD *)this + 61);
      if ( v54 )
      {
        MovieClip::changeTimelineChild(v69, v54, (#1249 *)CardClipForResource);
        ChestOpenAnimationPopup::setGainedCardClip(this, *((#1257 **)this + 43));
        *((_QWORD *)this + 43) = 0;
        v70 = (LogicDoSpellCommand *)MovieClip::gotoAndPlay(*((MovieClip **)this + 58), "play", "end");
      }
      else
      {
        v70 = (LogicDoSpellCommand *)MovieClip::changeTimelineChild(v69, "card", (#1249 *)CardClipForResource);
      }
      ChestOpenAnimationPopup::updateCardNameField(v70, (#1257 *)CardClipForResource);
      *v53 = (#1257 *)CardClipForResource;
      MovieClip::gotoAndPlay((MovieClip *)CardClipForResource, 0, "stop");
      MovieClipByName = MovieClip::getMovieClipByName(*v53, &v86);
      *((_QWORD *)this + 44) = MovieClipByName;
      operator+(&v80, "cannot find card with instance name", &v86);
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)&v80, v73);
      String::~String(&v80);
      v74 = (MovieClip *)MovieClip::getMovieClipByName(*v53, "stack_size");
      v75 = v74;
      if ( v74 )
      {
        MovieClip::gotoAndStopFrameIndex(v74, 0);
        *((_BYTE *)v75 + 8) = 0;
      }
      v76 = (MovieClip *)MovieClip::getMovieClipByName(*v53, &v85);
      *((_QWORD *)this + 45) = v76;
      if ( v76 )
      {
        MovieClip::gotoAndStopFrameIndex(v76, 0);
        v77 = *((_QWORD *)this + 45);
        *(_BYTE *)(v77 + 8) = 1;
        *((_DWORD *)this + 100) = MovieClip::getFrameIndex(v77, "progress_full");
        *((_DWORD *)this + 101) = MovieClip::getFrameIndex(*((_QWORD *)this + 45), "max_level");
      }
      v78 = (MovieClip *)*((_QWORD *)this + 46);
      if ( v78 )
      {
        MovieClip::gotoAndPlay(v78, 0, "stop");
        *(_BYTE *)(*((_QWORD *)this + 46) + 8LL) = 1;
      }
      ChestOpenAnimationPopup::setRewardCountProgress(
        this,
        0.0,
        *((_DWORD *)this + 94),
        (const char *)*((unsigned int *)this + 95),
        *((unsigned int *)this + 96));
      *((_DWORD *)this + 97) = -1100585370;
      *(_QWORD *)((char *)this + 452) = *((unsigned int *)this + 94);
      v71 = 1;
    LABEL_44:
      String::~String(&v85);
      String::~String(&v86);
      return v71;
    }

    #1375 *__fastcall ChestOpenAnimationPopup::getCardClipForResource(
            LogicDoSpellCommand *this,
            const #1355 *a2,
            const char *a3,
            String *a4,
            String *a5)
    {
      #1375 *MovieClip; // x19
      #1257 *v10; // x1
      MovieClip *MovieClipByName; // x25
      #1308 *TID; // x0
      const String *v13; // x1
      const String *String; // x0
      MovieClip *v15; // x25
      const char *v16; // x1
      __int64 v17; // x0
      LogicDoSpellCommand *DiamondData; // x0
      const char *v19; // x23
      const char *v20; // x1
      #1257 *v21; // x21
      const String *IconFileName; // x0
      const String *v23; // x2
      __int64 v24; // x20
      __int64 v25; // x0
      float v26; // s8
      float v27; // s0
      __int64 v28; // x0
      String v30; // [xsp+10h] [xbp-80h] BYREF
      String v31; // [xsp+28h] [xbp-68h] BYREF
    
      MovieClip = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_chest.sc", "card", a3);
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v10);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "card_name");
      TID = (#1308 *)LogicData::getTID(this);
      String = (const String *)StringTable::getString(TID, v13);
      MovieClip::setText(MovieClipByName, "txt", String);
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "card_epic") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "card_rare") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_epic") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_rare") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_common") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_resource") + 8) = 1;
      v15 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "number_of_cards");
      String::format((String *)"+%d", v16, a2);
      MovieClip::setText(v15, "txt", &v31);
      String::~String(&v31);
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "progress") + 8) = 0;
      v17 = MovieClip::getMovieClipByName(MovieClip, "new_card_unlocked");
      *(_BYTE *)(v17 + 8) = 0;
      DiamondData = (LogicDoSpellCommand *)LogicDataTables::getDiamondData((#1004 *)v17);
      if ( DiamondData == this )
      {
        v19 = "progress_gem";
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "progress_gem") + 8) = 1;
        v20 = "progress_gold";
        goto LABEL_5;
      }
      if ( (LogicDoSpellCommand *)LogicDataTables::getGoldData(DiamondData) == this )
      {
        v19 = "progress_gold";
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "progress_gold") + 8) = 1;
        v20 = "progress_gem";
    LABEL_5:
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, v20) + 8) = 0;
        String::operator=(a4, v19);
      }
      String::operator=(a3, "card_common");
      v21 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, (const String *)a3);
      String::String(&v30, "sc/ui_spells.sc");
      IconFileName = (const String *)LogicResourceData::getIconFileName(this);
      v24 = StringTable::getMovieClip((#1308 *)&v30, IconFileName, v23);
      String::~String(&v30);
      v25 = MovieClip::getMovieClipByName(v21, "card_image");
      v26 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v25 + 88LL))(v25)));
      v27 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v24 + 40LL))(v24, v26 / v27);
      v28 = MovieClip::getMovieClipByName(v21, "card_image");
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 160LL))(v28, v24);
      MovieClip::playOnce(v21);
      return MovieClip;
    }

    #1375 *__fastcall ChestOpenAnimationPopup::getCardClipForSpell(
            LogicDoSpellCommand *this,
            const TextField *a2,
            int a3,
            const String *a4,
            String *a5,
            String *a6)
    {
      InitState *SpellData; // x20
      __int64 Rarity; // x25
      const char *v13; // x2
      #1375 *MovieClip; // x19
      #1257 *v15; // x1
      LogicDataTables *v16; // x0
      LogicDataTables *RarityEpic; // x0
      LogicDataTables *RarityRare; // x0
      const char *v19; // x1
      MovieClip *MovieClipByName; // x25
      const char *v21; // x1
      MovieClip *v22; // x25
      const char *v23; // x1
      MovieClip *v24; // x25
      const char *v25; // x1
      __int64 v26; // x0
      MovieClip *v27; // x23
      const char *v28; // x1
      __int64 v29; // x0
      #1271 *TextFieldByName; // x22
      #1308 *TID; // x0
      const String *v32; // x1
      const String *String; // x0
      __int64 v34; // x21
      const String *IconFileName; // x0
      const String *v36; // x2
      __int64 v37; // x20
      __int64 v38; // x0
      float v39; // s8
      float v40; // s0
      __int64 v41; // x0
      String v43; // [xsp+8h] [xbp-C8h] BYREF
      String v44; // [xsp+20h] [xbp-B0h] BYREF
      String v45; // [xsp+38h] [xbp-98h] BYREF
      String v46; // [xsp+50h] [xbp-80h] BYREF
      String v47; // [xsp+68h] [xbp-68h] BYREF
    
      SpellData = (InitState *)LogicSpell::getSpellData(this);
      Rarity = LogicSpellData::getRarity(SpellData);
      MovieClip = (#1375 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui_chest.sc", "card", v13);
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v15);
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "card_epic") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "card_rare") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "card_common") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_epic") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_rare") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_common") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_resource") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "progress_gem") + 8) = 0;
      *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "progress_gold") + 8) = 0;
      v16 = (LogicDataTables *)String::operator=(a5, "progress");
      RarityEpic = (LogicDataTables *)LogicDataTables::getRarityEpic(v16);
      if ( (LogicDataTables *)Rarity == RarityEpic )
      {
        String::operator=(a4, "card_epic");
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_epic") + 8) = 1;
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "txt_card_level_epic");
        String::format((String *)"Level %d", v21, a2);
        MovieClip::setText(MovieClipByName, "txt", &v47);
        String::~String(&v47);
      }
      else
      {
        RarityRare = (LogicDataTables *)LogicDataTables::getRarityRare(RarityEpic);
        if ( (LogicDataTables *)Rarity == RarityRare )
        {
          String::operator=(a4, "card_rare");
          *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_rare") + 8) = 1;
          v22 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "txt_card_level_rare");
          String::format((String *)"Level %d", v23, a2);
          MovieClip::setText(v22, "txt", &v46);
          String::~String(&v46);
        }
        else
        {
          if ( Rarity != LogicDataTables::getRarityCommon(RarityRare) )
            Debugger::error((__siginfo *)"chest open anim::get card clip: unkown rarity for spell?", v19);
          String::operator=(a4, "card_common");
          *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "txt_card_rarity_common") + 8) = 1;
          v24 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "txt_card_level_common");
          String::format((String *)"Level %d", v25, a2);
          MovieClip::setText(v24, "txt", &v45);
          String::~String(&v45);
        }
      }
      v26 = MovieClip::getMovieClipByName(MovieClip, "new_card_unlocked");
      if ( a3 )
      {
        *(_BYTE *)(v26 + 8) = 1;
        *(_BYTE *)(MovieClip::getMovieClipByName(MovieClip, "number_of_cards") + 8) = 0;
      }
      else
      {
        *(_BYTE *)(v26 + 8) = 0;
        v27 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "number_of_cards");
        String::format((String *)"x%d", v28, *((unsigned int *)this + 4));
        MovieClip::setText(v27, "txt", &v44);
        String::~String(&v44);
      }
      v29 = MovieClip::getMovieClipByName(MovieClip, "card_name");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v29, "txt");
      TID = (#1308 *)LogicData::getTID(SpellData);
      String = (const String *)StringTable::getString(TID, v32);
      TextField::setText(TextFieldByName, String);
      v34 = MovieClip::getMovieClipByName(MovieClip, a4);
      String::String(&v43, "sc/ui_spells.sc");
      IconFileName = (const String *)LogicSpellData::getIconFileName(SpellData);
      v37 = StringTable::getMovieClip((#1308 *)&v43, IconFileName, v36);
      String::~String(&v43);
      v38 = MovieClip::getMovieClipByName((#1257 *)v34, "card_image");
      v39 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v38 + 88LL))(v38)));
      v40 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v37 + 88LL))(v37);
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v37 + 40LL))(v37, v39 / v40);
      v41 = MovieClip::getMovieClipByName((#1257 *)v34, "card_image");
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 160LL))(v41, v37);
      MovieClip::playOnce((MovieClip *)v34);
      *(_BYTE *)(v34 + 8) = 1;
      return MovieClip;
    }

    __int64 __fastcall ChestOpenAnimationPopup::setGainedCardClip(LogicDoSpellCommand *this, #1257 *a2)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 35);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 35) = 0;
      if ( a2 )
      {
        *((_QWORD *)this + 35) = a2;
        MovieClip::gotoAndPlay(a2, "stop", "end");
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 61) + 160LL))(
                 *((_QWORD *)this + 61),
                 *((_QWORD *)this + 35));
      }
      return result;
    }

    void __fastcall ChestOpenAnimationPopup::updateCardNameField(LogicDoSpellCommand *this, #1257 *a2)
    {
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x20
      Stage *GlobalBounds; // x0
      __int64 Instance; // x0
      const String *StringObject; // x0
      String v8; // [xsp+8h] [xbp-38h] BYREF
      __int128 v9; // [xsp+20h] [xbp-20h] BYREF
    
      MovieClip::gotoAndStop(a2, "stop");
      MovieClipByName = MovieClip::getMovieClipByName(a2, "card_name");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "txt");
      Rect::Rect((Rect *)&v9);
      GlobalBounds = (Stage *)DisplayObject::getGlobalBounds(TextFieldByName, &v9);
      Instance = Stage::getInstance(GlobalBounds);
      TextField::setTextFieldWidth(TextFieldByName, (float)((float)*(int *)(Instance + 428) + -5.0) - *(float *)&v9);
      StringObject = (const String *)TextField::getStringObject(TextFieldByName);
      String::String(&v8, StringObject);
      MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v8, 0);
      MovieClip::gotoAndStopFrameIndex(a2, 0);
      String::~String(&v8);
      Rect::~Rect((Rect *)&v9);
    }

    __int64 __fastcall ChestOpenAnimationPopup::getPopupType(LogicDoSpellCommand *this)
    {
      return 14;
    }

    __int64 __fastcall ChestOpenAnimationPopup::hideGuiWhenTopMost(LogicDoSpellCommand *this)
    {
      return 1;
    }

}; // end class ChestOpenAnimationPopup
