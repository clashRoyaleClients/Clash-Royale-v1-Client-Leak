class Buff
{
public:

    __int64 __fastcall Buff::Buff(__int64 a1, __int64 a2, GameMode *a3, ShutdownStartedMessage *a4)
    {
      BattleResultMessage *v7; // x21
      const AskForTVContentMessage *Effect; // x22
      LogicBackgroundDecoData *EffectManager; // x24
      int v10; // w23
      int v11; // w25
      int v12; // w26
      int v13; // w0
      DonateAllianceUnitMessage *v14; // x0
      __int64 v15; // x22
      GameMain *FilterFile; // x23
      String *FilterExportName; // x0
    
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a4;
      *(_QWORD *)a1 = a2;
      v7 = *(BattleResultMessage **)(a2 + 16);
      Effect = (const AskForTVContentMessage *)LogicCharacterBuffData::getEffect(v7);
      if ( Effect )
      {
        EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager(a4);
        v10 = GameObject::isOwnedByCurrentPlayer(a4) ^ 1;
        v11 = LogicGameObject::getX(a3);
        v12 = LogicGameObject::getY(a3);
        v13 = LogicGameObject::getZ(a3);
        v14 = EffectManager::addEffect(EffectManager, Effect, v11, v12, v13, v10, a3, 0, 0);
        if ( v14 )
          *(_DWORD *)(a1 + 8) = Effect::getEffectId(v14);
      }
      if ( *(_DWORD *)LogicCharacterBuffData::getFilterFile(v7)
        && *(_DWORD *)LogicCharacterBuffData::getFilterExportName(v7) )
      {
        v15 = operator new(40);
        FilterFile = (GameMain *)LogicCharacterBuffData::getFilterFile(v7);
        FilterExportName = (String *)LogicCharacterBuffData::getFilterExportName(v7);
        FilterEffect::FilterEffect(v15, (__int64)a3, FilterFile, FilterExportName, 1, -1);
        *(_QWORD *)(a1 + 16) = v15;
      }
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall Buff::Buff(__int64 a1, __int64 a2, GameMode *a3, ShutdownStartedMessage *a4)
    {
      return __ZN4BuffC2EPK18LogicCharacterBuffPK15LogicGameObjectP10GameObject(a1, a2, a3, a4);
    }

    __int64 __fastcall Buff::~Buff(__int64 a1)
    {
      LogicJSONObject *RenderSystem; // x0
      __int64 EffectManager; // x0
      __int64 v4; // x0
    
      RenderSystem = (LogicJSONObject *)GameObject::getRenderSystem(*(ShutdownStartedMessage **)(a1 + 24));
      EffectManager = RenderSystem::getEffectManager(RenderSystem);
      EffectManager::removeEffect(EffectManager, *(_DWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall Buff::~Buff(__int64 a1)
    {
      return __ZN4BuffD2Ev(a1);
    }

    __int64 __fastcall Buff::update(LogicDeco *this, float a2)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 2);
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 24LL))(
                   result,
                   (unsigned int)(int)(float)(a2 * 1000.0));
        if ( (_DWORD)result )
        {
          result = *((_QWORD *)this + 2);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          *((_QWORD *)this + 2) = 0;
        }
      }
      return result;
    }

    __int64 __fastcall Buff::getLogic(LogicDeco *this)
    {
      return *(_QWORD *)this;
    }

}; // end class Buff
