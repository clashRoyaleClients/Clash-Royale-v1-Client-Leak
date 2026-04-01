class EffectManager
{
public:

    void __fastcall EffectManager::EffectManager(EffectManager *this, LogicJSONObject *a2)
    {
      ParticleEmitter *CurrentTime; // x0
      int v3; // w1
    
      *((_QWORD *)this + 2) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 12) = -1;
      *((_QWORD *)this + 5) = a2;
      CurrentTime = (ParticleEmitter *)LogicTimeUtil::getCurrentTime(this);
      ParticleEmitter::setRandomSeed(CurrentTime, v3);
    }

    // attributes: thunk
    void __fastcall EffectManager::EffectManager(EffectManager *this, LogicJSONObject *a2)
    {
      __ZN13EffectManagerC2EP12RenderSystem(this, a2);
    }

    void __fastcall EffectManager::~EffectManager(LogicBackgroundDecoData *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x0
    
      v2 = (_QWORD *)((char *)this + 16);
      v3 = *((int *)this + 7);
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
      *((_DWORD *)this + 7) = 0;
      EffectManager::removeAllEffects(this);
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_DWORD *)this + 12) = -1;
      v7 = *((_QWORD *)this + 2);
      if ( v7 )
        operator delete[](v7);
      *v2 = 0;
      v2[1] = 0;
      if ( *(_QWORD *)this )
        operator delete[](*(_QWORD *)this);
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    _DWORD *__fastcall EffectManager::removeAllEffects(_DWORD *this)
    {
      _DWORD *v1; // x19
      int v2; // w8
      __int64 v3; // x20
      int v4; // w8
    
      v1 = this;
      v2 = *(this + 3);
      v3 = (unsigned int)(v2 - 1);
      if ( v2 >= 1 )
      {
        do
        {
          this = (_DWORD *)LogicArrayList<Effect *>::remove(v1, v3);
          if ( this )
            this = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)this + 8LL))(this);
          v4 = v3 + 1;
          v3 = (unsigned int)(v3 - 1);
        }
        while ( v4 > 1 );
      }
      return this;
    }

    // attributes: thunk
    void __fastcall EffectManager::~EffectManager(LogicBackgroundDecoData *this)
    {
      __ZN13EffectManagerD2Ev(this);
    }

    __int64 __fastcall EffectManager::update(__int64 this, long double a2)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x21
      __int64 v6; // x22
      __int64 v7; // x8
      __int64 v8; // x8
      _QWORD *v9; // x19
      __int64 v10; // x20
      __int64 v11; // x0
      __int64 v12; // x8
    
      v3 = this;
      v4 = *(int *)(this + 12);
      if ( (int)v4 >= 1 )
      {
        v5 = v4 - 1;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v5);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(
            v6,
            (unsigned int)(int)(float)(*(float *)&a2 * 1000.0));
          this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          if ( (this & 1) != 0 )
          {
            this = LogicArrayList<Effect *>::remove(v3, v5);
            if ( v6 )
              this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          }
          v7 = v5-- + 1;
        }
        while ( v7 > 1 );
      }
      v8 = *(int *)(v3 + 28);
      if ( (int)v8 >= 1 )
      {
        v9 = (_QWORD *)(v3 + 16);
        v10 = v8 - 1;
        do
        {
          this = FlyParticle::update(*(#1305 **)(*v9 + 8 * v10), a2);
          if ( (_DWORD)this )
          {
            v11 = *(_QWORD *)(*v9 + 8 * v10);
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
            this = LogicArrayList<FlyParticle *>::remove(v9, v10);
          }
          v12 = v10-- + 1;
        }
        while ( v12 > 1 );
      }
      return this;
    }

    __int64 __fastcall EffectManager::addEffectNoLoop(
            LogicBackgroundDecoData *this,
            const AskForTVContentMessage *a2,
            int a3,
            int a4,
            int a5,
            bool a6,
            const GameMode *a7,
            bool a8,
            int a9)
    {
      __int64 v9; // x19
    
      v9 = EffectManager::addEffect(this, a2, a3, a4, a5, a6, a7, a8, a9);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, 0);
      return v9;
    }

    Effect *__fastcall EffectManager::addEffect(
            LogicBackgroundDecoData *this,
            const AskForTVContentMessage *a2,
            int a3,
            int a4,
            int a5,
            int a6,
            const GameMode *a7,
            char a8,
            int a9)
    {
      char v11; // w21
      const AskForTVContentMessage *EnemyVersion; // x25
      int v14; // w20
      float v15; // s8
      float v16; // s9
      float v17; // s10
      Effect *v18; // x26
      Effect *v20; // [xsp+8h] [xbp-68h] BYREF
    
      v11 = a6;
      EnemyVersion = a2;
      v14 = *((_DWORD *)this + 8) + 1;
      *((_DWORD *)this + 8) = v14;
      v15 = (float)a3 / 500.0;
      v16 = (float)a4 / 500.0;
      v17 = (float)a5 / 500.0;
      if ( a6 )
        EnemyVersion = (const AskForTVContentMessage *)LogicEffectData::getEnemyVersion(a2);
      v18 = (Effect *)operator new(136);
      Effect::Effect(v18, EnemyVersion, v14, a7, v15, v16, v17, a8, *((LogicJSONObject **)this + 5), a9, v11);
      v20 = v18;
      LogicArrayList<Effect *>::add(this, &v20);
      *((_DWORD *)this + 12) = v14;
      return v18;
    }

    Effect *__fastcall EffectManager::addLoopingEffect(
            LogicBackgroundDecoData *this,
            const AskForTVContentMessage *a2,
            int a3,
            int a4,
            int a5,
            int a6,
            const GameMode *a7,
            char a8,
            int a9)
    {
      Effect *v9; // x19
    
      v9 = EffectManager::addEffect(this, a2, a3, a4, a5, a6, a7, a8, a9);
      (*(void (__fastcall **)(Effect *, __int64))(*(_QWORD *)v9 + 48LL))(v9, 1);
      return v9;
    }

    Effect *__fastcall EffectManager::addEffectScreen(
            LogicJSONObject **this,
            const AskForTVContentMessage *a2,
            float a3,
            long double a4,
            int a5,
            const GameMode *a6,
            char a7,
            int a8)
    {
      int v15; // [xsp+8h] [xbp-38h] BYREF
      int v16; // [xsp+Ch] [xbp-34h] BYREF
    
      RenderSystem::screenToLogic(*(this + 5), a3, a4, &v16, &v15);
      return EffectManager::addEffect((LogicBackgroundDecoData *)this, a2, v16, v15, 0, a5, a6, a7, a8);
    }

    Effect *__fastcall EffectManager::addEffectNoLoopScreen(
            LogicJSONObject **this,
            const AskForTVContentMessage *a2,
            float a3,
            long double a4,
            int a5,
            const GameMode *a6,
            char a7,
            int a8)
    {
      Effect *v8; // x19
    
      v8 = EffectManager::addEffectScreen(this, a2, a3, a4, a5, a6, a7, a8);
      (*(void (__fastcall **)(Effect *, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, 0);
      return v8;
    }

    Effect *__fastcall EffectManager::addLoopingEffectScreen(
            LogicJSONObject **this,
            const AskForTVContentMessage *a2,
            float a3,
            long double a4,
            int a5,
            const GameMode *a6,
            char a7,
            int a8)
    {
      Effect *v8; // x19
    
      v8 = EffectManager::addEffectScreen(this, a2, a3, a4, a5, a6, a7, a8);
      (*(void (__fastcall **)(Effect *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 1);
      return v8;
    }

    __int64 __fastcall EffectManager::removeEffect(__int64 this, int a2)
    {
      _QWORD *v3; // x19
      __int64 v4; // x23
      __int64 v5; // x21
      DonateAllianceUnitMessage *v6; // x22
    
      v3 = (_QWORD *)this;
      v4 = *(int *)(this + 12);
      if ( (int)v4 >= 1 )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = *(DonateAllianceUnitMessage **)(*v3 + 8 * v5);
          this = Effect::getEffectId(v6);
          if ( (_DWORD)this == a2 )
            break;
          if ( ++v5 >= v4 )
            return this;
        }
        this = LogicArrayList<Effect *>::remove(v3, v5);
        if ( v6 )
          return (*(__int64 (__fastcall **)(DonateAllianceUnitMessage *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      return this;
    }

    __int64 __fastcall EffectManager::removeReferences(__int64 this, const GameMode *a2, __int64 a3)
    {
      _QWORD *v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      __int64 v8; // x8
    
      v5 = (_QWORD *)this;
      v6 = *(int *)(this + 12);
      if ( (int)v6 >= 1 )
      {
        v7 = v6 - 1;
        do
        {
          this = (*(__int64 (__fastcall **)(_QWORD, const GameMode *, __int64))(**(_QWORD **)(*v5 + 8 * v7) + 72LL))(
                   *(_QWORD *)(*v5 + 8 * v7),
                   a2,
                   a3);
          v8 = v7-- + 1;
        }
        while ( v8 > 1 );
      }
      return this;
    }

    __int64 __fastcall EffectManager::getLastCreatedEffectId(LogicBackgroundDecoData *this)
    {
      return *((unsigned int *)this + 12);
    }

    __int64 __fastcall EffectManager::endPlayback(__int64 this, int a2)
    {
      _QWORD *v3; // x20
      __int64 v4; // x22
      __int64 v5; // x23
      DonateAllianceUnitMessage *v6; // x21
    
      v3 = (_QWORD *)this;
      v4 = *(int *)(this + 12);
      if ( (int)v4 >= 1 )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = *(DonateAllianceUnitMessage **)(*v3 + 8 * v5);
          this = Effect::getEffectId(v6);
          if ( (_DWORD)this == a2 )
            break;
          if ( ++v5 >= v4 )
            return this;
        }
        return (*(__int64 (__fastcall **)(DonateAllianceUnitMessage *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return this;
    }

    DonateAllianceUnitMessage *__fastcall EffectManager::getEffectById(LogicBackgroundDecoData *this, int a2)
    {
      __int64 v4; // x22
      __int64 v5; // x23
      DonateAllianceUnitMessage *v6; // x21
    
      v4 = *((int *)this + 3);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(DonateAllianceUnitMessage **)(*(_QWORD *)this + 8 * v5);
        if ( (unsigned int)Effect::getEffectId(v6) == a2 )
          break;
        if ( ++v5 >= v4 )
          return 0;
      }
      return v6;
    }

}; // end class EffectManager
