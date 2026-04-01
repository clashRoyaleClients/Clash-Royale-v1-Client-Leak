class ScrollArea
{
public:

    __int64 __fastcall ScrollArea::isScrollArea(InStream *this)
    {
      return 1;
    }

    __int64 __fastcall ScrollArea::ScrollArea(__int64 a1, __int16 a2, float a3, float a4)
    {
      Rect *v8; // x22
      __int64 v9; // x22
      long double v10; // q2
      long double v11; // q3
      long double v12; // q4
      Sprite *v13; // x22
    
      Sprite::Sprite((Sprite *)a1, 1);
      *(_QWORD *)a1 = off_1004761C8;
      DragHandler::DragHandler((_QWORD *)(a1 + 128));
      *(_BYTE *)(a1 + 498) = 0;
      *(_BYTE *)(a1 + 501) = 1;
      *(_BYTE *)(a1 + 502) = 1;
      *(_BYTE *)(a1 + 497) = 1;
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_BYTE *)(a1 + 496) = 0;
      *(_BYTE *)(a1 + 499) = 0;
      *(_BYTE *)(a1 + 500) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      v8 = (Rect *)operator new(16);
      Rect::Rect(v8);
      *(_QWORD *)(a1 + 104) = v8;
      *(float *)(a1 + 92) = a3;
      *(float *)(a1 + 96) = a4;
      *(_BYTE *)(a1 + 64) = 1;
      v9 = operator new(16);
      Rect::Rect((Rect *)v9);
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0;
      *(float *)(v9 + 8) = a3;
      *(float *)(v9 + 12) = a4;
      Sprite::setHitArea((OutOfSyncMessage *)a1, (DataLoaderFlash *)v9);
      LODWORD(v10) = *(_DWORD *)(a1 + 92);
      LODWORD(v11) = *(_DWORD *)(a1 + 96);
      LODWORD(v12) = 1.0;
      DragHandler::init(
        a1 + 128,
        COERCE_LONG_DOUBLE((unsigned __int128)0),
        COERCE_LONG_DOUBLE((unsigned __int128)0),
        v10,
        v11,
        v12,
        v12);
      v13 = (Sprite *)operator new(96);
      Sprite::Sprite(v13, a2);
      *(_QWORD *)(a1 + 112) = v13;
      *((_BYTE *)v13 + 64) = 1;
      (*(void (__fastcall **)(__int64, Sprite *))(*(_QWORD *)a1 + 160LL))(a1, v13);
      ScrollArea::updateBounds((ScrollArea *)a1);
      return a1;
    }

    __int64 __fastcall ScrollArea::updateBounds(__int64 a1)
    {
      Rect *Bounds; // x0
      float **v3; // x20
      long double Width; // q0
      long double Height; // q0
      float *v6; // x8
      float v7; // s1
      float v8; // s1
      float *v9; // x8
      float v10; // s1
      float v11; // s1
      long double v12; // q0
      long double v13; // q8
      long double v14; // q0
      long double v15; // q2
      long double v16; // q3
      long double v17; // q4
      long double v18; // q5
    
      if ( *(_BYTE *)(a1 + 498) )
      {
        v3 = (float **)(a1 + 104);
        Bounds = *(Rect **)(a1 + 104);
      }
      else
      {
        v3 = (float **)(a1 + 104);
        Bounds = DisplayObject::getBounds(*(_QWORD *)(a1 + 112), 0, *(Rect **)(a1 + 104));
        *v3 = (float *)Bounds;
      }
      Width = Rect::getWidth(Bounds);
      *(_DWORD *)(a1 + 120) = LODWORD(Width);
      Height = Rect::getHeight(*(_QWORD *)(a1 + 104));
      *(_DWORD *)(a1 + 124) = LODWORD(Height);
      if ( *(_BYTE *)(a1 + 499) )
      {
        v6 = *v3;
        v7 = **v3;
        if ( v7 > 0.0 )
          *(float *)(a1 + 120) = v7 + *(float *)(a1 + 120);
        v8 = v6[1];
        if ( v8 > 0.0 )
        {
          *(float *)&Height = v8 + *(float *)&Height;
          *(_DWORD *)(a1 + 124) = LODWORD(Height);
        }
      }
      if ( *(_BYTE *)(a1 + 500) )
      {
        v9 = *v3;
        v10 = **v3;
        if ( v10 > 0.0 )
          *(float *)(a1 + 120) = v10 + *(float *)(a1 + 120);
        v11 = v9[1];
        if ( v11 > 0.0 )
          *(float *)(a1 + 124) = v11 + *(float *)&Height;
      }
      *(float *)&v12 = DragHandler::getX((float *)(a1 + 128));
      v13 = v12;
      *(float *)&v14 = DragHandler::getY((float *)(a1 + 128));
      LODWORD(v15) = *(_DWORD *)(a1 + 92);
      LODWORD(v16) = *(_DWORD *)(a1 + 96);
      LODWORD(v17) = *(_DWORD *)(a1 + 120);
      LODWORD(v18) = *(_DWORD *)(a1 + 124);
      DragHandler::init(a1 + 128, v13, v14, v15, v16, v17, v18);
      return ScrollArea::updatePosition((InStream *)a1);
    }

    void __fastcall ScrollArea::ScrollArea(ScrollArea *this, float a2, float a3, __int16 a4)
    {
      ScrollArea::ScrollArea((__int64)this, a4, a2, a3);
    }

    void __fastcall ScrollArea::~ScrollArea(InStream *this)
    {
      __int64 v2; // x0
      void *v3; // x20
    
      *(_QWORD *)this = off_1004761C8;
      v2 = *((_QWORD *)this + 14);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = (void *)*((_QWORD *)this + 13);
      if ( v3 )
      {
        Rect::~Rect(*((Rect **)this + 13));
        operator delete(v3);
      }
      *((_BYTE *)this + 498) = 0;
      *((_BYTE *)this + 501) = 1;
      *((_BYTE *)this + 502) = 1;
      *((_BYTE *)this + 497) = 1;
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 24) = 0;
      *((_BYTE *)this + 496) = 0;
      *((_BYTE *)this + 499) = 0;
      *((_BYTE *)this + 500) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 13) = 0;
      DragHandler::~DragHandler((InStream *)((char *)this + 128));
      Sprite::~Sprite(this);
    }

    void __fastcall ScrollArea::~ScrollArea(InStream *this)
    {
      ScrollArea::~ScrollArea(this);
    }

    void __fastcall ScrollArea::~ScrollArea(InStream *this)
    {
      ScrollArea::~ScrollArea(this);
      operator delete(this);
    }

    __int64 __fastcall ScrollArea::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      DragHandler::touchReleased(a1 + 128, a2);
      return 0;
    }

    __int64 __fastcall ScrollArea::cancelAllTouches(InStream *this)
    {
      Sprite::cancelAllTouches(this);
      return DragHandler::cancelAllTouches((__int64)this + 128);
    }

    __int64 __fastcall ScrollArea::touchMoved(__int64 a1, int *a2)
    {
      Sprite::touchMoved(a1, a2);
      DragHandler::touchMoved(a1 + 128, a2);
      return 0;
    }

    __int64 __fastcall ScrollArea::addContent(InStream *this, Multitouch *a2)
    {
      (*(void (__fastcall **)(_QWORD, Multitouch *))(**((_QWORD **)this + 14) + 160LL))(*((_QWORD *)this + 14), a2);
      return ScrollArea::updateBounds((__int64)this);
    }

    __int64 __fastcall ScrollArea::removeAllContent(OutOfSyncMessage **this)
    {
      Sprite::removeAllChildren(*(this + 14));
      return ScrollArea::updateBounds((__int64)this);
    }

    __int64 __fastcall ScrollArea::touchCancelled(InStream *this, int a2)
    {
      Sprite::touchCancelled(this, a2);
      return DragHandler::touchCancelled((__int64)this + 128, a2);
    }

    __int64 __fastcall ScrollArea::touchPressed(__int64 a1, int *a2)
    {
      Sprite::touchPressed(a1, a2);
      DragHandler::touchPressed((_BYTE *)(a1 + 128), a2);
      return 0;
    }

    __int64 __fastcall ScrollArea::update(InStream *this, long double a2)
    {
      char *v3; // x20
      __int64 v4; // x22
      int v5; // w21
      Stage *isTouchUsedForPanOrPinch; // x0
      Stage *Instance; // x0
      _QWORD *i; // x21
    
      v3 = (char *)this + 128;
      if ( (unsigned int)DragHandler::update((__int64)this + 128, a2) && *((_BYTE *)this + 497) && *((int *)this + 34) >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *((_DWORD *)this + v4 + 35);
          isTouchUsedForPanOrPinch = (Stage *)DragHandler::isTouchUsedForPanOrPinch((__int64)v3);
          if ( (_DWORD)isTouchUsedForPanOrPinch )
          {
            Instance = (Stage *)Stage::getInstance(isTouchUsedForPanOrPinch);
            Stage::displayObjectCapturedTouch(Instance, v5, this);
            for ( i = (_QWORD *)*((_QWORD *)this + 6); i; i = (_QWORD *)i[6] )
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD *))(*i + 240LL))(i) )
                (*(void (__fastcall **)(_QWORD *))(*i + 248LL))(i);
            }
          }
          ++v4;
        }
        while ( v4 < *((int *)this + 34) );
      }
      return ScrollArea::updatePosition(this);
    }

    __int64 __fastcall ScrollArea::updatePosition(InStream *this)
    {
      long double v1; // q8
      float *v3; // x20
      float v4; // s9
      float v5; // s1
      float v6; // s0
      __int64 v7; // x0
      float v10; // [xsp+8h] [xbp-28h] BYREF
      float v11; // [xsp+Ch] [xbp-24h] BYREF
    
      v3 = (float *)((char *)this + 128);
      if ( *((_BYTE *)this + 486) )
      {
        v10 = 0.0;
        v11 = 0.0;
        DisplayObject::localToGlobal(this, &v11, &v10, 0.0, 0.0);
        DragHandler::setScreenCoord((__int64)v3, v11, v10);
      }
      LODWORD(v1) = *((_DWORD *)this + 106);
      v4 = -(float)(*(float *)&v1 * DragHandler::getX(v3));
      v5 = -(float)(*(float *)&v1 * DragHandler::getY(v3));
      if ( *((_BYTE *)this + 502) )
        v6 = v4;
      else
        v6 = 0.0;
      if ( !*((_BYTE *)this + 501) )
        v5 = 0.0;
      v7 = *((_QWORD *)this + 14);
      if ( *(float *)&v1 == 1.0 && *((_BYTE *)this + 491) == 0 )
        DisplayObject::setPixelSnappedXY(v7, v6, v5);
      else
        DisplayObject::setXY(v7, v6, v5);
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), v1);
    }

    __int64 __fastcall ScrollArea::enablePinching(InStream *this, char a2)
    {
      return DragHandler::enablePinching((__int64)this + 128, a2);
    }

    __int64 __fastcall ScrollArea::isPanning(InStream *this)
    {
      return *((unsigned __int8 *)this + 490);
    }

    __int64 __fastcall ScrollArea::enableVerticalDrag(__int64 this, char a2)
    {
      *(_BYTE *)(this + 501) = a2;
      *(_BYTE *)(this + 488) = a2;
      return this;
    }

    __int64 __fastcall ScrollArea::enableHorizontalDrag(__int64 this, char a2)
    {
      *(_BYTE *)(this + 502) = a2;
      *(_BYTE *)(this + 489) = a2;
      return this;
    }

    __int64 __fastcall ScrollArea::scrollTo(InStream *this, float a2, float a3, float a4, float a5)
    {
      return DragHandler::scrollTo((__int64)this + 128, a2, a3, a4, a5);
    }

    float __fastcall ScrollArea::getScale(InStream *this)
    {
      return *((float *)this + 106);
    }

    __int64 __fastcall ScrollArea::render(__int64 a1, __int64 a2, __int64 a3, __int64 a4, long double a5)
    {
      char v10; // w24
      float *Instance; // x23
      float v12; // s9
      float v13; // s10
      float v14; // s11
      float v15; // s12
      __int64 v16; // x20
    
      if ( !*(_BYTE *)(a1 + 496) )
        return Sprite::render(a1, a2, a3, a4, a5);
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 112) + 8LL);
      Instance = (float *)Stage::getInstance((Stage *)a1);
      if ( (unsigned int)Stage::isCalculatingBounds(Instance) )
        *(_BYTE *)(*(_QWORD *)(a1 + 112) + 8LL) = 0;
      v12 = Instance[15];
      v13 = Instance[16];
      v14 = Instance[17];
      v15 = Instance[18];
      ScrollArea::setClipping((ScrollArea *)a1);
      v16 = Sprite::render(a1, a2, a3, a4, a5);
      Stage::setClip((Stage *)Instance, v12, v13, v14, v15, 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 112) + 8LL) = v10;
      return v16;
    }

    __int64 __fastcall ScrollArea::setClipping(float *a1)
    {
      Stage *v2; // x0
      Stage *Instance; // x0
      float v5; // [xsp+0h] [xbp-20h] BYREF
      float v6; // [xsp+4h] [xbp-1Ch] BYREF
      float v7; // [xsp+8h] [xbp-18h] BYREF
      float v8; // [xsp+Ch] [xbp-14h] BYREF
    
      v7 = 0.0;
      v8 = 0.0;
      v5 = 0.0;
      v6 = 0.0;
      DisplayObject::localToGlobal((Stage *)a1, &v8, &v7, 0.0, 0.0);
      v2 = (Stage *)DisplayObject::localToGlobal((Stage *)a1, &v6, &v5, a1[23], a1[24]);
      Instance = (Stage *)Stage::getInstance(v2);
      return Stage::clipRect(Instance, v8, v7, v6, v5, 1);
    }

    __int64 __fastcall ScrollArea::collisionRender(Stage *a1, __int64 a2)
    {
      float *Instance; // x19
      float v5; // s9
      float v6; // s10
      float v7; // s8
      float v8; // s11
      __int64 v9; // x20
    
      if ( !*((_BYTE *)a1 + 496) )
        return Sprite::collisionRender(a1, a2);
      Instance = (float *)Stage::getInstance(a1);
      v5 = Instance[15];
      v6 = Instance[16];
      v8 = Instance[17];
      v7 = Instance[18];
      if ( (unsigned int)ScrollArea::setClipping((float *)a1) )
        v9 = Sprite::collisionRender(a1, a2);
      else
        v9 = 0;
      Stage::setClip((Stage *)Instance, v5, v6, v8, v7, 1);
      return v9;
    }

    __int64 __fastcall ScrollArea::setAlignment(InStream *this, int a2)
    {
      return DragHandler::setAlignment((__int64)this + 128, a2);
    }

    __int64 __fastcall ScrollArea::getDragHandler(InStream *this)
    {
      return (__int64)this + 128;
    }

    float __fastcall ScrollArea::getContentHeight(InStream *this)
    {
      return *((float *)this + 31);
    }

    __int64 __fastcall ScrollArea::setForcedContentBounds(__int64 a1, void *a2)
    {
      void *v4; // x21
      Rect *v5; // x20
    
      v4 = *(void **)(a1 + 104);
      if ( v4 != a2 )
      {
        if ( v4 )
        {
          Rect::~Rect(*(Rect **)(a1 + 104));
          operator delete(v4);
        }
        *(_QWORD *)(a1 + 104) = a2;
      }
      *(_BYTE *)(a1 + 498) = a2 != 0;
      if ( !a2 )
      {
        v5 = (Rect *)operator new(16);
        Rect::Rect(v5);
        *(_QWORD *)(a1 + 104) = v5;
      }
      return ScrollArea::updateBounds(a1);
    }

    __int64 __fastcall ScrollArea::getContentBounds(InStream *this)
    {
      return *((_QWORD *)this + 13);
    }

    float __fastcall ScrollArea::getXOffset(InStream *this)
    {
      return -DisplayObject::getX(*((_QWORD *)this + 14));
    }

    float __fastcall ScrollArea::getYOffset(InStream *this)
    {
      return -DisplayObject::getY(*((_QWORD *)this + 14));
    }

    __int64 __fastcall ScrollArea::setAreaHeight(__int64 this, float a2)
    {
      *(float *)(this + 96) = a2;
      return this;
    }

    __int64 __fastcall ScrollArea::addContentDontUpdateBounds(InStream *this, Multitouch *a2)
    {
      return (*(__int64 (__fastcall **)(_QWORD, Multitouch *))(**((_QWORD **)this + 14) + 160LL))(
               *((_QWORD *)this + 14),
               a2);
    }

}; // end class ScrollArea
