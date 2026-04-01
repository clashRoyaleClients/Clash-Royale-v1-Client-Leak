class ParticleEmitter
{
public:

    void __fastcall ParticleEmitter::ParticleEmitter(
            ParticleEmitter *this,
            const LogicTauntData *a2,
            const GameMode *a3,
            OutOfSyncMessage *a4,
            float a5,
            LogicJSONObject *a6,
            int a7)
    {
      int MinLife; // w24
      int MaxLife; // w0
      AllianceStreamMessage *ParticleCount; // x0
      __int64 Instance; // x0
      int v18; // w8
      const String *v19; // x1
      String v20; // [xsp+8h] [xbp-98h] BYREF
      String v21; // [xsp+20h] [xbp-80h] BYREF
      __siginfo v22; // [xsp+38h] [xbp-68h] BYREF
    
      IEffectRenderable::IEffectRenderable(this);
      *(_QWORD *)this = off_100466D40;
      *((_BYTE *)this + 8) = 0;
      memset((char *)this + 12, 0, 0x60u);
      *((_DWORD *)this + 40) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 17) = a4;
      *((float *)this + 27) = a5;
      *((_QWORD *)this + 14) = a3;
      MinLife = LogicParticleEmitterData::getMinLife(a2);
      MaxLife = LogicParticleEmitterData::getMaxLife(a2);
      if ( MinLife < 1 )
        MinLife = 1;
      *((_QWORD *)this + 19) = a6;
      *((_DWORD *)this + 3) = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, MaxLife - MinLife)
                            + MinLife;
      *((_QWORD *)this + 2) = a2;
      *((_DWORD *)this + 16) = LogicParticleEmitterData::getParticleMinInterval(a2);
      *((_DWORD *)this + 17) = LogicParticleEmitterData::getParticleMaxInterval(a2);
      ParticleCount = (AllianceStreamMessage *)LogicParticleEmitterData::getParticleCount(a2);
      *((_DWORD *)this + 6) = (_DWORD)ParticleCount;
      Instance = GameMain::getInstance(ParticleCount);
      v18 = *((_DWORD *)this + 6);
      if ( !*(_DWORD *)(Instance + 120) )
      {
        v18 >>= 2;
        if ( v18 < 1 )
          v18 = 1;
        *((_DWORD *)this + 6) = v18;
      }
      if ( v18 >= 101 )
      {
        String::String(&v20, "Particle emitter particle count limited to ");
        operator+((__int64 *)&v21.m_length, &v20);
        operator+(&v21, " -> 100");
        Debugger::warning(&v22, v19);
        String::~String((String *)&v22);
        String::~String(&v21);
        String::~String(&v20);
        *((_DWORD *)this + 6) = 100;
      }
      *((_DWORD *)this + 7) = LogicParticleEmitterData::getParticleMinLife(a2);
      *((_DWORD *)this + 8) = LogicParticleEmitterData::getParticleMaxLife(a2) - *((_DWORD *)this + 7);
      *((_DWORD *)this + 9) = LogicParticleEmitterData::getParticleMinAngle(a2);
      *((_DWORD *)this + 10) = LogicParticleEmitterData::getParticleMaxAngle(a2) - *((_DWORD *)this + 9);
      *((_DWORD *)this + 14) = LogicParticleEmitterData::getParticleMinSpeed(a2);
      *((_DWORD *)this + 15) = LogicParticleEmitterData::getParticleMaxSpeed(a2) - *((_DWORD *)this + 14);
      *((_DWORD *)this + 18) = LogicParticleEmitterData::getParticleMinTailLength(a2);
      *((_DWORD *)this + 19) = LogicParticleEmitterData::getParticleMaxTailLength(a2) - *((_DWORD *)this + 18);
      *((_DWORD *)this + 11) = LogicParticleEmitterData::getParticleMinVelocityZ(a2);
      *((_DWORD *)this + 12) = LogicParticleEmitterData::getParticleMaxVelocityZ(a2) - *((_DWORD *)this + 11);
      *((float *)this + 13) = (float)((float)(int)LogicParticleEmitterData::getParticleGravity(a2) * 0.001) * 0.1;
      *((_DWORD *)this + 20) = LogicParticleEmitterData::getParticleResourceCount(a2);
      LogicArrayList<Particle *>::ensureCapacity((char *)this + 88, *((unsigned int *)this + 6));
      *((_DWORD *)this + 40) = a7;
    }

    // attributes: thunk
    void __fastcall ParticleEmitter::ParticleEmitter(
            ParticleEmitter *this,
            const LogicTauntData *a2,
            const GameMode *a3,
            OutOfSyncMessage *a4,
            float a5,
            LogicJSONObject *a6,
            int a7)
    {
      __ZN15ParticleEmitterC2EPK24LogicParticleEmitterDataPK15LogicGameObjectP6SpritefP12RenderSystemi(
        this,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7);
    }

    void __fastcall ParticleEmitter::~ParticleEmitter(GameObjectManager *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x0
    
      *(_QWORD *)this = off_100466D40;
      v2 = (_QWORD *)((char *)this + 88);
      v3 = *((int *)this + 25);
      if ( (int)v3 >= 1 )
      {
        v4 = v3 - 1;
        do
        {
          v5 = *(_QWORD *)(*v2 + 8 * v4);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
      }
      *((_BYTE *)this + 8) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      memset((char *)this + 12, 0, 0x4Cu);
      *((_DWORD *)this + 40) = 0;
      *((_DWORD *)this + 27) = 1065353216;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      v7 = *((_QWORD *)this + 11);
      if ( v7 )
        operator delete[](v7);
      *v2 = 0;
      v2[1] = 0;
      IEffectRenderable::~IEffectRenderable(this);
    }

    // attributes: thunk
    void __fastcall ParticleEmitter::~ParticleEmitter(GameObjectManager *this)
    {
      __ZN15ParticleEmitterD2Ev(this);
    }

    void __fastcall ParticleEmitter::~ParticleEmitter(GameObjectManager *this)
    {
      ParticleEmitter::~ParticleEmitter(this);
      operator delete(this);
    }

    Particle *__fastcall ParticleEmitter::createParticle(GameObjectManager *this, int a2)
    {
      __int64 v4; // x22
      String *ParticleResource; // x21
      String *ParticleExportName; // x22
      int ParticleRandomAngle; // w0
      int v8; // w1
      int v9; // w19
      int v10; // w0
      Particle *v11; // x23
      int v12; // w8
      int v13; // w9
      float v14; // s8
      #1104 *MovementComponentEvenIfDisabled; // x0
      __int64 Direction; // x0
      float v17; // s11
      int v18; // w24
      int v19; // w25
      int v20; // w19
      int v21; // w26
      int ParticleMinRadius; // w28
      int ParticleMaxRadius; // w0
      int v24; // w22
      OutOfSyncMessage *v25; // x27
      float v26; // s9
      float v27; // s10
      int32x2_t v28; // d2
      int v29; // w19
      int v31; // [xsp+4h] [xbp-8Ch]
      String *v32; // [xsp+8h] [xbp-88h]
      int v33; // [xsp+10h] [xbp-80h]
      int v34; // [xsp+14h] [xbp-7Ch]
      Particle *v35; // [xsp+18h] [xbp-78h] BYREF
    
      if ( *((_DWORD *)this + 25) == *((_DWORD *)this + 6) )
        return 0;
      v4 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, *((_DWORD *)this + 20));
      ParticleResource = (String *)LogicParticleEmitterData::getParticleResource(*((_QWORD *)this + 2), v4);
      if ( !ParticleResource->m_length )
        return 0;
      ParticleExportName = (String *)LogicParticleEmitterData::getParticleExportName(*((_QWORD *)this + 2), v4);
      if ( !ParticleExportName->m_length )
        return 0;
      ParticleRandomAngle = LogicParticleEmitterData::getParticleRandomAngle(*((_QWORD *)this + 2));
      v9 = *((_DWORD *)this + 9);
      v8 = *((_DWORD *)this + 10);
      if ( ParticleRandomAngle )
      {
        v10 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, v8);
      }
      else
      {
        if ( v8 )
          v12 = *((_DWORD *)this + 10);
        else
          v12 = 1;
        v13 = *((_DWORD *)this + 26);
        v10 = v13 * v12 / *((_DWORD *)this + 6) % v12;
        *((_DWORD *)this + 26) = v13 + 1;
      }
      v14 = (float)(v10 + v9) + (float)*((int *)this + 40);
      if ( *((_QWORD *)this + 14)
        && (unsigned int)LogicParticleEmitterData::getParticleAngleRelativeToParent(*((_QWORD *)this + 2)) )
      {
        v32 = ParticleExportName;
        v31 = a2;
        MovementComponentEvenIfDisabled = (#1104 *)LogicGameObject::getMovementComponentEvenIfDisabled(*((GameMode **)this + 14));
        if ( MovementComponentEvenIfDisabled )
        {
          Direction = LogicMovementComponent::getDirection(MovementComponentEvenIfDisabled);
          v14 = v14 + (float)(int)LogicVector2::getAngle(Direction);
        }
      }
      else
      {
        v32 = ParticleExportName;
        v31 = a2;
      }
      v34 = *((_DWORD *)this + 14);
      v33 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, *((_DWORD *)this + 15));
      v17 = *((float *)this + 27);
      v18 = *((_DWORD *)this + 11);
      v19 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, *((_DWORD *)this + 12));
      v20 = *((_DWORD *)this + 18);
      v21 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, *((_DWORD *)this + 19));
      ParticleMinRadius = LogicParticleEmitterData::getParticleMinRadius(*((_QWORD *)this + 2));
      ParticleMaxRadius = LogicParticleEmitterData::getParticleMaxRadius(*((_QWORD *)this + 2));
      v24 = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, ParticleMaxRadius - ParticleMinRadius);
      v11 = (Particle *)operator new(272);
      v25 = (OutOfSyncMessage *)*((_QWORD *)this + 17);
      v26 = *((float *)this + 31);
      v27 = *((float *)this + 32);
      *(float *)v28.i32 = (float)((float)(int)LogicParticleEmitterData::getParticleStartZ(*((_QWORD *)this + 2)) * 0.1)
                        + *((float *)this + 33);
      Particle::Particle(
        v11,
        v25,
        v26,
        v27,
        v28,
        (float)(v19 + v18) * 0.1,
        *((float *)this + 13),
        (float)(v24 + ParticleMinRadius) * 0.5,
        ParticleResource,
        v32,
        v14,
        (int)(float)((float)v34 + (float)((float)v33 * v17)),
        v21 + v20,
        *((LogicJSONObject **)this + 19),
        *((const LogicTauntData **)this + 2));
      v35 = v11;
      Particle::setDisplayObjectOffsets((__int64)v11, *((_DWORD *)this + 36), *((_DWORD *)this + 37));
      (*(void (__fastcall **)(Particle *, float))(*(_QWORD *)v11 + 40LL))(v11, *((float *)this + 27));
      v29 = *((_DWORD *)this + 7);
      *((_DWORD *)v11 + 35) = LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, *((_DWORD *)this + 8))
                            + v29;
      Particle::updatePublic(v11, v31);
      LogicArrayList<Particle *>::add((char *)this + 88, &v35);
      return v11;
    }

    bool __fastcall ParticleEmitter::isFinished(GameObjectManager *this)
    {
      int v1; // w8
    
      v1 = *((_DWORD *)this + 3);
      return v1 && *((_DWORD *)this + 30) >= v1 && *((_DWORD *)this + 25) == 0;
    }

    float *__fastcall ParticleEmitter::setLocation(float *this, float a2, float a3, float a4)
    {
      *(this + 31) = a2;
      *(this + 32) = a3;
      *(this + 33) = a4;
      return this;
    }

    __int64 __fastcall ParticleEmitter::endPlayback(__int64 this)
    {
      *(_DWORD *)(this + 12) = 1;
      return this;
    }

    __int64 __fastcall ParticleEmitter::setLooping(__int64 this, char a2)
    {
      if ( (a2 & 1) != 0 )
      {
        *(_DWORD *)(this + 12) = 0;
      }
      else if ( !*(_DWORD *)(this + 12) )
      {
        *(_DWORD *)(this + 12) = 2000;
      }
      *(_BYTE *)(this + 8) = a2;
      return this;
    }

    __int64 __fastcall ParticleEmitter::setIsoLayer(__int64 this, OutOfSyncMessage *a2)
    {
      *(_QWORD *)(this + 136) = a2;
      return this;
    }

    _DWORD *__fastcall ParticleEmitter::setDisplayObjectOffsets(_DWORD *this, int a2, int a3)
    {
      __int64 v5; // x21
      int v6; // w22
      __int64 v7; // x23
    
      v5 = (__int64)this;
      *(this + 36) = a2;
      *(this + 37) = a3;
      v6 = *(this + 25);
      if ( v6 >= 1 )
      {
        v7 = 0;
        do
          this = (_DWORD *)Particle::setDisplayObjectOffsets(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 8 * v7++), a2, a3);
        while ( v6 != (_DWORD)v7 );
      }
      return this;
    }

    __int64 __fastcall ParticleEmitter::update(_DWORD *a1, int a2)
    {
      int v4; // w8
      int v5; // w25
      int v6; // w24
      __int64 v7; // x8
      _QWORD *v8; // x21
      __int64 v9; // x22
      LogicEggData *v10; // x23
      __int64 v11; // x8
      int v12; // w23
      char v14; // w25
      int v15; // w21
      int v16; // w25
    
      v4 = a1[3];
      if ( v4 && a1[30] >= v4 )
      {
        if ( !a1[25] )
          return 1;
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      v6 = a1[6];
      v7 = (int)a1[25];
      if ( (int)v7 >= 1 )
      {
        v8 = a1 + 22;
        v9 = v7 - 1;
        do
        {
          v10 = *(LogicEggData **)(*v8 + 8 * v9);
          if ( Particle::updatePublic(v10, a2) )
          {
            LogicArrayList<Particle *>::remove(a1 + 22, v9);
            if ( v10 )
              (*(void (__fastcall **)(LogicEggData *))(*(_QWORD *)v10 + 8LL))(v10);
          }
          v11 = v9-- + 1;
        }
        while ( v11 > 1 );
      }
      if ( v5 && a1[20] )
      {
        v12 = a1[21];
        if ( v12 <= 0 )
        {
          if ( a1[25] >= v6 )
            goto LABEL_26;
          v14 = 0;
          v15 = a1[17] - a1[16];
          while ( ParticleEmitter::createParticle((GameObjectManager *)a1, -v12) )
          {
            v16 = a1[16];
            v12 += v16 + LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, v15);
            a1[21] = v12;
            v14 = 1;
            if ( a1[25] >= v6 || v12 >= 1 )
              goto LABEL_27;
          }
          if ( (v14 & 1) == 0 )
    LABEL_26:
            a1[21] = 0;
        }
        else
        {
          a1[21] = v12 - a2;
        }
      }
    LABEL_27:
      a1[30] += a2;
      return 0;
    }

    __int64 __fastcall ParticleEmitter::setRandomSeed(int a1)
    {
      return LogicMersenneTwisterRandom::initialize((#1233 *)&ParticleEmitter::sm_random, a1);
    }

    __int64 __fastcall ParticleEmitter::getRand(int a1)
    {
      return LogicMersenneTwisterRandom::rand((#1233 *)&ParticleEmitter::sm_random, a1);
    }

    __int64 __fastcall ParticleEmitter::removeReferences(__int64 this, const GameMode *a2)
    {
      if ( *(const GameMode **)(this + 112) == a2 )
        *(_QWORD *)(this + 112) = 0;
      return this;
    }

}; // end class ParticleEmitter
