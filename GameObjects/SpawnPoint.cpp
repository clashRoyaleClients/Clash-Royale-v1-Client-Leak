class SpawnPoint
{
public:

    __int64 __fastcall SpawnPoint::SpawnPoint(__int64 a1, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      Debugger *Logic; // x0
      LogicTutorialData *SpawnPointData; // x20
      const String *FileName; // x0
      const String *ExportName; // x0
      #1080 *v8; // x0
      const String *v9; // x1
      #1080 *Instance; // x0
      const String *v11; // x2
      #1257 *MovieClipFromPool; // x0
      String v14; // [xsp+0h] [xbp-40h] BYREF
      String v15; // [xsp+18h] [xbp-28h] BYREF
    
      GameObject::GameObject((GameObject *)a1, a2, a3);
      *(_QWORD *)a1 = off_100465E88;
      Logic = (Debugger *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      SpawnPointData = (LogicTutorialData *)LogicSpawnPoint::getSpawnPointData(Logic);
      FileName = (const String *)LogicSpawnPointData::getFileName(SpawnPointData);
      String::String(&v15, FileName);
      ExportName = (const String *)LogicSpawnPointData::getExportName(SpawnPointData);
      v8 = (#1080 *)String::String(&v14, ExportName);
      if ( v15.m_length )
        goto LABEL_5;
      Instance = (#1080 *)GameMain::getInstance(v8);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
      {
        String::operator=(&v15, "sc/level.sc");
        String::operator=(&v14, "dummy_spawn_point");
      }
      if ( v15.m_length )
      {
    LABEL_5:
        if ( v14.m_length )
        {
          GameMain::loadAsset((GameMain *)&v15, v9);
          MovieClipFromPool = (#1257 *)ResourceManager::getMovieClipFromPool((ResourceManager *)&v15, &v14, v11);
          GameObjectSprite::setMovieClip((#1138 *)(a1 + 16), MovieClipFromPool);
        }
      }
      String::~String(&v14);
      String::~String(&v15);
      return a1;
    }

    // attributes: thunk
    void __fastcall SpawnPoint::SpawnPoint(SpawnPoint *this, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      __ZN10SpawnPointC2EPK15LogicSpawnPointP12RenderSystem((__int64)this, a2, a3);
    }

    __int64 __fastcall SpawnPoint::destruct(__int64 a1)
    {
      ResourceManager *v2; // x0
      MovieClip *v3; // x1
    
      v2 = (ResourceManager *)GameObjectSprite::removeMovieClip((#1138 *)(a1 + 16));
      if ( v2 )
        ResourceManager::putMovieClipToPool(v2, v3);
      return GameObject::destruct((const GameMode **)a1);
    }

    // attributes: thunk
    __int64 __fastcall SpawnPoint::update(GameMode **this, float a2, float a3)
    {
      return GameObject::update(this, a2, a3);
    }

    __int64 __fastcall SpawnPoint::getShadow(PageItem *this)
    {
      return 0;
    }

    // attributes: thunk
    void __fastcall SpawnPoint::~SpawnPoint(ShutdownStartedMessage *this)
    {
      GameObject::~GameObject(this);
    }

    void __fastcall SpawnPoint::~SpawnPoint(ShutdownStartedMessage *a1)
    {
      GameObject::~GameObject(a1);
      operator delete(a1);
    }

}; // end class SpawnPoint
