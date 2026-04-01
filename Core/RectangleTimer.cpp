class RectangleTimer
{
public:

    _QWORD *__fastcall RectangleTimer::RectangleTimer(_QWORD *a1)
    {
      Sprite *v2; // x21
      const char *v3; // x2
      #1262 ***MovieClipFromPool; // x20
      const ShapeDrawBitmapCommand *DrawCommandAt; // x21
      __int64 i; // x24
      __int64 v7; // x22
      long double v8; // q0
      ShapeDrawBitmapCommand *v9; // x23
      long double v10; // q0
      long double v11; // q1
      float v12; // s11
      long double v13; // q0
      MovieClip *v14; // x1
    
      Sprite::Sprite((Sprite *)a1, 1);
      *a1 = off_100468098;
      memset(a1 + 12, 0, 0x48u);
      v2 = (Sprite *)operator new(96);
      Sprite::Sprite(v2, 8);
      a1[20] = v2;
      (*(void (__fastcall **)(_QWORD *, Sprite *))(*a1 + 160LL))(a1, v2);
      MovieClipFromPool = (#1262 ***)ResourceManager::getMovieClipFromPool(
                                       (ResourceManager *)"sc/ui.sc",
                                       "gray_rectangle",
                                       v3);
      DrawCommandAt = (const ShapeDrawBitmapCommand *)Shape::getDrawCommandAt(*MovieClipFromPool[9], 0);
      for ( i = 0; i < 8; ++i )
      {
        v7 = operator new(80);
        Shape::Shape((#1262 *)v7, 1, 1);
        a1[i + 12] = v7;
        if ( i < 6 )
        {
          if ( i < 4 )
          {
            if ( i >= 2 )
            {
              *(_DWORD *)(v7 + 16) = 0;
              *(_DWORD *)(v7 + 20) = 1065353216;
              *(_QWORD *)(v7 + 24) = 3212836864LL;
              DisplayObject::setPixelSnappedXY((DisplayObject *)v7, 100.0, 100.0);
            }
          }
          else
          {
            *(_QWORD *)(v7 + 16) = 3212836864LL;
            *(_QWORD *)(v7 + 24) = 0xBF80000000000000LL;
            DisplayObject::setPixelSnappedXY((DisplayObject *)v7, 0.0, 200.0);
          }
        }
        else
        {
          *(_DWORD *)(v7 + 16) = 0;
          *(_DWORD *)(v7 + 20) = -1082130432;
          *(_QWORD *)(v7 + 24) = 1065353216;
          DisplayObject::setPixelSnappedXY((DisplayObject *)v7, -100.0, 100.0);
        }
        v8 = DisplayObject::getY(v7);
        DisplayObject::setY((DisplayObject *)v7, *(float *)&v8 + -100.0);
        v9 = (ShapeDrawBitmapCommand *)Shape::getDrawCommandAt((#1262 *)v7, 0);
        ShapeDrawBitmapCommand::copyValuesFrom(v9, DrawCommandAt);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[20] + 160LL))(a1[20], v7);
        LODWORD(v12) = COERCE_UNSIGNED_INT128(ShapeDrawBitmapCommand::getX(v9, 1, v10, v11));
        v13 = ShapeDrawBitmapCommand::getY(v9, 1);
        if ( (i & 1) != 0 )
          ShapeDrawBitmapCommand::setXY(v9, 0, v12, *(float *)&v13);
        else
          ShapeDrawBitmapCommand::setXY(v9, 3, v12, *(float *)&v13);
      }
      ResourceManager::putMovieClipToPool((ResourceManager *)MovieClipFromPool, v14);
      (*(void (__fastcall **)(_QWORD, float))(*(_QWORD *)a1[20] + 48LL))(a1[20], -1.0);
      return a1;
    }

    // attributes: thunk
    _QWORD *__fastcall RectangleTimer::RectangleTimer(_QWORD *a1)
    {
      return __ZN14RectangleTimerC2Ev(a1);
    }

    void __fastcall RectangleTimer::~RectangleTimer(_QWORD *a1)
    {
      __int64 v2; // x20
      _QWORD *v3; // x21
      __int64 v4; // x0
      __int64 v5; // x8
      __int64 v6; // x0
    
      v2 = 0;
      *a1 = off_100468098;
      do
      {
        v3 = &a1[v2];
        Shape::destructOriginal((#1262 *)v3[19]);
        v4 = v3[19];
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        v3[19] = 0;
        v5 = v2 + 7;
        --v2;
      }
      while ( v5 > 0 );
      v6 = a1[20];
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      memset(a1 + 12, 0, 0x48u);
      Sprite::~Sprite((Sprite *)a1);
    }

    // attributes: thunk
    void __fastcall RectangleTimer::~RectangleTimer(_QWORD *a1)
    {
      __ZN14RectangleTimerD2Ev(a1);
    }

    void __fastcall RectangleTimer::~RectangleTimer(_QWORD *a1)
    {
      RectangleTimer::~RectangleTimer(a1);
      operator delete(a1);
    }

    void __fastcall RectangleTimer::update(__int64 a1, float a2)
    {
      __int64 v2; // x20
      float v3; // s9
      __int64 v4; // x21
      float v5; // s0
      __int64 v6; // x0
      float v7; // s0
      float v8; // s13
      __int64 DrawCommandAt; // x0
      long double v10; // q0
      long double v11; // q1
      ShapeDrawBitmapCommand *v12; // x19
      long double v13; // q0
      float v14; // s8
      long double v15; // q0
      float v16; // s1
      int v17; // w1
      long double v18; // q0
    
      v2 = 0;
      v3 = 1.0 - a2;
      v4 = a1 + 96;
      do
      {
        v5 = (float)(int)v2 * 0.125;
        v6 = *(_QWORD *)(v4 + 8 * v2);
        if ( v3 <= v5 )
        {
          *(_BYTE *)(v6 + 8) = 0;
        }
        else
        {
          *(_BYTE *)(v6 + 8) = 1;
          v7 = v3 - v5;
          if ( v7 <= 0.125 )
            v8 = v7;
          else
            v8 = 0.125;
          DrawCommandAt = Shape::getDrawCommandAt((#1262 *)v6, 0);
          v12 = (ShapeDrawBitmapCommand *)DrawCommandAt;
          if ( (v2 & 1) != 0 )
          {
            LODWORD(v14) = COERCE_UNSIGNED_INT128(ShapeDrawBitmapCommand::getX(DrawCommandAt, 2, v10, v11));
            v18 = ShapeDrawBitmapCommand::getY(v12, 2);
            v16 = (float)((float)(v8 * 100.0) * 8.0) + *(float *)&v18;
            v17 = 3;
          }
          else
          {
            v13 = ShapeDrawBitmapCommand::getX(DrawCommandAt, 0, v10, v11);
            v14 = (float)((float)(v8 * 100.0) * 8.0) + *(float *)&v13;
            v15 = ShapeDrawBitmapCommand::getY(v12, 0);
            v16 = *(float *)&v15;
            v17 = 2;
          }
          ShapeDrawBitmapCommand::setXY(v12, v17, v14, v16);
        }
        ++v2;
      }
      while ( v2 != 8 );
    }

}; // end class RectangleTimer
