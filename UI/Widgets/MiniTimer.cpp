class MiniTimer
{
public:

    void __fastcall MiniTimer::MiniTimer(MiniTimer *this, int a2, float a3)
    {
      MovieClip **v6; // x22
      const char *v7; // x1
      const String *v8; // x2
      MovieClip *MovieClip; // x0
      const char *v10; // x1
      const char *v11; // x1
      const AreaEffectObject *v12; // x2
      const AreaEffectObject *v13; // x2
      String v14; // [xsp+8h] [xbp-78h] BYREF
      String v15; // [xsp+20h] [xbp-60h] BYREF
      String v16; // [xsp+38h] [xbp-48h] BYREF
    
      Sprite::Sprite(this);
      *(_QWORD *)this = off_100462F80;
      *((_DWORD *)this + 30) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 12) = 0;
      v6 = (MovieClip **)((char *)this + 96);
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      if ( a2 )
        v7 = "troopDeployTimer_player";
      else
        v7 = "troopDeployTimer_enemy";
      String::String(&v16, v7);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v16, v8);
      *v6 = MovieClip;
      MovieClip::gotoAndStopFrameIndex(MovieClip, 0);
      (*(void (__fastcall **)(MovieClip *, float))(*(_QWORD *)*v6 + 80LL))(*v6, 1.0);
      (*(void (__fastcall **)(MiniTimer *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 12));
      *((_DWORD *)this + 30) = MovieClip::getFrameIndex(*v6, "end");
      *((float *)this + 27) = a3;
      *((_DWORD *)this + 26) = 0;
      *((_DWORD *)this + 29) = 1;
      *((float *)this + 28) = (float)(a3 * 0.0) * 0.25;
      if ( a2 )
        v10 = "deploy timer tick";
      else
        v10 = "enemy deploy timer tick";
      String::String(&v15, v10);
      if ( a2 )
        v11 = "deploy timer ding";
      else
        v11 = "enemy deploy timer ding";
      String::String(&v14, v11);
      *((_QWORD *)this + 16) = LogicDataTables::getSoundByName((#1004 *)&v15, 0, v12);
      *((_QWORD *)this + 17) = LogicDataTables::getSoundByName((#1004 *)&v14, 0, v13);
      String::~String(&v14);
      String::~String(&v15);
      String::~String(&v16);
    }

    // attributes: thunk
    void __fastcall MiniTimer::MiniTimer(MiniTimer *this, int a2, float a3)
    {
      __ZN9MiniTimerC2Ebf(this, a2, a3);
    }

    void __fastcall MiniTimer::~MiniTimer(#1348 *this)
    {
      __int64 v2; // x0
      char *v3; // x20
    
      *(_QWORD *)this = off_100462F80;
      v3 = (char *)this + 96;
      v2 = *((_QWORD *)this + 12);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_DWORD *)v3 + 6) = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *(_QWORD *)v3 = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall MiniTimer::~MiniTimer(#1348 *this)
    {
      __ZN9MiniTimerD2Ev(this);
    }

    void __fastcall MiniTimer::~MiniTimer(#1348 *this)
    {
      MiniTimer::~MiniTimer(this);
      operator delete(this);
    }

    bool __fastcall MiniTimer::update(#1348 *this, float a2)
    {
      int v4; // w8
      float v5; // s1
      float v6; // s0
      float v7; // s0
      #1257 *v8; // x20
      int v9; // w21
      int TotalFrames; // w0
    
      v4 = *((_DWORD *)this + 29);
      if ( v4 == 2 )
      {
        if ( (MovieClip::isPlaying(*((_QWORD *)this + 12)) & 1) == 0 )
        {
          *(_BYTE *)(*((_QWORD *)this + 12) + 8LL) = 0;
          *((_DWORD *)this + 29) = 3;
        }
      }
      else if ( v4 == 1 )
      {
        v5 = *((float *)this + 27);
        v6 = *((float *)this + 26) + a2;
        if ( v6 < 0.0 )
          v6 = 0.0;
        if ( v6 > v5 )
          v6 = *((float *)this + 27);
        *((float *)this + 26) = v6;
        MovieClip::gotoAndStopFrameIndex(
          *((MovieClip **)this + 12),
          (int)(float)((float)((float)(v6 / v5) * (float)*((int *)this + 30)) + 0.5));
        if ( *((float *)this + 26) >= *((float *)this + 27) )
        {
          v8 = (#1257 *)*((_QWORD *)this + 12);
          v9 = *((_DWORD *)this + 30);
          TotalFrames = MovieClip::getTotalFrames(v8);
          MovieClip::gotoAndPlayFrameIndex(v8, v9, TotalFrames - 1);
          *((_DWORD *)this + 29) = 2;
          SoundManager::playSound(
            SoundManager::sm_pInstance,
            *((_QWORD *)this + 17),
            0xFFFFFFFFLL,
            1.0,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        else
        {
          v7 = *((float *)this + 28) - a2;
          *((float *)this + 28) = v7;
          if ( v7 <= 0.0 )
          {
            SoundManager::playSound(
              SoundManager::sm_pInstance,
              *((_QWORD *)this + 16),
              0xFFFFFFFFLL,
              1.0,
              COERCE_LONG_DOUBLE((unsigned __int128)0));
            *((float *)this + 28) = *((float *)this + 27) * 0.25;
          }
        }
      }
      return *((_DWORD *)this + 29) != 3;
    }

}; // end class MiniTimer
