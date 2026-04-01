class GameObjectManager
{
public:

    void __fastcall GameObjectManager::GameObjectManager(
            GameObjectManager *this,
            const LogicSpellListener *a2,
            LogicJSONObject *a3)
    {
      LogicGameObjectManagerListener *v5; // x0
    
      v5 = LogicGameObjectManagerListener::LogicGameObjectManagerListener(this);
      *(_QWORD *)v5 = off_1004612C0;
      *((_QWORD *)v5 + 1) = a2;
      *((_QWORD *)v5 + 2) = a3;
    }

    __int64 __fastcall GameObjectManager::destruct(__int64 this)
    {
      *(_QWORD *)(this + 8) = 0;
      *(_QWORD *)(this + 16) = 0;
      return this;
    }

    __int64 __fastcall GameObjectManager::update(LogicSpellListener **this, long double a2, long double a3)
    {
      HomeScreen *Globals; // x0
      __int64 DefaultGameObjectListener; // x20
      __int64 result; // x0
      _QWORD *v9; // x21
      int v10; // w23
      __int64 v11; // x24
      __int64 v12; // x22
      __int64 v13; // x0
    
      Globals = (HomeScreen *)LogicDataTables::getGlobals((LogicDataTables *)this);
      DefaultGameObjectListener = LogicGlobals::getDefaultGameObjectListener(Globals);
      result = LogicGameObjectManager::getGameObjects(*(this + 1));
      v9 = (_QWORD *)result;
      v10 = *(_DWORD *)(result + 12);
      if ( v10 >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD *)(*v9 + 8 * v11);
          v13 = *(_QWORD *)(v12 + 40);
          if ( v13 == DefaultGameObjectListener )
          {
            (*((void (__fastcall **)(LogicSpellListener **, _QWORD))*this + 3))(this, *(_QWORD *)(*v9 + 8 * v11));
            v13 = *(_QWORD *)(v12 + 40);
          }
          result = (*(__int64 (__fastcall **)(__int64, long double, long double))(*(_QWORD *)v13 + 192LL))(v13, a2, a3);
          ++v11;
        }
        while ( v10 != (_DWORD)v11 );
      }
      return result;
    }

    __int64 __fastcall GameObjectManager::addGameObject(LogicJSONObject **this, const GameMode *a2)
    {
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      __int64 GameObjectSprite; // x21
      #1080 *Instance; // x0
      const char *v9; // x0
      int v10; // w8
      __int64 v11; // x0
      Deco *v12; // x20
      __int64 result; // x0
      #1025 *Data; // x0
      String v15; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 88LL))(a2);
      switch ( (int)v4 )
      {
        case 0:
          v12 = (Deco *)operator new(600);
          Deco::Deco(v12, a2, *(this + 2));
          break;
        case 1:
          v12 = (Deco *)operator new(456);
          SpawnPoint::SpawnPoint(v12, a2, *(this + 2));
          break;
        case 2:
          v12 = (Deco *)operator new(456);
          AreaEffectObject::AreaEffectObject(v12, a2, *(this + 2));
          break;
        case 3:
          v12 = (Deco *)operator new(464);
          Projectile::Projectile(v12, a2, *(this + 2));
          break;
        case 4:
          v12 = (Deco *)operator new(632);
          Egg::Egg(v12, a2, *(this + 2));
          break;
        case 5:
          Data = (#1025 *)LogicGameObject::getData(a2);
          if ( (unsigned int)LogicCharacterData::isSummoner(Data) )
          {
            v12 = (Deco *)operator new(1784);
            Summoner::Summoner(v12, a2, *(this + 2));
          }
          else
          {
            v12 = (Deco *)operator new(1696);
            Character::Character(v12, a2, *(this + 2));
          }
          break;
        default:
          String::format((String *)"addGameObject invalid type %d", v5, v4);
          Debugger::error((Debugger *)&v15, v6);
          return result;
      }
      GameObjectSprite = GameObject::getGameObjectSprite(v12);
      Instance = (#1080 *)GameMain::getInstance((#1080 *)GameObjectSprite);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
      {
        (*(void (__fastcall **)(Deco *, long double, float))(*(_QWORD *)v12 + 192LL))(
          v12,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          1.0);
        if ( GameObjectSprite::getMovieClip((#1138 *)GameObjectSprite) )
          *(_BYTE *)(GameObjectSprite::getMovieClip((#1138 *)GameObjectSprite) + 64) = 1;
        *(_BYTE *)(GameObjectSprite + 64) = 1;
      }
      v9 = (const char *)(*(__int64 (__fastcall **)(Deco *))(*(_QWORD *)v12 + 224LL))(v12);
      RenderSystem::addGameObjectSprite(*(this + 2), (#1138 *)GameObjectSprite, v9);
      if ( (*(__int64 (__fastcall **)(Deco *))(*(_QWORD *)v12 + 208LL))(v12) )
      {
        v10 = (*(__int64 (__fastcall **)(Deco *))(*(_QWORD *)v12 + 200LL))(v12);
        v11 = (__int64)*(this + 2);
        if ( v10 )
          RenderSystem::addShadow(v11);
        else
          RenderSystem::addShadowStatic(v11);
      }
      result = (*(__int64 (__fastcall **)(Deco *))(*(_QWORD *)v12 + 216LL))(v12);
      if ( result )
        return RenderSystem::addOutline((__int64)*(this + 2));
      return result;
    }

    void __fastcall GameObjectManager::logicGameObjectCreated(SendAllianceMailMessage *this, GameMode *a2)
    {
      ;
    }

    __int64 __fastcall GameObjectManager::removeGameObjectReferences(
            LogicJSONObject **this,
            const GameMode *a2,
            __int64 a3,
            bool a4,
            GameMode *a5)
    {
      LogicTutorialManager *Instance; // x0
      __int64 v9; // x0
      LogicBackgroundDecoData *EffectManager; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)this);
      if ( Instance )
      {
        v9 = BattleScreen::getInstance(Instance);
        (*(void (__fastcall **)(__int64, const GameMode *, __int64))(*(_QWORD *)v9 + 64LL))(v9, a2, a3);
      }
      EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(*(this + 2));
      return EffectManager::removeReferences(EffectManager, a2, a3);
    }

    void __fastcall GameObjectManager::decoded(SendAllianceMailMessage *this)
    {
      ;
    }

    __int64 __fastcall GameObjectManager::playEffect(
            __int64 this,
            int a2,
            int a3,
            int a4,
            const AskForTVContentMessage *a5,
            const GameMode *a6,
            const #1236 *a7,
            int a8)
    {
      __int64 v15; // x25
      __int64 BottomPlayerAccountId; // x0
      char v17; // w26
      LogicBackgroundDecoData *EffectManager; // x0
    
      v15 = this;
      if ( a5 )
      {
        BottomPlayerAccountId = RenderSystem::getBottomPlayerAccountId(*(LogicJSONObject **)(this + 16));
        v17 = LogicLong::equals(a7, BottomPlayerAccountId) ^ 1;
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(*(LogicJSONObject **)(v15 + 16));
        return EffectManager::addEffect(EffectManager, a5, a2, a3, a4, v17, a6, 0, a8);
      }
      return this;
    }

    __int64 __fastcall GameObjectManager::playEffectNoLoop(
            __int64 this,
            int a2,
            int a3,
            int a4,
            const AskForTVContentMessage *a5,
            const GameMode *a6,
            const #1236 *a7,
            int a8)
    {
      __int64 v15; // x25
      __int64 BottomPlayerAccountId; // x0
      char v17; // w26
      LogicBackgroundDecoData *EffectManager; // x0
    
      v15 = this;
      if ( a5 )
      {
        BottomPlayerAccountId = RenderSystem::getBottomPlayerAccountId(*(LogicJSONObject **)(this + 16));
        v17 = LogicLong::equals(a7, BottomPlayerAccountId) ^ 1;
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(*(LogicJSONObject **)(v15 + 16));
        return EffectManager::addEffectNoLoop(EffectManager, a5, a2, a3, a4, v17, a6, 0, a8);
      }
      return this;
    }

    const AskForTVContentMessage *__fastcall GameObjectManager::playFinalFightEffect(
            LogicJSONObject **this,
            int a2,
            int a3,
            int a4,
            const #1236 *a5)
    {
      const AskForTVContentMessage *result; // x0
      const AskForTVContentMessage *v11; // x22
      __int64 BottomPlayerAccountId; // x0
      char v13; // w24
      LogicBackgroundDecoData *EffectManager; // x0
    
      result = (const AskForTVContentMessage *)LogicDataTables::getCharacterMarkerMoveTargetPlayer((LogicDataTables *)this);
      v11 = result;
      if ( result )
      {
        BottomPlayerAccountId = RenderSystem::getBottomPlayerAccountId(*(this + 2));
        v13 = LogicLong::equals(a5, BottomPlayerAccountId) ^ 1;
        EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(*(this + 2));
        return (const AskForTVContentMessage *)EffectManager::addEffectNoLoop(EffectManager, v11, a2, a3, a4, v13, 0, 0, 0);
      }
      return result;
    }

    void __fastcall GameObjectManager::~GameObjectManager(SendAllianceMailMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall GameObjectManager::~GameObjectManager(SendAllianceMailMessage *this)
    {
      operator delete(this);
    }

    __int64 __fastcall GameObjectManager::isGameObjectManagerSet(SendAllianceMailMessage *this)
    {
      return 1;
    }

}; // end class GameObjectManager
