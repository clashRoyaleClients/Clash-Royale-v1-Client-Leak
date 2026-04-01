class PageGUI
{
public:

    void __fastcall PageGUI::PageGUI(PageGUI *this, int a2, int a3, int a4, int a5)
    {
      Sprite *v10; // x24
      _QWORD *v11; // x24
      __int64 v12; // x24
      float *v13; // x8
      int v14; // [xsp+8h] [xbp-48h] BYREF
      float v15; // [xsp+Ch] [xbp-44h] BYREF
    
      Sprite::Sprite(this, 1);
      *((_QWORD *)this + 13) = 0;
      *(_QWORD *)this = off_10045EFD0;
      *((_QWORD *)this + 12) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 37) = 0;
      *((_BYTE *)this + 146) = 0;
      *((_WORD *)this + 72) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_BYTE *)this + 64) = 1;
      *((float *)this + 28) = (float)a4;
      *((float *)this + 29) = (float)a5;
      *((_DWORD *)this + 31) = -1;
      v10 = (Sprite *)operator new(96);
      Sprite::Sprite(v10, 4);
      *((_QWORD *)this + 12) = v10;
      *((_BYTE *)v10 + 64) = 1;
      (*(void (__fastcall **)(PageGUI *, Sprite *))(*(_QWORD *)this + 160LL))(this, v10);
      v11 = (_QWORD *)operator new(16);
      *v11 = 0;
      v11[1] = 0;
      *((_DWORD *)v11 + 2) = 4;
      *v11 = operator new[](32);
      *((_QWORD *)this + 13) = v11;
      v12 = operator new(16);
      Rect::Rect((Rect *)v12);
      *(float *)v12 = (float)a2;
      *(float *)(v12 + 8) = (float)(a4 + a2);
      *(float *)(v12 + 4) = (float)a3;
      *(float *)(v12 + 12) = (float)(a5 + a3);
      Sprite::setHitArea(this, (#1261 *)v12);
      *((_BYTE *)this + 145) = 1;
      *(_QWORD *)((char *)this + 132) = 0x3F33333341A00000LL;
      v15 = (float)a4 * 0.75;
      v14 = 981668463;
      v13 = (float *)&v14;
      if ( v15 > 0.001 )
        v13 = &v15;
      *((float *)this + 35) = *v13;
      *((_BYTE *)this + 146) = 0;
    }

    __int64 __fastcall PageGUI::setDragEnabled(__int64 this, char a2)
    {
      *(_BYTE *)(this + 145) = a2;
      return this;
    }

    __int64 __fastcall PageGUI::setWrapAroundEnabled(__int64 this, char a2)
    {
      *(_BYTE *)(this + 146) = a2;
      return this;
    }

    // attributes: thunk
    void __fastcall PageGUI::PageGUI(PageGUI *this, int a2, int a3, int a4, int a5)
    {
      __ZN7PageGUIC2Eiiii(this, a2, a3, a4, a5);
    }

    void __fastcall PageGUI::~PageGUI(MessageManager *this)
    {
      _QWORD *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 v7; // x0
    
      *(_QWORD *)this = off_10045EFD0;
      v2 = (_QWORD *)*((_QWORD *)this + 13);
      v3 = *((int *)v2 + 3);
      if ( (int)v3 >= 1 )
      {
        v4 = v3 - 1;
        do
        {
          v5 = *(_QWORD *)(*v2 + 8 * v4);
          if ( v5 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            v2 = (_QWORD *)*((_QWORD *)this + 13);
          }
          v6 = v4-- + 1;
        }
        while ( v6 >= 2 );
      }
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 13) = 0;
      v7 = *((_QWORD *)this + 12);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_DWORD *)this + 28) = 0;
      *((_DWORD *)this + 31) = -1;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 37) = 0;
      *((_BYTE *)this + 146) = 0;
      *((_WORD *)this + 72) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall PageGUI::~PageGUI(MessageManager *this)
    {
      __ZN7PageGUID2Ev(this);
    }

    void __fastcall PageGUI::~PageGUI(MessageManager *this)
    {
      PageGUI::~PageGUI(this);
      operator delete(this);
    }

    __int64 PageGUI::touchPressed()
    {
      Sprite::touchPressed();
      return 0;
    }

    bool __fastcall PageGUI::touchMoved(__int64 a1, __int64 a2)
    {
      float v4; // s0
      float v5; // s8
      unsigned __int64 v6; // x2
      float v7; // s0
      float v8; // s9
      float v9; // s10
      float v10; // s0
      float v11; // s0
      float v12; // s0
      float v13; // s1
      float v14; // s0
      float v15; // s2
      bool v16; // cc
    
      Sprite::touchMoved();
      if ( *(_BYTE *)(a1 + 145) )
      {
        if ( *(_DWORD *)(a1 + 124) == -1 && (PageGUI::isCurrentPageBlockingScroll((MessageManager *)a1) & 1) == 0 )
        {
          v4 = *(float *)(a2 + 52) - *(float *)(a2 + 68);
          if ( (float)(v4 * v4) >= (float)(*(float *)(a1 + 132) * *(float *)(a1 + 132)) )
            *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 76);
        }
        if ( *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v5) = COERCE_UNSIGNED_INT128(DisplayObject::getX(*(_QWORD *)(a1 + 96)));
          xTimer::getPassedTimeMs(*(xTimer **)(a2 + 8), *(_QWORD *)a2, v6);
          v8 = v7 * 0.001;
          v9 = *(float *)(a2 + 60) - *(float *)(a2 + 52);
          if ( *(_BYTE *)(a1 + 146) )
            goto LABEL_17;
          v10 = v9 - v5;
          if ( (float)(v9 - v5) >= 0.0 )
          {
            v13 = *(float *)(a1 + 112) * (float)(*(_DWORD *)(*(_QWORD *)(a1 + 104) + 12LL) - 1);
            if ( v10 <= v13 )
              goto LABEL_17;
            v14 = (float)(v10 - v13) / *(float *)(a1 + 140);
            v15 = 1.0 - v14;
            v16 = v14 <= 1.0;
            v12 = 0.0;
            if ( v16 )
              v12 = v15;
          }
          else
          {
            v11 = (float)(0.0 - v10) / *(float *)(a1 + 140);
            if ( v11 <= 1.0 )
              v12 = 1.0 - v11;
            else
              v12 = 0.0;
          }
          v9 = v9 * v12;
    LABEL_17:
          PageGUI::setScroll((MessageManager *)a1, v9 - v5);
          if ( v8 > 0.00001 )
            *(float *)(a1 + 128) = (float)((float)(v9 / v8) * 0.6) + (float)(*(float *)(a1 + 128) * 0.4);
        }
      }
      return *(_DWORD *)(a1 + 124) != -1;
    }

    __int64 __fastcall PageGUI::isCurrentPageBlockingScroll(MessageManager *this)
    {
      int v1; // w10
      __int64 v2; // x8
      int v3; // w11
      int v4; // w9
      __int64 v5; // x0
    
      v1 = *((_DWORD *)this + 30);
      v2 = *((_QWORD *)this + 13);
      if ( *((_BYTE *)this + 146) )
      {
        v3 = *(_DWORD *)(v2 + 12);
        v4 = v1 % v3;
        if ( v1 < 0 )
          v4 = (v4 + v3) % v3;
      }
      else
      {
        v4 = *((_DWORD *)this + 30);
      }
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 8LL * v4);
      if ( v5 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 352LL))(v5);
      else
        return 0;
    }

    float __fastcall PageGUI::getScroll(MessageManager *this)
    {
      long double v1; // q0
    
      v1 = DisplayObject::getX(*((_QWORD *)this + 12));
      return -*(float *)&v1;
    }

    __int64 __fastcall PageGUI::setScroll(#1249 **this, float a2)
    {
      __int64 result; // x0
      float v4; // s0
      int v5; // w9
      int v6; // w10
      int v7; // w8
      __int64 v9; // x0
      __int64 v10; // x9
    
      DisplayObject::setX(*(this + 12), -a2);
      result = PageGUI::getPageScrollProg((MessageManager *)this);
      v5 = *((_DWORD *)this + 30);
      if ( *((_BYTE *)this + 146) )
      {
        v6 = *((_DWORD *)*(this + 13) + 3);
        v7 = v5 % v6;
        if ( v5 < 0 )
          v7 = (v7 + v6) % v6;
      }
      else
      {
        v7 = *((_DWORD *)this + 30);
      }
      if ( v4 < 0.0 && v7 >= 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)*(this + 13) + 8LL * v7 - 8);
        return (*(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)v9 + 344LL))(v9, fabsf(v4));
      }
      if ( v4 > 0.0 )
      {
        v10 = (__int64)*(this + 13);
        if ( v7 < *(_DWORD *)(v10 + 12) - 1 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)v10 + 8LL * v7 + 8);
          return (*(__int64 (__fastcall **)(__int64, float))(*(_QWORD *)v9 + 344LL))(v9, fabsf(v4));
        }
      }
      return result;
    }

    __int64 __fastcall PageGUI::touchReleased(MessageManager *a1, __int64 a2)
    {
      BadgePopup *isTouchIn; // x0
      GUI *Instance; // x0
    
      Sprite::touchReleased();
      isTouchIn = (BadgePopup *)Sprite::isTouchIn(a1, *(unsigned int *)(a2 + 76));
      if ( (_DWORD)isTouchIn )
      {
        Instance = (GUI *)GUI::getInstance(isTouchIn);
        GUI::fadeOutPopover(Instance);
      }
      if ( *(_DWORD *)(a2 + 76) == *((_DWORD *)a1 + 31) )
        PageGUI::endDrag(a1);
      return 0;
    }

    void __fastcall PageGUI::endDrag(MessageManager *this)
    {
      long double v2; // q0
      int v3; // w9
      int v4; // w8
      int v5; // w1
    
      v2 = DisplayObject::getX(*((_QWORD *)this + 12));
      v3 = (int)(float)((float)((float)((float)(*((float *)this + 32) * 1.35) - *(float *)&v2) / *((float *)this + 28)) + 0.5);
      v4 = *((_DWORD *)this + 30);
      if ( v3 > v4 )
      {
        v5 = v4 + 1;
    LABEL_5:
        PageGUI::scrollToPage(this, v5);
        goto LABEL_6;
      }
      if ( v3 < v4 )
      {
        v5 = v4 - 1;
        goto LABEL_5;
      }
    LABEL_6:
      *((_DWORD *)this + 31) = -1;
    }

    void __fastcall PageGUI::touchCancelled(MessageManager *this, int a2)
    {
      if ( *((_DWORD *)this + 31) == a2 )
        PageGUI::endDrag(this);
    }

    __int64 __fastcall PageGUI::scrollToPage(__int64 this, int a2)
    {
      __int64 v2; // x19
      int v3; // w9
      int v4; // w11
      int v5; // w10
      int v6; // w12
      int v7; // w13
      int v8; // w11
      int v9; // w12
      int v10; // w9
      int v11; // w13
      int v12; // w14
      int v13; // w12
      int v14; // w13
      int v15; // w20
      int v16; // w9
      int v17; // w10
      __int64 v18; // x9
      int v19; // w11
      int v20; // w8
      unsigned int *v21; // x0
      __int64 v22; // x1
      __int64 v23; // x20
      const #916 *v24; // x2
      __int64 SoundByName; // x0
      int v26; // w10
      __int64 v27; // x8
      int v28; // w11
      int v29; // w9
      __int64 v30; // x1
      String v31; // [xsp+8h] [xbp-28h] BYREF
    
      v2 = this;
      if ( *(_BYTE *)(this + 146) )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(this + 104) + 12LL);
        v4 = a2 % v3;
        if ( a2 < 0 )
          v4 = (v4 + v3) % v3;
        v5 = *(_DWORD *)(this + 120);
        v6 = v5 % v3;
        if ( v5 < 0 )
          v6 = (v6 + v3) % v3;
        v7 = v4 - v3;
        v8 = v4 - v6;
        v9 = v7 - v6;
        v10 = v8 + v3;
        if ( v9 >= 0 )
          v11 = v9;
        else
          v11 = -v9;
        if ( v8 >= 0 )
          v12 = v8;
        else
          v12 = -v8;
        if ( v11 < v12 )
          v8 = v9;
        if ( v10 >= 0 )
          v13 = v10;
        else
          v13 = -v10;
        if ( v8 >= 0 )
          v14 = v8;
        else
          v14 = -v8;
        if ( v13 >= v14 )
          v10 = v8;
        v15 = v10 + v5;
      }
      else if ( a2 < 0 )
      {
        v15 = 0;
      }
      else
      {
        v16 = *(_DWORD *)(*(_QWORD *)(this + 104) + 12LL);
        if ( v16 <= a2 )
          v15 = v16 - 1;
        else
          v15 = a2;
      }
      v17 = *(_DWORD *)(this + 120);
      if ( v15 != v17 )
      {
        v18 = *(_QWORD *)(this + 104);
        if ( *(_BYTE *)(this + 146) )
        {
          v19 = *(_DWORD *)(v18 + 12);
          v20 = v17 % v19;
          if ( v17 < 0 )
            v20 = (v20 + v19) % v19;
        }
        else
        {
          v20 = *(_DWORD *)(this + 120);
        }
        v21 = *(unsigned int **)(*(_QWORD *)v18 + 8LL * v20);
        if ( v21 )
        {
          v22 = v21[47];
          v21[47] = 1;
          (*(void (__fastcall **)(unsigned int *, __int64, __int64))(*(_QWORD *)v21 + 336LL))(v21, v22, 1);
        }
        *(_DWORD *)(v2 + 120) = v15;
        v23 = SoundManager::sm_pInstance;
        String::String(&v31, "Menu swipe");
        SoundByName = LogicDataTables::getSoundByName((#1004 *)&v31, 0, v24);
        SoundManager::playSound(v23, SoundByName, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String(&v31);
        v26 = *(_DWORD *)(v2 + 120);
        v27 = *(_QWORD *)(v2 + 104);
        if ( *(_BYTE *)(v2 + 146) )
        {
          v28 = *(_DWORD *)(v27 + 12);
          v29 = v26 % v28;
          if ( v26 < 0 )
            v29 = (v29 + v28) % v28;
        }
        else
        {
          v29 = *(_DWORD *)(v2 + 120);
        }
        this = *(_QWORD *)(*(_QWORD *)v27 + 8LL * v29);
        if ( this )
        {
          v30 = *(unsigned int *)(this + 188);
          *(_DWORD *)(this + 188) = 2;
          return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)this + 336LL))(this, v30, 2);
        }
      }
      return this;
    }

    float __fastcall PageGUI::getScrollAtPage(MessageManager *this, int a2)
    {
      return (float)a2 * *((float *)this + 28);
    }

    __int64 __fastcall PageGUI::getPageCount(MessageManager *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 13) + 12LL);
    }

    void __fastcall PageGUI::getPageScrollProg(MessageManager *this)
    {
      DisplayObject::getX(*((_QWORD *)this + 12));
    }

    __int64 __fastcall PageGUI::getCurrentPageIndex(MessageManager *this)
    {
      int v1; // w8
      int v2; // w9
      __int64 result; // x0
    
      v1 = *((_DWORD *)this + 30);
      if ( !*((_BYTE *)this + 146) )
        return *((unsigned int *)this + 30);
      v2 = *(_DWORD *)(*((_QWORD *)this + 13) + 12LL);
      result = (unsigned int)(v1 % v2);
      if ( v1 < 0 )
        return (unsigned int)(((int)result + v2) % v2);
      return result;
    }

    float __fastcall PageGUI::getScrollProg(MessageManager *this)
    {
      long double v2; // q0
    
      v2 = DisplayObject::getX(*((_QWORD *)this + 12));
      return (float)-*(float *)&v2
           / (float)(*((float *)this + 28) * (float)(*(_DWORD *)(*((_QWORD *)this + 13) + 12LL) - 1));
    }

    __int64 __fastcall PageGUI::getCurrentPage(MessageManager *this)
    {
      int v1; // w10
      __int64 v2; // x8
      int v3; // w11
      int v4; // w9
    
      v1 = *((_DWORD *)this + 30);
      v2 = *((_QWORD *)this + 13);
      if ( *((_BYTE *)this + 146) )
      {
        v3 = *(_DWORD *)(v2 + 12);
        v4 = v1 % v3;
        if ( v1 < 0 )
          v4 = (v4 + v3) % v3;
      }
      else
      {
        v4 = *((_DWORD *)this + 30);
      }
      return *(_QWORD *)(*(_QWORD *)v2 + 8LL * v4);
    }

    __int64 __fastcall PageGUI::addPage(MessageManager *this, LogicProjectileData *a2, __int64 a3)
    {
      float v6; // s8
      long double v7; // q0
      __int64 v8; // x0
      LogicProjectileData *v10; // [xsp+8h] [xbp-38h] BYREF
    
      v10 = a2;
      v6 = (float)((float)*(int *)(Stage::getInstance(this) + 428LL) * 0.5)
         + (float)((float)*(int *)(*((_QWORD *)this + 13) + 12LL) * *((float *)this + 28));
      v7 = DisplayObject::getY(a2);
      DisplayObject::setPixelSnappedXY(a2, v6, *(float *)&v7);
      LogicArrayList<PageItem *>::add(*((_QWORD *)this + 13), &v10);
      v8 = *((_QWORD *)this + 12);
      if ( (_DWORD)a3 == -1 )
        return (*(__int64 (__fastcall **)(__int64, LogicProjectileData *))(*(_QWORD *)v8 + 160LL))(v8, a2);
      else
        return (*(__int64 (__fastcall **)(__int64, LogicProjectileData *, __int64))(*(_QWORD *)v8 + 168LL))(v8, a2, a3);
    }

    __int64 __fastcall PageGUI::setCurrentPage(#1249 **this, int a2)
    {
      PageGUI::scrollToPage((__int64)this, a2);
      return PageGUI::setScroll(this, (float)*((int *)this + 30) * *((float *)this + 28));
    }

    __int64 __fastcall PageGUI::getPageItemAt(MessageManager *this, int a2)
    {
      return *(_QWORD *)(**((_QWORD **)this + 13) + 8LL * a2);
    }

    __int64 __fastcall PageGUI::update(MessageManager *this, long double a2)
    {
      int v4; // w21
      BadgePopup *Instance; // x0
      __int64 result; // x0
      BadgePopup *v7; // x0
      __int64 TopPopup; // x0
      char v9; // w8
      float v10; // s0
      float v11; // s11
      long double v12; // q0
      float v13; // s1
      float v14; // s2
      float v15; // s0
      bool v16; // cc
      float v17; // s0
      float v19; // s0
      int i; // w22
      int v21; // w9
      __int64 v22; // x8
      int v23; // w11
      int v24; // w10
      float v25; // s10
      #1249 *v26; // x20
      __int64 v27; // x0
      __int64 v28; // x8
      __int64 v29; // x20
      __int64 v30; // x0
      __int64 v31; // x20
      __int64 v32; // x0
      __int64 v33; // x8
      Stage *v34; // x0
    
      v4 = *((_DWORD *)this + 31);
      Instance = (BadgePopup *)GUI::getInstance(this);
      result = GUI::getTopPopup(Instance);
      if ( result )
      {
        v7 = (BadgePopup *)GUI::getInstance((BadgePopup *)result);
        TopPopup = GUI::getTopPopup(v7);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 448LL))(TopPopup);
        v9 = result ^ 1;
      }
      else
      {
        v9 = 1;
      }
      *((_BYTE *)this + 8) = v9;
      if ( v4 == -1 )
      {
        v10 = *((float *)this + 37) + *(float *)&a2;
        *((float *)this + 37) = v10;
        if ( v10 > 0.02 )
        {
          v11 = (float)((float)((float)(*((float *)this + 34) + *((float *)this + 34))
                              + (float)((float)(1.0 - *((float *)this + 34)) * 20.0))
                      * *(float *)&a2)
              / 0.016667;
          do
          {
            v12 = DisplayObject::getX(*((_QWORD *)this + 12));
            v13 = -*(float *)&v12;
            v14 = (float)*((int *)this + 30) * *((float *)this + 28);
            v15 = (float)-*(float *)&v12 - v14;
            if ( v15 < 0.0 )
              v15 = -v15;
            v16 = v15 > 1.0;
            if ( v15 > 1.0 )
              v17 = v13;
            else
              v17 = (float)*((int *)this + 30) * *((float *)this + 28);
            if ( v16 && v11 >= 1.0 )
              v17 = (float)(v14 + (float)((float)(v11 + -1.0) * v13)) / v11;
            result = PageGUI::setScroll((#1249 **)this, v17);
            v19 = *((float *)this + 37) + -0.02;
            *((float *)this + 37) = v19;
          }
          while ( v19 > 0.02 );
        }
      }
      if ( *((_BYTE *)this + 146) )
      {
        for ( i = -1; i != 2; ++i )
        {
          v21 = i + *((_DWORD *)this + 30);
          v22 = *((_QWORD *)this + 13);
          v23 = *(_DWORD *)(v22 + 12);
          v24 = v21 % v23;
          if ( v21 < 0 )
            v24 = (v24 + v23) % v23;
          v25 = (float)v21 * *((float *)this + 28);
          v26 = *(#1249 **)(*(_QWORD *)v22 + 8LL * v24);
          v27 = Stage::getInstance((Stage *)result);
          result = DisplayObject::setX(v26, v25 + (float)((float)*(int *)(v27 + 428) * 0.5));
        }
      }
      v28 = *((_QWORD *)this + 13);
      v29 = *(int *)(v28 + 12);
      if ( (int)v29 >= 1 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)v28 + 8 * v29 - 8);
        result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v30 + 328LL))(v30, a2);
        if ( (int)v29 >= 2 )
        {
          v31 = v29 - 2;
          do
          {
            v32 = *(_QWORD *)(**((_QWORD **)this + 13) + 8 * v31);
            result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v32 + 328LL))(v32, a2);
            v33 = v31-- + 1;
          }
          while ( v33 > 1 );
        }
      }
      if ( v4 != -1 && !*((_BYTE *)this + 144) && *((_DWORD *)this + 31) != -1 )
      {
        v34 = (Stage *)Stage::getInstance((Stage *)result);
        result = Stage::displayObjectCapturedTouch(v34, *((_DWORD *)this + 31), this);
      }
      *((_BYTE *)this + 144) = v4 != -1;
      return result;
    }

}; // end class PageGUI
