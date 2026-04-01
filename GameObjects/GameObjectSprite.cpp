class GameObjectSprite
{
public:

    Sprite *__fastcall GameObjectSprite::GameObjectSprite(Sprite *a1, __int64 a2)
    {
      Sprite *result; // x0
    
      result = Sprite::Sprite(a1, 1);
      *((_BYTE *)result + 136) = 1;
      *(_QWORD *)((char *)result + 100) = 0;
      *(_QWORD *)result = off_100471A50;
      *(_QWORD *)((char *)result + 92) = 0;
      *((_QWORD *)result + 15) = 0;
      *((_QWORD *)result + 16) = 0;
      *((_QWORD *)result + 14) = 0;
      *((_QWORD *)result + 14) = a2;
      return result;
    }

    Sprite *__fastcall GameObjectSprite::GameObjectSprite(Sprite *a1, __int64 a2)
    {
      Sprite *result; // x0
    
      result = Sprite::Sprite(a1, 1);
      *((_BYTE *)result + 136) = 1;
      *(_QWORD *)((char *)result + 100) = 0;
      *(_QWORD *)result = off_100471A50;
      *(_QWORD *)((char *)result + 92) = 0;
      *((_QWORD *)result + 15) = 0;
      *((_QWORD *)result + 16) = 0;
      *((_QWORD *)result + 14) = 0;
      *((_QWORD *)result + 14) = a2;
      return result;
    }

    void __fastcall GameObjectSprite::~GameObjectSprite(__int64 a1)
    {
      __int64 v2; // x0
    
      *(_QWORD *)a1 = off_100471A50;
      v2 = *(_QWORD *)(a1 + 128);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 100) = 0;
      *(_BYTE *)(a1 + 136) = 1;
      *(_QWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      Sprite::~Sprite((Sprite *)a1);
    }

    // attributes: thunk
    void __fastcall GameObjectSprite::~GameObjectSprite(__int64 this)
    {
      __ZN16GameObjectSpriteD2Ev(this);
    }

    void __fastcall GameObjectSprite::~GameObjectSprite(void *a1)
    {
      GameObjectSprite::~GameObjectSprite((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall GameObjectSprite::setGameObject(__int64 this, ShutdownStartedMessage *a2)
    {
      __int64 v2; // x19
      __int64 Logic; // x0
      GameMode *v4; // x0
      __int64 Data; // x0
    
      v2 = this;
      *(_QWORD *)(this + 120) = a2;
      *(_BYTE *)(this + 136) = 1;
      if ( a2 )
      {
        Logic = GameObject::getLogic(a2);
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Logic + 88LL))(Logic);
        if ( !(_DWORD)this )
        {
          v4 = (GameMode *)GameObject::getLogic(*(ShutdownStartedMessage **)(v2 + 120));
          Data = LogicGameObject::getData(v4);
          this = LogicDecoData::getCollisionRadius(Data);
          if ( !(_DWORD)this )
            *(_BYTE *)(v2 + 136) = 0;
        }
      }
      return this;
    }

    #1249 *__fastcall GameObjectSprite::setMovieClip(JoinRequestStreamItem *this, #1257 *a2)
    {
      #1249 *result; // x0
    
      result = (#1249 *)*((_QWORD *)this + 16);
      if ( result != a2 )
      {
        if ( result )
          DisplayObject::removeFromParent(result);
        *((_QWORD *)this + 16) = a2;
        return (#1249 *)(*(__int64 (__fastcall **)(JoinRequestStreamItem *, #1257 *, _QWORD))(*(_QWORD *)this + 168LL))(
                          this,
                          a2,
                          0);
      }
      return result;
    }

    #1249 *__fastcall GameObjectSprite::setMovieClip(#1249 *this, #1257 *a2, int a3)
    {
      JoinRequestStreamItem *v4; // x20
      #1257 *v5; // x21
      float v6; // s8
      int CurrentFrame; // w0
    
      v4 = this;
      if ( a3 )
      {
        v5 = (#1257 *)*((_QWORD *)this + 16);
        if ( v5 )
        {
          if ( v5 == a2 )
            return this;
          LODWORD(v6) = COERCE_UNSIGNED_INT128(MovieClip::getFrameTime(*((_QWORD *)this + 16)));
          CurrentFrame = MovieClip::getCurrentFrame(v5);
          MovieClip::gotoAndPlayFrameIndex(a2, CurrentFrame, -1);
          MovieClip::setFrameTime(a2, v6);
        }
      }
      return GameObjectSprite::setMovieClip(v4, a2);
    }

    __int64 __fastcall GameObjectSprite::getMovieClip(JoinRequestStreamItem *this)
    {
      return *((_QWORD *)this + 16);
    }

    __int64 __fastcall GameObjectSprite::removeMovieClip(JoinRequestStreamItem *this)
    {
      __int64 v2; // x19
    
      v2 = *((_QWORD *)this + 16);
      if ( !v2 )
        return 0;
      DisplayObject::removeFromParent(*((#1249 **)this + 16));
      *((_QWORD *)this + 16) = 0;
      return v2;
    }

    __int64 __fastcall GameObjectSprite::setPositionFromLogic(JoinRequestStreamItem *this, int a2, int a3, int a4)
    {
      return (*(__int64 (__fastcall **)(JoinRequestStreamItem *, float, float, float))(*(_QWORD *)this + 272LL))(
               this,
               (float)a2 / 500.0,
               (float)a3 / 500.0,
               (float)a4 / 500.0);
    }

    void __fastcall GameObjectSprite::setTilePosition(JoinRequestStreamItem *this, float a2, float a3, float a4)
    {
      int isBottomPlayerInLogicTop; // w20
      float v9; // [xsp+4h] [xbp-3Ch] BYREF
      float v10; // [xsp+8h] [xbp-38h] BYREF
      float v11; // [xsp+Ch] [xbp-34h] BYREF
    
      isBottomPlayerInLogicTop = 0;
      *((float *)this + 23) = a2;
      *((float *)this + 24) = a3;
      *((float *)this + 25) = a4;
      v10 = 0.0;
      v11 = 0.0;
      if ( *((_BYTE *)this + 136) )
        isBottomPlayerInLogicTop = RenderSystem::isBottomPlayerInLogicTop(*((LogicJSONObject **)this + 14));
      RenderSystem::getRenderCoordinate(*((LogicJSONObject **)this + 14), a2, a3, a4, &v11, &v10, isBottomPlayerInLogicTop);
      DisplayObject::setXY(this, v11, v10);
      RenderSystem::getRenderCoordinate(
        *((LogicJSONObject **)this + 14),
        a2,
        a3,
        0.0,
        &v9,
        (float *)this + 26,
        isBottomPlayerInLogicTop);
    }

    float __fastcall GameObjectSprite::getTileX(JoinRequestStreamItem *this)
    {
      return *((float *)this + 23);
    }

    float __fastcall GameObjectSprite::getTileY(JoinRequestStreamItem *this)
    {
      return *((float *)this + 24);
    }

    float __fastcall GameObjectSprite::getTileZ(JoinRequestStreamItem *this)
    {
      return *((float *)this + 25);
    }

    __int64 __fastcall GameObjectSprite::setShadowSettings(
            JoinRequestStreamItem *this,
            float a2,
            float a3,
            float a4,
            float a5)
    {
      return GameObjectSprite::setShadowSettings(this, a2, a2, a3, a4, a5);
    }

    __int64 __fastcall GameObjectSprite::setShadowSettings(
            JoinRequestStreamItem *this,
            float a2,
            float a3,
            float a4,
            float a5,
            float a6)
    {
      __int64 v12; // x20
      void (__fastcall *v13)(__int64, float); // x21
      float v14; // s0
      float v15; // s0
      float *v16; // x0
    
      v12 = *((_QWORD *)this + 16);
      v13 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v12 + 48LL);
      v14 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
      v13(v12, v14 * a2);
      v15 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 72LL))(*((_QWORD *)this + 16));
      if ( v15 < 0.0 )
        v15 = -v15;
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), -(float)(v15 * a3));
      v16 = (float *)*((_QWORD *)this + 16);
      v16[6] = a4;
      DisplayObject::setXY((DisplayObject *)v16, a5, a6);
      return ColorTransform::reset((ColorTransform *)(*((_QWORD *)this + 16) + 9LL));
    }

    __int64 __fastcall GameObjectSprite::setOutlineSettings(
            JoinRequestStreamItem *this,
            float a2,
            float a3,
            float a4,
            float a5,
            float a6,
            float a7,
            float a8,
            float a9)
    {
      float v17; // s8
      float v18; // s0
      float v19; // s8
      __int64 v20; // x20
      void (__fastcall *v21)(__int64, float); // x21
      float v22; // s15
      float v23; // s0
      __int64 v24; // x20
      void (__fastcall *v25)(__int64, float); // x21
      float v26; // s0
    
      v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(_QWORD))*(_QWORD *)(**((_QWORD **)this + 16)
                                                                                               + 88LL))(*((_QWORD *)this + 16))));
      v18 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 96LL))(*((_QWORD *)this + 16));
      v19 = (float)(v17 + a2) / v17;
      v20 = *((_QWORD *)this + 16);
      v21 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v20 + 48LL);
      v22 = (float)(v18 + a2) / v18;
      v23 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20);
      v21(v20, v19 * v23);
      v24 = *((_QWORD *)this + 16);
      v25 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v24 + 56LL);
      v26 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v24 + 72LL))(v24);
      v25(v24, v22 * v26);
      ColorTransform::setAddColor((ColorTransform *)(*((_QWORD *)this + 16) + 9LL), a7, a8, a9);
      ColorTransform::setMulColor((ColorTransform *)(*((_QWORD *)this + 16) + 9LL), a3, a4, a5);
      return ColorTransform::setAlpha((ColorTransform *)(*((_QWORD *)this + 16) + 9LL), a6);
    }

    __int64 __fastcall GameObjectSprite::getRenderSystem(JoinRequestStreamItem *this)
    {
      return *((_QWORD *)this + 14);
    }

}; // end class GameObjectSprite
