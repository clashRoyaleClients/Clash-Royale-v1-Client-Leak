class AnimationInstance
{
public:

    __int64 __fastcall AnimationInstance::AnimationInstance(
            __int64 a1,
            __int64 a2,
            ResourceManager *a3,
            const String *a4,
            int a5,
            __int64 a6,
            int a7)
    {
      AllianceStreamMessage *v13; // x0
      AllianceStreamMessage *Instance; // x0
      const String *v15; // x1
      const String *v16; // x2
      MovieClip *MovieClipFromPool; // x22
    
      GameObjectSprite::GameObjectSprite((Sprite *)a1, a6);
      v13 = (AllianceStreamMessage *)IEffectRenderable::IEffectRenderable((_QWORD *)(a1 + 144));
      *(_QWORD *)(a1 + 200) = 0;
      *(_WORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      *(_QWORD *)a1 = off_1004729E8;
      *(_QWORD *)(a1 + 144) = off_100472B50;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 160) = a5;
      *(_DWORD *)(a1 + 164) = a7;
      Instance = GameMain::getInstance(v13);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
        GameMain::loadAsset(a3, v15);
      MovieClipFromPool = (MovieClip *)ResourceManager::getMovieClipFromPool(a3, a4, v16);
      MovieClip::resetTimelinePositionRecursive(MovieClipFromPool);
      AnimationInstance::setClip((AnimationInstance *)a1, MovieClipFromPool);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1);
      return a1;
    }

    __n128 __fastcall AnimationInstance::setClip(__int64 a1, #1257 *a2)
    {
      float v4; // s8
      long double v5; // q0
      __int64 v6; // x8
    
      *(_QWORD *)(a1 + 152) = a2;
      if ( *(_DWORD *)(a1 + 160) == -1 )
      {
        v4 = (float)(int)(1000 * MovieClip::getTotalFrames(a2));
        *(_DWORD *)(a1 + 160) = (int)(float)(MovieClip::getMSPerFrame(a2) * v4);
      }
      *(__n128 *)&v5 = DisplayObject::setXY(a2, (float)*(int *)(a1 + 172), (float)*(int *)(a1 + 176));
      if ( !*(_DWORD *)(a1 + 168) )
      {
        v6 = 1374389535LL * *(_DWORD *)(a1 + 180) * *(_DWORD *)(a1 + 160);
        *(_DWORD *)(a1 + 168) = (v6 >> 37) + ((unsigned __int64)v6 >> 63);
      }
      (*(void (__fastcall **)(__int64, #1257 *, long double))(*(_QWORD *)a1 + 160LL))(a1, a2, v5);
      return MovieClip::gotoAndStopFrameIndex(a2, 0);
    }

    // attributes: thunk
    __int64 __fastcall AnimationInstance::AnimationInstance(
            __int64 a1,
            __int64 a2,
            ResourceManager *a3,
            const String *a4,
            int a5,
            __int64 a6,
            int a7)
    {
      return __ZN17AnimationInstanceC2EP6SpriteRK6StringS4_iP12RenderSystemi(a1, a2, a3, a4, a5, a6, a7);
    }

    void __fastcall AnimationInstance::~AnimationInstance(_QWORD *a1, MovieClip *a2)
    {
      _QWORD *v3; // x20
      __int64 v4; // x0
      _QWORD *v5; // x21
    
      *a1 = off_1004729E8;
      a1[18] = off_100472B50;
      v3 = a1 + 18;
      v5 = a1 + 19;
      v4 = a1[19];
      *(_BYTE *)(v4 + 8) = 1;
      *(_DWORD *)(v4 + 16) = 1065353216;
      *(_DWORD *)(v4 + 28) = 1065353216;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 32) = 0;
      *(_DWORD *)(v4 + 36) = 0;
      ResourceManager::putMovieClipToPool((ResourceManager *)v4, a2);
      a1[25] = 0;
      *((_WORD *)v5 + 20) = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[1] = 0;
      v5[2] = 0;
      *v5 = 0;
      IEffectRenderable::~IEffectRenderable(v3);
      GameObjectSprite::~GameObjectSprite((__int64)a1);
    }

    // attributes: thunk
    void __fastcall AnimationInstance::~AnimationInstance(_QWORD *a1, MovieClip *a2)
    {
      __ZN17AnimationInstanceD2Ev(a1, a2);
    }

    void __fastcall AnimationInstance::~AnimationInstance(_QWORD *a1, MovieClip *a2)
    {
      AnimationInstance::~AnimationInstance(a1, a2);
      operator delete(a1);
    }

    __n128 __fastcall AnimationInstance::setDisplayObjectOffsets(__int64 a1, int a2, int a3)
    {
      *(_DWORD *)(a1 + 172) = a2;
      *(_DWORD *)(a1 + 176) = a3;
      return DisplayObject::setXY((DisplayObject *)*(_QWORD *)(a1 + 152), (float)a2, (float)a3);
    }

    __int64 __fastcall AnimationInstance::getClip(CombatHUD::BarFill *this)
    {
      return *((_QWORD *)this + 19);
    }

    bool __fastcall AnimationInstance::update(__int64 a1, int a2)
    {
      int v4; // w8
      int v5; // w9
      int TotalFrames; // w0
      int v7; // w9
      int v8; // w10
      int v9; // w21
      GameMode *v10; // x0
      int v11; // w8
      float v12; // s8
      float v13; // s9
      int v14; // w21
      float v15; // s10
      LogicJSONObject *RenderSystem; // x0
      long double v17; // q0
      Utility *v18; // x0
      long double v19; // q0
      float v20; // s0
      float v21; // s0
      float v22; // s8
      float v23; // s0
      float *v24; // x0
      float v25; // s1
      float v26; // s2
      float v27; // s3
      float v28; // s1
      float v29; // s0
      float v30; // s3
      float v31; // s0
      float v32; // s2
      float v33; // s1
      float v35; // [xsp+8h] [xbp-78h] BYREF
      float v36; // [xsp+Ch] [xbp-74h]
      float v37; // [xsp+10h] [xbp-70h]
      float v38; // [xsp+14h] [xbp-6Ch]
      float v39; // [xsp+18h] [xbp-68h]
      float v40; // [xsp+1Ch] [xbp-64h]
      float v41; // [xsp+20h] [xbp-60h] BYREF
      float v42; // [xsp+24h] [xbp-5Ch]
      float v43; // [xsp+28h] [xbp-58h]
      float v44; // [xsp+2Ch] [xbp-54h]
      float v45; // [xsp+30h] [xbp-50h]
      float v46; // [xsp+34h] [xbp-4Ch]
      float v47; // [xsp+38h] [xbp-48h] BYREF
      float v48; // [xsp+3Ch] [xbp-44h] BYREF
    
      v4 = *(_DWORD *)(a1 + 160);
      if ( v4 != -1 )
      {
        v5 = *(_DWORD *)(a1 + 168);
        if ( *(_BYTE *)(a1 + 192) )
        {
          *(_DWORD *)(a1 + 168) = v5 % v4;
        }
        else if ( v5 >= *(_DWORD *)(a1 + 164) + v4 )
        {
          *(_BYTE *)(a1 + 193) = 1;
          return 1;
        }
      }
      TotalFrames = MovieClip::getTotalFrames(*(#1257 **)(a1 + 152));
      if ( TotalFrames >= 2 )
      {
        v7 = *(_DWORD *)(a1 + 168);
        v8 = *(_DWORD *)(a1 + 160);
        if ( v8 <= v7 )
        {
          v9 = TotalFrames - 1;
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)a1 + 80LL))(
            a1,
            (float)(v8 - v7 + *(_DWORD *)(a1 + 164)) / (float)*(int *)(a1 + 164));
        }
        else
        {
          v9 = v7 * TotalFrames / v8;
        }
        *(_DWORD *)(a1 + 184) = v9;
        MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 152), v9);
      }
      v10 = *(GameMode **)(a1 + 200);
      v11 = *(_DWORD *)(a1 + 188);
      if ( v10 )
      {
        if ( v11 )
        {
          v12 = (float)(int)LogicGameObject::getX(v10) / 500.0;
          v13 = (float)(int)LogicGameObject::getY(*(GameMode **)(a1 + 200)) / 500.0;
          v14 = LogicGameObject::getZ(*(GameMode **)(a1 + 200));
          v15 = (float)(int)(v14
                           + 2
                           * (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 112LL))(*(_QWORD *)(a1 + 200)))
              / 500.0;
          v47 = 0.0;
          v48 = 0.0;
          RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((JoinRequestStreamItem *)a1);
          RenderSystem::getRenderCoordinate(RenderSystem, v12, v13, v15, &v47, &v48, 1);
          v17 = DisplayObject::getX(a1);
          v47 = v47 - (float)(*(float *)&v17 + (float)*(int *)(a1 + 172));
          v19 = DisplayObject::getY(a1);
          v20 = v48 - (float)(*(float *)&v19 + (float)*(int *)(a1 + 176));
          v48 = v20;
          if ( *(int *)(a1 + 188) < 1 )
          {
            v22 = 1.0;
          }
          else
          {
            Utility::sqrt(v18, (float)(v20 * v20) + (float)(v47 * v47));
            v22 = v21 / (float)*(int *)(a1 + 188);
          }
          Matrix2x3::Matrix2x3((#1256 *)&v41);
          v41 = v22;
          Matrix2x3::Matrix2x3((#1256 *)&v35);
          v23 = atan2f(v48, v47);
          Matrix2x3::rotateRadians((#1256 *)&v35, v23, 1.0, 1.0);
          v24 = *(float **)(a1 + 152);
          v25 = v42;
          v26 = v37;
          v24[4] = (float)(v41 * v35) + (float)(v42 * v37);
          v27 = v38;
          v24[5] = (float)(v41 * v36) + (float)(v25 * v38);
          v28 = v43;
          v29 = v27 * v44;
          v30 = v36;
          v24[7] = v29 + (float)(v43 * v36);
          v31 = v26 * v44;
          v32 = v35;
          v24[6] = v31 + (float)(v28 * v35);
          v33 = v46;
          v24[8] = v39 + (float)((float)(v32 * v45) + (float)(v46 * v37));
          v24[9] = v40 + (float)((float)(v30 * v45) + (float)(v33 * v38));
          DisplayObject::setXY((DisplayObject *)v24, (float)*(int *)(a1 + 172), (float)*(int *)(a1 + 176));
          Matrix2x3::~Matrix2x3((#1256 *)&v35);
          Matrix2x3::~Matrix2x3((#1256 *)&v41);
        }
      }
      else if ( v11 && *(_BYTE *)(a1 + 192) )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 152) + 8LL) = 0;
        *(_BYTE *)(a1 + 193) = 1;
      }
      *(_DWORD *)(a1 + 168) += a2;
      return *(_BYTE *)(a1 + 193) != 0;
    }

    __int64 __fastcall AnimationInstance::isFinished(CombatHUD::BarFill *this)
    {
      return *((unsigned __int8 *)this + 193);
    }

    __int64 __fastcall AnimationInstance::setLooping(__int64 this, char a2)
    {
      *(_BYTE *)(this + 192) = a2;
      return this;
    }

    __int64 __fastcall AnimationInstance::endPlayback(__int64 this)
    {
      *(_BYTE *)(this + 192) = 0;
      return this;
    }

    __int64 __fastcall AnimationInstance::setLocation(CombatHUD::BarFill *this, float a2, float a3, float a4)
    {
      return (*(__int64 (__fastcall **)(CombatHUD::BarFill *, float, float, float))(*(_QWORD *)this + 272LL))(
               this,
               a2,
               a3,
               a4);
    }

    __int64 __fastcall AnimationInstance::setIsoLayer(CombatHUD::BarFill *this, OutOfSyncMessage *a2)
    {
      return (*(__int64 (__fastcall **)(OutOfSyncMessage *, CombatHUD::BarFill *))(*(_QWORD *)a2 + 160LL))(a2, this);
    }

    __int64 __fastcall AnimationInstance::removeReferences(__int64 this, const GameMode *a2)
    {
      if ( *(const GameMode **)(this + 200) == a2 )
        *(_QWORD *)(this + 200) = 0;
      return this;
    }

    __int64 __fastcall AnimationInstance::setTargetObject(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 200) = a2;
      return result;
    }

    __int64 __fastcall AnimationInstance::setTargettedAnimationWidth(__int64 result, int a2)
    {
      *(_DWORD *)(result + 188) = a2;
      return result;
    }

}; // end class AnimationInstance
