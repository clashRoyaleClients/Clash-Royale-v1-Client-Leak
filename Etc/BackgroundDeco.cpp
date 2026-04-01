class BackgroundDeco
{
public:

    void __fastcall BackgroundDeco::BackgroundDeco(BackgroundDeco *this, const #932 *a2, LogicJSONObject *a3)
    {
      GameMain *FileName; // x21
      const String *v6; // x1
      const String *ExportName; // x0
      const String *v8; // x2
      __int64 MovieClipFromPool; // x21
      #1080 *v10; // x0
      #1080 *Instance; // x0
    
      GameObjectSprite::GameObjectSprite(this, a3);
      *(_QWORD *)this = off_10045F810;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      FileName = (GameMain *)LogicBackgroundDecoData::getFileName(a2);
      GameMain::loadAsset(FileName, v6);
      ExportName = (const String *)LogicBackgroundDecoData::getExportName(a2);
      MovieClipFromPool = ResourceManager::getMovieClipFromPool(FileName, ExportName, v8);
      v10 = (#1080 *)GameObjectSprite::setMovieClip(this, (#1257 *)MovieClipFromPool);
      *((_QWORD *)this + 19) = a2;
      Instance = (#1080 *)GameMain::getInstance(v10);
      if ( (unsigned int)GameMain::isEditorModeActive(Instance) )
      {
        *(_BYTE *)(MovieClipFromPool + 64) = 1;
        *((_DWORD *)this + 15) = 777920;
        *((_BYTE *)this + 64) = 1;
      }
    }

    // attributes: thunk
    void __fastcall BackgroundDeco::BackgroundDeco(BackgroundDeco *this, const #932 *a2, LogicJSONObject *a3)
    {
      __ZN14BackgroundDecoC2EPK23LogicBackgroundDecoDataP12RenderSystem(this, a2, a3);
    }

    void __fastcall BackgroundDeco::~BackgroundDeco(#1397 *this)
    {
      ResourceManager *v2; // x0
      MovieClip *v3; // x1
    
      *(_QWORD *)this = off_10045F810;
      v2 = (ResourceManager *)GameObjectSprite::removeMovieClip(this);
      ResourceManager::putMovieClipToPool(v2, v3);
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      GameObjectSprite::~GameObjectSprite(this);
    }

    // attributes: thunk
    void __fastcall BackgroundDeco::~BackgroundDeco(#1397 *this)
    {
      __ZN14BackgroundDecoD2Ev(this);
    }

    void __fastcall BackgroundDeco::~BackgroundDeco(#1397 *this)
    {
      BackgroundDeco::~BackgroundDeco(this);
      operator delete(this);
    }

}; // end class BackgroundDeco
