class Effect
{
public:

    void __fastcall Effect::Effect(
            Effect *this,
            const #822 *a2,
            int a3,
            const GameMode *a4,
            float a5,
            float a6,
            float a7,
            char a8,
            LogicJSONObject *a9,
            int a10,
            char a11)
    {
      char v21; // w8
      _QWORD *v22; // x28
      float v23; // s0
      float v24; // s0
      float v25; // s0
      int v26; // s0
      int RenderableCount; // w0
      int v28; // w25
      __int64 v29; // x26
      __int64 v30; // x0
      __int64 v31; // x27
      __int64 v32; // x25
      int RenderableTime; // w0
      __int64 v34; // x8
      int ShakeScreen; // w0
    
      IEffectRenderable::IEffectRenderable(this);
      *(_QWORD *)this = off_10045E728;
      String::String((String *)((char *)this + 8));
      v21 = 0;
      *((_DWORD *)this + 28) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 10) = 0;
      *((_WORD *)this + 64) = 0;
      *((_DWORD *)this + 16) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 9) = 0;
      v22 = (_QWORD *)((char *)this + 72);
      *((_DWORD *)this + 26) = 1065353216;
      *((_DWORD *)this + 27) = -1;
      *((_DWORD *)this + 22) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 29) = 0;
      *((_BYTE *)this + 130) = 0;
      *((_QWORD *)this + 12) = a9;
      *((_BYTE *)this + 131) = 1;
      *((_QWORD *)this + 6) = a4;
      if ( a4 )
      {
        *((_BYTE *)this + 129) = 1;
        Effect::getTileX(this);
        a5 = v23;
        Effect::getTileY(this);
        a6 = v24;
        Effect::getTileZ(this);
        a7 = v25;
        v21 = LogicEffectData::isFollowParent(a2) | a8;
      }
      *((_BYTE *)this + 129) = v21;
      *((_QWORD *)this + 4) = a2;
      *((_BYTE *)this + 128) = LogicEffectData::getLoop(a2);
      LogicEffectData::getScale(a2);
      *((_DWORD *)this + 26) = v26;
      RenderableCount = LogicEffectData::getRenderableCount(a2);
      v28 = RenderableCount;
      *((_DWORD *)this + 17) = RenderableCount;
      v29 = RenderableCount;
      if ( is_mul_ok(RenderableCount, 0x18u) )
        v30 = 24LL * RenderableCount;
      else
        v30 = -1;
      *v22 = operator new[](v30);
      if ( v28 >= 1 )
      {
        v31 = 0;
        v32 = 0;
        do
        {
          RenderableTime = LogicEffectData::getRenderableTime(a2, v32);
          v34 = *v22 + v31;
          *(_DWORD *)v34 = RenderableTime;
          *(_QWORD *)(v34 + 8) = 0;
          *(_BYTE *)(v34 + 16) = 0;
          *(_DWORD *)(v34 + 20) = -1;
          ++v32;
          v31 += 24;
        }
        while ( v32 < v29 );
      }
      ShakeScreen = LogicEffectData::getShakeScreen(a2);
      RenderSystem::startShake(*((LogicJSONObject **)this + 12), (float)ShakeScreen / 1000.0);
      *((float *)this + 20) = a5;
      *((float *)this + 21) = a6;
      *((float *)this + 22) = a7;
      *((_DWORD *)this + 10) = a3;
      *((_DWORD *)this + 29) = a10;
      *((_BYTE *)this + 130) = a11;
    }

    float __fastcall Effect::getTileX(DonateAllianceUnitMessage *this)
    {
      #1138 *SpriteForEffects; // x0
      float result; // s0
    
      if ( !*((_BYTE *)this + 129) )
        return *((float *)this + 20);
      SpriteForEffects = (#1138 *)GameObject::getSpriteForEffects(*(ShutdownStartedMessage **)(*((_QWORD *)this + 6) + 40LL));
      GameObjectSprite::getTileX(SpriteForEffects);
      return result;
    }

    __int64 __fastcall Effect::getTileY(__int64 this)
    {
      __int64 v1; // x19
      #1138 *SpriteForEffects; // x0
    
      v1 = this;
      if ( *(_BYTE *)(this + 129) )
      {
        SpriteForEffects = (#1138 *)GameObject::getSpriteForEffects(*(ShutdownStartedMessage **)(*(_QWORD *)(this + 48)
                                                                                               + 40LL));
        GameObjectSprite::getTileY(SpriteForEffects);
        return RenderSystem::isBottomPlayerInLogicTop(*(LogicJSONObject **)(v1 + 96));
      }
      return this;
    }

    float __fastcall Effect::getTileZ(DonateAllianceUnitMessage *this)
    {
      #1138 *SpriteForEffects; // x0
      float result; // s0
    
      if ( !*((_BYTE *)this + 129) )
        return *((float *)this + 22);
      SpriteForEffects = (#1138 *)GameObject::getSpriteForEffects(*(ShutdownStartedMessage **)(*((_QWORD *)this + 6) + 40LL));
      GameObjectSprite::getTileZ(SpriteForEffects);
      return result;
    }

    // attributes: thunk
    void __fastcall Effect::Effect(
            Effect *this,
            const #822 *a2,
            int a3,
            const GameMode *a4,
            float a5,
            float a6,
            float a7,
            char a8,
            LogicJSONObject *a9,
            int a10,
            char a11)
    {
      __ZN6EffectC2EPK15LogicEffectDataiPK15LogicGameObjectfffbP12RenderSystemib(
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
        a11);
    }

    void __fastcall Effect::~Effect(DonateAllianceUnitMessage *this)
    {
      char *v2; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x8
      __int64 v6; // x0
      __int64 v7; // x8
      int v8; // w1
    
      *(_QWORD *)this = off_10045E728;
      v2 = (char *)this + 72;
      if ( *((int *)this + 17) >= 1 )
      {
        v3 = 0;
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)v2;
          v6 = *(_QWORD *)(*(_QWORD *)v2 + v3 + 8);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
            v5 = *(_QWORD *)v2;
          }
          v7 = v5 + v3;
          *(_QWORD *)(v7 + 8) = 0;
          v8 = *(_DWORD *)(v7 + 20);
          if ( (v8 & 0x80000000) == 0 )
            SoundManager::stopSound((#1040 *)SoundManager::sm_pInstance, v8);
          ++v4;
          v3 += 24;
        }
        while ( v4 < *((int *)this + 17) );
      }
      if ( *(_QWORD *)v2 )
        operator delete[](*(_QWORD *)v2);
      *((_DWORD *)this + 28) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_DWORD *)this + 10) = 0;
      *((_BYTE *)this + 128) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_BYTE *)this + 129) = 0;
      *((_DWORD *)this + 16) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_DWORD *)v2 + 4) = 0;
      *(_QWORD *)v2 = 0;
      *((_QWORD *)v2 + 1) = 0;
      *((_DWORD *)this + 26) = 1065353216;
      *((_DWORD *)this + 27) = -1;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_WORD *)this + 65) = 256;
      *((_DWORD *)this + 29) = 0;
      String::~String((String *)((char *)this + 8));
      IEffectRenderable::~IEffectRenderable(this);
    }

    // attributes: thunk
    void __fastcall Effect::~Effect(DonateAllianceUnitMessage *this)
    {
      __ZN6EffectD2Ev(this);
    }

    void __fastcall Effect::~Effect(DonateAllianceUnitMessage *this)
    {
      Effect::~Effect(this);
      operator delete(this);
    }

    __int64 __fastcall Effect::update(DonateAllianceUnitMessage *this, __int64 a2)
    {
      __int64 v4; // x21
      void (__fastcall *v5)(DonateAllianceUnitMessage *, __int64, __int64); // x22
      __int64 GlobalID; // x0
      int v7; // w25
      int v8; // w21
      __int64 v9; // x26
      __int64 v10; // x8
      __int64 v11; // x8
      __int64 inited; // x22
      __int64 Sound; // x23
      _DWORD *v14; // x24
      void (__fastcall *v16)(__int64, long double, long double, long double); // x23
      long double v17; // q0
      long double v18; // q9
      long double v19; // q0
      long double v20; // q10
      long double v21; // q0
      __int64 v22; // x8
      __int64 v23; // x0
    
      if ( *((_BYTE *)this + 129) )
      {
        v4 = *((_QWORD *)this + 6);
        if ( !*(_QWORD *)(v4 + 40) )
        {
          v5 = *(void (__fastcall **)(DonateAllianceUnitMessage *, __int64, __int64))(*(_QWORD *)this + 72LL);
          GlobalID = LogicGameObject::getGlobalID(*((GameMode **)this + 6));
          v5(this, v4, GlobalID);
        }
      }
      v7 = *((_DWORD *)this + 17);
      if ( v7 > 0 )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = *((_QWORD *)this + 9);
          if ( *((_DWORD *)this + 16) >= *(_DWORD *)(v10 + v9) )
          {
            v11 = v10 + v9;
            if ( *(_BYTE *)(v11 + 16) )
            {
              inited = *(_QWORD *)(v11 + 8);
            }
            else
            {
              *(_BYTE *)(v11 + 16) = 1;
              inited = Effect::initRenderable(this, v8);
              *(_QWORD *)(*((_QWORD *)this + 9) + v9 + 8) = inited;
              if ( *((_BYTE *)this + 131) )
              {
                Sound = LogicEffectData::getSound(*((#822 **)this + 4), v8);
                if ( Sound )
                {
                  v14 = (_DWORD *)SoundManager::playSound(
                                    SoundManager::sm_pInstance,
                                    Sound,
                                    0xFFFFFFFFLL,
                                    1.0,
                                    COERCE_LONG_DOUBLE((unsigned __int128)0));
                  if ( (unsigned int)LogicSoundData::getLoop(Sound) && v14 != 0 )
                    *(_DWORD *)(*((_QWORD *)this + 9) + v9 + 20) = *v14;
                }
              }
            }
            if ( inited )
            {
              if ( *((_BYTE *)this + 129) )
              {
                v16 = *(void (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)inited + 40LL);
                *(float *)&v17 = Effect::getTileX(this);
                v18 = v17;
                Effect::getTileY((__int64)this);
                v20 = v19;
                *(float *)&v21 = Effect::getTileZ(this);
                v16(inited, v18, v20, v21);
              }
              if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)inited + 24LL))(inited, a2) )
              {
                v22 = *((_QWORD *)this + 9);
                v23 = *(_QWORD *)(v22 + v9 + 8);
                if ( v23 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
                  v22 = *((_QWORD *)this + 9);
                }
                *(_QWORD *)(v22 + v9 + 8) = 0;
              }
            }
          }
          v9 += 24;
          ++v8;
        }
        while ( v7 != v8 );
      }
      *((_DWORD *)this + 16) += a2;
      return (*(__int64 (__fastcall **)(DonateAllianceUnitMessage *))(*(_QWORD *)this + 32LL))(this);
    }

    #924 *__fastcall Effect::initRenderable(DonateAllianceUnitMessage *this, int a2)
    {
      int Layer; // w0
      OutOfSyncMessage *v5; // x22
      _DWORD *FileName; // x23
      _DWORD *ExportName; // x24
      #924 *v8; // x20
      __int64 v9; // x21
      #1167 *v10; // x20
      #1257 *Clip; // x23
      const String *TextParentInstanceName; // x8
      const String *TextInstanceName; // x0
      Sprite *v14; // x1
      float v15; // s0
      int FlashWidth; // w0
      #1011 *ParticleEmitter; // x0
      const #1011 *EnemyVersion; // x21
      const #822 *Effect; // x21
      const GameMode *v20; // x22
      float TileX; // s8
      float v22; // s0
      float v23; // s9
      float TileZ; // s0
      void (__fastcall *v25)(#924 *, long double, long double, long double); // x21
      long double v26; // q0
      long double v27; // q8
      long double v28; // q0
      long double v29; // q9
      long double v30; // q0
    
      Layer = LogicEffectData::getLayer(*((#822 **)this + 4), a2);
      v5 = (OutOfSyncMessage *)RenderSystem::getLayer(*((LogicJSONObject **)this + 12), Layer);
      FileName = (_DWORD *)LogicEffectData::getFileName(*((#822 **)this + 4), a2);
      ExportName = (_DWORD *)LogicEffectData::getExportName(*((#822 **)this + 4), a2);
      v8 = 0;
      switch ( (unsigned int)LogicEffectData::getRenderableType(*((#822 **)this + 4), a2) )
      {
        case 0u:
          v9 = *((_QWORD *)this + 6);
          if ( !v9 )
            return 0;
          v8 = (#924 *)operator new(40);
          FilterEffect::FilterEffect(
            v8,
            v9,
            FileName,
            ExportName,
            *((unsigned __int8 *)this + 128),
            *((unsigned int *)this + 27));
          goto LABEL_21;
        case 1u:
          if ( !*FileName || !*ExportName )
            return 0;
          v10 = (#1167 *)operator new(208);
          AnimationInstance::AnimationInstance(
            v10,
            v5,
            FileName,
            ExportName,
            *((unsigned int *)this + 27),
            *((_QWORD *)this + 12),
            *((unsigned int *)this + 28));
          (*(void (__fastcall **)(#1167 *, float))(*(_QWORD *)v10 + 40LL))(v10, *((float *)this + 26));
          if ( *((_DWORD *)this + 2) )
          {
            Clip = (#1257 *)AnimationInstance::getClip(v10);
            TextParentInstanceName = (const String *)LogicEffectData::getTextParentInstanceName(*((#822 **)this + 4), a2);
            if ( TextParentInstanceName->m_length )
              Clip = (#1257 *)MovieClip::getMovieClipByName(Clip, TextParentInstanceName);
            if ( Clip )
            {
              TextInstanceName = (const String *)LogicEffectData::getTextInstanceName(*((#822 **)this + 4), a2);
              MovieClip::setText(Clip, TextInstanceName, (const String *)((char *)this + 8));
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 64LL))(*((_QWORD *)this + 12));
              DropGUIContainer::doFontScaling(Clip, v14, v15);
            }
          }
          if ( *((_QWORD *)this + 7) )
            AnimationInstance::setTargetObject(v10);
          FlashWidth = LogicEffectData::getFlashWidth(*((#822 **)this + 4), a2);
          AnimationInstance::setTargettedAnimationWidth(v10, FlashWidth);
          v8 = (#1167 *)((char *)v10 + 144);
          goto LABEL_21;
        case 2u:
          ParticleEmitter = (#1011 *)LogicEffectData::getParticleEmitter(*((#822 **)this + 4), a2);
          EnemyVersion = ParticleEmitter;
          if ( !ParticleEmitter )
            return 0;
          if ( *((_BYTE *)this + 130) )
            EnemyVersion = (const #1011 *)LogicParticleEmitterData::getEnemyVersion(ParticleEmitter);
          v8 = (#924 *)operator new(168);
          ParticleEmitter::ParticleEmitter(
            v8,
            EnemyVersion,
            *((const GameMode **)this + 6),
            v5,
            *((float *)this + 26),
            *((LogicJSONObject **)this + 12),
            *((_DWORD *)this + 29));
          goto LABEL_21;
        case 4u:
          Effect = (const #822 *)LogicEffectData::getEffect(*((#822 **)this + 4), a2);
          if ( !Effect )
            return 0;
          v8 = (#924 *)operator new(136);
          v20 = (const GameMode *)*((_QWORD *)this + 6);
          TileX = Effect::getTileX(this);
          Effect::getTileY((__int64)this);
          v23 = v22;
          TileZ = Effect::getTileZ(this);
          Effect::Effect(
            v8,
            Effect,
            0x7FFFFFFF,
            v20,
            TileX,
            v23,
            TileZ,
            *((_BYTE *)this + 129),
            *((LogicJSONObject **)this + 12),
            *((_DWORD *)this + 29),
            *((_BYTE *)this + 130));
          if ( !*((_BYTE *)this + 131) )
            Effect::disableSounds(v8);
    LABEL_21:
          (*(void (__fastcall **)(#924 *, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, *((unsigned __int8 *)this + 128));
          v25 = *(void (__fastcall **)(#924 *, long double, long double, long double))(*(_QWORD *)v8 + 40LL);
          *(float *)&v26 = Effect::getTileX(this);
          v27 = v26;
          Effect::getTileY((__int64)this);
          v29 = v28;
          *(float *)&v30 = Effect::getTileZ(this);
          v25(v8, v27, v29, v30);
          (*(void (__fastcall **)(#924 *, _QWORD, _QWORD))(*(_QWORD *)v8 + 64LL))(
            v8,
            *((unsigned int *)this + 30),
            *((unsigned int *)this + 31));
          return v8;
        default:
          return v8;
      }
    }

    __int64 __fastcall Effect::getEffectId(DonateAllianceUnitMessage *this)
    {
      return *((unsigned int *)this + 10);
    }

    __int64 __fastcall Effect::setLooping(__int64 this, __int64 a2)
    {
      __int64 v3; // x20
      int v4; // w21
      __int64 v5; // x22
    
      v3 = this;
      *(_BYTE *)(this + 128) = a2;
      v4 = *(_DWORD *)(this + 68);
      if ( v4 >= 1 )
      {
        v5 = 8;
        do
        {
          this = *(_QWORD *)(*(_QWORD *)(v3 + 72) + v5);
          if ( this )
            this = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 48LL))(this, a2);
          --v4;
          v5 += 24;
        }
        while ( v4 );
      }
      return this;
    }

    __int64 __fastcall Effect::setSwfFadeOutTime(__int64 this, int a2)
    {
      *(_DWORD *)(this + 112) = a2;
      return this;
    }

    __int64 __fastcall Effect::setForcedDuration(__int64 this, int a2)
    {
      *(_DWORD *)(this + 108) = a2;
      return this;
    }

    __int64 __fastcall Effect::disableSounds(__int64 this)
    {
      __int64 v1; // x19
      int v2; // w8
      int v3; // w22
      int v4; // w20
      __int64 v5; // x23
      DonateAllianceUnitMessage *v6; // x21
    
      v1 = this;
      *(_BYTE *)(this + 131) = 0;
      v2 = *(_DWORD *)(this + 68);
      v3 = v2 - 1;
      if ( v2 >= 1 )
      {
        v4 = 0;
        v5 = 8;
        do
        {
          v6 = *(DonateAllianceUnitMessage **)(*(_QWORD *)(v1 + 72) + v5);
          if ( v6 )
          {
            this = LogicEffectData::getRenderableType(*(#822 **)(v1 + 32), v4);
            if ( (_DWORD)this == 4 )
              this = Effect::disableSounds(v6);
          }
          v5 += 24;
        }
        while ( v4++ != v3 );
      }
      return this;
    }

    __int64 __fastcall Effect::setLocation(__int64 this, float a2, float a3, float a4)
    {
      DonateAllianceUnitMessage *v4; // x19
      int v5; // w21
      __int64 v6; // x22
      __int64 v7; // x20
      __int64 (__fastcall *v8)(__int64, long double, long double, long double); // x23
      long double v9; // q0
      long double v10; // q8
      long double v11; // q0
      long double v12; // q9
      long double v13; // q0
    
      v4 = (DonateAllianceUnitMessage *)this;
      *(float *)(this + 80) = a2;
      *(float *)(this + 84) = a3;
      *(float *)(this + 88) = a4;
      v5 = *(_DWORD *)(this + 68);
      if ( v5 >= 1 )
      {
        v6 = 8;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)v4 + 9) + v6);
          if ( v7 )
          {
            v8 = *(__int64 (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v7 + 40LL);
            *(float *)&v9 = Effect::getTileX(v4);
            v10 = v9;
            Effect::getTileY((__int64)v4);
            v12 = v11;
            *(float *)&v13 = Effect::getTileZ(v4);
            this = v8(v7, v10, v12, v13);
          }
          --v5;
          v6 += 24;
        }
        while ( v5 );
      }
      return this;
    }

    __int64 __fastcall Effect::isFinished(DonateAllianceUnitMessage *this)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x8
      __int64 v6; // x0
    
      if ( !*((_BYTE *)this + 128) )
      {
        v2 = *((int *)this + 17);
        if ( (int)v2 < 1 )
          return 1;
        v3 = 0;
        v4 = 0;
        while ( 1 )
        {
          v5 = *((_QWORD *)this + 9) + v3;
          if ( !*(_BYTE *)(v5 + 16) )
            break;
          v6 = *(_QWORD *)(v5 + 8);
          if ( v6 )
          {
            if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) )
              break;
          }
          ++v4;
          v3 += 24;
          if ( v4 >= v2 )
            return 1;
        }
      }
      return 0;
    }

    __int64 __fastcall Effect::endPlayback(DonateAllianceUnitMessage *this)
    {
      int v2; // w20
      __int64 v3; // x21
      __int64 v4; // x8
      __int64 v5; // x0
    
      v2 = *((_DWORD *)this + 17);
      if ( v2 >= 1 )
      {
        v3 = 0;
        v4 = *((_QWORD *)this + 9);
        do
        {
          v5 = *(_QWORD *)(v4 + v3 + 8);
          if ( v5 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            v4 = *((_QWORD *)this + 9);
          }
          *(_BYTE *)(v4 + v3 + 16) = 1;
          --v2;
          v3 += 24;
        }
        while ( v2 );
      }
      return (*(__int64 (__fastcall **)(DonateAllianceUnitMessage *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0);
    }

    _DWORD *__fastcall Effect::setDisplayObjectOffsets(_DWORD *this, __int64 a2, __int64 a3)
    {
      _DWORD *v5; // x21
      int v6; // w22
      __int64 v7; // x23
    
      v5 = this;
      *(this + 30) = a2;
      *(this + 31) = a3;
      v6 = *(this + 17);
      if ( v6 >= 1 )
      {
        v7 = 8;
        do
        {
          this = *(_DWORD **)(*((_QWORD *)v5 + 9) + v7);
          if ( this )
            this = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)this + 64LL))(this, a2, a3);
          --v6;
          v7 += 24;
        }
        while ( v6 );
      }
      return this;
    }

    __int64 __fastcall Effect::removeReferences(__int64 result, __int64 a2, __int64 a3)
    {
      __int64 v5; // x21
      int v6; // w22
      __int64 v7; // x23
    
      v5 = result;
      if ( *(_QWORD *)(result + 48) == a2 )
      {
        *(_QWORD *)(result + 48) = 0;
        if ( *(_BYTE *)(result + 129) )
        {
          if ( *(_BYTE *)(result + 128) )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
          *(_BYTE *)(v5 + 129) = 0;
        }
      }
      if ( *(_QWORD *)(v5 + 56) == a2 )
        *(_QWORD *)(v5 + 56) = 0;
      v6 = *(_DWORD *)(v5 + 68);
      if ( v6 >= 1 )
      {
        v7 = 8;
        do
        {
          result = *(_QWORD *)(*(_QWORD *)(v5 + 72) + v7);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)result + 72LL))(result, a2, a3);
          --v6;
          v7 += 24;
        }
        while ( v6 );
      }
      return result;
    }

    __int64 __fastcall Effect::setText(DonateAllianceUnitMessage *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 8));
    }

    void __fastcall Effect::setIsoLayer(DonateAllianceUnitMessage *this, OutOfSyncMessage *a2)
    {
      ;
    }

    __int64 __fastcall Effect::setTarget(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 56) = a2;
      return result;
    }

}; // end class Effect
