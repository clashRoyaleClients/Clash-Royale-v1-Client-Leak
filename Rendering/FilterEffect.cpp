class FilterEffect
{
public:

    __int64 __fastcall FilterEffect::FilterEffect(__int64 a1, __int64 a2, GameMain *a3, String *a4, int a5, int a6)
    {
      #1080 *v12; // x0
      #1080 *Instance; // x0
      const String *v14; // x1
      const String *v15; // x2
      MovieClip *MovieClipFromPool; // x0
      int TotalFrames; // w21
      const String *v19; // x1
      String v21; // [xsp+0h] [xbp-90h] BYREF
      String v22; // [xsp+18h] [xbp-78h] BYREF
      String v23; // [xsp+30h] [xbp-60h] BYREF
      String v24; // [xsp+48h] [xbp-48h] BYREF
    
      v12 = (#1080 *)IEffectRenderable::IEffectRenderable((_QWORD *)a1);
      *(_QWORD *)a1 = off_1004663B0;
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 8) = a2;
      Instance = (#1080 *)GameMain::getInstance(v12);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
        GameMain::loadAsset(a3, v14);
      MovieClipFromPool = (MovieClip *)ResourceManager::getMovieClipFromPool(a3, a4, v15);
      *(_QWORD *)(a1 + 16) = MovieClipFromPool;
      MovieClip::resetTimelinePositionRecursive(MovieClipFromPool);
      *(_BYTE *)(a1 + 32) = a5;
      if ( a6 == -1 )
      {
        TotalFrames = MovieClip::getTotalFrames(*(#1257 **)(a1 + 16));
        if ( TotalFrames <= 1 && a5 != 1 )
        {
          operator+(&v21, "FilterEffect: ", a3);
          operator+(&v21, "/");
          operator+((__int64 *)&v23.m_length, &v22, a4);
          operator+(&v23, " has too short timeline to be an Effect");
          Debugger::warning((__siginfo *)&v24, v19);
          String::~String(&v24);
          String::~String(&v23);
          String::~String(&v22);
          String::~String(&v21);
        }
        a6 = (int)(float)((float)(1000 * TotalFrames) * MovieClip::getMSPerFrame(*(_QWORD *)(a1 + 16)));
      }
      *(_DWORD *)(a1 + 28) = a6;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall FilterEffect::FilterEffect(__int64 a1, __int64 a2, GameMain *a3, String *a4, int a5, int a6)
    {
      return __ZN12FilterEffectC2EPK15LogicGameObjectRK6StringS5_bi(a1, a2, a3, a4, a5, a6);
    }

    _QWORD *__fastcall FilterEffect::~FilterEffect(__int64 a1, MovieClip *a2)
    {
      *(_QWORD *)a1 = off_1004663B0;
      ResourceManager::putMovieClipToPool(*(ResourceManager **)(a1 + 16), a2);
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      return IEffectRenderable::~IEffectRenderable((_QWORD *)a1);
    }

    // attributes: thunk
    _QWORD *__fastcall FilterEffect::~FilterEffect(__int64 a1, MovieClip *a2)
    {
      return __ZN12FilterEffectD2Ev(a1, a2);
    }

    void __fastcall FilterEffect::~FilterEffect(void *a1, MovieClip *a2)
    {
      FilterEffect::~FilterEffect((__int64)a1, a2);
      operator delete(a1);
    }

    __int64 __fastcall FilterEffect::endPlayback(__int64 this)
    {
      *(_WORD *)(this + 32) = 256;
      *(_DWORD *)(this + 24) = *(_DWORD *)(this + 28);
      return this;
    }

    __int64 __fastcall FilterEffect::update(__int64 a1, int a2)
    {
      _DWORD *v4; // x23
      int v5; // w21
      int TotalFrames; // w0
      int v7; // w24
      ShutdownStartedMessage *v8; // x21
      #1138 *GameObjectSprite; // x0
      __int64 MovieClip; // x0
      __int64 v11; // x8
      ColorTransform *v12; // x22
      _BYTE v14[12]; // [xsp+0h] [xbp-40h] BYREF
      int v15; // [xsp+Ch] [xbp-34h] BYREF
    
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_15;
      if ( !*(_BYTE *)(a1 + 32) )
      {
        v4 = (_DWORD *)(a1 + 24);
        v5 = *(_DWORD *)(a1 + 24);
        if ( v5 < *(_DWORD *)(a1 + 28) )
          goto LABEL_5;
    LABEL_15:
        *(_BYTE *)(a1 + 33) = 1;
        return 1;
      }
      v4 = (_DWORD *)(a1 + 24);
      v5 = *(_DWORD *)(a1 + 24) % *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 24) = v5;
    LABEL_5:
      TotalFrames = MovieClip::getTotalFrames(*(#1257 **)(a1 + 16));
      MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 16), TotalFrames * v5 / *(_DWORD *)(a1 + 28));
      if ( (int)Sprite::getNumChildren(*(_QWORD *)(a1 + 16)) >= 1 )
      {
        v7 = 0;
        v8 = *(ShutdownStartedMessage **)(*(_QWORD *)(a1 + 8) + 40LL);
        do
        {
          GameObjectSprite = (#1138 *)GameObject::getGameObjectSprite(v8);
          if ( v7 == 2 )
          {
            GameObjectSprite = (#1138 *)GameObject::getBaseSprite(v8);
          }
          else if ( v7 == 1 )
          {
            GameObjectSprite = (#1138 *)GameObject::getTopSprite(v8);
          }
          MovieClip = GameObjectSprite::getMovieClip(GameObjectSprite);
          if ( MovieClip )
          {
            v11 = **(_QWORD **)(*(_QWORD *)(a1 + 16) + 72LL);
            v15 = 0;
            v12 = (ColorTransform *)(MovieClip + 9);
            ColorTransform::ColorTransform(
              (ColorTransform *)v14,
              (const ColorTransform *)(v11 + 9),
              (const ColorTransform *)(MovieClip + 9),
              &v15);
            ColorTransform::copyValuesFrom(v12, (const ColorTransform *)v14);
            ColorTransform::~ColorTransform((ColorTransform *)v14);
          }
          ++v7;
        }
        while ( v7 < 3 );
      }
      *v4 += a2;
      return 0;
    }

    __int64 __fastcall FilterEffect::isFinished(Deco *this)
    {
      return *((unsigned __int8 *)this + 33);
    }

    void __fastcall FilterEffect::setDisplayObjectOffsets(Deco *this)
    {
      ;
    }

    void __fastcall FilterEffect::setIsoLayer(Deco *this, OutOfSyncMessage *a2)
    {
      ;
    }

    __int64 __fastcall FilterEffect::setLooping(__int64 this, char a2)
    {
      *(_BYTE *)(this + 32) = a2;
      return this;
    }

    void __fastcall FilterEffect::setLocation(Deco *this, float a2, float a3, float a4)
    {
      ;
    }

    __int64 __fastcall FilterEffect::removeReferences(__int64 this, const GameMode *a2)
    {
      if ( *(const GameMode **)(this + 8) == a2 )
        *(_QWORD *)(this + 8) = 0;
      return this;
    }

}; // end class FilterEffect
