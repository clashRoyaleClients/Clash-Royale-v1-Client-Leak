class Egg
{
public:

    __int64 __fastcall Egg::Egg(__int64 a1, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      LogicStartRewardClaimCommand *Logic; // x0
      Character *EggData; // x23
      GameMain *FileName; // x24
      const String *v9; // x1
      const String *v10; // x2
      const String *BlueExportName; // x25
      #1257 *MovieClipFromPool; // x26
      const String *v13; // x2
      MovieClip *MovieClip; // x0
      const String *v15; // x2
      const String *BlueTopExportName; // x8
      #1257 *v17; // x0
      const AskForTVContentMessage *Effect; // x23
      int v19; // w24
      int v20; // w25
      int v21; // w26
      int isOwnedByCurrentPlayer; // w27
      LogicBackgroundDecoData *EffectManager; // x0
      LogicBackgroundDecoData *v24; // x0
      __int64 v25; // x22
      const char *v26; // x2
      DropGUIContainer *v27; // x22
      float v28; // s0
      Sprite *v29; // x1
      MovieClip *v30; // x22
      const char *v31; // x1
      const String *String; // x0
      DisplayObject *v33; // x0
      __int64 v34; // x1
      Rect v36[2]; // [xsp+10h] [xbp-60h] BYREF
    
      GameObject::GameObject((GameObject *)a1, a2, a3);
      *(_QWORD *)a1 = off_1004695B0;
      GameObjectSprite::GameObjectSprite(a1 + 480, a3);
      *(_QWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_DWORD *)(a1 + 624) = -1;
      Logic = (LogicStartRewardClaimCommand *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      EggData = (Character *)LogicEgg::getEggData(Logic);
      FileName = (GameMain *)LogicEggData::getFileName(EggData);
      GameMain::loadAsset(FileName, v9);
      if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) )
        BlueExportName = (const String *)LogicEggData::getBlueExportName(EggData);
      else
        BlueExportName = (const String *)LogicEggData::getRedExportName(EggData);
      MovieClipFromPool = (#1257 *)ResourceManager::getMovieClipFromPool(FileName, BlueExportName, v10);
      Rect::Rect(v36);
      DisplayObject::getBounds(MovieClipFromPool, 0, v36);
      GameObjectSprite::setMovieClip((#1138 *)(a1 + 16), MovieClipFromPool);
      MovieClip = (MovieClip *)ResourceManager::getMovieClip(FileName, BlueExportName, v13);
      Egg::updateShadow((Egg *)a1, MovieClip, 1);
      if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) )
        BlueTopExportName = (const String *)LogicEggData::getBlueTopExportName(EggData);
      else
        BlueTopExportName = (const String *)LogicEggData::getRedTopExportName(EggData);
      if ( BlueTopExportName->m_length )
      {
        v17 = (#1257 *)ResourceManager::getMovieClip(FileName, BlueTopExportName, v15);
        GameObjectSprite::setMovieClip((#1138 *)(a1 + 160), v17);
        RenderSystem::addGameObjectSprite(a3, (#1138 *)(a1 + 160), (const char *)3);
      }
      Effect = (const AskForTVContentMessage *)LogicEggData::getEffect(EggData);
      if ( Effect )
      {
        v19 = LogicGameObject::getX((GameMode *)a2);
        v20 = LogicGameObject::getY((GameMode *)a2);
        v21 = LogicGameObject::getZ((GameMode *)a2);
        isOwnedByCurrentPlayer = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1);
        EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager((ShutdownStartedMessage *)a1);
        EffectManager::addLoopingEffect(
          EffectManager,
          Effect,
          v19,
          v20,
          v21,
          isOwnedByCurrentPlayer ^ 1,
          (const GameMode *)a2,
          1,
          0);
        v24 = (LogicBackgroundDecoData *)GameObject::getEffectManager((ShutdownStartedMessage *)a1);
        *(_DWORD *)(a1 + 624) = EffectManager::getLastCreatedEffectId(v24);
      }
      if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) )
      {
        v25 = operator new(144);
        GameObjectSprite::GameObjectSprite(v25, a3);
        *(_QWORD *)(a1 + 472) = v25;
        v27 = (DropGUIContainer *)ResourceManager::getMovieClipFromPool(
                                    (ResourceManager *)"sc/ui.sc",
                                    "ui_deploy_timer",
                                    v26);
        *(_QWORD *)(a1 + 456) = v27;
        v28 = (*(float (__fastcall **)(LogicJSONObject *))(*(_QWORD *)a3 + 64LL))(a3);
        DropGUIContainer::doFontScaling(v27, v29, v28);
        *(_QWORD *)(a1 + 464) = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 456), "time");
        v30 = *(MovieClip **)(a1 + 456);
        String = (const String *)StringTable::getString((#1308 *)"TID_SECOND_SHORT", v31);
        MovieClip::setText(v30, "TID_s", String);
        v33 = *(DisplayObject **)(a1 + 456);
        *((_BYTE *)v33 + 8) = 1;
        DisplayObject::setPixelSnappedXY(v33, 0.0, *(float *)&v36[0].bottom);
        GameObjectSprite::setMovieClip(*(#1138 **)(a1 + 472), *(#1257 **)(a1 + 456));
        GameObjectSprite::setGameObject(*(#1138 **)(a1 + 472), (ShutdownStartedMessage *)a1);
        v34 = *(_QWORD *)(a1 + 472);
        *(_BYTE *)(v34 + 8) = 1;
        RenderSystem::addGameObjectSprite(a3, (#1138 *)v34, (const char *)0xB);
      }
      Rect::~Rect(v36);
      return a1;
    }

    void __fastcall Egg::updateShadow(ShutdownStartedMessage *a1, #1257 *a2, bool a3)
    {
      LogicStartRewardClaimCommand *Logic; // x0
      AreaEffectObject *EggData; // x0
      AreaEffectObject *v8; // x19
      #1138 *v9; // x22
      float v10; // s8
      float v11; // s9
      float ShadowX; // s10
      int ShadowY; // w0
      __int64 Name; // x0
      const String *v15; // x1
      __siginfo _48; // [xsp+48h] [xbp-58h] BYREF
    
      Logic = (LogicStartRewardClaimCommand *)GameObject::getLogic(a1);
      EggData = (AreaEffectObject *)LogicEgg::getEggData(Logic);
      v8 = EggData;
      if ( a2 )
      {
        v9 = (ShutdownStartedMessage *)((char *)a1 + 480);
        GameObjectSprite::setMovieClip(v9, a2, a3);
        v10 = (float)(int)LogicEggData::getShadowScale(v8) * 0.01;
        v11 = (float)(int)LogicEggData::getShadowSkew(v8) * 0.01;
        ShadowX = (float)(int)LogicEggData::getShadowX(v8);
        ShadowY = LogicEggData::getShadowY(v8);
        GameObjectSprite::setShadowSettings(v9, v10, v11, ShadowX, (float)ShadowY);
      }
      else
      {
        Name = LogicData::getName(EggData);
        operator+(&_48, "Egg::updateShadow NULL. Egg: ", Name);
        Debugger::warning(&_48, v15);
        String::~String();
      }
    }

    // attributes: thunk
    __int64 __fastcall Egg::Egg(__int64 a1, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      return __ZN3EggC2EPK8LogicEggP12RenderSystem(a1, a2, a3);
    }

    __int64 __fastcall Egg::destruct(__int64 a1)
    {
      ResourceManager *v2; // x0
      MovieClip *v3; // x1
      __int64 result; // x0
    
      v2 = (ResourceManager *)GameObjectSprite::removeMovieClip((#1138 *)(a1 + 16));
      ResourceManager::putMovieClipToPool(v2, v3);
      Egg::destroyTimeClip((Egg *)a1);
      result = GameObject::destruct((const GameMode **)a1);
      *(_QWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_DWORD *)(a1 + 624) = -1;
      return result;
    }

    #1138 *__fastcall Egg::destroyTimeClip(__int64 a1)
    {
      #1138 *result; // x0
      ResourceManager *v3; // x0
      MovieClip *v4; // x1
    
      result = *(#1138 **)(a1 + 472);
      if ( result )
      {
        v3 = (ResourceManager *)GameObjectSprite::removeMovieClip(result);
        ResourceManager::putMovieClipToPool(v3, v4);
        result = *(#1138 **)(a1 + 472);
        if ( result )
          result = (#1138 *)(*(__int64 (__fastcall **)(#1138 *))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 472) = 0;
      }
      return result;
    }

    __int64 __fastcall Egg::update(__int64 a1, float a2, float a3)
    {
      __int64 result; // x0
      TextField *v5; // x20
      __int64 Logic; // x0
      __int64 v7; // x20
      #1138 *v8; // x19
      long double v9; // q0
      long double v10; // q8
      long double v11; // q0
      long double v12; // q9
      long double v13; // q0
      __int64 (__fastcall *v14)(__int64, long double, long double, long double); // [xsp+8h] [xbp-28h]
    
      result = GameObject::update((GameMode **)a1, a2, a3);
      if ( *(_QWORD *)(a1 + 472) )
      {
        v5 = *(TextField **)(a1 + 464);
        Logic = GameObject::getLogic((ShutdownStartedMessage *)a1);
        TextField::setNumberText(v5, *(_DWORD *)(Logic + 120) / 1000 + 1, 0);
        v7 = *(_QWORD *)(a1 + 472);
        v14 = *(__int64 (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v7 + 272LL);
        v8 = (#1138 *)(a1 + 16);
        GameObjectSprite::getTileX(v8);
        v10 = v9;
        GameObjectSprite::getTileY(v8);
        v12 = v11;
        GameObjectSprite::getTileZ(v8);
        return v14(v7, v10, v12, v13);
      }
      return result;
    }

    __int64 __fastcall Egg::getShadow(xMatrix44 *this)
    {
      return (__int64)this + 480;
    }

    #1138 *__fastcall Egg::setAsDummySpellPreviewObject(pthread_attr_t *a1)
    {
      GameObject::setAsDummySpellPreviewObject(a1);
      Egg::disableEffectSounds((xMatrix44 *)a1);
      return Egg::destroyTimeClip((__int64)a1);
    }

    DonateAllianceUnitMessage *__fastcall Egg::disableEffectSounds(xMatrix44 *this)
    {
      LogicBackgroundDecoData *EffectManager; // x0
      DonateAllianceUnitMessage *result; // x0
    
      EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
      result = EffectManager::getEffectById(EffectManager, *((_DWORD *)this + 156));
      if ( result )
        return (DonateAllianceUnitMessage *)Effect::disableSounds((__int64)result);
      return result;
    }

    // attributes: thunk
    void __fastcall Egg::~Egg(Egg *a1)
    {
      __ZN3EggD2Ev(a1);
    }

    void __fastcall Egg::~Egg(Egg *a1)
    {
      Egg::~Egg(a1);
      operator delete(a1);
    }

    void __fastcall Egg::~Egg(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004695B0;
      GameObjectSprite::~GameObjectSprite((GameObjectSprite *)(a1 + 480));
      GameObject::~GameObject((ShutdownStartedMessage *)a1);
    }

}; // end class Egg
