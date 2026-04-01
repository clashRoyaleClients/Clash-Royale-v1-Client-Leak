class CombatHUD::ReplayDrag
{
public:

    __int64 __fastcall CombatHUD::ReplayDrag::update(Projectile **this, float a2, int a3, float a4)
    {
      int NumCoords; // w23
      Projectile *v8; // x0
      int v9; // w22
      int v10; // w21
      int v11; // w8
      LogicTutorialManager *CoordY; // x0
      int v13; // w23
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      long double v16; // q0
      float CoordX; // s9
      float v19; // s10
      int Tick; // w22
      float v21; // s11
      float v22; // s12
      int v23; // w21
      const char *v24; // x2
      const char *v25; // x2
      float v26; // s0
      _BYTE v27[52]; // [xsp+8h] [xbp-B8h] BYREF
      float v28; // [xsp+3Ch] [xbp-84h]
      float v29; // [xsp+40h] [xbp-80h]
      int v30; // [xsp+54h] [xbp-6Ch]
      float v31; // [xsp+58h] [xbp-68h] BYREF
      float v32; // [xsp+5Ch] [xbp-64h] BYREF
    
      NumCoords = LogicBattleEvent::getNumCoords(*(this + 12));
      v8 = *(this + 12);
      if ( NumCoords < 2 )
        goto LABEL_7;
      v9 = 0;
      while ( 1 )
      {
        v10 = v9 + 1;
        if ( (int)LogicBattleEvent::getTick(v8, v9 + 1) > a3 )
          break;
        v8 = *(this + 12);
        v11 = v9 + 2;
        ++v9;
        if ( v11 >= NumCoords )
          goto LABEL_7;
      }
      v8 = *(this + 12);
      if ( v9 == -2 )
      {
    LABEL_7:
        *((float *)this + 27) = (float)(int)LogicBattleEvent::getCoordX(v8, NumCoords - 1);
        CoordY = (LogicTutorialManager *)LogicBattleEvent::getCoordY(*(this + 12), NumCoords - 1);
        *((float *)this + 28) = (float)(int)CoordY;
        v13 = 1;
      }
      else
      {
        CoordX = (float)(int)LogicBattleEvent::getCoordX(v8, v9);
        v19 = (float)(int)LogicBattleEvent::getCoordY(*(this + 12), v9);
        Tick = LogicBattleEvent::getTick(*(this + 12), v9);
        v21 = (float)(int)LogicBattleEvent::getCoordX(*(this + 12), v10);
        v22 = (float)(int)LogicBattleEvent::getCoordY(*(this + 12), v10);
        v23 = LogicBattleEvent::getTick(*(this + 12), v10);
        Debugger::doAssert((Debugger *)(Tick <= a3), (bool)"", v24);
        Debugger::doAssert((Debugger *)(v23 >= a3), (bool)"", v25);
        v13 = 0;
        v26 = (float)((float)((float)a3 + a4) - (float)Tick) / (float)(v23 - Tick);
        *((float *)this + 27) = CoordX + (float)((float)(v21 - CoordX) * v26);
        *((float *)this + 28) = v19 + (float)((float)(v22 - v19) * v26);
      }
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(CoordY);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      RenderSystem::logicToGlobal(RenderSystem, (int)*((float *)this + 27), (int)*((float *)this + 28), &v32, &v31);
      *(__n128 *)&v16 = DisplayObject::setXY((DisplayObject *)this, v32, v31);
      if ( !v13 )
      {
        v30 = 15;
        v28 = v32;
        v29 = v31;
        (*(void (__fastcall **)(_QWORD, _BYTE *, long double))(*(_QWORD *)*(this + 16) + 216LL))(*(this + 16), v27, v16);
      }
      *((float *)this + 35) = v32;
      *((float *)this + 36) = v31;
      return v13 ^ 1u;
    }

    __int64 __fastcall CombatHUD::ReplayDrag::ReplayDrag(__int64 a1, Projectile *a2, __int64 a3, int a4)
    {
      _BOOL8 v8; // x0
      const char *v9; // x2
      const char *v10; // x2
      MovieClip *MovieClip; // x0
      LogicTutorialManager *v12; // x0
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      long double v15; // q0
      _BYTE v17[52]; // [xsp+8h] [xbp-88h] BYREF
      float v18; // [xsp+3Ch] [xbp-54h]
      float v19; // [xsp+40h] [xbp-50h]
      int v20; // [xsp+54h] [xbp-3Ch]
      float v21; // [xsp+58h] [xbp-38h] BYREF
      float v22; // [xsp+5Ch] [xbp-34h] BYREF
    
      Sprite::Sprite((Sprite *)a1);
      *(_DWORD *)(a1 + 112) = 0;
      *(_QWORD *)a1 = off_10046C740;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 96) = a2;
      *(_QWORD *)(a1 + 128) = a3;
      *(_DWORD *)(a1 + 104) = a4;
      v8 = (int)LogicBattleEvent::getNumCoords(a2) > 0;
      Debugger::doAssert((Debugger *)v8, (bool)"replay drag: event has no coordinates", v9);
      *(float *)(a1 + 108) = (float)(int)LogicBattleEvent::getCoordX(a2, 0);
      *(float *)(a1 + 112) = (float)(int)LogicBattleEvent::getCoordY(a2, 0);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/effects.sc", "Death_blue_sparkle1", v10);
      *(_QWORD *)(a1 + 120) = MovieClip;
      MovieClip::play(MovieClip);
      v12 = (LogicTutorialManager *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(
                                      a1,
                                      *(_QWORD *)(a1 + 120));
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(v12);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      RenderSystem::logicToGlobal(RenderSystem, (int)*(float *)(a1 + 108), (int)*(float *)(a1 + 112), &v22, &v21);
      *(__n128 *)&v15 = DisplayObject::setXY((DisplayObject *)a1, v22, v21);
      v20 = 15;
      v18 = v22;
      v19 = v21;
      (*(void (__fastcall **)(__int64, _BYTE *, long double))(*(_QWORD *)a3 + 208LL))(a3, v17, v15);
      *(float *)(a1 + 140) = v22;
      *(float *)(a1 + 144) = v21;
      return a1;
    }

    __int64 __fastcall CombatHUD::ReplayDrag::~ReplayDrag(__int64 a1)
    {
      LogicTutorialManager *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      long double v4; // q0
      __int64 v5; // x0
      _BYTE v7[52]; // [xsp+8h] [xbp-68h] BYREF
      float v8; // [xsp+3Ch] [xbp-34h]
      float v9; // [xsp+40h] [xbp-30h]
      int v10; // [xsp+54h] [xbp-1Ch]
      float v11; // [xsp+58h] [xbp-18h] BYREF
      float v12; // [xsp+5Ch] [xbp-14h] BYREF
    
      *(_QWORD *)a1 = off_10046C740;
      Instance = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)a1);
      RenderSystem = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      RenderSystem::logicToGlobal(RenderSystem, (int)*(float *)(a1 + 108), (int)*(float *)(a1 + 112), &v12, &v11);
      *(__n128 *)&v4 = DisplayObject::setXY((DisplayObject *)a1, v12, v11);
      v10 = 15;
      v8 = v12;
      v9 = v11;
      (*(void (__fastcall **)(_QWORD, _BYTE *, long double))(**(_QWORD **)(a1 + 128) + 224LL))(
        *(_QWORD *)(a1 + 128),
        v7,
        v4);
      v5 = *(_QWORD *)(a1 + 120);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_DWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      Sprite::~Sprite((Sprite *)a1);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall CombatHUD::ReplayDrag::~ReplayDrag(__int64 a1)
    {
      return __ZN9CombatHUD10ReplayDragD2Ev(a1);
    }

    void __fastcall CombatHUD::ReplayDrag::~ReplayDrag(void *a1)
    {
      CombatHUD::ReplayDrag::~ReplayDrag((__int64)a1);
      operator delete(a1);
    }

}; // end class CombatHUD::ReplayDrag
