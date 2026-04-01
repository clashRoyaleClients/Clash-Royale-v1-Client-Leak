class Popover
{
public:

    _QWORD *__fastcall Popover::initializeMovieClips(MiniTimer *this)
    {
      const String *v2; // x2
      Sprite *v3; // x20
      long double v4; // q0
      _QWORD *result; // x0
      String v6; // [xsp+0h] [xbp-40h] BYREF
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v7, "sc/ui.sc");
      String::String(&v6, "popover");
      *((_QWORD *)this + 12) = HomeScreen::getMovieClip((HomeScreen *)&v7, &v6, v2);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(MiniTimer *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 12));
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 104LL))(*((_QWORD *)this + 12), 1);
      *((_QWORD *)this + 13) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "topLeft");
      *((_QWORD *)this + 14) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "topRight");
      *((_QWORD *)this + 15) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "top");
      *((_QWORD *)this + 16) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "left");
      *((_QWORD *)this + 17) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "right");
      *((_QWORD *)this + 18) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "bottom");
      *((_QWORD *)this + 19) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "bottomLeft");
      *((_QWORD *)this + 20) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "bottomRight");
      *((_QWORD *)this + 21) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "fill");
      *((_QWORD *)this + 22) = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "tail");
      v3 = (Sprite *)operator new(96);
      Sprite::Sprite(v3, 1);
      *((_QWORD *)this + 24) = v3;
      *(__n128 *)&v4 = DisplayObject::setXY(v3, 0.0, 0.0);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 12) + 160LL))(
        *((_QWORD *)this + 12),
        *((_QWORD *)this + 24),
        v4);
      (*(void (__fastcall **)(MiniTimer *, __int64))(*(_QWORD *)this + 104LL))(this, 1);
      result = (_QWORD *)operator new(8);
      *result = off_100470BA0;
      *((_QWORD *)this + 23) = result;
      return result;
    }

    __n128 __fastcall Popover::setPosition(MiniTimer *this, __n128 result, float a3)
    {
      *((_DWORD *)this + 50) = result.n128_u32[0];
      *((float *)this + 51) = a3;
      switch ( *((_DWORD *)this + 55) )
      {
        case 0:
          a3 = a3 - *((float *)this + 54);
          goto LABEL_3;
        case 1:
          result.n128_f32[0] = result.n128_f32[0] - *((float *)this + 54);
          goto LABEL_3;
        case 2:
          a3 = *((float *)this + 54) + a3;
          goto LABEL_3;
        case 3:
          result.n128_f32[0] = *((float *)this + 54) + result.n128_f32[0];
    LABEL_3:
          result = DisplayObject::setPixelSnappedXY(this, result.n128_f32[0], a3);
          break;
        default:
          return result;
      }
      return result;
    }

    __int64 __fastcall Popover::setAlignment(__int64 this, int a2)
    {
      *(_DWORD *)(this + 220) = a2;
      return this;
    }

    void __fastcall Popover::Popover(Popover *this, char a2, int a3)
    {
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_100469AD8;
      memset((char *)this + 104, 0, 0x50u);
      *((_DWORD *)this + 52) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_DWORD *)this + 53) = 1098907648;
      *((_BYTE *)this + 272) = 0;
      *((_DWORD *)this + 54) = 0;
      *((_DWORD *)this + 55) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_BYTE *)this + 273) = 0;
      *((_DWORD *)this + 69) = a3;
      *((_BYTE *)this + 274) = a2;
      Popover::initializeMovieClips(this);
    }

    // attributes: thunk
    void __fastcall Popover::Popover(Popover *this, char a2, int a3)
    {
      __ZN7PopoverC2Ebi(this, a2, a3);
    }

    void __fastcall Popover::~Popover(MiniTimer *this)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x10
      unsigned int v5; // w20
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      void *v10; // x0
      void *v11; // x0
    
      *(_QWORD *)this = off_100469AD8;
      v2 = *((_QWORD *)this + 28);
      v3 = *((_QWORD *)this + 29);
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          v6 = *(_QWORD *)(v2 + 8 * v4);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
            v2 = *((_QWORD *)this + 28);
            v3 = *((_QWORD *)this + 29);
          }
          v4 = v5++;
        }
        while ( v4 < (v3 - v2) >> 3 );
      }
      v7 = *((_QWORD *)this + 24);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = *((_QWORD *)this + 12);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = *((_QWORD *)this + 23);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      memset((char *)this + 104, 0, 0x50u);
      *((_DWORD *)this + 52) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_DWORD *)this + 53) = 1098907648;
      *((_BYTE *)this + 272) = 0;
      *((_DWORD *)this + 55) = 0;
      *((_BYTE *)this + 274) = 0;
      *((_DWORD *)this + 54) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_BYTE *)this + 273) = 0;
      *((_DWORD *)this + 69) = -1;
      v10 = (void *)*((_QWORD *)this + 31);
      if ( v10 )
        operator delete(v10);
      v11 = (void *)*((_QWORD *)this + 28);
      if ( v11 )
        operator delete(v11);
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall Popover::~Popover(MiniTimer *this)
    {
      __ZN7PopoverD2Ev(this);
    }

    void __fastcall Popover::~Popover(MiniTimer *this)
    {
      Popover::~Popover(this);
      operator delete(this);
    }

    __int64 __fastcall Popover::resize(DisplayObject **this, float a2, float a3)
    {
      DisplayObject::setXY(*(this + 22), 0.0, 0.0);
      DisplayObject::setX(*(this + 21), 0.0);
      DisplayObject::setY(*(this + 21), (float)((float)-*((float *)this + 53) - (float)(a3 * 0.5)) - *((float *)this + 53));
      DisplayObject::setWidth(*(this + 21), a2);
      DisplayObject::setHeight(*(this + 21), a3);
      DisplayObject::setX(*(this + 18), 0.0);
      DisplayObject::setY(*(this + 18), -*((float *)this + 53));
      DisplayObject::setWidth(*(this + 18), a2);
      DisplayObject::setX(*(this + 16), (float)(a2 * -0.5) - *((float *)this + 53));
      DisplayObject::setY(*(this + 16), (float)((float)-*((float *)this + 53) - (float)(a3 * 0.5)) - *((float *)this + 53));
      DisplayObject::setHeight(*(this + 16), a3);
      DisplayObject::setX(*(this + 17), (float)(a2 * 0.5) + *((float *)this + 53));
      DisplayObject::setY(*(this + 17), (float)((float)-*((float *)this + 53) - (float)(a3 * 0.5)) - *((float *)this + 53));
      DisplayObject::setHeight(*(this + 17), a3);
      DisplayObject::setX(*(this + 15), 0.0);
      DisplayObject::setY(
        *(this + 15),
        (float)((float)((float)-*((float *)this + 53) - a3) - *((float *)this + 53)) - *((float *)this + 53));
      DisplayObject::setWidth(*(this + 15), a2);
      DisplayObject::setX(*(this + 19), (float)(a2 * -0.5) - *((float *)this + 53));
      DisplayObject::setY(*(this + 19), -*((float *)this + 53));
      DisplayObject::setX(*(this + 20), (float)(a2 * 0.5) + *((float *)this + 53));
      DisplayObject::setY(*(this + 20), -*((float *)this + 53));
      DisplayObject::setX(*(this + 13), (float)(a2 * -0.5) - *((float *)this + 53));
      DisplayObject::setY(
        *(this + 13),
        (float)((float)((float)-*((float *)this + 53) - a3) - *((float *)this + 53)) - *((float *)this + 53));
      DisplayObject::setX(*(this + 14), (float)(a2 * 0.5) + *((float *)this + 53));
      return DisplayObject::setY(
               *(this + 14),
               (float)((float)((float)-*((float *)this + 53) - a3) - *((float *)this + 53)) - *((float *)this + 53));
    }

    __int64 __fastcall Popover::update(MiniTimer *this, float a2)
    {
      float v3; // s0
      float v4; // s2
      float v5; // s3
      float v6; // s0
      long double v7; // q2
      Stage *GlobalBounds; // x0
      Stage *Instance; // x0
      int v10; // w20
      int v11; // w21
      float v12; // s8
      float v13; // s12
      int v14; // w8
      float v15; // s10
      long double v16; // q0
      long double v17; // q0
      float v18; // s9
      long double v19; // q0
      float v20; // s9
      DisplayObject *v21; // x20
      long double v22; // q0
      float v23; // s9
      long double v24; // q0
      float v25; // s8
      DisplayObject *v26; // x20
      long double v27; // q0
      float v28; // s8
      float v29; // s9
      long double v30; // q0
      float v31; // s1
      int v32; // w8
      float v33; // s3
      float v34; // s2
      float v35; // s3
      float v36; // s10
      float v37; // s0
      long double v38; // q0
      float v39; // s10
      #1249 *v40; // x20
      long double v41; // q0
      float v42; // s10
      long double v43; // q0
      float v44; // s8
      #1249 *v45; // x20
      long double v46; // q0
      float v47; // s8
      float v48; // s10
      long double v49; // q0
      float v50; // s1
      int v51; // w8
      int v52; // w20
      long double v53; // q0
      int v54; // w8
      float v55; // s8
      #1249 *v56; // x20
      long double v57; // q0
      long double v59; // q0
      Rect v60; // [xsp+0h] [xbp-60h] BYREF
      float v61; // [xsp+8h] [xbp-58h]
      float v62; // [xsp+Ch] [xbp-54h]
    
      v3 = a2 * 6.0;
      v4 = *((float *)this + 52);
      v5 = v3 + v4;
      v6 = v4 - v3;
      if ( !*((_BYTE *)this + 272) )
        v6 = v5;
      if ( v6 > 1.0 )
        v6 = 1.0;
      *((float *)this + 52) = v6;
      (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 12) + 80LL))(
        *((_QWORD *)this + 12),
        (float)(v6 * 10.0) / 6.0);
      if ( *((_BYTE *)this + 273) )
      {
        Popover::rotateToAlignment(this);
        Rect::Rect(&v60);
        GlobalBounds = (Stage *)DisplayObject::getGlobalBounds(this, &v60);
        if ( *((_BYTE *)this + 274) )
        {
          Instance = (Stage *)Stage::getInstance(GlobalBounds);
          v10 = *((_DWORD *)Instance + 108);
          v11 = *(_DWORD *)(Stage::getInstance(Instance) + 428LL);
          v12 = *((float *)this + 53) * 0.5;
          if ( !*((_DWORD *)this + 55) && *(float *)&v60.bottom < (float)-v12 )
          {
            *((_DWORD *)this + 55) = 2;
            DisplayObject::setXY(*((DisplayObject **)this + 24), 0.0, 0.0);
            Popover::rotateToAlignment(this);
            DisplayObject::getGlobalBounds(this, &v60);
            if ( v62 > (float)((float)v10 + v12) )
            {
              *((_DWORD *)this + 55) = 3;
              DisplayObject::setXY(*((DisplayObject **)this + 24), 0.0, 0.0);
              Popover::rotateToAlignment(this);
              DisplayObject::getGlobalBounds(this, &v60);
              if ( v61 > (float)((float)v11 + v12) )
              {
                *((_DWORD *)this + 55) = 1;
                DisplayObject::setXY(*((DisplayObject **)this + 24), 0.0, 0.0);
                Popover::rotateToAlignment(this);
                DisplayObject::getGlobalBounds(this, &v60);
                v13 = *(float *)&v60.top;
                if ( *(float *)&v60.top < (float)-v12 )
                {
                  if ( v11 >= 0 )
                    v14 = v11;
                  else
                    v14 = v11 + 1;
                  if ( *((float *)this + 50) >= (float)(v14 >> 1) )
                  {
                    v17 = DisplayObject::getX(this);
                    DisplayObject::setX(this, *(float *)&v17 - (float)(v12 + v13));
                  }
                  else
                  {
                    *((_DWORD *)this + 55) = 3;
                    DisplayObject::setXY(*((DisplayObject **)this + 24), 0.0, 0.0);
                    Popover::rotateToAlignment(this);
                    DisplayObject::getGlobalBounds(this, &v60);
                    v15 = v61;
                    v16 = DisplayObject::getX(this);
                    DisplayObject::setX(this, *(float *)&v16 + (float)(v12 + (float)((float)v11 - v15)));
                  }
                }
              }
            }
          }
          if ( (*((_DWORD *)this + 55) & 0xFFFFFFFD) != 0 )
          {
            v18 = v62;
            if ( v62 > (float)v10 )
            {
              v19 = DisplayObject::getY(this);
              v20 = (float)(v18 - (float)v10) - v12;
              DisplayObject::setY(this, *(float *)&v19 - v20);
              v21 = (DisplayObject *)*((_QWORD *)this + 22);
              v22 = DisplayObject::getY(v21);
              DisplayObject::setY(v21, v20 + *(float *)&v22);
            }
            v23 = *(float *)&v60.bottom;
            if ( *(float *)&v60.bottom < 0.0 )
            {
              v24 = DisplayObject::getY(this);
              v25 = v12 + v23;
              DisplayObject::setY(this, *(float *)&v24 - v25);
              v26 = (DisplayObject *)*((_QWORD *)this + 22);
              v27 = DisplayObject::getY(v26);
              DisplayObject::setY(v26, v25 + *(float *)&v27);
            }
            v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(&v60)));
            v29 = *((float *)this + 53);
            v30 = DisplayObject::getY(*((_QWORD *)this + 22));
            v31 = v29 + v29;
            v32 = (int)*(float *)&v30;
            v33 = v28 - (float)(v29 + v29);
            if ( (int)*(float *)&v30 < 0 )
              v32 = -v32;
            v34 = (float)v32;
            if ( (float)v32 <= v33 )
              v35 = 0.0;
            else
              v35 = v34 - v33;
            if ( v34 < v31 )
              v35 = v34 - v31;
            DisplayObject::setY(*((DisplayObject **)this + 22), *(float *)&v30 + v35);
          }
          else
          {
            v36 = *(float *)&v60.top;
            v37 = *((float *)this + 53);
            if ( *(float *)&v60.top < (float)-v37 )
            {
              v38 = DisplayObject::getX(this);
              v39 = v12 + v36;
              DisplayObject::setX(this, *(float *)&v38 - v39);
              v40 = (#1249 *)*((_QWORD *)this + 22);
              v41 = DisplayObject::getX(v40);
              DisplayObject::setX(v40, v39 + *(float *)&v41);
              v37 = *((float *)this + 53);
            }
            v42 = (float)v11 - v61;
            if ( v42 < v37 )
            {
              v43 = DisplayObject::getX(this);
              v44 = v12 + v42;
              DisplayObject::setX(this, v44 + *(float *)&v43);
              v45 = (#1249 *)*((_QWORD *)this + 22);
              v46 = DisplayObject::getX(v45);
              DisplayObject::setX(v45, *(float *)&v46 - v44);
            }
            v47 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v60)));
            v48 = *((float *)this + 53);
            v49 = DisplayObject::getX(*((_QWORD *)this + 22));
            v50 = (float)(v47 * 0.5) + (float)(v48 * -3.0);
            v51 = (int)*(float *)&v49;
            if ( (int)*(float *)&v49 < 0 )
              v51 = -v51;
            if ( (int)v50 >= 0 )
              v52 = (int)v50;
            else
              v52 = -(int)v50;
            if ( v51 > v52 )
            {
              v53 = DisplayObject::getX(*((_QWORD *)this + 22));
              v54 = (int)*(float *)&v53;
              if ( (int)*(float *)&v53 < 0 )
                v54 = -v54;
              v55 = (float)(v54 - v52);
              v56 = (#1249 *)*((_QWORD *)this + 22);
              if ( *(float *)&v53 >= 0.0 )
              {
                v59 = DisplayObject::getX(*((_QWORD *)this + 22));
                DisplayObject::setX(v56, *(float *)&v59 - v55);
              }
              else
              {
                v57 = DisplayObject::getX(*((_QWORD *)this + 22));
                DisplayObject::setX(v56, v55 + *(float *)&v57);
              }
            }
          }
        }
        Rect::~Rect(&v60);
      }
      LODWORD(v7) = 1.0;
      (*(void (__fastcall **)(_QWORD, float, long double, float, long double))(**((_QWORD **)this + 23) + 24LL))(
        *((_QWORD *)this + 23),
        *((float *)this + 52),
        COERCE_LONG_DOUBLE((unsigned __int128)0),
        1.0,
        v7);
      return (*(__int64 (__fastcall **)(MiniTimer *))(*(_QWORD *)this + 40LL))(this);
    }

    void __fastcall Popover::rotateToAlignment(MiniTimer *this)
    {
      long double v2; // q0
      float v3; // s0
      float v4; // s0
      float v5; // s8
      float v6; // s0
      float v7; // s0
      float v8; // s9
      DisplayObject *v9; // x20
      long double v10; // q0
      DisplayObject *v11; // x20
      float MidX; // s10
      float v13; // s11
      long double MidY; // q0
      float v15; // s10
      long double v16; // q0
      DisplayObject *v17; // x20
      float v18; // s8
      long double v19; // q0
      __n128 v20; // q0
      DisplayObject *v21; // x20
      long double v22; // q0
      long double v23; // q0
      DisplayObject *v24; // x20
      float v25; // s0
      __n128 v26; // q0
      DisplayObject *v27; // x20
      float v28; // s10
      float v29; // s12
      long double v30; // q0
      float v31; // s10
      long double v32; // q0
      DisplayObject *v33; // x20
      float v34; // s8
      long double v35; // q0
      __n128 v36; // q0
      Rect v37[2]; // [xsp+0h] [xbp-50h] BYREF
    
      Rect::Rect(v37);
      *(__n128 *)&v2 = DisplayObject::getBounds(*((_QWORD *)this + 24), *((_QWORD *)this + 12), v37);
      v3 = (*(float (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 24) + 88LL))(*((_QWORD *)this + 24), v2);
      Popover::getTextFieldWidths(this, *((OutOfSyncMessage **)this + 24), v3);
      v5 = v4;
      v6 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 96LL))(*((_QWORD *)this + 24));
      Popover::getTextFieldHeights(this, *((OutOfSyncMessage **)this + 24), v6);
      v8 = v7;
      Popover::resize((DisplayObject **)this, v5, v7);
      switch ( *((_DWORD *)this + 55) )
      {
        case 0:
          v9 = (DisplayObject *)*((_QWORD *)this + 22);
          v10 = DisplayObject::getY(v9);
          DisplayObject::setY(v9, *(float *)&v10 + -1.0);
          DisplayObject::setXY(
            *((DisplayObject **)this + 24),
            (float)(v5 * -0.5) - *(float *)&v37[0].top,
            (float)(*((float *)this + 53) * -2.0) - v8);
          break;
        case 1:
          DisplayObject::rotate(*((DisplayObject **)this + 22), -90.0);
          v11 = (DisplayObject *)*((_QWORD *)this + 22);
          MidX = Rect::getMidX(v37);
          v13 = *((float *)this + 53);
          MidY = Rect::getMidY(v37);
          DisplayObject::setXY(
            v11,
            (float)(MidX + (float)(v13 + v13)) + -1.0,
            (float)-*(float *)&MidY - (float)(*((float *)this + 53) + *((float *)this + 53)));
          v15 = v5 * -0.5;
          *(__n128 *)&v16 = DisplayObject::setXY(
                              (DisplayObject *)*((_QWORD *)this + 24),
                              (float)(v5 * -0.5) - *(float *)&v37[0].top,
                              (float)((float)-*(float *)&v37[0].bottom - v8) + (float)(*((float *)this + 53) * -2.0));
          v17 = (DisplayObject *)*((_QWORD *)this + 12);
          v18 = COERCE_FLOAT(
                  COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(_QWORD, long double))*(_QWORD *)(**((_QWORD **)this + 22) + 96LL))(
                      *((_QWORD *)this + 22),
                      v16)));
          v19 = Rect::getMidY(v37);
          v20 = DisplayObject::setXY(
                  v17,
                  v15 - v18,
                  *(float *)&v19 + (float)(*((float *)this + 53) + *((float *)this + 53)));
          v20.n128_u32[0] = *((_DWORD *)this + 50);
          Popover::setPosition(this, v20, *((float *)this + 51));
          break;
        case 2:
          DisplayObject::rotate(*((DisplayObject **)this + 22), 180.0);
          v21 = (DisplayObject *)*((_QWORD *)this + 22);
          v22 = DisplayObject::getY(v21);
          DisplayObject::setY(v21, (float)((float)(*(float *)&v22 - v8) + (float)(*((float *)this + 53) * -4.0)) + 1.0);
          *(__n128 *)&v23 = DisplayObject::setXY(
                              (DisplayObject *)*((_QWORD *)this + 24),
                              (float)(v5 * -0.5) - *(float *)&v37[0].top,
                              (float)(*((float *)this + 53) * -2.0) - v8);
          v24 = (DisplayObject *)*((_QWORD *)this + 12);
          v25 = (*(float (__fastcall **)(MiniTimer *, long double))(*(_QWORD *)this + 96LL))(this, v23);
          v26 = DisplayObject::setY(v24, v25);
          v26.n128_u32[0] = *((_DWORD *)this + 50);
          Popover::setPosition(this, v26, *((float *)this + 51));
          break;
        case 3:
          DisplayObject::rotate(*((DisplayObject **)this + 22), 90.0);
          v27 = (DisplayObject *)*((_QWORD *)this + 22);
          v28 = Rect::getMidX(v37);
          v29 = *((float *)this + 53);
          v30 = Rect::getMidY(v37);
          DisplayObject::setXY(
            v27,
            (float)((float)(v29 * -2.0) - v28) + 1.0,
            (float)-*(float *)&v30 - (float)(*((float *)this + 53) + *((float *)this + 53)));
          v31 = v5 * 0.5;
          *(__n128 *)&v32 = DisplayObject::setXY(
                              (DisplayObject *)*((_QWORD *)this + 24),
                              (float)-*(float *)&v37[0].top - (float)(v5 * 0.5),
                              (float)((float)-*(float *)&v37[0].bottom - v8) + (float)(*((float *)this + 53) * -2.0));
          v33 = (DisplayObject *)*((_QWORD *)this + 12);
          v34 = COERCE_FLOAT(
                  COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(_QWORD, long double))*(_QWORD *)(**((_QWORD **)this + 22) + 96LL))(
                      *((_QWORD *)this + 22),
                      v32)));
          v35 = Rect::getMidY(v37);
          v36 = DisplayObject::setXY(
                  v33,
                  v31 + v34,
                  *(float *)&v35 + (float)(*((float *)this + 53) + *((float *)this + 53)));
          v36.n128_u32[0] = *((_DWORD *)this + 50);
          Popover::setPosition(this, v36, *((float *)this + 51));
          break;
        default:
          break;
      }
      *((_BYTE *)this + 273) = 0;
      Rect::~Rect(v37);
    }

    __int64 __fastcall Popover::addContent(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
      __int64 v5; // [xsp+8h] [xbp-28h] BYREF
    
      v5 = a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, 1);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 160LL))(*(_QWORD *)(a1 + 192), a2);
      result = std::vector<DisplayObject *>::push_back(a1 + 224, &v5);
      *(_BYTE *)(a1 + 273) = 1;
      return result;
    }

    __int64 __fastcall Popover::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall Popover::touchReleased(_BYTE *a1, __int64 a2)
    {
      if ( (*(unsigned int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, *(unsigned int *)(a2 + 76)) )
        a1[272] = 1;
      Sprite::touchReleased(a1, a2);
      return 1;
    }

    __int64 __fastcall Popover::fadeOut(__int64 this)
    {
      *(_BYTE *)(this + 272) = 1;
      return this;
    }

    long double __fastcall Popover::getTextFieldHeights(MiniTimer *this, OutOfSyncMessage *a2, long double a3)
    {
      __int64 v6; // x22
      TextField *v7; // x21
      float v8; // s9
      float v9; // s0
      float v10; // s0
      long double v11; // q0
      Rect v13[2]; // [xsp+0h] [xbp-40h] BYREF
    
      if ( (int)Sprite::getNumChildren(a2) >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = *(TextField **)(*((_QWORD *)a2 + 9) + 8 * v6);
          if ( (*(unsigned int (__fastcall **)(TextField *))(*(_QWORD *)v7 + 128LL))(v7) )
          {
            Rect::Rect(v13);
            DisplayObject::getBounds(a2, *((_QWORD *)this + 24), v13);
            v8 = *(float *)&v13[0].bottom;
            TextField::getTextHeight(v7);
            v10 = v8 + v9;
            if ( v10 > *(float *)&a3 )
              *(float *)&a3 = v10;
            Rect::~Rect(v13);
          }
          if ( v7 != a2 && (*(unsigned int (__fastcall **)(TextField *))(*(_QWORD *)v7 + 136LL))(v7) )
          {
            Popover::getTextFieldHeights(this, v7, *(float *)&a3);
            a3 = v11;
          }
          ++v6;
        }
        while ( v6 < (int)Sprite::getNumChildren(a2) );
      }
      return a3;
    }

    long double __fastcall Popover::getTextFieldWidths(MiniTimer *this, OutOfSyncMessage *a2, long double a3)
    {
      __int64 v6; // x22
      TextField *v7; // x21
      float v8; // s9
      float v9; // s0
      float v10; // s0
      long double v11; // q0
      Rect v13[2]; // [xsp+0h] [xbp-40h] BYREF
    
      if ( (int)Sprite::getNumChildren(a2) >= 1 )
      {
        v6 = 0;
        do
        {
          v7 = *(TextField **)(*((_QWORD *)a2 + 9) + 8 * v6);
          if ( (*(unsigned int (__fastcall **)(TextField *))(*(_QWORD *)v7 + 128LL))(v7) )
          {
            Rect::Rect(v13);
            DisplayObject::getBounds(v7, *((_QWORD *)this + 24), v13);
            v8 = *(float *)&v13[0].top;
            TextField::getTextWidth(v7);
            v10 = v8 + v9;
            if ( v10 > *(float *)&a3 )
              *(float *)&a3 = v10;
            Rect::~Rect(v13);
          }
          if ( v7 != a2 && (*(unsigned int (__fastcall **)(TextField *))(*(_QWORD *)v7 + 136LL))(v7) )
          {
            Popover::getTextFieldWidths(this, v7, *(float *)&a3);
            a3 = v11;
          }
          ++v6;
        }
        while ( v6 < (int)Sprite::getNumChildren(a2) );
      }
      return a3;
    }

    __int64 __fastcall Popover::isFadingOut(MiniTimer *this)
    {
      return *((unsigned __int8 *)this + 272);
    }

    __int64 __fastcall Popover::getPopoverType(MiniTimer *this)
    {
      return 0;
    }

}; // end class Popover
