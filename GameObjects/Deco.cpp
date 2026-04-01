class Deco
{
public:

    void __fastcall Deco::Deco(Deco *this, const #948 *a2, LogicJSONObject *a3)
    {
      #948 *Logic; // x0
      __int64 DecoData; // x22
      GameMain *FileName; // x23
      const String *ExportName; // x25
      const String *v10; // x1
      const String *v11; // x2
      #1257 *MovieClipFromPool; // x27
      ParticleEmitter *TotalFrames; // x0
      int v14; // w1
      int Rand; // w26
      #1257 *v16; // x1
      float v17; // s0
      Sprite *v18; // x1
      __int64 v19; // x1
      __int64 v20; // x2
      const String *v21; // x2
      DropGUIContainer *v22; // x23
      MovieClip *v23; // x1
      const AskForTVContentMessage *Effect; // x22
      int v25; // w23
      int v26; // w24
      int v27; // w25
      LogicBackgroundDecoData *EffectManager; // x0
    
      GameObject::GameObject(this, a2, a3);
      *(_QWORD *)this = off_100460AE0;
      GameObjectSprite::GameObjectSprite((char *)this + 456, a3);
      Logic = (#948 *)GameObject::getLogic(this);
      DecoData = LogicDeco::getDecoData(Logic);
      FileName = (GameMain *)LogicDecoData::getFileName(DecoData);
      ExportName = (const String *)LogicDecoData::getExportName(DecoData);
      GameMain::loadAsset(FileName, v10);
      MovieClipFromPool = (#1257 *)ResourceManager::getMovieClipFromPool(FileName, ExportName, v11);
      TotalFrames = (ParticleEmitter *)MovieClip::getTotalFrames(MovieClipFromPool);
      Rand = ParticleEmitter::getRand(TotalFrames, v14);
      MovieClip::gotoAndPlayFrameIndex(MovieClipFromPool, Rand, -1);
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClipFromPool, v16);
      v17 = (*(float (__fastcall **)(LogicJSONObject *))(*(_QWORD *)a3 + 64LL))(a3);
      DropGUIContainer::doFontScaling(MovieClipFromPool, v18, v17);
      GameObjectSprite::setMovieClip((Deco *)((char *)this + 16), MovieClipFromPool);
      if ( (unsigned int)LogicDecoData::getShadowScale(DecoData) )
      {
        GameObjectSprite::setGameObject((Deco *)((char *)this + 456), this);
        v22 = (DropGUIContainer *)ResourceManager::getMovieClipFromPool(FileName, ExportName, v21);
        DropGUIContainer::hideAllTextFields(v22, v23);
        MovieClip::gotoAndPlayFrameIndex(v22, Rand, -1);
        Deco::updateShadow(this, v22, 0);
      }
      Effect = (const AskForTVContentMessage *)LogicDecoData::getEffect(DecoData, v19, v20);
      if ( Effect )
      {
        v25 = LogicGameObject::getX(a2);
        v26 = LogicGameObject::getY(a2);
        v27 = LogicGameObject::getZ(a2);
        EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
        EffectManager::addLoopingEffect(EffectManager, Effect, v25, v26, v27, 0, a2, 1, 0);
      }
    }

    void __fastcall Deco::updateShadow(ResourceManager *this, #1257 *a2, bool a3)
    {
      #948 *Logic; // x0
      #1080 *DecoData; // x0
      #1080 *v8; // x19
      #1138 *v9; // x22
      float v10; // s8
      float v11; // s9
      float ShadowX; // s10
      int ShadowY; // w0
      __int64 Name; // x0
      const String *v15; // x1
      __siginfo _48; // [xsp+48h] [xbp-58h] BYREF
    
      Logic = (#948 *)GameObject::getLogic(this);
      DecoData = (#1080 *)LogicDeco::getDecoData(Logic);
      v8 = DecoData;
      if ( a2 )
      {
        if ( *(_DWORD *)(GameMain::getInstance(DecoData) + 120) )
        {
          *((_DWORD *)a2 + 5) = 0;
          *((_DWORD *)a2 + 4) = 1065353216;
          *((_DWORD *)a2 + 6) = 0;
          *(_QWORD *)((char *)a2 + 28) = 1065353216;
          *((_DWORD *)a2 + 9) = 0;
          v9 = (ResourceManager *)((char *)this + 456);
          GameObjectSprite::setMovieClip(v9, a2, a3);
          v10 = (float)(int)LogicDecoData::getShadowScale(v8) * 0.01;
          v11 = (float)(int)LogicDecoData::getShadowSkew(v8) * 0.01;
          ShadowX = (float)(int)LogicDecoData::getShadowX(v8);
          ShadowY = LogicDecoData::getShadowY(v8);
          GameObjectSprite::setShadowSettings(v9, v10, v11, ShadowX, (float)ShadowY);
        }
      }
      else
      {
        Name = LogicData::getName(DecoData);
        operator+(&_48, "Deco::updateShadow NULL. ", Name);
        Debugger::warning(&_48, v15);
        String::~String((String *)&_48);
      }
    }

    // attributes: thunk
    void __fastcall Deco::Deco(Deco *this, const #948 *a2, LogicJSONObject *a3)
    {
      __ZN4DecoC2EPK9LogicDecoP12RenderSystem(this, a2, a3);
    }

    __int64 __fastcall Deco::destruct(ResourceManager *this)
    {
      ResourceManager *v2; // x0
      MovieClip *v3; // x1
      ResourceManager *v4; // x0
      MovieClip *v5; // x1
    
      v2 = (ResourceManager *)GameObjectSprite::removeMovieClip((ResourceManager *)((char *)this + 16));
      ResourceManager::putMovieClipToPool(v2, v3);
      v4 = (ResourceManager *)GameObjectSprite::removeMovieClip((ResourceManager *)((char *)this + 456));
      if ( v4 )
        ResourceManager::putMovieClipToPool(v4, v5);
      return GameObject::destruct(this);
    }

    void __fastcall Deco::update(ResourceManager *this, float a2, float a3)
    {
      #1257 *MovieClip; // x1
    
      GameObject::update(this, a2, a3);
      if ( GameObjectSprite::getMovieClip((ResourceManager *)((char *)this + 456)) )
      {
        MovieClip = (#1257 *)GameObjectSprite::getMovieClip((ResourceManager *)((char *)this + 456));
        Deco::updateShadow(this, MovieClip, 1);
      }
    }

    __int64 __fastcall Deco::getShadow(ResourceManager *this)
    {
      return (__int64)this + 456;
    }

    __int64 __fastcall Deco::getLayer(ResourceManager *this)
    {
      int v2; // w20
      #948 *Logic; // x0
      __int64 DecoData; // x0
    
      v2 = *(_DWORD *)(GameMain::getInstance(this) + 120);
      Logic = (#948 *)GameObject::getLogic(this);
      DecoData = LogicDeco::getDecoData(Logic);
      if ( v2 )
        return LogicDecoData::getLayer(DecoData);
      else
        return LogicDecoData::getLayerLowend(DecoData);
    }

    // attributes: thunk
    void __fastcall Deco::~Deco(ResourceManager *this)
    {
      __ZN4DecoD2Ev(this);
    }

    void __fastcall Deco::~Deco(ResourceManager *this)
    {
      Deco::~Deco(this);
      operator delete(this);
    }

    void __fastcall Deco::~Deco(ResourceManager *this)
    {
      *(_QWORD *)this = off_100460AE0;
      GameObjectSprite::~GameObjectSprite((ResourceManager *)((char *)this + 456));
      GameObject::~GameObject(this);
    }

}; // end class Deco
