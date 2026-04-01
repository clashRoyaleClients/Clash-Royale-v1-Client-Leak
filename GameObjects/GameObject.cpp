class GameObject
{
public:

    void __fastcall GameObject::~GameObject(ShutdownStartedMessage *this)
    {
      *(_QWORD *)this = off_100461A20;
      GameObjectSprite::~GameObjectSprite((ShutdownStartedMessage *)((char *)this + 304));
      GameObjectSprite::~GameObjectSprite((ShutdownStartedMessage *)((char *)this + 160));
      GameObjectSprite::~GameObjectSprite((ShutdownStartedMessage *)((char *)this + 16));
    }

    void __fastcall GameObject::showAsGoodTarget(ShutdownStartedMessage *this)
    {
      ;
    }

    void __fastcall GameObject::showDangerRangeEffect(ShutdownStartedMessage *this)
    {
      ;
    }

    void __fastcall GameObject::GameObject(GameObject *this, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      int v6; // w25
      int v7; // w26
      int v8; // w27
      int v9; // w0
      #1080 *v10; // x0
      #1080 *Instance; // x0
      int v12; // w24
      int v13; // w25
      int v14; // w0
      int v15; // w24
      int v16; // w25
      int v17; // w0
      int v18; // w24
      int v19; // w25
      int v20; // w0
      int v21; // w24
      int v22; // w25
      int v23; // w0
    
      LogicGameObjectListener::LogicGameObjectListener(this);
      *(_QWORD *)this = off_100461A20;
      GameObjectSprite::GameObjectSprite((char *)this + 16, a3);
      GameObjectSprite::GameObjectSprite((char *)this + 160, a3);
      GameObjectSprite::GameObjectSprite((char *)this + 304, a3);
      *((_BYTE *)this + 448) = 0;
      *((_QWORD *)this + 1) = a2;
      LogicGameObject::setListener(a2, this);
      GameObjectSprite::setGameObject((GameObject *)((char *)this + 16), this);
      v6 = LogicGameObject::getX((GameMode *)a2);
      v7 = LogicGameObject::getY((GameMode *)a2);
      v8 = LogicGameObject::getZ((GameMode *)a2);
      v9 = (*(__int64 (__fastcall **)(GameObject *))(*(_QWORD *)this + 256LL))(this);
      v10 = (#1080 *)GameObjectSprite::setPositionFromLogic((GameObject *)((char *)this + 16), v6, v7, v9 + v8);
      Instance = (#1080 *)GameMain::getInstance(v10);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
      {
        *((_DWORD *)this + 19) = 1;
        *((_BYTE *)this + 80) = 1;
      }
      GameObjectSprite::setGameObject((GameObject *)((char *)this + 160), this);
      GameObjectSprite::setGameObject((GameObject *)((char *)this + 304), this);
      if ( (unsigned int)RenderSystem::isBottomPlayerInLogicTop(a3) )
      {
        v12 = LogicGameObject::getX((GameMode *)a2);
        v13 = LogicGameObject::getY((GameMode *)a2);
        v14 = LogicGameObject::getZ((GameMode *)a2);
        GameObjectSprite::setPositionFromLogic((GameObject *)((char *)this + 160), v12, v13 - 1, v14);
        v15 = LogicGameObject::getX((GameMode *)a2);
        v16 = LogicGameObject::getY((GameMode *)a2);
        v17 = LogicGameObject::getZ((GameMode *)a2);
        GameObjectSprite::setPositionFromLogic((GameObject *)((char *)this + 304), v15, v16 + 1, v17);
      }
      else
      {
        v18 = LogicGameObject::getX((GameMode *)a2);
        v19 = LogicGameObject::getY((GameMode *)a2);
        v20 = LogicGameObject::getZ((GameMode *)a2);
        GameObjectSprite::setPositionFromLogic((GameObject *)((char *)this + 160), v18, v19 + 1, v20);
        v21 = LogicGameObject::getX((GameMode *)a2);
        v22 = LogicGameObject::getY((GameMode *)a2);
        v23 = LogicGameObject::getZ((GameMode *)a2);
        GameObjectSprite::setPositionFromLogic((GameObject *)((char *)this + 304), v21, v22 - 1, v23);
      }
    }

    __int64 __fastcall GameObject::destruct(const GameMode **this)
    {
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x0
      __int64 result; // x0
    
      RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((#1138 *)(this + 2));
      if ( RenderSystem )
      {
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        EffectManager::removeReferences(EffectManager, *(this + 1), *((_DWORD *)*(this + 1) + 4));
      }
      result = LogicGameObjectListener::destruct((AvatarNameChangeFailedMessage *)this);
      *(this + 1) = 0;
      *((_BYTE *)this + 448) = 0;
      return result;
    }

    __int64 __fastcall GameObject::getRenderSystem(ShutdownStartedMessage *this)
    {
      return GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
    }

    __int64 __fastcall GameObject::getType(ShutdownStartedMessage *this)
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 88LL))(*((_QWORD *)this + 1));
    }

    __int64 __fastcall GameObject::getLogic(ShutdownStartedMessage *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall GameObject::getZOffset(ShutdownStartedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall GameObject::update(GameMode **this, float a2, float a3)
    {
      int PrevX; // w21
      int PrevY; // w23
      int PrevZ; // w22
      int v8; // w24
      int v9; // w20
      int v10; // w0
      float v11; // s0
      #1138 *v12; // x20
      int v13; // w0
      LogicJSONObject *RenderSystem; // x0
      #1138 *v15; // x0
      int v16; // w2
      __int64 v17; // x21
      __int64 MovieClip; // x0
      void (__fastcall *v19)(__int64, long double, long double, long double); // x23
      long double v20; // q0
      long double v21; // q8
      #1138 *v22; // x0
      long double v23; // q0
      long double v24; // q0
      __int64 result; // x0
      __int64 v26; // x21
      #1138 *v27; // x19
      __int64 v28; // x0
      long double v29; // q0
      long double v30; // q8
      long double v31; // q0
      long double v32; // q9
      #1138 *v33; // x0
      long double v34; // q0
      long double v35; // q0
      long double v36; // q0
      __int64 (__fastcall *v37)(__int64, long double, long double, long double); // [xsp+8h] [xbp-48h]
    
      PrevX = LogicGameObject::getPrevX(*(this + 1));
      PrevY = LogicGameObject::getPrevY(*(this + 1));
      PrevZ = LogicGameObject::getPrevZ(*(this + 1));
      v8 = LogicGameObject::getX(*(this + 1));
      v9 = LogicGameObject::getY(*(this + 1));
      v10 = LogicGameObject::getZ(*(this + 1));
      v11 = 1.0 - a3;
      if ( PrevX != v8 )
        PrevX = (int)(float)((float)(v11 * (float)PrevX) + (float)((float)v8 * a3));
      if ( PrevY != v9 )
        PrevY = (int)(float)((float)(v11 * (float)PrevY) + (float)((float)v9 * a3));
      if ( PrevZ != v10 )
        PrevZ = (int)(float)((float)(v11 * (float)PrevZ) + (float)((float)v10 * a3));
      v12 = (#1138 *)(this + 2);
      v13 = (*((__int64 (__fastcall **)(GameMode **))*this + 32))(this);
      GameObjectSprite::setPositionFromLogic((#1138 *)(this + 2), PrevX, PrevY, v13 + PrevZ);
      RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((#1138 *)(this + 2));
      if ( (unsigned int)RenderSystem::isBottomPlayerInLogicTop(RenderSystem) )
      {
        GameObjectSprite::setPositionFromLogic((#1138 *)(this + 20), PrevX, PrevY - 1, PrevZ);
        v15 = (#1138 *)(this + 38);
        v16 = PrevY + 1;
      }
      else
      {
        GameObjectSprite::setPositionFromLogic((#1138 *)(this + 20), PrevX, PrevY + 1, PrevZ);
        v15 = (#1138 *)(this + 38);
        v16 = PrevY - 1;
      }
      GameObjectSprite::setPositionFromLogic(v15, PrevX, v16, PrevZ);
      v17 = (*((__int64 (__fastcall **)(GameMode **))*this + 26))(this);
      if ( v17 )
      {
        MovieClip = GameObjectSprite::getMovieClip((#1138 *)(this + 38));
        v19 = *(void (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v17 + 272LL);
        if ( MovieClip )
        {
          GameObjectSprite::getTileX((#1138 *)(this + 38));
          v21 = v20;
          v22 = (#1138 *)(this + 38);
        }
        else
        {
          GameObjectSprite::getTileX((#1138 *)(this + 2));
          v21 = v23;
          v22 = (#1138 *)(this + 2);
        }
        GameObjectSprite::getTileY(v22);
        v19(v17, v21, v24, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      result = (*((__int64 (__fastcall **)(GameMode **))*this + 27))(this);
      v26 = result;
      if ( result )
      {
        v27 = (#1138 *)(this + 38);
        v28 = GameObjectSprite::getMovieClip(v27);
        v37 = *(__int64 (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v26 + 272LL);
        if ( v28 )
        {
          GameObjectSprite::getTileX(v27);
          v30 = v29;
          GameObjectSprite::getTileY(v27);
          v32 = v31;
          v33 = v27;
        }
        else
        {
          GameObjectSprite::getTileX(v12);
          v30 = v34;
          GameObjectSprite::getTileY(v12);
          v32 = v35;
          v33 = v12;
        }
        GameObjectSprite::getTileZ(v33);
        return v37(v26, v30, v32, v36);
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall GameObject::isOwnedByCurrentPlayer(ShutdownStartedMessage *this)
    {
      return GameObject::isOwnedByBottomPlayer(this);
    }

    __int64 __fastcall GameObject::isOwnedByBottomPlayer(ShutdownStartedMessage *this)
    {
      #1080 *Instance; // x0
      int isEditorModeActive; // w8
      GameMode *v4; // x0
      vm_address_t *RealOwnerAccountId; // x19
      #945 *v7; // x0
      #962 *BattleBottomAvatar; // x0
      __int64 AccountId; // x0
    
      Instance = (#1080 *)GameMain::getInstance(this);
      isEditorModeActive = GameMain::isEditorModeActive(Instance);
      v4 = (GameMode *)*((_QWORD *)this + 1);
      if ( isEditorModeActive )
        return !LogicGameObject::isOwnerTop(v4);
      RealOwnerAccountId = (vm_address_t *)LogicGameObject::getRealOwnerAccountId(v4);
      v7 = (#945 *)GameMode::getInstance(RealOwnerAccountId);
      BattleBottomAvatar = (#962 *)GameMode::getBattleBottomAvatar(v7);
      AccountId = LogicClientAvatar::getAccountId(BattleBottomAvatar);
      return LogicLong::equals(RealOwnerAccountId, AccountId);
    }

    char *__fastcall GameObject::getSpriteForEffects(ShutdownStartedMessage *this)
    {
      char *v2; // x20
    
      v2 = (char *)this + 304;
      if ( GameObjectSprite::getMovieClip((ShutdownStartedMessage *)((char *)this + 304)) )
        return v2;
      else
        return (char *)this + 16;
    }

    __int64 __fastcall GameObject::getGameObjectSprite(ShutdownStartedMessage *this)
    {
      return (__int64)this + 16;
    }

    __int64 __fastcall GameObject::getTopSprite(ShutdownStartedMessage *this)
    {
      return (__int64)this + 160;
    }

    __int64 __fastcall GameObject::getBaseSprite(ShutdownStartedMessage *this)
    {
      return (__int64)this + 304;
    }

    __int64 __fastcall GameObject::playEffect(__int64 this, const AskForTVContentMessage *a2)
    {
      __int64 v3; // x20
      int v4; // w21
      int v5; // w22
      int v6; // w23
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x24
      char isOwnedByBottomPlayer; // w0
    
      v3 = this;
      if ( a2 )
      {
        v4 = LogicGameObject::getX(*(GameMode **)(this + 8));
        v5 = LogicGameObject::getY(*(GameMode **)(v3 + 8));
        v6 = LogicGameObject::getZ(*(GameMode **)(v3 + 8));
        RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((#1138 *)(v3 + 16));
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        isOwnedByBottomPlayer = GameObject::isOwnedByBottomPlayer((ShutdownStartedMessage *)v3);
        return EffectManager::addEffect(
                 EffectManager,
                 a2,
                 v4,
                 v5,
                 v6,
                 isOwnedByBottomPlayer != 1,
                 *(const GameMode **)(v3 + 8),
                 0,
                 0);
      }
      return this;
    }

    __int64 __fastcall GameObject::getEffectManager(ShutdownStartedMessage *this)
    {
      LogicJSONObject *RenderSystem; // x0
    
      RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
      return RenderSystem::getEffectManager(RenderSystem);
    }

    __int64 __fastcall GameObject::playTargetedEffect(
            GameMode **this,
            const AskForTVContentMessage *a2,
            const GameMode *a3,
            __int64 a4)
    {
      int v8; // w23
      int v9; // w24
      int v10; // w25
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x26
      char isOwnedByBottomPlayer; // w0
      __int64 v14; // x21
    
      v8 = LogicGameObject::getX(*(this + 1));
      v9 = LogicGameObject::getY(*(this + 1));
      v10 = LogicGameObject::getZ(*(this + 1));
      RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((#1138 *)(this + 2));
      EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
      isOwnedByBottomPlayer = GameObject::isOwnedByBottomPlayer((ShutdownStartedMessage *)this);
      v14 = EffectManager::addEffect(EffectManager, a2, v8, v9, v10, isOwnedByBottomPlayer != 1, *(this + 1), 0, 0);
      Effect::setTarget(v14, (__int64)a3);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 64LL))(v14, 0, a4);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1);
    }

    __int64 __fastcall GameObject::playEffectNoLoop(__int64 this, const AskForTVContentMessage *a2)
    {
      __int64 v3; // x20
      int v4; // w21
      int v5; // w22
      int v6; // w23
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x24
      char isOwnedByBottomPlayer; // w0
    
      v3 = this;
      if ( a2 )
      {
        v4 = LogicGameObject::getX(*(GameMode **)(this + 8));
        v5 = LogicGameObject::getY(*(GameMode **)(v3 + 8));
        v6 = LogicGameObject::getZ(*(GameMode **)(v3 + 8));
        RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((#1138 *)(v3 + 16));
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
        isOwnedByBottomPlayer = GameObject::isOwnedByBottomPlayer((ShutdownStartedMessage *)v3);
        return EffectManager::addEffectNoLoop(
                 EffectManager,
                 a2,
                 v4,
                 v5,
                 v6,
                 isOwnedByBottomPlayer != 1,
                 *(const GameMode **)(v3 + 8),
                 0,
                 0);
      }
      return this;
    }

    __int64 __fastcall GameObject::playSoundIfNotOwnedByPlayer(__int64 this, const #1354 *a2)
    {
      if ( a2 )
      {
        this = GameObject::isOwnedByBottomPlayer((ShutdownStartedMessage *)this);
        if ( (this & 1) == 0 )
          return SoundManager::playSound(
                   SoundManager::sm_pInstance,
                   a2,
                   0xFFFFFFFFLL,
                   1.0,
                   COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      return this;
    }

    __int64 __fastcall GameObject::isBottomPlayerInLogicTop(ShutdownStartedMessage *this)
    {
      LogicJSONObject *RenderSystem; // x0
    
      RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
      return RenderSystem::isBottomPlayerInLogicTop(RenderSystem);
    }

    __int64 __fastcall GameObject::getShadow(ShutdownStartedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall GameObject::getOutline(ShutdownStartedMessage *this)
    {
      return 0;
    }

    void __fastcall GameObject::manaGained(ShutdownStartedMessage *this, __int64 a2)
    {
      GameMode *v4; // x21
      LogicJSONObject *RenderSystem; // x0
      LogicDataTables *EffectManager; // x20
      const AskForTVContentMessage *ManaEffect; // x22
      int v8; // w23
      int v9; // w24
      int v10; // w0
      const char *v11; // x1
      DonateAllianceUnitMessage *v12; // x20
      String v13; // [xsp+8h] [xbp-48h] BYREF
    
      if ( (unsigned int)GameObject::isOwnedByBottomPlayer(this) )
      {
        v4 = (GameMode *)*((_QWORD *)this + 1);
        RenderSystem = (LogicJSONObject *)GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
        EffectManager = (LogicDataTables *)RenderSystem::getEffectManager(RenderSystem);
        ManaEffect = (const AskForTVContentMessage *)LogicDataTables::getManaEffect(EffectManager);
        v8 = LogicGameObject::getX(v4);
        v9 = LogicGameObject::getY(v4);
        v10 = LogicGameObject::getZ(v4);
        v12 = (DonateAllianceUnitMessage *)EffectManager::addEffect(EffectManager, ManaEffect, v8, v9, v10, 0, v4, 0, 0);
        if ( v12 )
        {
          String::format((String *)"+%d", v11, a2);
          Effect::setText(v12, &v13);
          String::~String(&v13);
        }
      }
    }

    __int64 __fastcall GameObject::getLayer(ShutdownStartedMessage *this)
    {
      return 9;
    }

    __int64 __fastcall GameObject::isCharacter(ShutdownStartedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall GameObject::setAsDummySpellPreviewObject(pthread_attr_t *this)
    {
      float v2; // s0
    
      v2 = (float)*(int *)(LogicDataTables::getClientGlobals(this) + 100LL) / 100.0;
      *((_BYTE *)this + 448) = 1;
      return (*(__int64 (__fastcall **)(char *, float))(*(_QWORD *)&this->__opaque[8] + 80LL))(&this->__opaque[8], v2);
    }

    float __fastcall GameObject::getDummySpellNameYPosition(pthread_attr_t *this)
    {
      return *(float *)(LogicDataTables::getClientGlobals(this) + 108LL);
    }

    void __usercall GameObject::getRenderBounds(ShutdownStartedMessage *this@<X0>, int *a2@<X8>)
    {
      #1138 *v4; // x20
      __int64 RenderSystem; // x0
      __int64 v6; // x0
      int v7; // s0
      float v8; // s2
      float v9; // s0
      float v10; // s0
      float v11; // s2
      float v12; // s0
      #1138 *v13; // x21
      __int64 v14; // x0
      int v15; // s0
      float v16; // s2
      float v17; // s0
      float v18; // s0
      float v19; // s2
      float v20; // s0
      Rect v21; // [xsp+0h] [xbp-40h] BYREF
      float v22; // [xsp+8h] [xbp-38h]
      float v23; // [xsp+Ch] [xbp-34h]
      Rect v24; // [xsp+10h] [xbp-30h] BYREF
      float v25; // [xsp+18h] [xbp-28h]
      float v26; // [xsp+1Ch] [xbp-24h]
    
      Rect::Rect((Rect *)a2);
      v4 = (ShutdownStartedMessage *)((char *)this + 16);
      RenderSystem = GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
      DisplayObject::getBounds((char *)this + 16, RenderSystem, a2);
      if ( GameObjectSprite::getMovieClip((ShutdownStartedMessage *)((char *)this + 160)) )
      {
        Rect::Rect(&v24);
        v6 = GameObjectSprite::getRenderSystem((ShutdownStartedMessage *)((char *)this + 16));
        DisplayObject::getBounds((char *)this + 160, v6, &v24);
        v7 = *(_DWORD *)&v24.top;
        v8 = *((float *)a2 + 1);
        if ( *(float *)&v24.top >= *(float *)a2 )
          v7 = *a2;
        *a2 = v7;
        v9 = *(float *)&v24.bottom;
        if ( *(float *)&v24.bottom >= v8 )
          v9 = v8;
        *((float *)a2 + 1) = v9;
        v10 = v25;
        v11 = *((float *)a2 + 3);
        if ( v25 <= *((float *)a2 + 2) )
          v10 = *((float *)a2 + 2);
        *((float *)a2 + 2) = v10;
        v12 = v26;
        if ( v26 <= v11 )
          v12 = v11;
        *((float *)a2 + 3) = v12;
        Rect::~Rect(&v24);
      }
      v13 = (ShutdownStartedMessage *)((char *)this + 304);
      if ( GameObjectSprite::getMovieClip(v13) )
      {
        Rect::Rect(&v21);
        v14 = GameObjectSprite::getRenderSystem(v4);
        DisplayObject::getBounds(v13, v14, &v21);
        v15 = *(_DWORD *)&v21.top;
        v16 = *((float *)a2 + 1);
        if ( *(float *)&v21.top >= *(float *)a2 )
          v15 = *a2;
        *a2 = v15;
        v17 = *(float *)&v21.bottom;
        if ( *(float *)&v21.bottom >= v16 )
          v17 = v16;
        *((float *)a2 + 1) = v17;
        v18 = v22;
        v19 = *((float *)a2 + 3);
        if ( v22 <= *((float *)a2 + 2) )
          v18 = *((float *)a2 + 2);
        *((float *)a2 + 2) = v18;
        v20 = v23;
        if ( v23 <= v19 )
          v20 = v19;
        *((float *)a2 + 3) = v20;
        Rect::~Rect(&v21);
      }
    }

    __int64 __fastcall GameObject::showMiniTimer(ShutdownStartedMessage *this, int a2)
    {
      LogicTutorialManager *Instance; // x0
      CombatHUD *CombatHUD; // x21
      float v6; // s0
      int v7; // w23
      float v8; // s0
      int v9; // w22
      char isOwnedByBottomPlayer; // w3
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      CombatHUD = (CombatHUD *)BattleScreen::getCombatHUD(Instance);
      GameObjectSprite::getTileX((ShutdownStartedMessage *)((char *)this + 16));
      v7 = (int)(float)(v6 * 500.0);
      GameObjectSprite::getTileY((ShutdownStartedMessage *)((char *)this + 16));
      v9 = (int)(float)(v8 * 500.0);
      isOwnedByBottomPlayer = GameObject::isOwnedByBottomPlayer(this);
      return CombatHUD::showMiniTimer(CombatHUD, v7, v9, (float)a2 * 0.001, isOwnedByBottomPlayer);
    }

    // attributes: thunk
    void __fastcall GameObject::~GameObject(ShutdownStartedMessage *this)
    {
      __ZN10GameObjectD2Ev(this);
    }

    void __fastcall GameObject::~GameObject(ShutdownStartedMessage *this)
    {
      GameObject::~GameObject(this);
      operator delete(this);
    }

}; // end class GameObject
