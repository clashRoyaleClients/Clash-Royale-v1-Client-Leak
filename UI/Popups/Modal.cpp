class Modal
{
public:

    void __fastcall Modal::Modal(Modal *this, MatchmakeFailedMessage *a2)
    {
      const char *v4; // x2
      __int64 MovieClip; // x0
    
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_1004668A0;
      *((_BYTE *)this + 122) = 0;
      *((_WORD *)this + 60) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 12) = a2;
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "display_darken", v4);
      *((_QWORD *)this + 13) = MovieClip;
      (*(void (__fastcall **)(Modal *, __int64))(*(_QWORD *)this + 160LL))(this, MovieClip);
      Modal::updateCoordinate(this);
      *((_BYTE *)this + 8) = 0;
      *((_BYTE *)this + 64) = 0;
      *(_BYTE *)(*((_QWORD *)this + 13) + 64LL) = 1;
    }

    __n128 __fastcall Modal::updateCoordinate(DisplayObject **this)
    {
      __int64 Instance; // x0
      AllianceStreamMessage *StageWidth; // x0
      float v4; // s8
      __int64 v5; // x0
      int v6; // w0
      float v7; // s9
    
      Instance = GameMain::getInstance((AllianceStreamMessage *)this);
      StageWidth = (AllianceStreamMessage *)GameMain::getStageWidth(Instance);
      v4 = (float)(int)StageWidth;
      v5 = GameMain::getInstance(StageWidth);
      GameMain::getStageHeight(v5);
      v7 = (float)v6;
      DisplayObject::setSize(*(this + 13), v4 + 1.0, (float)v6 + 1.0);
      return DisplayObject::setPixelSnappedXY((DisplayObject *)this, v4 * 0.5, v7 * 0.5);
    }

    // attributes: thunk
    void __fastcall Modal::Modal(Modal *this, MatchmakeFailedMessage *a2)
    {
      __ZN5ModalC2EP9PopupBase(this, a2);
    }

    void __fastcall Modal::~Modal(LogicComponent *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_1004668A0;
      v2 = *((_QWORD *)this + 13);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_BYTE *)this + 122) = 0;
      *((_WORD *)this + 60) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 12) = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall Modal::~Modal(LogicComponent *this)
    {
      __ZN5ModalD2Ev(this);
    }

    void __fastcall Modal::~Modal(LogicComponent *this)
    {
      Modal::~Modal(this);
      operator delete(this);
    }

    __int64 __fastcall Modal::update(__int64 this, int a2, float a3, char a4)
    {
      float v4; // s1
      float v5; // s0
    
      if ( *(_BYTE *)(this + 120) )
      {
        *(_BYTE *)(this + 8) = 0;
      }
      else
      {
        *(_BYTE *)(this + 122) = a4;
        if ( a2 )
        {
          *(_BYTE *)(this + 121) = 1;
          *(_BYTE *)(this + 64) = 1;
          v4 = *(float *)(this + 112);
          *(float *)(this + 116) = *(float *)(this + 116) + a3;
          v5 = v4 + a3;
          if ( v5 >= 0.0 )
            v5 = 0.0;
        }
        else
        {
          *(_DWORD *)(this + 116) = 0;
          *(_BYTE *)(this + 121) = 0;
          *(_BYTE *)(this + 64) = 0;
          v5 = *(float *)(this + 112) - a3;
          if ( v5 <= 0.0 )
            v5 = 0.0;
        }
        *(float *)(this + 112) = v5;
        *(_BYTE *)(this + 8) = a2;
        return (*(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)this + 80LL))(this, 1.0);
      }
      return this;
    }

    __int64 __fastcall Modal::touchReleased(__int64 a1, __int64 a2)
    {
      int isTouchIn; // w20
      __int64 result; // x0
      __int64 v6; // x0
      void (*v7)(void); // x8
      BadgePopup *Instance; // x0
      __int64 TopPopup; // x0
    
      isTouchIn = Sprite::isTouchIn(a1, *(unsigned int *)(a2 + 76));
      Sprite::touchReleased(a1, a2);
      result = 0;
      if ( *(_BYTE *)(a1 + 122) && ((isTouchIn ^ 1) & 1) == 0 )
      {
        if ( !*(_BYTE *)(a1 + 121) || *(float *)(a1 + 112) < 0.0 || !*(_BYTE *)(a1 + 8) )
          return 0;
        v6 = *(_QWORD *)(a1 + 96);
        if ( v6 )
        {
          v7 = *(void (**)(void))(*(_QWORD *)v6 + 432LL);
        }
        else
        {
          Instance = (BadgePopup *)GUI::getInstance(0);
          TopPopup = GUI::getTopPopup(Instance);
          if ( !TopPopup )
            return 1;
          v7 = *(void (**)(void))(*(_QWORD *)TopPopup + 352LL);
        }
        v7();
        return 1;
      }
      return result;
    }

}; // end class Modal
