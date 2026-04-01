class Projectile
{
public:

    void __fastcall Projectile::Projectile(Projectile *this, const #1044 *a2, LogicJSONObject *a3)
    {
      __int64 ProjectileData; // x23
      GameMain *FileName; // x20
      const String *v8; // x1
      const String *ExportName; // x21
      const String *ShadowExportName; // x24
      #1138 *v11; // x25
      const String *v12; // x2
      #1257 *MovieClipFromPool; // x0
      const String *v14; // x2
      char isOwnedByCurrentPlayer; // w24
      #851 *EffectManager; // x22
      const #822 *TrailEffectData; // x23
      GameMode *Logic; // x0
      int v19; // w25
      GameMode *v20; // x0
      int v21; // w26
      GameMode *v22; // x0
      int v23; // w27
      const GameMode *v24; // x0
      #1257 *v25; // x0
    
      GameObject::GameObject(this, a2, a3);
      *(_QWORD *)this = off_10045E160;
      *((_QWORD *)this + 57) = 0;
      ProjectileData = LogicProjectile::getProjectileData(a2);
      FileName = (GameMain *)LogicProjectileData::getFileName(ProjectileData);
      GameMain::loadAsset(FileName, v8);
      ExportName = (const String *)LogicProjectileData::getExportName(ProjectileData);
      ShadowExportName = (const String *)LogicProjectileData::getShadowExportName(ProjectileData);
      if ( ShadowExportName->m_length )
      {
        v11 = (#1138 *)operator new(144);
        GameObjectSprite::GameObjectSprite(v11, a3);
        *((_QWORD *)this + 57) = v11;
        MovieClipFromPool = (#1257 *)ResourceManager::getMovieClipFromPool(FileName, ShadowExportName, v12);
        GameObjectSprite::setMovieClip(v11, MovieClipFromPool);
      }
      if ( LogicProjectileData::getTrailEffectData(ProjectileData) )
      {
        isOwnedByCurrentPlayer = GameObject::isOwnedByCurrentPlayer(this);
        EffectManager = (#851 *)RenderSystem::getEffectManager(a3);
        TrailEffectData = (const #822 *)LogicProjectileData::getTrailEffectData(ProjectileData);
        Logic = (GameMode *)GameObject::getLogic(this);
        v19 = LogicGameObject::getX(Logic);
        v20 = (GameMode *)GameObject::getLogic(this);
        v21 = LogicGameObject::getY(v20);
        v22 = (GameMode *)GameObject::getLogic(this);
        v23 = LogicGameObject::getZ(v22);
        v24 = (const GameMode *)GameObject::getLogic(this);
        EffectManager::addEffect(EffectManager, TrailEffectData, v19, v21, v23, isOwnedByCurrentPlayer != 1, v24, 1, 0);
      }
      if ( *(_DWORD *)FileName )
      {
        if ( ExportName->m_length )
        {
          v25 = (#1257 *)ResourceManager::getMovieClipFromPool(FileName, ExportName, v14);
          GameObjectSprite::setMovieClip((Projectile *)((char *)this + 16), v25);
        }
      }
    }

    // attributes: thunk
    void __fastcall Projectile::Projectile(Projectile *this, const #1044 *a2, LogicJSONObject *a3)
    {
      __ZN10ProjectileC2EPK15LogicProjectileP12RenderSystem(this, a2, a3);
    }

    __int64 __fastcall Projectile::destruct(AllianceOnlineStatusUpdatedMessage *this)
    {
      #1138 *v2; // x0
      ResourceManager *v3; // x0
      MovieClip *v4; // x1
      __int64 v5; // x0
      ResourceManager *v6; // x0
      MovieClip *v7; // x1
      __int64 result; // x0
    
      v2 = (#1138 *)*((_QWORD *)this + 57);
      if ( v2 )
      {
        v3 = (ResourceManager *)GameObjectSprite::removeMovieClip(v2);
        ResourceManager::putMovieClipToPool(v3, v4);
        v5 = *((_QWORD *)this + 57);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v6 = (ResourceManager *)GameObjectSprite::removeMovieClip((AllianceOnlineStatusUpdatedMessage *)((char *)this + 16));
      if ( v6 )
        ResourceManager::putMovieClipToPool(v6, v7);
      result = GameObject::destruct(this);
      *((_QWORD *)this + 57) = 0;
      return result;
    }

    DisplayObject *__fastcall Projectile::update(AllianceOnlineStatusUpdatedMessage *this, float a2, float a3)
    {
      __int64 Logic; // x20
      int TargetX; // w21
      int TargetY; // w22
      GameMode *v7; // x0
      GameMode *v8; // x0
      float v9; // s13
      __int64 v10; // x23
      void (__fastcall *v11)(__int64, long double, long double, long double); // x24
      #1138 *GameObjectSprite; // x0
      long double v13; // q0
      long double v14; // q8
      #1138 *v15; // x0
      long double v16; // q0
      __int64 ProjectileData; // x0
      int Speed; // w0
      float v19; // s11
      int Distance; // w0
      float v21; // s14
      #1138 *v22; // x0
      float v23; // s0
      float v24; // s8
      #1138 *v25; // x0
      float v26; // s0
      float v27; // s15
      float v28; // s12
      float v29; // s8
      #1138 *v30; // x0
      long double v31; // q0
      long double v32; // q9
      float v33; // s13
      #1138 *v34; // x0
      #1257 *MovieClip; // x0
      MovieClip *v36; // x21
      float v37; // s10
      int TotalFrames; // w22
      float v39; // s0
      int v40; // w3
      int v41; // w0
      float v42; // s12
      int v43; // w20
      __int64 v44; // x20
      void (__fastcall *v45)(__int64, long double, long double, long double); // x21
      #1138 *v46; // x0
      long double v47; // q0
      long double v48; // q10
      #1138 *v49; // x0
      long double v50; // q0
      __int64 v51; // x0
      long double v52; // q0
      float v53; // s1
      bool v54; // cc
      DisplayObject *result; // x0
      float v56; // [xsp+1Ch] [xbp-74h]
    
      GameObject::update(this, a2, a3);
      Logic = GameObject::getLogic(this);
      TargetX = LogicProjectile::getTargetX((#1044 *)Logic);
      TargetY = LogicProjectile::getTargetY((#1044 *)Logic);
      v7 = (GameMode *)GameObject::getLogic(this);
      v56 = (float)(int)(TargetX - LogicGameObject::getX(v7));
      v8 = (GameMode *)GameObject::getLogic(this);
      v9 = (float)(int)(TargetY - LogicGameObject::getY(v8));
      v10 = *((_QWORD *)this + 57);
      if ( v10 )
      {
        v11 = *(void (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v10 + 272LL);
        GameObjectSprite = (#1138 *)GameObject::getGameObjectSprite(this);
        GameObjectSprite::getTileX(GameObjectSprite);
        v14 = v13;
        v15 = (#1138 *)GameObject::getGameObjectSprite(this);
        GameObjectSprite::getTileY(v15);
        v11(v10, v14, v16, COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      ProjectileData = LogicProjectile::getProjectileData((GameMode *)Logic);
      Speed = LogicProjectileData::getSpeed(ProjectileData);
      if ( (float)Speed >= 0.1 )
        v19 = (float)Speed;
      else
        v19 = 0.1;
      Distance = LogicVector2::getDistance((#1240 *)(Logic + 164), TargetX, TargetY);
      if ( (float)((float)Distance / v19) >= 0.1 )
        v21 = (float)Distance / v19;
      else
        v21 = 0.1;
      v22 = (#1138 *)GameObject::getGameObjectSprite(this);
      GameObjectSprite::getTileX(v22);
      v24 = v23 * 500.0;
      v25 = (#1138 *)GameObject::getGameObjectSprite(this);
      GameObjectSprite::getTileY(v25);
      v27 = (float)(int)LogicVector2::getDistance((#1240 *)(Logic + 164), (int)v24, (int)(float)(v26 * 500.0)) / v19;
      v28 = (float)-*(_DWORD *)(LogicProjectile::getProjectileData((GameMode *)Logic) + 196) / 1000.0;
      v29 = (float)((float)((float)(v27 * 0.0) / v21)
                  + (float)((float)(v27 * (float)(v27 * v28)) - (float)(v27 * (float)(v21 * v28))))
          + 0.0;
      v30 = (#1138 *)GameObject::getGameObjectSprite(this);
      GameObjectSprite::getTileZ(v30);
      v32 = v31;
      v33 = (float)(atan2f(v9 / v19, v56 / v19) * 180.0) / 3.1415;
      if ( (unsigned int)GameObject::isBottomPlayerInLogicTop(this) )
        v33 = v33 + 180.0;
      *(float *)&v32 = v29 + *(float *)&v32;
      v34 = (#1138 *)GameObject::getGameObjectSprite(this);
      MovieClip = (#1257 *)GameObjectSprite::getMovieClip(v34);
      v36 = MovieClip;
      if ( !MovieClip )
        goto LABEL_16;
      v37 = (float)((float)((float)((float)((float)((float)(v27 + 0.05) * 0.0) / v21)
                                  + (float)((float)((float)(v27 + 0.05) * (float)((float)(v27 + 0.05) * v28))
                                          - (float)((float)(v27 + 0.05) * (float)(v21 * v28))))
                          + 0.0)
                  - v29)
          / 0.05;
      TotalFrames = MovieClip::getTotalFrames(MovieClip);
      if ( !*(_BYTE *)(LogicProjectile::getProjectileData((GameMode *)Logic) + 160) )
      {
        v39 = atan(v37);
        v41 = LogicMath::clamp(
                (#1237 *)(unsigned int)(int)(float)((float)((float)TotalFrames * 0.5)
                                                  + (float)((float)((float)TotalFrames * 0.5)
                                                          * (float)((float)(v39 * 1.1) / 1.5708))),
                0,
                TotalFrames - 1,
                v40);
        MovieClip::gotoAndStopFrameIndex(v36, v41);
    LABEL_16:
        v42 = v33;
        goto LABEL_20;
      }
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v42 = v33 + 90.0;
      v43 = (int)(float)((float)((float)TotalFrames
                               * (float)((float)((float)(atan2f(v37, v19 / 500.0) * 180.0) / 3.1415) + 270.0))
                       / 360.0)
          % TotalFrames;
      if ( (GameObject::isOwnedByCurrentPlayer(this) & 1) == 0 )
      {
        v43 = TotalFrames - 1 - v43;
        v42 = v42 + 180.0;
      }
      MovieClip::gotoAndStopFrameIndex(v36, v43);
    LABEL_20:
      v44 = GameObject::getGameObjectSprite(this);
      v45 = *(void (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v44 + 272LL);
      v46 = (#1138 *)GameObject::getGameObjectSprite(this);
      GameObjectSprite::getTileX(v46);
      v48 = v47;
      v49 = (#1138 *)GameObject::getGameObjectSprite(this);
      GameObjectSprite::getTileY(v49);
      v45(v44, v48, v50, v32);
      v51 = GameObject::getGameObjectSprite(this);
      *(float *)&v52 = *(float *)&v32 / 50.0;
      if ( (float)(*(float *)&v32 / 50.0) < 0.0 )
        *(float *)&v52 = 0.0;
      v53 = *(float *)&v52 + 1.0;
      v54 = *(float *)&v52 <= 0.5;
      LODWORD(v52) = 1.5;
      if ( v54 )
        *(float *)&v52 = v53;
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v51 + 40LL))(v51, v52);
      result = (DisplayObject *)GameObjectSprite::getMovieClip((AllianceOnlineStatusUpdatedMessage *)((char *)this + 16));
      if ( result )
        return (DisplayObject *)DisplayObject::rotate(result, v42);
      return result;
    }

    __int64 __fastcall Projectile::getShadow(AllianceOnlineStatusUpdatedMessage *this)
    {
      return *((_QWORD *)this + 57);
    }

    // attributes: thunk
    void __fastcall Projectile::~Projectile(AllianceOnlineStatusUpdatedMessage *this)
    {
      GameObject::~GameObject(this);
    }

    void __fastcall Projectile::~Projectile(AllianceOnlineStatusUpdatedMessage *this)
    {
      GameObject::~GameObject(this);
      operator delete(this);
    }

}; // end class Projectile
