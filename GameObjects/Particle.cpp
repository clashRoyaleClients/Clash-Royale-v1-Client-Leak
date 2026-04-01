class Particle
{
public:

    void __fastcall Particle::Particle(
            Particle *this,
            OutOfSyncMessage *a2,
            float a3,
            float a4,
            int32x2_t a5,
            float a6,
            float a7,
            float a8,
            String *a9,
            const String *a10,
            float a11,
            int a12,
            int a13,
            LogicJSONObject *a14,
            const LogicTauntData *a15)
    {
      int RotateToDirection; // w0
      __float2 v29; // kr00_8
      long double v30; // q6
      long double v31; // q3
      int8x16_t v32; // q5
      const String *v33; // x1
      const String *v34; // x2
      MovieClip *MovieClipFromPool; // x21
      __int64 FrameLabel; // x8
    
      GameObjectSprite::GameObjectSprite(this, a14);
      *(_QWORD *)this = off_1004654F8;
      Particle::initializeMembers(this);
      (*(void (__fastcall **)(OutOfSyncMessage *, Particle *))(*(_QWORD *)a2 + 160LL))(a2, this);
      *((_QWORD *)this + 32) = a15;
      *((_DWORD *)this + 4) = 1065353216;
      *((_DWORD *)this + 7) = 1065353216;
      *((_DWORD *)this + 5) = 0;
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 0;
      RotateToDirection = LogicParticleEmitterData::getRotateToDirection(a15);
      *((_BYTE *)this + 264) = RotateToDirection;
      if ( RotateToDirection )
        *((float *)this + 62) = a11;
      v29 = __sincosf_stret((float)(a11 * 6.283) / 360.0);
      *((_DWORD *)this + 43) = LODWORD(v29.__cosval);
      *((_DWORD *)this + 45) = LODWORD(v29.__sinval);
      *(float *)&v30 = (float)(v29.__cosval * a8) + a3;
      *(float *)&v31 = (float)(v29.__sinval * a8) + a4;
      v32 = (int8x16_t)vdupq_lane_s32(a5, 0);
      *((_DWORD *)this + 42) = -a13;
      *((_DWORD *)this + 49) = LODWORD(v30);
      *((_DWORD *)this + 51) = LODWORD(v31);
      *((float *)this + 47) = a6;
      *((_DWORD *)this + 44) = LODWORD(v29.__cosval);
      *((_DWORD *)this + 46) = LODWORD(v29.__sinval);
      *((float *)this + 57) = (float)a12;
      *((_DWORD *)this + 50) = LODWORD(v30);
      *((_DWORD *)this + 52) = LODWORD(v31);
      *(_QWORD *)((char *)this + 212) = v32.i64[0];
      *(_QWORD *)((char *)this + 220) = vextq_s8(v32, v32, 8u).u64[0];
      *((float *)this + 48) = a6;
      *((float *)this + 58) = (float)a12;
      *((float *)this + 40) = a7;
      *((_DWORD *)this + 59) = a13;
      (*(void (__fastcall **)(Particle *, long double, long double))(*(_QWORD *)this + 272LL))(this, v30, v31);
      GameMain::loadAsset((GameMain *)a9, v33);
      MovieClipFromPool = (MovieClip *)ResourceManager::getMovieClipFromPool((ResourceManager *)a9, a10, v34);
      MovieClip::resetTimelinePositionRecursive(MovieClipFromPool);
      FrameLabel = MovieClip::getFrameLabel(MovieClipFromPool, 0);
      if ( FrameLabel && (unsigned int)String::equalsIgnoreCase(&PLAY_ONCE_FRAME_LABEL, FrameLabel) )
      {
        MovieClip::playOnceRecursive(MovieClipFromPool);
        *((_BYTE *)this + 265) = 1;
      }
      else
      {
        *((_BYTE *)this + 265) = LogicParticleEmitterData::getLoopParticleClip(a15);
      }
      Particle::setClip(this, MovieClipFromPool);
    }

    __int64 __fastcall Particle::setClip(LogicEggData *this, #1257 *a2)
    {
      *((_QWORD *)this + 19) = a2;
      if ( *((_BYTE *)this + 264) )
        DisplayObject::rotate(a2, *((float *)this + 62));
      return (*(__int64 (__fastcall **)(LogicEggData *, #1257 *))(*(_QWORD *)this + 160LL))(this, a2);
    }

    // attributes: thunk
    void __fastcall Particle::Particle(
            Particle *this,
            OutOfSyncMessage *a2,
            float a3,
            float a4,
            int32x2_t a5,
            float a6,
            float a7,
            float a8,
            String *a9,
            const String *a10,
            float a11,
            int a12,
            int a13,
            LogicJSONObject *a14,
            const LogicTauntData *a15)
    {
      __ZN8ParticleC2EP6SpriteffffffRK6StringS4_fiiP12RenderSystemPK24LogicParticleEmitterData(
        this,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15);
    }

    void __fastcall Particle::~Particle(ResourceManager **this, MovieClip *a2)
    {
      *this = (ResourceManager *)off_1004654F8;
      ResourceManager::putMovieClipToPool(*(this + 19), a2);
      Particle::initializeMembers((LogicEggData *)this);
      GameObjectSprite::~GameObjectSprite((GameObjectSprite *)this);
    }

    // attributes: thunk
    void __fastcall Particle::~Particle(ResourceManager **this, MovieClip *a2)
    {
      __ZN8ParticleD2Ev(this, a2);
    }

    void __fastcall Particle::~Particle(ResourceManager **this, MovieClip *a2)
    {
      Particle::~Particle(this, a2);
      operator delete(this);
    }

    bool __fastcall Particle::update(LogicEggData *this, int a2)
    {
      long double v2; // q10
      int v5; // w8
      float v6; // s0
      int StartScale; // w21
      int EndScale; // w0
      long double v9; // q0
      float v10; // s9
      long double v11; // q0
      float v12; // s8
      float v13; // s0
      float v14; // s11
      float v15; // s0
      int8x16_t v16; // q0
      int v17; // w21
      int TotalFrames; // w0
      int FadeOutDuration; // w0
      long double v20; // q0
      int *v21; // x21
      int v22; // w8
      int v23; // w9
      _DWORD *v24; // x22
      bool v25; // vf
      int v26; // w8
      int v27; // w8
      float v29; // [xsp+10h] [xbp-B0h]
      float v30; // [xsp+20h] [xbp-A0h]
      int8x16_t v31; // [xsp+30h] [xbp-90h] BYREF
      int v32; // [xsp+40h] [xbp-80h]
      int v33; // [xsp+44h] [xbp-7Ch]
      _BYTE v34[24]; // [xsp+50h] [xbp-70h] BYREF
      float v35[6]; // [xsp+68h] [xbp-58h] BYREF
    
      if ( *((_DWORD *)this + 59) )
      {
        v5 = *((_DWORD *)this + 42) + a2;
        *((_DWORD *)this + 42) = v5;
        v6 = 0.0;
        if ( v5 >= 0 )
          v6 = (float)a2;
        Particle::updateMovement(
          this,
          v6,
          (int *)this + 42,
          (float *)this + 50,
          (float *)this + 52,
          (float *)this + 54,
          (float *)this + 56,
          (float *)this + 44,
          (float *)this + 46,
          (float *)this + 48,
          (float *)this + 58);
        LODWORD(v29) = COERCE_UNSIGNED_INT128(DisplayObject::getX(this));
        LODWORD(v30) = COERCE_UNSIGNED_INT128(DisplayObject::getY(this));
      }
      else
      {
        v30 = 0.0;
        v29 = 0.0;
      }
      *((_DWORD *)this + 41) += a2;
      Particle::updateMovement(
        this,
        (float)a2,
        (int *)this + 41,
        (float *)this + 49,
        (float *)this + 51,
        (float *)this + 53,
        (float *)this + 55,
        (float *)this + 43,
        (float *)this + 45,
        (float *)this + 47,
        (float *)this + 57);
      StartScale = LogicParticleEmitterData::getStartScale(*((_QWORD *)this + 32));
      EndScale = LogicParticleEmitterData::getEndScale(*((_QWORD *)this + 32));
      if ( EndScale | StartScale )
      {
        *(float *)&v2 = (float)((float)StartScale
                              + (float)((float)(EndScale - StartScale)
                                      * (float)((float)*((int *)this + 37) / (float)*((int *)this + 35))))
                      * 0.01;
        (*(void (__fastcall **)(LogicEggData *, long double))(*(_QWORD *)this + 40LL))(this, v2);
      }
      else
      {
        LODWORD(v2) = 1.0;
      }
      if ( *((_DWORD *)this + 59) )
      {
        v9 = DisplayObject::getX(this);
        v10 = *(float *)&v9 - v29;
        v11 = DisplayObject::getY(this);
        v12 = *(float *)&v11 - v30;
        v13 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19));
        if ( v13 > 0.0 )
        {
          v14 = (float)(v13 + sqrtf((float)(v10 * v10) + (float)(v12 * v12))) / v13;
          Matrix2x3::Matrix2x3((#1256 *)v35);
          v35[3] = *(float *)&v2;
          v35[0] = *(float *)&v2 * v14;
          Matrix2x3::Matrix2x3((#1256 *)v34);
          v15 = atan2f(v12, v10);
          Matrix2x3::rotateRadians((#1256 *)v34, v15, 1.0, 1.0);
          Matrix2x3::Matrix2x3((#1256 *)&v31, (const #1256 *)v35, (const #1256 *)v34);
          v16 = v31;
          *((_QWORD *)this + 2) = v31.i64[0];
          *((_QWORD *)this + 3) = vextq_s8(v16, v16, 8u).u64[0];
          *((_DWORD *)this + 8) = v32;
          *((_DWORD *)this + 9) = v33;
          Matrix2x3::~Matrix2x3((#1256 *)&v31);
          Matrix2x3::~Matrix2x3((#1256 *)v34);
          Matrix2x3::~Matrix2x3((#1256 *)v35);
        }
        DisplayObject::setX(this, v29 + (float)(v10 * 0.5));
        DisplayObject::setY(this, v30 + (float)(v12 * 0.5));
      }
      if ( !*((_BYTE *)this + 265) )
      {
        v17 = *((_DWORD *)this + 37);
        TotalFrames = MovieClip::getTotalFrames(*((#1257 **)this + 19));
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 19), TotalFrames * v17 / *((_DWORD *)this + 35));
      }
      FadeOutDuration = LogicParticleEmitterData::getFadeOutDuration(*((_QWORD *)this + 32));
      if ( FadeOutDuration <= 0 )
      {
        v24 = (_DWORD *)((char *)this + 148);
        v21 = (int *)((char *)this + 140);
        goto LABEL_19;
      }
      v21 = (int *)((char *)this + 140);
      v22 = *((_DWORD *)this + 35) - FadeOutDuration;
      v24 = (_DWORD *)((char *)this + 148);
      v23 = *((_DWORD *)this + 37);
      v25 = __OFSUB__(v23, v22);
      v26 = v23 - v22;
      if ( (v26 < 0) ^ v25 | (v26 == 0) )
      {
    LABEL_19:
        LODWORD(v20) = 1.0;
        goto LABEL_20;
      }
      *(float *)&v20 = 1.0 - (float)((float)v26 / (float)FadeOutDuration);
    LABEL_20:
      (*(void (__fastcall **)(LogicEggData *, long double))(*(_QWORD *)this + 80LL))(this, v20);
      v27 = *v24 + a2;
      *v24 = v27;
      return v27 >= *v21;
    }

    __int64 __fastcall Particle::updateMovement(
            LogicEggData *this,
            float a2,
            int *a3,
            float *a4,
            float *a5,
            float *a6,
            float *a7,
            float *a8,
            float *a9,
            float *a10,
            float *a11)
    {
      float v19; // s8
      int v20; // w1
      long double v21; // q0
      long double v22; // q0
      __int64 result; // x0
    
      v19 = *a7;
      *a7 = *a6;
      if ( *a3 >= 0 )
        v20 = *a3;
      else
        v20 = 0;
      Particle::getLocationInTime(this, v20, a4, a5, a7, *a8, *a9, *a10, a2, a11);
      (*(void (__fastcall **)(LogicEggData *, float, float, float))(*(_QWORD *)this + 272LL))(this, *a4, *a5, *a7);
      v21 = DisplayObject::getX(this);
      DisplayObject::setX(this, *(float *)&v21 + (float)*((int *)this + 60));
      v22 = DisplayObject::getY(this);
      result = DisplayObject::setY(this, *(float *)&v22 + (float)*((int *)this + 61));
      if ( v19 > 0.0 && *a7 <= 0.0 )
      {
        *a6 = 0.0;
        *a3 = 0;
        *a8 = *a8 * 0.65;
        *a9 = *a9 * 0.65;
        *a10 = *a10 * 0.65;
      }
      return result;
    }

    __int64 __fastcall Particle::getLocationInTime(
            LogicEggData *this,
            int a2,
            float *a3,
            float *a4,
            float *a5,
            float a6,
            float a7,
            float a8,
            float a9,
            float *a10)
    {
      __int64 result; // x0
      float v21; // s0
      float v22; // s0
    
      result = LogicParticleEmitterData::getInertia(*((_QWORD *)this + 32));
      v21 = *a10 + (float)((float)((float)(int)result * a9) * -0.001);
      *a10 = v21;
      if ( v21 >= 0.0 )
      {
        *a3 = (float)((float)((float)(a6 * a9) * v21) * 0.0001) + *a3;
        *a4 = *a4 + (float)((float)((float)(a7 * a9) * *a10) * 0.0001);
      }
      else
      {
        *a10 = 0.0;
      }
      v22 = *a5
          + (float)((float)((float)a2 * (float)((float)((float)a2 * (float)(*((float *)this + 40) * 0.5)) + a8)) * 0.001);
      if ( v22 < 0.0 )
        v22 = 0.0;
      *a5 = v22;
      return result;
    }

    __int64 __fastcall Particle::setDisplayObjectOffsets(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 240) = a2;
      *(_DWORD *)(this + 244) = a3;
      return this;
    }

    bool __fastcall Particle::updatePublic(LogicEggData *this, int a2)
    {
      int v4; // w8
      int v5; // w8
    
      if ( !(unsigned int)LogicParticleEmitterData::getInertia(*((_QWORD *)this + 32)) )
        return Particle::update(this, a2);
      v4 = *((_DWORD *)this + 36) + a2;
      *((_DWORD *)this + 36) = v4;
      if ( v4 < 16 )
        return 0;
      while ( !Particle::update(this, 16) )
      {
        v5 = *((_DWORD *)this + 36) - 16;
        *((_DWORD *)this + 36) = v5;
        if ( v5 <= 15 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall Particle::initializeMembers(__int64 this)
    {
      __int64 v1; // x8
      _DWORD *v2; // x9
    
      v1 = 0;
      *(_DWORD *)(this + 140) = 0;
      *(_QWORD *)(this + 156) = 0;
      *(_QWORD *)(this + 148) = 0;
      do
      {
        v2 = (_DWORD *)(this + v1);
        v2[41] = 0;
        v2[43] = 0;
        v2[45] = 0;
        v2[49] = 0;
        v2[51] = 0;
        v2[53] = 0;
        v2[55] = 0;
        v2[47] = 0;
        v1 += 4;
        v2[57] = 0;
      }
      while ( v1 != 8 );
      *(_BYTE *)(this + 264) = 0;
      *(_BYTE *)(this + 265) = 0;
      *(_QWORD *)(this + 256) = 0;
      *(_QWORD *)(this + 244) = 0;
      *(_QWORD *)(this + 236) = 0;
      *(_DWORD *)(this + 144) = 16;
      return this;
    }

}; // end class Particle
