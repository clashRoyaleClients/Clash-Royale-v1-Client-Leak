class AreaEffectObject
{
public:

    void __fastcall AreaEffectObject::AreaEffectObject(AreaEffectObject *this, const CombatHUD *a2, LogicJSONObject *a3)
    {
      CombatHUD *Logic; // x0
      #1108 *AreaEffectObjectData; // x21
      const AskForTVContentMessage *LoopingEffect; // x28
      const AskForTVContentMessage *ScaledEffect; // x22
      const AskForTVContentMessage *OneShotEffect; // x27
      int v10; // w23
      int v11; // w24
      int v12; // w25
      char v13; // w26
      LogicBackgroundDecoData *EffectManager; // x0
      __int64 v15; // x0
      LogicBackgroundDecoData *v16; // x0
      __int64 v17; // x0
      LogicBackgroundDecoData *v18; // x0
      __int64 v19; // x22
      int LevelIndex; // w0
      int LifeDuration; // w0
    
      GameObject::GameObject(this, a2, a3);
      *(_QWORD *)this = off_100460EB8;
      Logic = (CombatHUD *)GameObject::getLogic(this);
      AreaEffectObjectData = (#1108 *)LogicAreaEffectObject::getAreaEffectObjectData(Logic);
      LoopingEffect = (const AskForTVContentMessage *)LogicAreaEffectObjectData::getLoopingEffect(AreaEffectObjectData);
      ScaledEffect = (const AskForTVContentMessage *)LogicAreaEffectObjectData::getScaledEffect(AreaEffectObjectData);
      OneShotEffect = (const AskForTVContentMessage *)LogicAreaEffectObjectData::getOneShotEffect(AreaEffectObjectData);
      v10 = LogicGameObject::getX(a2);
      v11 = LogicGameObject::getY(a2);
      v12 = LogicGameObject::getZ(a2);
      v13 = GameObject::isOwnedByCurrentPlayer(this) ^ 1;
      if ( LoopingEffect )
      {
        EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
        v15 = EffectManager::addLoopingEffect(EffectManager, LoopingEffect, v10, v11, v12, v13, a2, 1, 0);
        Effect::setSwfFadeOutTime(v15, 200);
      }
      if ( OneShotEffect )
      {
        v16 = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
        v17 = EffectManager::addEffectNoLoop(v16, OneShotEffect, v10, v11, v12, v13, 0, 0, 0);
        Effect::setSwfFadeOutTime(v17, 200);
      }
      if ( ScaledEffect )
      {
        v18 = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
        v19 = EffectManager::addEffectNoLoop(v18, ScaledEffect, v10, v11, v12, v13, 0, 0, 0);
        LevelIndex = LogicAreaEffectObject::getLevelIndex(a2);
        LifeDuration = LogicAreaEffectObjectData::getLifeDuration(AreaEffectObjectData, LevelIndex);
        Effect::setForcedDuration(v19, LifeDuration);
        Effect::setSwfFadeOutTime(v19, 200);
      }
    }

    // attributes: thunk
    void __fastcall AreaEffectObject::AreaEffectObject(AreaEffectObject *this, const CombatHUD *a2, LogicJSONObject *a3)
    {
      __ZN16AreaEffectObjectC2EPK21LogicAreaEffectObjectP12RenderSystem(this, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall AreaEffectObject::destruct(#1345 *this)
    {
      return GameObject::destruct(this);
    }

    // attributes: thunk
    void __fastcall AreaEffectObject::~AreaEffectObject(#1345 *this)
    {
      GameObject::~GameObject(this);
    }

    void __fastcall AreaEffectObject::~AreaEffectObject(#1345 *this)
    {
      GameObject::~GameObject(this);
      operator delete(this);
    }

}; // end class AreaEffectObject
