class Summoner
{
public:

    void __fastcall Summoner::Summoner(Summoner *this, const #1094 *a2, LogicJSONObject *a3)
    {
      MovieClip *MovieClip; // x0
    
      Character::Character(this, a2, a3);
      *(_QWORD *)this = off_100466410;
      *((_QWORD *)this + 214) = 0;
      *((_QWORD *)this + 213) = 0;
      *((_QWORD *)this + 212) = 0;
      CharacterAnimator::CharacterAnimator((Summoner *)((char *)this + 1736));
      *((_DWORD *)this + 431) = 0;
      *((_DWORD *)this + 430) = -1;
      *((_BYTE *)this + 1728) = 0;
      MovieClip = (MovieClip *)GameObjectSprite::getMovieClip((Summoner *)((char *)this + 16));
      MovieClip::gotoAndStop(MovieClip, "idle");
    }

    // attributes: thunk
    void __fastcall Summoner::Summoner(Summoner *this, const #1094 *a2, LogicJSONObject *a3)
    {
      __ZN8SummonerC2EPK13LogicSummonerP12RenderSystem(this, a2, a3);
    }

    void __fastcall Summoner::destruct(#1312 *this)
    {
      __int64 v2; // x9
      __int64 v3; // x8
      unsigned __int64 v4; // x10
      unsigned int v5; // w20
      void *v6; // x0
    
      Character::destruct(this);
      v2 = *((_QWORD *)this + 213);
      v3 = *((_QWORD *)this + 212);
      if ( v2 != v3 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          v6 = *(void **)(v3 + 8 * v4);
          if ( v6 )
          {
            operator delete(v6);
            v2 = *((_QWORD *)this + 213);
            v3 = *((_QWORD *)this + 212);
          }
          v4 = v5++;
        }
        while ( v4 < (v2 - v3) >> 3 );
      }
      *((_QWORD *)this + 213) = v3;
      *((_DWORD *)this + 431) = 0;
      *((_DWORD *)this + 430) = -1;
      *((_BYTE *)this + 1728) = 0;
    }

    // attributes: thunk
    __int64 __fastcall Summoner::update(#1312 *this, float a2, float a3)
    {
      return Character::update(this, a2, a3);
    }

    __int64 __fastcall Summoner::spellDeployed(#1312 *this, const TextField *a2, int a3)
    {
      __int64 v6; // x21
      __int64 SpellData; // x0
      GameMode *Logic; // x0
      __int64 LogicGameObjectManager; // x0
      __int64 v11; // [xsp+8h] [xbp-28h] BYREF
    
      v6 = operator new(24);
      SpellData = LogicSpell::getSpellData(a2);
      *(_DWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = SpellData;
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 16) = *((_DWORD *)a2 + 2);
      Logic = (GameMode *)GameObject::getLogic(this);
      LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager(Logic);
      *(_DWORD *)v6 = LogicGameMode::getTick(*(UnlockAccountPopup **)(LogicGameObjectManager + 56));
      *(_DWORD *)(v6 + 20) = a3;
      v11 = v6;
      return std::vector<SpellLogEvent const*>::push_back((char *)this + 1696, &v11);
    }

    LogicTutorialManager *__fastcall Summoner::onSimulatedSpellUsed(
            #1312 *this,
            int a2,
            const char *a3,
            const InitState *a4,
            int a5)
    {
      LogicTutorialManager *Instance; // x0
      __int64 CombatHUD; // x0
      LogicTutorialManager *isOwnedByCurrentPlayer; // x0
      LogicTutorialManager *v13; // x0
      CombatHUD *v14; // x0
      LogicTutorialManager *result; // x0
      __int64 v16; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      CombatHUD = BattleScreen::getCombatHUD(Instance);
      if ( (CombatHUD::isReplay(CombatHUD) & 1) == 0 )
      {
        isOwnedByCurrentPlayer = (LogicTutorialManager *)GameObject::isOwnedByCurrentPlayer(this);
        if ( (_DWORD)isOwnedByCurrentPlayer )
        {
          v13 = (LogicTutorialManager *)BattleScreen::getInstance(isOwnedByCurrentPlayer);
          v14 = (CombatHUD *)BattleScreen::getCombatHUD(v13);
          CombatHUD::onSimulatedSpellUsed(v14, a2, (int)a3, a4, a5);
        }
      }
      result = (LogicTutorialManager *)GameObject::isOwnedByCurrentPlayer(this);
      if ( (_DWORD)result )
      {
        v16 = BattleScreen::getInstance(result);
        return (LogicTutorialManager *)BattleScreen::onSimulatedSpellUsed(v16, a2, a3, a4);
      }
      return result;
    }

    __int64 __fastcall Summoner::onSpellUsed(#1312 *this, int a2, int a3, const InitState *a4, int a5)
    {
      LogicJSONObject *RenderSystem; // x0
      __int64 EffectManager; // x0
      __int64 CastSound; // x0
      LogicTutorialManager *isOwnedByCurrentPlayer; // x0
      int v14; // w23
      CombatHUD **Instance; // x0
    
      *((_DWORD *)this + 431) = 0;
      if ( *((_DWORD *)this + 430) != -1 )
      {
        RenderSystem = (LogicJSONObject *)GameObject::getRenderSystem(this);
        EffectManager = RenderSystem::getEffectManager(RenderSystem);
        EffectManager::removeEffect(EffectManager, *((_DWORD *)this + 430));
        *((_DWORD *)this + 430) = -1;
      }
      CastSound = LogicSpellData::getCastSound(a4);
      SoundManager::playSound(
        SoundManager::sm_pInstance,
        CastSound,
        0xFFFFFFFFLL,
        1.0,
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      isOwnedByCurrentPlayer = (LogicTutorialManager *)GameObject::isOwnedByCurrentPlayer(this);
      v14 = (int)isOwnedByCurrentPlayer;
      Instance = (CombatHUD **)BattleScreen::getInstance(isOwnedByCurrentPlayer);
      if ( v14 )
        return BattleScreen::onSpellUsed(Instance, a2, a3, a4, a5);
      else
        return BattleScreen::onEnemySpellUsed((__int64)Instance, a2, a3, a4);
    }

    __int64 __fastcall Summoner::spellCommandCreated(#1312 *this, const InitState *a2)
    {
      LogicGameObjectManagerListener *Rarity; // x0
      __int64 CastEffect; // x20
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x21
      int LastCreatedEffectId; // w22
      __int64 result; // x0
      int v9; // w8
    
      *((_DWORD *)this + 431) = 1008981770;
      Rarity = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(a2);
      CastEffect = LogicRarityData::getCastEffect(Rarity);
      RenderSystem = (LogicJSONObject *)GameObject::getRenderSystem(this);
      EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
      LastCreatedEffectId = EffectManager::getLastCreatedEffectId(EffectManager);
      (*(void (__fastcall **)(#1312 *, __int64))(*(_QWORD *)this + 72LL))(this, CastEffect);
      result = EffectManager::getLastCreatedEffectId(EffectManager);
      if ( (_DWORD)result == LastCreatedEffectId )
        v9 = -1;
      else
        v9 = result;
      *((_DWORD *)this + 430) = v9;
      return result;
    }

    __int64 __fastcall Summoner::updateAnimation(#1312 *this, float a2, float a3)
    {
      MovieClip *MovieClip; // x0
      MovieClip *v6; // x0
    
      if ( *(int *)(GameObject::getLogic(this) + 328) >= 1 )
      {
        if ( !*((_BYTE *)this + 1728) )
        {
          MovieClip = (MovieClip *)GameObjectSprite::getMovieClip((#1312 *)((char *)this + 16));
          MovieClip::gotoAndPlay(MovieClip, "start", "stop");
          v6 = (MovieClip *)GameObjectSprite::getMovieClip((#1312 *)((char *)this + 752));
          MovieClip::gotoAndPlay(v6, "start", "stop");
          MovieClip::playOnce(*((MovieClip **)this + 112));
          MovieClip::playOnce(*((MovieClip **)this + 113));
        }
        *((_BYTE *)this + 1728) = 1;
      }
      return Character::updateTurretClip(this, a2);
    }

    // attributes: thunk
    void __fastcall Summoner::~Summoner(#1312 *this)
    {
      __ZN8SummonerD2Ev(this);
    }

    void __fastcall Summoner::~Summoner(#1312 *this)
    {
      Summoner::~Summoner(this);
      operator delete(this);
    }

    void __fastcall Summoner::~Summoner(#1312 *this)
    {
      void *v2; // x0
    
      *(_QWORD *)this = off_100466410;
      CharacterAnimator::~CharacterAnimator((#1312 *)((char *)this + 1736));
      v2 = (void *)*((_QWORD *)this + 212);
      if ( v2 )
        operator delete(v2);
      Character::~Character(this);
    }

}; // end class Summoner
