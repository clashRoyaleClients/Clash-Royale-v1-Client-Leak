class LoadingScreen
{
public:

    void __fastcall LoadingScreen::LoadingScreen(LoadingScreen *this)
    {
      *(_QWORD *)((char *)this + 13) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 8) = 0;
      *(_QWORD *)this = off_10045FD38;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
    }

    void __fastcall LoadingScreen::~LoadingScreen(CustomButton *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045FD38;
      v3 = (_QWORD *)((char *)this + 24);
      v2 = *((_QWORD *)this + 3);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 3) = 0;
      v4 = *((_QWORD *)this + 4);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)((char *)this + 13) = 0;
      *((_QWORD *)this + 1) = 0;
      v3[4] = 0;
      v3[5] = 0;
      v3[2] = 0;
      v3[3] = 0;
      *v3 = 0;
      v3[1] = 0;
    }

    // attributes: thunk
    void __fastcall LoadingScreen::~LoadingScreen(CustomButton *this)
    {
      __ZN13LoadingScreenD2Ev(this);
    }

    void __fastcall LoadingScreen::~LoadingScreen(CustomButton *this)
    {
      LoadingScreen::~LoadingScreen(this);
      operator delete(this);
    }

    __int64 __fastcall LoadingScreen::enter(CustomButton *this)
    {
      #1080 *Instance; // x0
      __int64 result; // x0
      #1080 *v4; // x0
      const String *v5; // x1
      LogicDataTables *v6; // x0
      LogicDataTables *isLoaded; // x0
      char v8; // w20
      thread_state_t *v9; // x0
      const char *v10; // x2
      thread_state_t *v11; // x0
      __int64 v12; // x0
      LogicDataTables *isState; // x0
      __int64 v14; // x21
      __int64 AttackButtonSound; // x0
      int v16; // w21
      __int64 v17; // x0
      const String *v18; // x1
      String *v19; // x0
      #1257 *MovieClip; // x21
      int TotalFrames; // w0
      const String *v22; // x1
      Stage *v23; // x0
      __int64 v24; // x0
      float v25; // s10
      float v26; // s9
      float v27; // s0
      float v28; // s0
      #1080 *v29; // x0
      __int64 v30; // x21
      String v31; // [xsp+0h] [xbp-70h] BYREF
      String v32; // [xsp+18h] [xbp-58h] BYREF
    
      *((_DWORD *)this + 3) = 0;
      Instance = (#1080 *)GameMain::getInstance(this);
      result = GameMain::isEditorModeActive(Instance);
      if ( (result & 1) != 0 )
        return result;
      v4 = (#1080 *)GameMain::getInstance((#1080 *)result);
      result = GameMain::getStartEditorMode(v4);
      if ( (_DWORD)result )
        return result;
      v6 = (LogicDataTables *)((LogicDataTables *(__fastcall *)(GameMain *__hidden, const String *))GameMain::loadAsset)(
                                (GameMain *)&Resources::SC_LOADING_SCREEN,
                                v5);
      isLoaded = (LogicDataTables *)LogicDataTables::isLoaded(v6);
      v8 = (char)isLoaded;
      v9 = (thread_state_t *)LogicDataTables::isLoaded(isLoaded);
      if ( (_DWORD)v9
        && (v11 = (thread_state_t *)GameStateManager::getInstance(v9)) != 0
        && (v12 = GameStateManager::getInstance(v11),
            isState = (LogicDataTables *)GameStateManager::isState(v12, 5),
            (_DWORD)isState) )
      {
        v14 = SoundManager::sm_pInstance;
        AttackButtonSound = LogicDataTables::getAttackButtonSound(isState);
        SoundManager::playSound(v14, AttackButtonSound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      v17 = *((_QWORD *)this + 3);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      *((_QWORD *)this + 3) = 0;
      if ( (v8 & 1) == 0 )
      {
        MovieClip = (#1257 *)ResourceManager::getMovieClip(
                               (ResourceManager *)&Resources::SC_LOADING_SCREEN,
                               (const String *)"sc_intro",
                               v10);
        *((_QWORD *)this + 3) = MovieClip;
        TotalFrames = MovieClip::getTotalFrames(MovieClip);
        MovieClip::gotoAndPlayFrameIndex(MovieClip, 0, TotalFrames - 1);
        String::String(&v32, "sfx/supercell_jingle.wav");
        GameMain::loadAsset((GameMain *)&v32, v22);
        SoundManager::playSound((SoundManager *)SoundManager::sm_pInstance, &v32, 1.0, 1.0, 0);
        v19 = &v32;
        goto LABEL_14;
      }
      if ( v16 )
      {
        String::String(&v31, "sfx/scroll_loading_01.wav");
        GameMain::loadAsset((GameMain *)&v31, v18);
        SoundManager::playSound((SoundManager *)SoundManager::sm_pInstance, &v31, 1.0, 1.0, 0);
        v19 = &v31;
    LABEL_14:
        String::~String(v19);
      }
      v23 = (Stage *)ResourceManager::getMovieClip(
                       (ResourceManager *)&Resources::SC_LOADING_SCREEN,
                       (const String *)"loading_screen",
                       v10);
      *((_QWORD *)this + 4) = v23;
      v24 = Stage::getInstance(v23);
      v25 = (float)*(int *)(v24 + 428);
      v26 = (float)*(int *)(v24 + 432);
      *((_QWORD *)this + 5) = MovieClip::getMovieClipByName(*((#1257 **)this + 4), "loading_bar");
      *((_QWORD *)this + 7) = MovieClip::getTextFieldByName(*((_QWORD *)this + 4), "text");
      *((_QWORD *)this + 8) = MovieClip::getTextFieldByName(*((_QWORD *)this + 4), "hint");
      LoadingScreen::updateLoadingProgress(this);
      v27 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4));
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4), v26 / v27);
      DisplayObject::setPixelSnappedXY(*((DisplayObject **)this + 4), v25 * 0.5, 0.0);
      v28 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5));
      v29 = (#1080 *)(*(__int64 (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 5) + 48LL))(
                       *((_QWORD *)this + 5),
                       v25 / v28);
      v30 = *(_QWORD *)(GameMain::getInstance(v29) + 104);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 160LL))(v30, *((_QWORD *)this + 4));
      if ( (v8 & 1) == 0 )
      {
        *(_BYTE *)(*((_QWORD *)this + 4) + 8LL) = 0;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 160LL))(v30, *((_QWORD *)this + 3));
        DisplayObject::setXY(*((DisplayObject **)this + 3), v25 * 0.5, v26 * 0.5);
      }
      return LoadingScreen::updateLoadingProgress(this);
    }

    void __fastcall LoadingScreen::updateLoadingProgress(CustomButton *this)
    {
      #1257 *isStopped; // x0
      LogicProgressSimulator *Instance; // x0
      __int64 CurrentState; // x20
      const char *v5; // x1
      long double v6; // q0
      #1257 *v7; // x0
      int TotalFrames; // w0
      #1271 *v9; // x21
      const String *SuitableHint; // x8
      float v11; // [xsp+10h] [xbp-60h]
      String v12; // [xsp+20h] [xbp-50h] BYREF
      String v13; // [xsp+38h] [xbp-38h] BYREF
    
      if ( !*((_QWORD *)this + 4) )
        return;
      isStopped = (#1257 *)*((_QWORD *)this + 3);
      if ( isStopped )
      {
        isStopped = (#1257 *)MovieClip::isStopped(isStopped);
        if ( !(_DWORD)isStopped )
          return;
      }
      Instance = (LogicProgressSimulator *)GameStateManager::getInstance((thread_state_t *)isStopped);
      CurrentState = GameStateManager::getCurrentState(Instance);
      if ( !CurrentState )
        return;
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), *((float *)this + 4));
      if ( (*(float (__fastcall **)(__int64))(*(_QWORD *)CurrentState + 80LL))(CurrentState) < 0.0 )
      {
        LODWORD(v6) = 0;
    LABEL_9:
        v11 = *(float *)&v6;
        goto LABEL_10;
      }
      v11 = 1.0;
      if ( (*(float (__fastcall **)(__int64))(*(_QWORD *)CurrentState + 80LL))(CurrentState) <= 1.0 )
      {
        v6 = ((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)CurrentState + 80LL))(CurrentState);
        goto LABEL_9;
      }
    LABEL_10:
      v7 = (#1257 *)*((_QWORD *)this + 5);
      if ( v7 )
      {
        TotalFrames = MovieClip::getTotalFrames(v7);
        v7 = (#1257 *)MovieClip::gotoAndStopFrameIndex(
                        *((MovieClip **)this + 5),
                        (int)(float)((float)(v11 * (float)(TotalFrames - 1)) + 0.5));
      }
      v9 = (#1271 *)*((_QWORD *)this + 6);
      if ( v9 )
      {
        (*(void (__fastcall **)(String *__return_ptr, __int64))(*(_QWORD *)CurrentState + 88LL))(&v13, CurrentState);
        TextField::setText(v9, &v13);
        String::~String(&v13);
      }
      if ( *((_QWORD *)this + 7) )
      {
        String::format((String *)"%d%%", v5, (unsigned int)(int)(float)(v11 * 100.0));
        TextField::setText(*((#1271 **)this + 7), &v12);
        String::~String(&v12);
      }
      if ( !*((_BYTE *)this + 20) && *((_QWORD *)this + 8) )
      {
        SuitableHint = (const String *)LoadingScreen::getSuitableHint(v7);
        if ( SuitableHint->m_length )
        {
          *((_BYTE *)this + 20) = 1;
          TextField::setText(*((#1271 **)this + 8), SuitableHint);
        }
      }
    }

    __int64 __fastcall LoadingScreen::exit(CustomButton *this)
    {
      __int64 v2; // x0
      __int64 result; // x0
      _QWORD *v4; // x19
      __int64 v5; // t1
    
      v2 = *((_QWORD *)this + 3);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 3) = 0;
      v5 = *((_QWORD *)this + 4);
      v4 = (_QWORD *)((char *)this + 32);
      result = v5;
      if ( v5 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      v4[3] = 0;
      v4[4] = 0;
      v4[1] = 0;
      v4[2] = 0;
      *v4 = 0;
      return result;
    }

    __int64 __fastcall LoadingScreen::isLoaded(CustomButton *this)
    {
      return 1;
    }

    void *__fastcall LoadingScreen::getSuitableHint(CustomButton *this)
    {
      int v1; // w1
      __int64 Table; // x0
      __int64 v3; // x22
      int v5; // w20
      unsigned int NativeTime; // w0
      int v7; // w21
      int v8; // w19
      __int64 v9; // x21
      #860 *v10; // x22
      int CachedExpLevel; // w23
      int CachedTrophies; // w24
      int CachedArenaIndex; // w25
      int CachedNpcWins; // w26
      char HasBeenInClan; // w0
      const char *v16; // x1
      __int64 v17; // x9
      int v18; // w8
      const String *v20; // x1
      __int64 String; // x19
      int v23; // w9
      int v24; // [xsp+Ch] [xbp-74h]
      __int64 v25; // [xsp+10h] [xbp-70h]
      String v26; // [xsp+18h] [xbp-68h] BYREF
    
      if ( !(unsigned int)LogicDataTables::isLoaded(this) )
        return &EMPTY_HINT;
      Table = LogicDataTables::getTable((LogicDataTables *)0x3D, v1);
      v3 = Table;
      v25 = Table;
      if ( !Table || GameSettings::sm_pInstance == 0 )
        return &EMPTY_HINT;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      if ( v5 < 1 )
        return &EMPTY_HINT;
      NativeTime = xTimer::getNativeTime();
      srand(NativeTime);
      v7 = rand();
      srand(1u);
      v24 = 0;
      v8 = 0;
      v9 = (unsigned int)(v7 % v5);
      while ( 1 )
      {
        v10 = (#860 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, v9);
        CachedExpLevel = GameSettings::getCachedExpLevel((#873 *)GameSettings::sm_pInstance);
        CachedTrophies = GameSettings::getCachedTrophies((#873 *)GameSettings::sm_pInstance);
        CachedArenaIndex = GameSettings::getCachedArenaIndex((#873 *)GameSettings::sm_pInstance);
        CachedNpcWins = GameSettings::getCachedNpcWins((#873 *)GameSettings::sm_pInstance);
        HasBeenInClan = GameSettings::getCachedHasBeenInClan((#873 *)GameSettings::sm_pInstance);
        if ( (unsigned int)LogicHintData::canBeShown(
                             v10,
                             CachedExpLevel,
                             CachedArenaIndex,
                             CachedNpcWins,
                             CachedTrophies,
                             HasBeenInClan) )
          break;
    LABEL_17:
        v3 = v25;
    LABEL_22:
        v9 = ((int)v9 + 1) % (unsigned int)v5;
        if ( ++v8 >= v5 )
        {
          Debugger::warning((__siginfo *)"Cant find hint text!", v16);
          return &EMPTY_HINT;
        }
      }
      v17 = 0;
      do
        v18 = sm_hintHistory[v17];
      while ( v18 != (_DWORD)v9 && v17++ < 4 );
      if ( v24 <= 499 && v18 == (_DWORD)v9 )
      {
        ++v24;
        goto LABEL_17;
      }
      String::String(&v26);
      if ( !*(_DWORD *)LogicData::getTID(v10) )
        LogicHintData::getIOSTID(v10);
      String::operator=(&v26);
      v3 = v25;
      if ( !v26.m_length )
      {
        String::~String(&v26);
        goto LABEL_22;
      }
      v23 = sm_historyIndex;
      if ( (unsigned int)sm_historyIndex <= 4 )
        sm_hintHistory[sm_historyIndex] = v9;
      sm_historyIndex = (v23 + 1) % 5;
      String = StringTable::getString((#1308 *)&v26, v20);
      String::~String(&v26);
      return (void *)String;
    }

    void __fastcall LoadingScreen::updateLoading(CustomButton *this, float a2)
    {
      ;
    }

    __int64 __fastcall LoadingScreen::isPlayingSplashAnimation(CustomButton *this)
    {
      #1257 *v1; // x0
    
      v1 = (#1257 *)*((_QWORD *)this + 3);
      if ( v1 )
        return (unsigned int)MovieClip::isStopped(v1) ^ 1;
      else
        return 0;
    }

    void __fastcall LoadingScreen::update(CustomButton *this, float a2)
    {
      #1257 *v3; // x0
      __int64 v4; // x0
      const String *v5; // x1
      #1257 *v6; // x0
      String v7; // [xsp+8h] [xbp-28h] BYREF
    
      *((float *)this + 3) = *((float *)this + 3) + a2;
      v3 = (#1257 *)*((_QWORD *)this + 3);
      if ( !v3 )
        goto LABEL_8;
      if ( (unsigned int)MovieClip::isStopped(v3) )
      {
        v4 = *((_QWORD *)this + 3);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *((_QWORD *)this + 3) = 0;
        String::String(&v7, "sfx/scroll_loading_01.wav");
        GameMain::loadAsset((GameMain *)&v7, v5);
        SoundManager::playSound((SoundManager *)SoundManager::sm_pInstance, &v7, 1.0, 1.0, 0);
        *(_BYTE *)(*((_QWORD *)this + 4) + 8LL) = 1;
        String::~String(&v7);
      }
      v6 = (#1257 *)*((_QWORD *)this + 3);
      if ( !v6 || (unsigned int)MovieClip::isStopped(v6) )
    LABEL_8:
        LoadingScreen::updateLoadingProgress(this);
    }

    __int64 LoadingScreen::touchPressed()
    {
      return 0;
    }

    __int64 LoadingScreen::touchMoved()
    {
      return 0;
    }

    __int64 LoadingScreen::touchReleased()
    {
      return 0;
    }

    void __fastcall LoadingScreen::touchCancelled(CustomButton *this)
    {
      ;
    }

    __int64 __fastcall LoadingScreen::setAlpha(__int64 this, float a2)
    {
      if ( a2 < 0.0 )
        a2 = 0.0;
      if ( a2 > 1.0 )
        a2 = 1.0;
      *(float *)(this + 16) = a2;
      return this;
    }

}; // end class LoadingScreen
