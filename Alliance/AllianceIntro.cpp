class AllianceIntro
{
public:

    void __fastcall AllianceIntro::AllianceIntro(AllianceIntro *this)
    {
      #1375 *v2; // x20
      const String *v3; // x2
      const char *v4; // x1
      const String *String; // x0
      LogicDataTables *v6; // x0
      __int64 v7; // x21
      MovieClip *MovieClip; // x20
      const char *v9; // x1
      __int64 v10; // x0
      Stage *v11; // x0
      LogicPageOpenedCommand *Instance; // x0
      int v13; // s8
      LogicPageOpenedCommand *v14; // x0
      LogicClientAvatar *MainHUD; // x0
      float v16; // s0
      String v17; // [xsp+10h] [xbp-120h] BYREF
      String v18; // [xsp+28h] [xbp-108h] BYREF
      String v19; // [xsp+40h] [xbp-F0h] BYREF
      String v20; // [xsp+58h] [xbp-D8h] BYREF
      String v21; // [xsp+70h] [xbp-C0h] BYREF
      String v22; // [xsp+88h] [xbp-A8h] BYREF
      String v23; // [xsp+A0h] [xbp-90h] BYREF
      String v24; // [xsp+B8h] [xbp-78h] BYREF
      String v25; // [xsp+D0h] [xbp-60h] BYREF
      String v26; // [xsp+E8h] [xbp-48h] BYREF
    
      String::String(&v26, "sc/ui.sc");
      String::String(&v25, "screen_clan");
      DropGUIContainer::DropGUIContainer(this, &v26, &v25);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_1004687D8;
      *((_QWORD *)this + 12) = &off_100468950;
      *((_QWORD *)this + 24) = off_100468970;
      *((_QWORD *)this + 25) = 0;
      v2 = (#1375 *)operator new(192);
      String::String(&v24, "sc/ui.sc");
      String::String(&v22, "sc/ui.sc");
      String::String(&v21, "guild_intro_page");
      StringTable::getCorrectExportNameForProfile((#1308 *)&v22, &v21, v3, &v23);
      DropGUIContainer::DropGUIContainer(v2, &v24, &v23);
      *((_QWORD *)this + 25) = v2;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String = (const String *)StringTable::getString((#1308 *)"TID_ALLIANCE_UNLOCK_LEVEL", v4);
      v6 = (LogicDataTables *)String::String(&v20, String);
      v7 = *(unsigned int *)(LogicDataTables::getGlobals(v6) + 72LL);
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(*((#1254 **)this + 25));
      String::String(&v18, "<number>");
      String::format((String *)"%d", v9, v7);
      String::replace(&v19, &v20, &v18, &v17);
      MovieClip::setText(MovieClip, "level", &v19);
      String::~String();
      String::~String();
      String::~String();
      v10 = GUIContainer::getMovieClip(this);
      v11 = (Stage *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 160LL))(v10, *((_QWORD *)this + 25));
      Instance = (LogicPageOpenedCommand *)Stage::getInstance(v11);
      v13 = *((_DWORD *)Instance + 108);
      v14 = (LogicPageOpenedCommand *)HomeScreen::getInstance(Instance);
      MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(v14);
      MainHUD::getBottomHUDHeight(MainHUD);
      DisplayObject::setPixelSnappedXY(*((DisplayObject **)this + 25), 0.0, (float)((float)v13 - v16) * 0.5);
      String::~String();
    }

    // attributes: thunk
    void __fastcall AllianceIntro::AllianceIntro(AllianceIntro *this)
    {
      __ZN13AllianceIntroC2Ev(this);
    }

    void __fastcall AllianceIntro::~AllianceIntro(__int64 a1)
    {
      __int64 v2; // x0
    
      *(_QWORD *)a1 = off_1004687D8;
      *(_QWORD *)(a1 + 96) = &off_100468950;
      *(_QWORD *)(a1 + 192) = off_100468970;
      v2 = *(_QWORD *)(a1 + 200);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 200) = 0;
      DropGUIContainer::~DropGUIContainer((#1375 *)a1);
    }

    // attributes: thunk
    void __fastcall AllianceIntro::~AllianceIntro(__int64 a1)
    {
      __ZN13AllianceIntroD2Ev(a1);
    }

    void __fastcall AllianceIntro::~AllianceIntro(void *a1)
    {
      AllianceIntro::~AllianceIntro((__int64)a1);
      operator delete(a1);
    }

    void AllianceIntro::buttonClicked()
    {
      ;
    }

    void __fastcall AllianceIntro::update(tween::Quad *this, float a2)
    {
      ;
    }

    __int64 __fastcall AllianceIntro::isPanning(tween::Quad *this)
    {
      return 0;
    }

    void __fastcall AllianceIntro::closeInput(tween::Quad *this)
    {
      ;
    }

    void __fastcall AllianceIntro::getRootNode(tween::Quad *this)
    {
      ;
    }

}; // end class AllianceIntro
