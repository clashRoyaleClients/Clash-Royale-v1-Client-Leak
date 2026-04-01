class RenderSystem
{
public:

    void __fastcall RenderSystem::RenderSystem(
            RenderSystem *this,
            const ChangeAllianceMemberRoleOkMessage *a2,
            char a3,
            int a4,
            char a5)
    {
      __int64 v10; // x24
      char v11; // w23
      Sprite *v12; // x22
      LogicBackgroundDecoData *v13; // x21
      #1080 *v14; // x0
    
      Sprite::Sprite(this, 14);
      *(_QWORD *)this = off_100460570;
      LogicLong::LogicLong((RenderSystem *)((char *)this + 312));
      *((_QWORD *)this + 41) = 0;
      memset((char *)this + 92, 0, 0x8Cu);
      v10 = 0;
      *(_QWORD *)((char *)this + 268) = 0;
      *(_QWORD *)((char *)this + 260) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_BYTE *)this + 324) = 0;
      *((_DWORD *)this + 80) = 0;
      *((_BYTE *)this + 337) = 1;
      *((_BYTE *)this + 338) = 0;
      *((_BYTE *)this + 339) = 0;
      *((_BYTE *)this + 323) = a5;
      *((_BYTE *)this + 320) = a3;
      v11 = a3 ^ 1;
      *((_BYTE *)this + 321) = a4;
      do
      {
        if ( ((_DWORD)v10 != 4) | v11 & 1 )
        {
          if ( (_DWORD)v10 != 8 )
          {
            if ( (_DWORD)v10 == 6 )
            {
              v12 = (Sprite *)operator new(128);
              IllegalPlaceRenderer::IllegalPlaceRenderer(v12, this);
              *((_QWORD *)this + v10 + 12) = v12;
              *((_BYTE *)v12 + 8) = 0;
              goto LABEL_11;
            }
    LABEL_9:
            v12 = (Sprite *)operator new(96);
            Sprite::Sprite(v12, 100);
            goto LABEL_10;
          }
          if ( !a4 )
            goto LABEL_9;
          v12 = (Sprite *)operator new(112);
          OutlineRenderer::OutlineRenderer(v12, a2);
        }
        else
        {
          v12 = (Sprite *)operator new(104);
          ShadowRenderer::ShadowRenderer(v12, a2);
        }
    LABEL_10:
        *((_QWORD *)this + v10 + 12) = v12;
    LABEL_11:
        *((_BYTE *)v12 + 64) = 0;
        ++v10;
      }
      while ( v10 < 13 );
      v13 = (LogicBackgroundDecoData *)operator new(56);
      EffectManager::EffectManager(v13, this);
      *((_QWORD *)this + 37) = v13;
      if ( a2 )
        RenderSystem::setLocationData(this, a2);
      v14 = (#1080 *)RenderSystem::addLayerSpritesOnTop(this);
      if ( *(_BYTE *)(GameMain::getInstance(v14) + 356) )
        RenderSystem::setShowHud(this, 0);
    }

    __int64 __fastcall RenderSystem::setLocationData(#1074 **this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      GameMain *OverlayFileName; // x21
      const String *OverlayExportName; // x0
      const String *v6; // x1
      const String *v7; // x22
      __int64 v8; // x0
      const String *v9; // x2
      __int64 MovieClip; // x0
      const char *v11; // x2
      const #1091 *TilemapData; // x0
      __int64 result; // x0
    
      if ( *((_BYTE *)this + 320) )
        ShadowRenderer::setLocationData(*(this + 16), a2);
      if ( *((_BYTE *)this + 321) )
        OutlineRenderer::setLocationData(*(this + 20), a2);
      OverlayFileName = (GameMain *)LogicLocationData::getOverlayFileName(a2);
      OverlayExportName = (const String *)LogicLocationData::getOverlayExportName(a2);
      v7 = OverlayExportName;
      if ( *(_DWORD *)OverlayFileName && OverlayExportName->m_length )
      {
        v8 = (__int64)*(this + 36);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        *(this + 36) = 0;
        GameMain::loadAsset(OverlayFileName, v6);
        MovieClip = ResourceManager::getMovieClip(OverlayFileName, v7, v9);
        *(this + 36) = (#1074 *)MovieClip;
        *(_BYTE *)(MovieClip + 64) = 0;
        Debugger::doAssert((Debugger *)1, (bool)"", v11);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(this + 24) + 160LL))(*(this + 24), *(this + 36));
      }
      RenderSystem::loadTilemap(a2, (const ChangeAllianceMemberRoleOkMessage *)v6);
      TilemapData = (const #1091 *)LogicLocationData::getTilemapData(a2);
      result = RenderSystem::setTilemapData((LogicJSONObject *)this, TilemapData);
      if ( !*((_BYTE *)this + 323) )
        return RenderSystem::initClouds((LogicJSONObject *)this, a2);
      return result;
    }

    __int64 __fastcall RenderSystem::addLayerSpritesOnTop(LogicJSONObject *this)
    {
      __int64 v2; // x21
      char *v3; // x20
      __int64 v4; // x8
      __int64 i; // x20
      __int64 result; // x0
    
      v2 = 0;
      v3 = (char *)this + 192;
      do
      {
        DisplayObject::removeFromParent(*(#1249 **)&v3[8 * v2]);
        v4 = v2 + 12;
        --v2;
      }
      while ( v4 > 0 );
      for ( i = 0; i != 104; i += 8 )
        result = (*(__int64 (__fastcall **)(LogicJSONObject *, _QWORD))(*(_QWORD *)this + 160LL))(
                   this,
                   *(_QWORD *)((char *)this + i + 96));
      return result;
    }

    __int64 __fastcall RenderSystem::setShowHud(LogicJSONObject *this, char a2)
    {
      __int64 Instance; // x0
      char v4; // w20
      #1047 *v5; // x0
      LogicTutorialManager *CombatHUD; // x0
      LogicTutorialManager *v7; // x0
      char v8; // w19
      __int64 result; // x0
    
      *((_BYTE *)this + 337) = a2;
      *(_BYTE *)(*((_QWORD *)this + 18) + 8LL) &= a2;
      *(_BYTE *)(*((_QWORD *)this + 23) + 8LL) = a2;
      *(_BYTE *)(*((_QWORD *)this + 24) + 8LL) = a2;
      Instance = HomeScreen::getInstance(this);
      if ( Instance )
      {
        v4 = *((_BYTE *)this + 337);
        v5 = (#1047 *)HomeScreen::getInstance((#1047 *)Instance);
        Instance = HomeScreen::getMainHUD(v5);
        *(_BYTE *)(Instance + 8) = v4;
      }
      CombatHUD = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)Instance);
      if ( CombatHUD )
      {
        v7 = (LogicTutorialManager *)BattleScreen::getInstance(CombatHUD);
        CombatHUD = (LogicTutorialManager *)BattleScreen::getCombatHUD(v7);
        v8 = *((_BYTE *)this + 337);
        *((_BYTE *)CombatHUD + 528) = v8 ^ 1;
      }
      else
      {
        v8 = *((_BYTE *)this + 337);
      }
      result = GUI::getInstance(CombatHUD);
      *(_BYTE *)(result + 8) = v8;
      return result;
    }

    // attributes: thunk
    void __fastcall RenderSystem::RenderSystem(
            RenderSystem *this,
            const ChangeAllianceMemberRoleOkMessage *a2,
            char a3,
            int a4,
            char a5)
    {
      __ZN12RenderSystemC2EPK17LogicLocationDatabbb(this, a2, a3, a4, a5);
    }

    void __fastcall RenderSystem::~RenderSystem(LogicJSONObject *this)
    {
      __int64 v2; // x0
      void *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x20
      OutOfSyncMessage **v6; // x21
      OutOfSyncMessage *v7; // x0
      __int64 v8; // x8
      __int64 v9; // x0
    
      *(_QWORD *)this = off_100460570;
      RenderSystem::deleteClouds(this);
      v2 = *((_QWORD *)this + 41);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 41) = 0;
      v3 = (void *)*((_QWORD *)this + 37);
      if ( v3 )
      {
        EffectManager::~EffectManager(*((LogicBackgroundDecoData **)this + 37));
        operator delete(v3);
      }
      *((_QWORD *)this + 37) = 0;
      RenderSystem::destroyBackgroundDecos(this, 0);
      RenderSystem::destroyBackgroundDecos(this, 1);
      RenderSystem::destroyBackgroundDecos(this, 2);
      v4 = *((_QWORD *)this + 36);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 0;
      *((_QWORD *)this + 36) = 0;
      do
      {
        v6 = (OutOfSyncMessage **)((char *)this + 8 * v5);
        Sprite::removeAllChildren(v6[24]);
        v7 = v6[24];
        if ( v7 )
          (*(void (__fastcall **)(OutOfSyncMessage *))(*(_QWORD *)v7 + 8LL))(v7);
        v6[24] = 0;
        v8 = v5 + 12;
        --v5;
      }
      while ( v8 > 0 );
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 41) = 0;
      memset((char *)this + 92, 0, 0x8Cu);
      *(_QWORD *)((char *)this + 268) = 0;
      *(_QWORD *)((char *)this + 260) = 0;
      *((_BYTE *)this + 324) = 0;
      *((_DWORD *)this + 80) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_BYTE *)this + 337) = 1;
      *((_BYTE *)this + 338) = 0;
      *((_BYTE *)this + 339) = 0;
      *((_QWORD *)this + 39) = 0;
      Sprite::~Sprite(this);
    }

    __int64 __fastcall RenderSystem::deleteClouds(LogicJSONObject *this)
    {
      __int64 v2; // x20
      __int64 result; // x0
      __int64 v4; // x21
      __int64 *v5; // x8
      __int64 v6; // x9
      __int64 v7; // x21
      __int64 v8; // x8
      __int64 v9; // x22
      __int64 v10; // x21
      __int64 v11; // x8
      __int64 v12; // x22
    
      v2 = *((int *)this + 56);
      if ( (int)v2 <= 0 )
      {
        result = *((_QWORD *)this + 25);
      }
      else
      {
        result = *((_QWORD *)this + 25);
        do
        {
          v4 = v2--;
          v5 = *(__int64 **)(result + 8 * v2);
          v6 = *v5;
          do
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              result = *((_QWORD *)this + 25);
              v5 = *(__int64 **)(result + 8 * v2);
            }
            *v5 = 0;
            v5 = *(__int64 **)(result + 8 * v2);
            v6 = *v5;
          }
          while ( *v5 );
          do
          {
            if ( v5 )
            {
              operator delete(v5);
              result = *((_QWORD *)this + 25);
            }
            *(_QWORD *)(result + 8 * v2) = 0;
            result = *((_QWORD *)this + 25);
            v5 = *(__int64 **)(result + 8 * v2);
          }
          while ( v5 );
        }
        while ( v4 >= 2 );
      }
      if ( result )
        result = operator delete[](result);
      *((_QWORD *)this + 25) = 0;
      v7 = *((_QWORD *)this + 27);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 - 8);
        if ( v8 )
        {
          v9 = 24 * v8;
          do
          {
            String::~String((String *)(v7 - 24 + v9));
            v9 -= 24;
          }
          while ( v9 );
        }
        result = operator delete[](v7 - 16);
      }
      *((_QWORD *)this + 27) = 0;
      v10 = *((_QWORD *)this + 26);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 - 8);
        if ( v11 )
        {
          v12 = 24 * v11;
          do
          {
            String::~String((String *)(v10 - 24 + v12));
            v12 -= 24;
          }
          while ( v12 );
        }
        result = operator delete[](v10 - 16);
      }
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 28) = 0;
      return result;
    }

    __int64 __fastcall RenderSystem::destroyBackgroundDecos(LogicJSONObject *this, int a2)
    {
      __int64 v2; // x19
      __int64 result; // x0
      __int64 v4; // x20
      __int64 v5; // x8
    
      v2 = *((_QWORD *)this + a2 + 12);
      result = Sprite::getNumChildren(v2);
      if ( (int)result >= 1 )
      {
        v4 = (int)result - 1LL;
        do
        {
          result = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v4);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          v5 = v4-- + 1;
        }
        while ( v5 > 1 );
      }
      return result;
    }

    // attributes: thunk
    void __fastcall RenderSystem::~RenderSystem(LogicJSONObject *this)
    {
      __ZN12RenderSystemD2Ev(this);
    }

    void __fastcall RenderSystem::~RenderSystem(LogicJSONObject *this)
    {
      RenderSystem::~RenderSystem(this);
      operator delete(this);
    }

    __int64 __fastcall RenderSystem::getLayer(LogicJSONObject *this, unsigned int a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(a2 < 0xD), (bool)"", a3);
      return *((_QWORD *)this + (int)a2 + 12);
    }

    __int64 __fastcall RenderSystem::addGameObjectSprite(LogicJSONObject *this, #1138 *a2, const char *a3)
    {
      int v3; // w19
      __int64 v6; // x0
    
      v3 = (int)a3;
      Debugger::doAssert((Debugger *)((unsigned int)a3 < 0xD), (bool)"", a3);
      v6 = *((_QWORD *)this + v3 + 12);
      return (*(__int64 (__fastcall **)(__int64, #1138 *))(*(_QWORD *)v6 + 160LL))(v6, a2);
    }

    __int64 __fastcall RenderSystem::addShadow(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = 4;
      if ( !*(_BYTE *)(a1 + 320) )
        v1 = 5;
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8 * v1 + 96) + 160LL))(*(_QWORD *)(a1 + 8 * v1 + 96));
    }

    __int64 __fastcall RenderSystem::addShadowStatic(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 160LL))(*(_QWORD *)(a1 + 128));
    }

    __int64 __fastcall RenderSystem::addOutline(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 160LL))(*(_QWORD *)(a1 + 160));
    }

    __int64 __fastcall RenderSystem::startShake(__int64 this, float a2)
    {
      if ( *(float *)(this + 260) < a2 )
        *(float *)(this + 260) = a2;
      return this;
    }

    __int64 __fastcall RenderSystem::updateLayer(LogicJSONObject *this, OutOfSyncMessage *a2, float a3)
    {
      __int64 result; // x0
      int v5; // w21
      __int64 v6; // x20
      __int64 v7; // x22
      int v8; // w23
      __int64 v9; // x9
      __int64 v10; // x8
      float v11; // s0
      __int64 i; // x25
      __int64 v13; // x26
      float v14; // s8
      bool v15; // cc
    
      result = Sprite::getNumChildren(a2);
      v5 = result - 1;
      if ( (int)result >= 1 )
      {
        v6 = 0;
        v7 = (int)result;
        v8 = result - 2;
        do
        {
          if ( v6 + 1 < v7 )
          {
            v9 = *((_QWORD *)a2 + 9);
            v10 = *(_QWORD *)(v9 + 8 * v6);
            v11 = *(float *)(v10 + 104);
            for ( i = v6; ; ++i )
            {
              v13 = *(_QWORD *)(v9 + 8 * i + 8);
              v14 = *(float *)(v13 + 104);
              if ( v14 < v11 || (v14 == v11 ? (v15 = (int)v13 <= (int)v10) : (v15 = 1), !v15) )
              {
                result = Sprite::swapChildrenAt(a2, v6, (int)i + 1);
                LODWORD(v10) = v13;
                v11 = v14;
              }
              if ( v8 == (_DWORD)i )
                break;
              v9 = *((_QWORD *)a2 + 9);
            }
          }
        }
        while ( (_DWORD)v6++ != v5 );
      }
      return result;
    }

    __int64 __fastcall RenderSystem::setBottomPlayerInfo(__int64 this, char a2, int a3, int a4)
    {
      *(_BYTE *)(this + 322) = a2;
      *(_DWORD *)(this + 312) = a3;
      *(_DWORD *)(this + 316) = a4;
      return this;
    }

    __int64 __fastcall RenderSystem::getEffectManager(LogicJSONObject *this)
    {
      return *((_QWORD *)this + 37);
    }

    __int64 __fastcall RenderSystem::getIllegalPlaceRenderer(LogicJSONObject *this)
    {
      return *((_QWORD *)this + 18);
    }

    __int64 __fastcall RenderSystem::update(LogicJSONObject *this, float a2)
    {
      int v4; // w1
      float v5; // s0
      float v6; // s9
      int Rand; // w0
      __float2 v8; // kr00_8
      float v9; // s0
      LogicJSONObject *NumChildren; // x0
      float v11; // s0
      __int64 v12; // x20
      int v13; // w21
      int v14; // w20
      int v15; // w8
      #1257 *isBattleEndHUDVisible; // x0
      LogicTutorialManager *isStopped; // x0
      LogicTutorialManager *Instance; // x0
      __int64 result; // x0
      __int64 v20; // x8
      char *v21; // x9
      int v22; // w11
      bool v23; // w12
    
      EffectManager::update(*((LogicBackgroundDecoData **)this + 37), a2);
      RenderSystem::updateClouds(this, a2);
      *((_QWORD *)this + 33) = 0;
      if ( a2 > 0.0 )
      {
        v5 = *((float *)this + 65);
        if ( v5 > 0.0 )
        {
          v6 = (float)(v5 * 12.0) * 0.5;
          Rand = ParticleEmitter::getRand((ParticleEmitter *)0x2710, v4);
          v8 = __sincosf_stret((float)((float)((float)Rand / 10000.0) + (float)((float)Rand / 10000.0)) * 3.1415);
          *((float *)this + 66) = v6 * v8.__cosval;
          *((float *)this + 67) = v6 * v8.__sinval;
          v9 = *((float *)this + 65) - a2;
          *((float *)this + 65) = v9;
          if ( v9 <= 0.0 )
            *((_DWORD *)this + 65) = 0;
        }
      }
      NumChildren = (LogicJSONObject *)Sprite::getNumChildren(this);
      if ( (int)NumChildren >= 1 )
      {
        v12 = 0;
        v13 = (int)NumChildren;
        do
          NumChildren = (LogicJSONObject *)DisplayObject::setXY(
                                             *(DisplayObject **)(*((_QWORD *)this + 9) + 8 * v12++),
                                             *((float *)this + 66),
                                             *((float *)this + 67));
        while ( v13 != (_DWORD)v12 );
      }
      v14 = 0;
      do
      {
        v15 = v14 - 4;
        if ( (unsigned int)(v14 - 4) < 9 && ((0x151u >> v15) & 1) != 0 )
          v14 = dword_1003E50E0[v15];
        else
          NumChildren = (LogicJSONObject *)RenderSystem::updateLayer(
                                             NumChildren,
                                             *((OutOfSyncMessage **)this + v14++ + 12),
                                             v11);
      }
      while ( v14 < 13 );
      isBattleEndHUDVisible = (#1257 *)*((_QWORD *)this + 41);
      if ( isBattleEndHUDVisible )
      {
        isStopped = (LogicTutorialManager *)MovieClip::isStopped(isBattleEndHUDVisible);
        if ( ((unsigned __int8)isStopped & 1) != 0
          || (Instance = (LogicTutorialManager *)BattleScreen::getInstance(isStopped),
              isBattleEndHUDVisible = (#1257 *)BattleScreen::isBattleEndHUDVisible(Instance),
              (_DWORD)isBattleEndHUDVisible) )
        {
          isBattleEndHUDVisible = (#1257 *)*((_QWORD *)this + 41);
          if ( isBattleEndHUDVisible )
            isBattleEndHUDVisible = (#1257 *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)isBattleEndHUDVisible + 8LL))(isBattleEndHUDVisible);
          *((_QWORD *)this + 41) = 0;
          *((_BYTE *)this + 336) = 0;
        }
      }
      result = GameMain::getInstance(isBattleEndHUDVisible);
      if ( !*(_DWORD *)(result + 120) )
      {
        v20 = 0;
        v21 = (char *)this + 96;
        do
        {
          if ( (_DWORD)v20 == 6 )
          {
            if ( *((_BYTE *)this + 339) )
              *(_BYTE *)(*(_QWORD *)&v21[8 * v20] + 8LL) = 0;
          }
          else if ( *((_BYTE *)this + 338) )
          {
            v22 = *((unsigned __int8 *)this + 339);
            if ( v20 > 7 || (_DWORD)v20 == 5 )
              v23 = v22 == 0;
            else
              v23 = v22 != 0;
            *(_BYTE *)(*((_QWORD *)this + 35) + 8LL) = v22;
            *(_BYTE *)(*(_QWORD *)&v21[8 * v20] + 8LL) = v23;
          }
          else
          {
            *(_BYTE *)(*(_QWORD *)&v21[8 * v20] + 8LL) = 1;
          }
          ++v20;
        }
        while ( v20 != 13 );
      }
      return result;
    }

    void __fastcall RenderSystem::updateClouds(LogicJSONObject *this, float a2)
    {
      #1080 *v4; // x0
      #1080 *Instance; // x0
      Stage *isEditorModeActive; // x0
      float v7; // s0
      __int64 v8; // x8
      float v9; // s11
      float v10; // s12
      __int64 v11; // x22
      DisplayObject **v12; // x20
      #1249 *v13; // x21
      long double v14; // q0
      DisplayObject *v15; // x21
      long double v16; // q0
      long double v17; // q0
      float v18; // s1
      float v19; // s2
      float v20; // s9
      float v21; // s15
      float v22; // s0
      float v23; // s0
      __int64 v24; // x8
      float v25; // [xsp+0h] [xbp-70h] BYREF
      float v26; // [xsp+4h] [xbp-6Ch] BYREF
      float v27; // [xsp+8h] [xbp-68h] BYREF
      float v28; // [xsp+Ch] [xbp-64h] BYREF
    
      RenderSystem::logicToGlobal(this, 0, 0, &v28, &v27);
      v4 = (#1080 *)RenderSystem::logicToGlobal(
                      this,
                      500 * *((_DWORD *)this + 76),
                      500 * *((_DWORD *)this + 77),
                      &v26,
                      &v25);
      Instance = (#1080 *)GameMain::getInstance(v4);
      isEditorModeActive = (Stage *)GameMain::isEditorModeActive(Instance);
      if ( (_DWORD)isEditorModeActive )
        v7 = fabsf(v26 - v28);
      else
        v7 = (float)*(int *)(Stage::getInstance(isEditorModeActive) + 428LL);
      v8 = *((int *)this + 56);
      if ( (int)v8 >= 1 )
      {
        v9 = v7 * 0.5;
        v10 = v7 * -0.5;
        v11 = v8 - 1;
        do
        {
          v12 = *(DisplayObject ***)(*((_QWORD *)this + 25) + 8 * v11);
          v13 = *v12;
          v14 = DisplayObject::getX(*v12);
          DisplayObject::setX(v13, *(float *)&v14 + (float)(*((float *)v12 + 2) * a2));
          v15 = *v12;
          v16 = DisplayObject::getY(*v12);
          DisplayObject::setY(v15, *(float *)&v16 + (float)(*((float *)v12 + 3) * a2));
          v17 = DisplayObject::getX(*v12);
          v18 = *((float *)v12 + 4) * 0.5;
          v19 = *((float *)v12 + 2);
          if ( v19 > 0.0 && (float)(*(float *)&v17 - v18) > v9 || v19 < 0.0 && (float)(*(float *)&v17 + v18) < v10 )
          {
            LODWORD(v20) = COERCE_UNSIGNED_INT128(DisplayObject::getY(*v12));
            RenderSystem::randomizeCloud(this, v12);
            v21 = (float)(v9 + (float)(*((float *)v12 + 4) * 0.5)) + 1.0;
            frand();
            v23 = (float)(v22 * 20.0) + v21;
            if ( *((float *)v12 + 2) > 0.0 )
              v23 = -v23;
            DisplayObject::setXY(*v12, v23, v20);
          }
          v24 = v11-- + 1;
        }
        while ( v24 > 1 );
      }
    }

    __int64 __fastcall RenderSystem::loadTilemap(LogicJSONObject *this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      __int64 result; // x0
      GameMain *TilemapFileName; // x20
      const String *v5; // x1
      const String *v6; // x1
      __int64 CSV; // x20
      __int64 InstanceID; // x1
    
      result = LogicLocationData::getTilemapData(this);
      if ( !result )
      {
        TilemapFileName = (GameMain *)LogicLocationData::getTilemapFileName(this);
        GameMain::loadAsset(TilemapFileName, v5);
        CSV = ResourceManager::getCSV(TilemapFileName, v6);
        InstanceID = LogicData::getInstanceID(this);
        return LogicDataTables::initTilemap(CSV, InstanceID);
      }
      return result;
    }

    __int64 __fastcall RenderSystem::setTilemapData(LogicJSONObject *this, const #1091 *a2)
    {
      long double v2; // q8
      __int64 result; // x0
      __int64 v6; // x21
      __int64 v7; // x8
      GameMain *FileName; // x21
      const String *ExportName; // x22
      const String *v10; // x1
      const String *v11; // x2
      __int64 MovieClip; // x0
      int BackgroundDecoCount; // w21
      __int64 v14; // x22
      const #932 *BackgroundDecoData; // x24
      __int64 BackgroundDecoRow; // x25
      BackgroundDeco *v17; // x23
      int IntegerValueAt; // w0
      __int64 v19; // x0
    
      *((_DWORD *)this + 76) = LogicTilemapData::getMapWidth(a2);
      result = LogicTilemapData::getMapHeight(a2);
      *((_DWORD *)this + 77) = result;
      if ( *((_BYTE *)this + 323) )
      {
        *((_DWORD *)this + 68) = 0;
      }
      else
      {
        v6 = 0;
        do
        {
          DisplayObject::removeFromParent(*((#1249 **)this + v6 + 24));
          v7 = v6 + 12;
          --v6;
        }
        while ( v7 > 0 );
        FileName = (GameMain *)LogicTilemapData::getFileName(a2);
        ExportName = (const String *)LogicTilemapData::getExportName(a2);
        GameMain::loadAsset(FileName, v10);
        MovieClip = ResourceManager::getMovieClip(FileName, ExportName, v11);
        *((_QWORD *)this + 35) = MovieClip;
        *(_BYTE *)(MovieClip + 64) = 1;
        (*(void (__fastcall **)(LogicJSONObject *, __int64))(*(_QWORD *)this + 160LL))(this, MovieClip);
        *((float *)this + 68) = 15.0 * (float)-(*((int *)this + 76) >> 1);
        BackgroundDecoCount = LogicTilemapData::getBackgroundDecoCount(a2);
        if ( BackgroundDecoCount >= 1 )
        {
          v14 = 0;
          do
          {
            BackgroundDecoData = (const #932 *)LogicTilemapData::getBackgroundDecoData(a2, v14);
            BackgroundDecoRow = LogicTilemapData::getBackgroundDecoRow(a2, v14);
            v17 = (BackgroundDeco *)operator new(160);
            BackgroundDeco::BackgroundDeco(v17, BackgroundDecoData, this);
            *((_QWORD *)v17 + 18) = BackgroundDecoRow;
            *(float *)&v2 = (float)(int)CSVRow::getIntegerValueAt(BackgroundDecoRow, 0) / 500.0;
            IntegerValueAt = CSVRow::getIntegerValueAt(BackgroundDecoRow, 1);
            (*(void (__fastcall **)(BackgroundDeco *, long double, float, long double))(*(_QWORD *)v17 + 272LL))(
              v17,
              v2,
              (float)IntegerValueAt / 500.0,
              COERCE_LONG_DOUBLE((unsigned __int128)0));
            v19 = *((_QWORD *)this + (int)LogicBackgroundDecoData::getLayer(BackgroundDecoData) + 12);
            (*(void (__fastcall **)(__int64, BackgroundDeco *))(*(_QWORD *)v19 + 160LL))(v19, v17);
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (int)v14 < BackgroundDecoCount );
        }
        return RenderSystem::addLayerSpritesOnTop(this);
      }
      return result;
    }

    #1080 *__fastcall RenderSystem::initClouds(LogicJSONObject *this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      #1080 *result; // x0
      int v5; // w21
      int v6; // w22
      const char *v7; // x2
      long double v8; // q1
      const char *v9; // x2
      long double v10; // q1
      #1080 *v11; // x0
      #1080 *Instance; // x0
      Stage *isEditorModeActive; // x0
      float v14; // s8
      float v15; // s9
      float v16; // s10
      int CloudClipCount; // w0
      int v18; // w22
      __int64 v19; // x24
      __int64 v20; // x9
      bool v21; // cf
      __int64 v22; // x9
      __int64 v23; // x0
      _QWORD *v24; // x21
      unsigned __int64 v25; // x24
      __int64 v26; // x22
      int v27; // w24
      __int64 v28; // x9
      __int64 v29; // x9
      __int64 v30; // x0
      _QWORD *v31; // x21
      _QWORD *v32; // x23
      unsigned __int64 v33; // x22
      __int64 v34; // x24
      int v35; // w8
      __int64 v36; // x22
      __int64 v37; // x21
      __int64 v38; // x23
      __int64 v39; // x23
      int CloudCount; // w0
      int v41; // w20
      unsigned __int64 v42; // x21
      __int64 v43; // x0
      __int64 v44; // x0
      int v45; // w8
      int v46; // w21
      int v47; // w8
      float v48; // s0
      float v49; // s9
      float v50; // s11
      __int64 v51; // x22
      __int64 i; // x23
      __int64 v54; // x8
      int v55; // w21
      const char *v56; // x2
      int v57; // w0
      int v58; // w21
      float v59; // s14
      float v60; // s0
      float v61; // s8
      float v62; // s15
      float v63; // s0
      DisplayObject *v64; // x0
      int v65; // [xsp+Ch] [xbp-B4h] BYREF
      void *v66; // [xsp+10h] [xbp-B0h] BYREF
      int v67; // [xsp+18h] [xbp-A8h]
      int v68; // [xsp+1Ch] [xbp-A4h]
      float v69; // [xsp+20h] [xbp-A0h] BYREF
      float v70; // [xsp+24h] [xbp-9Ch] BYREF
      float v71; // [xsp+28h] [xbp-98h] BYREF
      float v72; // [xsp+2Ch] [xbp-94h] BYREF
      float v73; // [xsp+30h] [xbp-90h] BYREF
      float v74; // [xsp+34h] [xbp-8Ch] BYREF
      float v75; // [xsp+38h] [xbp-88h] BYREF
      float v76; // [xsp+3Ch] [xbp-84h] BYREF
    
      RenderSystem::deleteClouds(this);
      result = (#1080 *)LogicLocationData::getCloudCount(a2);
      if ( (int)result >= 1 )
      {
        result = (#1080 *)GameMain::getInstance(result);
        if ( *((_DWORD *)result + 30) == 2 )
        {
          v5 = *((_DWORD *)this + 76);
          v6 = *((_DWORD *)this + 77);
          RenderSystem::logicToGlobal(this, 0, 0, &v76, &v75);
          RenderSystem::logicToGlobal(this, 500 * v5, 500 * v6, &v74, &v73);
          Debugger::doAssert((Debugger *)1, (bool)"", v7);
          *(float *)&v8 = v75;
          DisplayObject::globalToLocal(*((_QWORD *)this + 22), &v72, &v71, v76, v8);
          Debugger::doAssert((Debugger *)1, (bool)"", v9);
          *(float *)&v10 = v73;
          DisplayObject::globalToLocal(*((_QWORD *)this + 22), &v70, &v69, v74, v10);
          Instance = (#1080 *)GameMain::getInstance(v11);
          isEditorModeActive = (Stage *)GameMain::isEditorModeActive(Instance);
          if ( (_DWORD)isEditorModeActive )
            v14 = fabsf(v74 - v76);
          else
            v14 = (float)*(int *)(Stage::getInstance(isEditorModeActive) + 428LL);
          v15 = v69;
          v16 = v71;
          CloudClipCount = LogicLocationData::getCloudClipCount(a2);
          v18 = CloudClipCount;
          *((_DWORD *)this + 57) = CloudClipCount;
          v19 = CloudClipCount;
          v20 = 24LL * CloudClipCount;
          v21 = __CFADD__(v20, 16);
          v22 = v20 + 16;
          if ( v21 )
            v22 = -1;
          if ( is_mul_ok(CloudClipCount, 0x18u) )
            v23 = v22;
          else
            v23 = -1;
          v24 = (_QWORD *)operator new[](v23);
          *v24 = 24;
          v24[1] = v19;
          if ( v18 )
          {
            v25 = 0;
            v26 = 24LL * v18;
            do
            {
              String::String((String *)&v24[v25 / 8 + 2]);
              v25 += 24LL;
            }
            while ( v26 != v25 );
            v27 = *((_DWORD *)this + 57);
          }
          else
          {
            v27 = 0;
          }
          *((_QWORD *)this + 27) = v24 + 2;
          v28 = 24LL * v27;
          v21 = __CFADD__(v28, 16);
          v29 = v28 + 16;
          if ( v21 )
            v29 = -1;
          if ( is_mul_ok(v27, 0x18u) )
            v30 = v29;
          else
            v30 = -1;
          v31 = (_QWORD *)operator new[](v30);
          *v31 = 24;
          v31[1] = v27;
          v32 = v31 + 2;
          if ( v27 )
          {
            v33 = 0;
            v34 = 24LL * v27;
            do
            {
              String::String((String *)&v31[v33 / 8 + 2]);
              v33 += 24LL;
            }
            while ( v34 != v33 );
            v35 = *((_DWORD *)this + 57);
            *((_QWORD *)this + 26) = v32;
            if ( v35 >= 1 )
            {
              v36 = 0;
              v37 = 0;
              do
              {
                v38 = *((_QWORD *)this + 27);
                LogicLocationData::getCloudFileName(a2, v37);
                String::operator=((String *)(v38 + v36));
                v39 = *((_QWORD *)this + 26);
                LogicLocationData::getCloudExportName(a2, v37);
                String::operator=((String *)(v39 + v36));
                ++v37;
                v36 += 24;
              }
              while ( v37 < *((int *)this + 57) );
            }
          }
          else
          {
            *((_QWORD *)this + 26) = v32;
          }
          *((float *)this + 58) = (float)(int)LogicLocationData::getCloudMinSpeed(a2) / 10.0;
          *((float *)this + 59) = (float)(int)LogicLocationData::getCloudMaxSpeed(a2) / 10.0;
          *((float *)this + 60) = (float)(int)LogicLocationData::getCloudMinAlpha(a2) / 100.0;
          *((float *)this + 61) = (float)(int)LogicLocationData::getCloudMaxAlpha(a2) / 100.0;
          *((float *)this + 62) = (float)(int)LogicLocationData::getCloudMinScale(a2) / 100.0;
          *((float *)this + 63) = (float)(int)LogicLocationData::getCloudMaxScale(a2) / 100.0;
          CloudCount = LogicLocationData::getCloudCount(a2);
          v41 = CloudCount;
          *((_DWORD *)this + 56) = CloudCount;
          *((_DWORD *)this + 64) = 0;
          v42 = CloudCount;
          if ( is_mul_ok(CloudCount, 8u) )
            v43 = 8LL * CloudCount;
          else
            v43 = -1;
          *((_QWORD *)this + 25) = operator new[](v43);
          v66 = 0;
          v68 = 0;
          v67 = v41;
          if ( is_mul_ok(v42, 4u) )
            v44 = 4LL * v41;
          else
            v44 = -1;
          v66 = (void *)operator new[](v44);
          v65 = v41 - 1;
          v45 = v41;
          if ( v41 >= 1 )
          {
            v46 = v41 - 2;
            do
            {
              LogicArrayList<int>::add((__int64)&v66, &v65);
              v65 = v46;
              v47 = v46-- + 1;
            }
            while ( v47 >= 1 );
            v45 = *((_DWORD *)this + 56);
          }
          v48 = fabsf(v15 - v16) + 200.0;
          v49 = v14 / (float)v41;
          v50 = v48 / (float)v41;
          v51 = v45;
          for ( i = 8LL * (v45 - 1); v51-- >= 1; i -= 8 )
          {
            *(_QWORD *)(*((_QWORD *)this + 25) + i) = operator new(24);
            v54 = *((_QWORD *)this + 25);
            **(_QWORD **)(v54 + i) = 0;
            RenderSystem::randomizeCloud(this, *(_QWORD *)(v54 + i));
            v55 = v68;
            Debugger::doAssert((Debugger *)(v68 > 0), (bool)"", v56);
            v57 = rand();
            v58 = LogicArrayList<int>::remove(&v66, (unsigned int)(v57 % v55));
            v59 = v72;
            frand();
            v61 = v60;
            v62 = v71;
            frand();
            v64 = **(DisplayObject ***)(*((_QWORD *)this + 25) + i);
            DisplayObject::setXY(
              v64,
              (float)(v59 + (float)(v49 * (float)v58)) + (float)((float)(v49 * 0.5) * v61),
              (float)((float)(v50 * (float)(int)v51) + (float)(v62 + -100.0)) + (float)((float)(v50 * 0.5) * v63));
          }
          result = (#1080 *)v66;
          if ( v66 )
            return (#1080 *)operator delete[](v66);
        }
      }
      return result;
    }

    float __fastcall RenderSystem::getRenderCoordinate(
            LogicJSONObject *this,
            float a2,
            float a3,
            float a4,
            float *a5,
            float *a6,
            int a7)
    {
      float result; // s0
    
      if ( a7 && *((_BYTE *)this + 322) )
      {
        a2 = (float)*((int *)this + 76) - a2;
        a3 = (float)*((int *)this + 77) - a3;
      }
      *a5 = *((float *)this + 68) + (float)(a2 * 15.0);
      result = (float)(a3 + (float)(a4 * -0.5)) * 12.0;
      *a6 = result;
      return result;
    }

    void __fastcall RenderSystem::screenToLogic(LogicJSONObject *this, float a2, long double a3, int *a4, int *a5)
    {
      int v8; // w10
      float v9; // [xsp+8h] [xbp-28h] BYREF
      float v10; // [xsp+Ch] [xbp-24h] BYREF
    
      v9 = 0.0;
      v10 = 0.0;
      DisplayObject::globalToLocal(this, &v10, &v9, a2, a3);
      *a4 = (int)(float)((float)((float)(v10 - *((float *)this + 68)) * 500.0) / 15.0);
      *a5 = (int)(float)((float)(v9 * 500.0) / 12.0);
      if ( *((_BYTE *)this + 322) )
      {
        v8 = *((_DWORD *)this + 77);
        *a4 = 500 * *((_DWORD *)this + 76) - *a4;
        *a5 = 500 * v8 - *a5;
      }
    }

    __int64 __fastcall RenderSystem::logicToGlobal(LogicJSONObject *this, int a2, int a3, float *a4, float *a5)
    {
      float v5; // s0
      float v6; // s1
    
      v5 = (float)a2 / 500.0;
      v6 = (float)a3 / 500.0;
      if ( *((_BYTE *)this + 322) )
      {
        v5 = (float)*((int *)this + 76) - v5;
        v6 = (float)*((int *)this + 77) - v6;
      }
      return DisplayObject::localToGlobal(*((float *)this + 68) + (float)(v5 * 15.0), v6 * 12.0);
    }

    __int64 __fastcall RenderSystem::isBottomPlayerInLogicTop(LogicJSONObject *this)
    {
      return *((unsigned __int8 *)this + 322);
    }

    __int64 __fastcall RenderSystem::setPaused(__int64 this, char a2)
    {
      *(_BYTE *)(this + 324) = a2;
      return this;
    }

    __int64 __fastcall RenderSystem::render(LogicJSONObject *this, #1256 *a2, #1246 *a3, float a4)
    {
      if ( *((_BYTE *)this + 324) )
        a4 = 0.0;
      *((float *)this + 23) = *((float *)this + 23) + a4;
      return Sprite::render();
    }

    __int64 __fastcall RenderSystem::getTilemapWidth(LogicJSONObject *this)
    {
      return *((unsigned int *)this + 76);
    }

    __int64 __fastcall RenderSystem::getTilemapHeight(LogicJSONObject *this)
    {
      return *((unsigned int *)this + 77);
    }

    __int64 __fastcall RenderSystem::getBottomPlayerAccountId(LogicJSONObject *this)
    {
      return (__int64)this + 312;
    }

    __int64 __fastcall RenderSystem::touchPressed(LogicTutorialManager *a1, __int64 a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 v5; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      if ( Instance && (v5 = BattleScreen::getInstance(Instance), (BattleScreen::handleTouchPressed(v5, a2) & 1) != 0) )
        return 1;
      else
        return Sprite::touchPressed(a1, a2);
    }

    __int64 __fastcall RenderSystem::touchMoved(LogicTutorialManager *a1, __int64 a2)
    {
      LogicTutorialManager *Instance; // x0
      MovieClipHelper **v5; // x0
      double v6; // d0
      long double v7; // q1
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      if ( Instance
        && (v5 = (MovieClipHelper **)BattleScreen::getInstance(Instance),
            (BattleScreen::handleTouchMoved(v5, a2, v6, v7) & 1) != 0) )
      {
        return 1;
      }
      else
      {
        return Sprite::touchMoved(a1, a2);
      }
    }

    __int64 __fastcall RenderSystem::touchReleased(LogicTutorialManager *a1, __int64 a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 v5; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(a1);
      if ( Instance && (v5 = BattleScreen::getInstance(Instance), (BattleScreen::handleTouchReleased(v5, a2) & 1) != 0) )
        return 1;
      else
        return Sprite::touchReleased(a1, a2);
    }

    __int64 __fastcall RenderSystem::touchCancelled(LogicJSONObject *this, int a2)
    {
      LogicTutorialManager *Instance; // x0
      __int64 v5; // x0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      if ( Instance )
      {
        v5 = BattleScreen::getInstance(Instance);
        BattleScreen::handleTouchCancelled(v5, a2);
      }
      return Sprite::touchCancelled(this, a2);
    }

    __int64 __fastcall RenderSystem::isPaused(LogicJSONObject *this)
    {
      return *((unsigned __int8 *)this + 324);
    }

    float __fastcall RenderSystem::getShakeX(LogicJSONObject *this)
    {
      return *((float *)this + 66);
    }

    float __fastcall RenderSystem::getShakeY(LogicJSONObject *this)
    {
      return *((float *)this + 67);
    }

    void __fastcall RenderSystem::highlightGround(
            LogicJSONObject *this,
            int a2,
            int a3,
            int a4,
            int a5,
            int a6,
            const String *a7)
    {
      __int64 v14; // x0
      float v15; // s8
      float v16; // s9
      float v17; // s10
      float v18; // s11
      float v19; // s12
      const char *v20; // x1
      const String *v21; // x2
      DisplayObject *MovieClip; // x0
      float v23; // s8
      float v24; // s9
      MovieClip *MovieClipByName; // x0
      String v26; // [xsp+8h] [xbp-88h] BYREF
    
      v14 = *((_QWORD *)this + 41);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)this + 41) = 0;
      v15 = (float)a2;
      v16 = (float)a3 + -0.2;
      if ( *((_BYTE *)this + 322) )
      {
        v15 = (float)*((int *)this + 76) - v15;
        v16 = (float)*((int *)this + 77) - v16;
      }
      v17 = *((float *)this + 68);
      v18 = (float)a4;
      v19 = (float)a5 + -0.2;
      if ( *((_BYTE *)this + 322) )
      {
        v18 = (float)*((int *)this + 76) - v18;
        v19 = (float)*((int *)this + 77) - v19;
      }
      if ( a6 )
        v20 = "enermy_zone";
      else
        v20 = "player_zone";
      String::String(&v26, v20);
      MovieClip = (DisplayObject *)ResourceManager::getMovieClip(
                                     (ResourceManager *)"sc/tutorial.sc",
                                     (const char *)&v26,
                                     v21);
      v23 = v17 + (float)(v15 * 15.0);
      v24 = v16 * 12.0;
      *((_QWORD *)this + 41) = MovieClip;
      DisplayObject::setSize(MovieClip, fabsf((float)(v17 + (float)(v18 * 15.0)) - v23), fabsf((float)(v19 * 12.0) - v24));
      DisplayObject::setXY(*((DisplayObject **)this + 41), v23, v24);
      MovieClip::playOnce(*((MovieClip **)this + 41));
      *((_BYTE *)this + 336) = 1;
      if ( a7->m_length )
      {
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 41), "text");
        if ( MovieClipByName )
          MovieClip::setText(MovieClipByName, "text", a7);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 160LL))(
        *((_QWORD *)this + 35),
        *((_QWORD *)this + 41));
      String::~String(&v26);
    }

    __int64 __fastcall RenderSystem::removeGroundHighlight(LogicJSONObject *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 41);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 41) = 0;
      return result;
    }

    __int64 __fastcall RenderSystem::randomizeCloud(__int64 a1, float *a2)
    {
      long double v2; // q8
      long double v3; // q9
      __int64 v6; // x8
      ResourceManager *v7; // x21
      const String *v8; // x22
      float v9; // s0
      float v10; // s10
      float v11; // s0
      float v12; // s10
      float v13; // s11
      float v14; // s0
      float v15; // s12
      int v16; // w23
      __float2 v17; // kr00_8
      const String *v18; // x2
      __int64 MovieClip; // x0
      __int64 *v20; // x21
      __int64 v21; // x8
      void (__fastcall *v22)(__int64 *, float); // x22
      float v23; // s0
      __int64 *v24; // x21
      __int64 v25; // x8
      void (__fastcall *v26)(__int64 *); // x22
      const char *v27; // x2
      long double v28; // q0
    
      if ( *(_QWORD *)a2 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 8LL))(*(_QWORD *)a2);
      *(_QWORD *)a2 = 0;
      v6 = 24LL * (rand() % *(_DWORD *)(a1 + 228));
      v7 = (ResourceManager *)(*(_QWORD *)(a1 + 216) + v6);
      v8 = (const String *)(*(_QWORD *)(a1 + 208) + v6);
      LODWORD(v2) = *(_DWORD *)(a1 + 248);
      *(float *)&v3 = *(float *)(a1 + 252) - *(float *)&v2;
      frand();
      *(float *)&v2 = *(float *)&v2 + (float)(*(float *)&v3 * v9);
      LODWORD(v3) = *(_DWORD *)(a1 + 240);
      v10 = *(float *)(a1 + 244) - *(float *)&v3;
      frand();
      *(float *)&v3 = *(float *)&v3 + (float)(v10 * v11);
      v12 = *(float *)(a1 + 232);
      v13 = *(float *)(a1 + 236) - v12;
      frand();
      v15 = v12 + (float)(v13 * v14);
      v16 = rand();
      v17 = __sincosf_stret(*(float *)(a1 + 256));
      MovieClip = ResourceManager::getMovieClip(v7, v8, v18);
      *(_QWORD *)a2 = MovieClip;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)MovieClip + 40LL))(MovieClip, v2);
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)a2 + 80LL))(*(_QWORD *)a2, v3);
      v20 = *(__int64 **)a2;
      v21 = **(_QWORD **)a2;
      v22 = *(void (__fastcall **)(__int64 *, float))(v21 + 48);
      v23 = (*(float (__fastcall **)(_QWORD))(v21 + 64))(*(_QWORD *)a2);
      v22(v20, (float)(((2 * v16) & 2) - 1) * v23);
      v24 = *(__int64 **)a2;
      v25 = **(_QWORD **)a2;
      v26 = *(void (__fastcall **)(__int64 *))(v25 + 56);
      (*(void (__fastcall **)(_QWORD))(v25 + 72))(*(_QWORD *)a2);
      v26(v24);
      a2[2] = v15 * v17.__cosval;
      a2[3] = v15 * v17.__sinval;
      a2[4] = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 88LL))(*(_QWORD *)a2);
      *(__n128 *)&v28 = Debugger::doAssert((Debugger *)1, (bool)"", v27);
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, long double))(**(_QWORD **)(a1 + 176) + 160LL))(
               *(_QWORD *)(a1 + 176),
               *(_QWORD *)a2,
               v28);
    }

    __int64 __fastcall RenderSystem::setUpdateLowendStaticBackground(__int64 this, char a2, char a3)
    {
      *(_BYTE *)(this + 338) = a2;
      *(_BYTE *)(this + 339) = a3;
      return this;
    }

    __int64 __fastcall RenderSystem::getShowHUD(LogicJSONObject *this)
    {
      return *((unsigned __int8 *)this + 337);
    }

}; // end class RenderSystem
