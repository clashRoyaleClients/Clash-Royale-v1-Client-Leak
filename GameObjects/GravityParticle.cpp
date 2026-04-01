class GravityParticle
{
public:

    void __fastcall GravityParticle::GravityParticle(GravityParticle *this, String *a2, const String *a3)
    {
      const String *v6; // x2
      MovieClip *MovieClipFromPool; // x0
    
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_10045F6C8;
      *((_QWORD *)this + 12) = 0;
      *(_QWORD *)((char *)this + 125) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_BYTE *)this + 64) = 0;
      MovieClipFromPool = (MovieClip *)ResourceManager::getMovieClipFromPool((ResourceManager *)a2, a3, v6);
      *((_QWORD *)this + 12) = MovieClipFromPool;
      MovieClip::resetTimelinePositionRecursive(MovieClipFromPool);
      MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 12), 0);
      (*(void (__fastcall **)(GravityParticle *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 12));
    }

    // attributes: thunk
    void __fastcall GravityParticle::GravityParticle(GravityParticle *this, String *a2, const String *a3)
    {
      __ZN15GravityParticleC2ERK6StringS2_(this, a2, a3);
    }

    void __fastcall GravityParticle::~GravityParticle(ResourceManager **this, MovieClip *a2)
    {
      _QWORD *v3; // x20
    
      *this = (ResourceManager *)off_10045F6C8;
      v3 = this + 12;
      ResourceManager::putMovieClipToPool(*(this + 12), a2);
      *(_QWORD *)((char *)v3 + 29) = 0;
      v3[2] = 0;
      v3[3] = 0;
      *v3 = 0;
      v3[1] = 0;
      Sprite::~Sprite((Sprite *)this);
    }

    // attributes: thunk
    void __fastcall GravityParticle::~GravityParticle(ResourceManager **this, MovieClip *a2)
    {
      __ZN15GravityParticleD2Ev(this, a2);
    }

    void __fastcall GravityParticle::~GravityParticle(ResourceManager **this, MovieClip *a2)
    {
      GravityParticle::~GravityParticle(this, a2);
      operator delete(this);
    }

    bool __fastcall GravityParticle::update(#1303 *this, float a2)
    {
      float v4; // s9
      long double v5; // q0
      float v6; // s1
      float v7; // s2
      float v8; // s3
      float v9; // s4
      float v10; // s1
      float v11; // s2
      float v12; // s1
      float v13; // s3
      float v14; // s3
      float v15; // s2
      float v16; // s1
      void (__fastcall *v17)(#1303 *, float); // x20
      float Alpha; // s0
    
      LODWORD(v4) = COERCE_UNSIGNED_INT128(DisplayObject::getX(this));
      v5 = DisplayObject::getY(this);
      v6 = *((float *)this + 26);
      if ( v6 <= 0.0 )
      {
        v12 = 0.0;
        v11 = 0.0;
      }
      else
      {
        v7 = *((float *)this + 27) - v4;
        v8 = *((float *)this + 28) - *(float *)&v5;
        v9 = sqrtf((float)(v7 * v7) + (float)(v8 * v8));
        if ( v9 <= 1.0 )
          v9 = 1.0;
        v10 = v6 + (float)(v6 / v9);
        v11 = (float)((float)(v7 / v9) * v10) + 0.0;
        v12 = (float)((float)(v8 / v9) * v10) + 0.0;
        v13 = *((float *)this + 29);
        if ( v13 <= 1.0 )
          v13 = 1.0;
        *((_BYTE *)this + 132) |= v9 <= v13;
      }
      v14 = *((float *)this + 32);
      if ( v14 <= 1.0 )
        v14 = 1.0;
      v15 = (float)((float)(v11 / v14) * a2) + *((float *)this + 30);
      v16 = (float)((float)(v12 / v14) * a2) + *((float *)this + 31);
      *((float *)this + 30) = v15;
      *((float *)this + 31) = v16;
      DisplayObject::setXY(this, v4 + (float)(v15 * a2), *(float *)&v5 + (float)(v16 * a2));
      if ( *((_BYTE *)this + 132) )
      {
        v17 = *(void (__fastcall **)(#1303 *, float))(*(_QWORD *)this + 80LL);
        Alpha = DisplayObject::getAlpha(this);
        v17(this, Alpha + (float)(a2 * -4.0));
      }
      return DisplayObject::getAlpha(this) <= 0.0;
    }

}; // end class GravityParticle
