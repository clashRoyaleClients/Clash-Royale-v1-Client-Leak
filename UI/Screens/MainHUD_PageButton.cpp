class MainHUD::PageButton
{
public:

    #1249 *__fastcall MainHUD::PageButton::setLabel(#1257 **this, const String *a2)
    {
      __int64 MovieClipByName; // x0
      #1271 *TextFieldByName; // x19
      #1249 *result; // x0
      #1249 *v7; // x20
      float v8; // s0
    
      MovieClipByName = MovieClip::getMovieClipByName(*(this + 35), "tab_txt");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClipByName, "title_selected");
      TextField::setText(TextFieldByName, a2);
      result = (#1249 *)MovieClip::getMovieClipByName(*(this + 35), "title_shadow");
      v7 = result;
      if ( result )
      {
        TextField::getTextWidth(TextFieldByName);
        return (#1249 *)DisplayObject::setWidth(v7, v8);
      }
      return result;
    }

    #1257 *__fastcall MainHUD::PageButton::update(#1380 *this, float a2, int a3, int a4, int a5, int a6)
    {
      long double v6; // q11
      float v13; // s10
      DisplayObject *v14; // x24
      long double v15; // q0
      float v16; // s1
      float v17; // s2
      float v18; // s2
      __int64 v19; // x24
      void (__fastcall *v20)(__int64, long double); // x25
      long double v21; // q0
      float v22; // s1
      float v23; // s1
      __int64 v24; // x24
      void (__fastcall *v25)(__int64, long double); // x25
      long double v26; // q0
      float v27; // s1
      float v28; // s1
      int v29; // w24
      NotificationBadge *v30; // x25
      int v31; // w0
      #1257 **v32; // x26
      MovieClip *v33; // x24
      int FrameIndex; // w25
      int TotalFrames; // w0
      MovieClip *v36; // x24
      int v37; // w25
      int v38; // w0
      #1257 *result; // x0
      int v40; // w8
      #1257 *v41; // x1
    
      if ( *((_BYTE *)this + 276) )
        *(float *)&v6 = 1.0;
      else
        *(float *)&v6 = 0.9;
      if ( *((_BYTE *)this + 276) )
        v13 = -16.0;
      else
        v13 = 0.0;
      v14 = (DisplayObject *)*((_QWORD *)this + 36);
      v15 = DisplayObject::getY(v14);
      v16 = v13 + *((float *)this + 68);
      v17 = *(float *)&v15 - v16;
      if ( (float)(*(float *)&v15 - v16) < 0.0 )
        v17 = -(float)(*(float *)&v15 - v16);
      if ( v17 <= 0.1 )
      {
        *(float *)&v15 = v13 + *((float *)this + 68);
      }
      else
      {
        v18 = (float)(a2 * 4.0) / 0.016667;
        if ( v18 >= 1.0 )
          *(float *)&v15 = (float)(v16 + (float)(*(float *)&v15 * (float)(v18 + -1.0))) / v18;
      }
      DisplayObject::setY(v14, *(float *)&v15);
      v19 = *((_QWORD *)this + 36);
      v20 = *(void (__fastcall **)(__int64, long double))(*(_QWORD *)v19 + 40LL);
      *(float *)&v21 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v19 + 64LL))(v19);
      v22 = *(float *)&v21 - *(float *)&v6;
      if ( (float)(*(float *)&v21 - *(float *)&v6) < 0.0 )
        v22 = -(float)(*(float *)&v21 - *(float *)&v6);
      if ( v22 <= 0.1 )
      {
        v21 = v6;
      }
      else
      {
        v23 = (float)(a2 * 4.0) / 0.016667;
        if ( v23 >= 1.0 )
          *(float *)&v21 = (float)(*(float *)&v6 + (float)(*(float *)&v21 * (float)(v23 + -1.0))) / v23;
      }
      v20(v19, v21);
      if ( *((_BYTE *)this + 276) )
        *(float *)&v6 = 1.0;
      else
        *(float *)&v6 = 0.0;
      v24 = *((_QWORD *)this + 35);
      v25 = *(void (__fastcall **)(__int64, long double))(*(_QWORD *)v24 + 80LL);
      *(float *)&v26 = DisplayObject::getAlpha(v24);
      v27 = *(float *)&v26 - *(float *)&v6;
      if ( (float)(*(float *)&v26 - *(float *)&v6) < 0.0 )
        v27 = -v27;
      if ( v27 <= 0.1 )
      {
        v26 = v6;
      }
      else
      {
        v28 = (float)(a2 * 4.0) / 0.016667;
        if ( v28 >= 1.0 )
          *(float *)&v26 = (float)(*(float *)&v6 + (float)(*(float *)&v26 * (float)(v28 + -1.0))) / v28;
      }
      v25(v24, v26);
      v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 360LL))(*((_QWORD *)this + 33));
      NotificationBadge::update(*((NotificationBadge **)this + 37), a2, v29, 0);
      v30 = (NotificationBadge *)*((_QWORD *)this + 38);
      if ( v30 )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 368LL))(*((_QWORD *)this + 33));
        NotificationBadge::update(v30, a2, v31, 0);
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 38) + 8LL) + 8LL) = v29 == 0;
      }
      if ( *((unsigned __int8 *)this + 276) == a3
        && a5 == *((unsigned __int8 *)this + 277)
        && a6 == *((unsigned __int8 *)this + 278) )
      {
        v32 = (#1257 **)((char *)this + 312);
      }
      else
      {
        v32 = (#1257 **)((char *)this + 312);
        v33 = (MovieClip *)*((_QWORD *)this + 39);
        if ( v33 )
        {
          FrameIndex = MovieClip::getFrameIndex(*((_QWORD *)this + 39), "stop");
          if ( a3 && a5 )
          {
            MovieClip::gotoAndPlayFrameIndex(v33, 0, FrameIndex);
            *((_BYTE *)*v32 + 8) = 1;
          }
          else
          {
            TotalFrames = MovieClip::getTotalFrames(*v32);
            MovieClip::gotoAndPlayFrameIndex(v33, FrameIndex, TotalFrames - 1);
          }
        }
        v36 = (MovieClip *)*((_QWORD *)this + 40);
        if ( v36 )
        {
          v37 = MovieClip::getFrameIndex(*((_QWORD *)this + 40), "stop");
          if ( a3 && a6 )
          {
            MovieClip::gotoAndPlayFrameIndex(v36, 0, v37);
            *(_BYTE *)(*((_QWORD *)this + 40) + 8LL) = 1;
          }
          else
          {
            v38 = MovieClip::getTotalFrames(*((#1257 **)this + 40));
            MovieClip::gotoAndPlayFrameIndex(v36, v37, v38 - 1);
          }
        }
        *((_BYTE *)this + 277) = a5;
        *((_BYTE *)this + 278) = a6;
        *((_BYTE *)this + 276) = a3;
      }
      if ( *v32 && (unsigned int)MovieClip::isStopped(*v32) && (!*((_BYTE *)this + 276) || a5 != 1) )
        *((_BYTE *)*v32 + 8) = 0;
      result = (#1257 *)*((_QWORD *)this + 40);
      if ( result )
      {
        result = (#1257 *)MovieClip::isStopped(result);
        if ( (_DWORD)result )
        {
          if ( !*((_BYTE *)this + 276) || a6 != 1 )
            *(_BYTE *)(*((_QWORD *)this + 40) + 8LL) = 0;
        }
      }
      if ( a4 )
      {
        v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 408LL))(*((_QWORD *)this + 33));
        result = (#1257 *)*((_QWORD *)this + 41);
        if ( v40 )
        {
          if ( !result )
          {
            v41 = (#1257 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 416LL))(*((_QWORD *)this + 33));
            return (#1257 *)MainHUD::PageButton::setHighlightClip(this, v41);
          }
        }
        else if ( result )
        {
          result = (#1257 *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)result + 8LL))(result);
          *((_QWORD *)this + 41) = 0;
        }
      }
      return result;
    }

    #1380 *__fastcall MainHUD::PageButton::PageButton(#1380 *this, LogicProjectileData *a2, int a3, int a4, float a5)
    {
      const char *v10; // x2
      MovieClip *MovieClip; // x22
      __int64 MovieClipByName; // x0
      long double v13; // q0
      const char *v14; // x2
      __int64 v15; // x0
      const char *v16; // x2
      DisplayObject *v17; // x22
      NotificationBadge *v18; // x23
      DisplayObject *v19; // x22
      NotificationBadge *v20; // x23
      const char *v21; // x2
      MovieClip *v22; // x21
      int FrameIndex; // w0
      DisplayObject *v24; // x21
      float v25; // s0
      MovieClip *v26; // x20
      int v27; // w0
      DisplayObject *v28; // x20
      float v29; // s0
    
      GameButton::GameButton(this);
      *(_QWORD *)this = off_1004601A8;
      *(_QWORD *)((char *)this + 271) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 33) = a2;
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_icon", v10);
      MovieClip::gotoAndStopFrameIndex(MovieClip, 0);
      (*(void (__fastcall **)(#1380 *, MovieClip *, __int64))(*(_QWORD *)this + 280LL))(this, MovieClip, 1);
      GameButton::setClickSound(this, 0);
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "icon");
      v13 = DisplayObject::getY(MovieClipByName);
      *((_DWORD *)this + 68) = LODWORD(v13);
      v15 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "menu_bottom_label", v14);
      *((_QWORD *)this + 35) = v15;
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v15 + 80LL))(v15, 1.0);
      DisplayObject::setXY(*((DisplayObject **)this + 35), 0.0, 0.0);
      (*(void (__fastcall **)(#1380 *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 35));
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 376LL))(*((_QWORD *)this + 33)) )
      {
        v17 = (DisplayObject *)ResourceManager::getMovieClip(
                                 (ResourceManager *)"sc/ui.sc",
                                 "notification_number_green",
                                 v16);
        DisplayObject::setPixelSnappedXY(v17, 25.0, -87.0);
        v18 = (NotificationBadge *)operator new(32);
        NotificationBadge::NotificationBadge(v18, v17, 1);
        *((_QWORD *)this + 38) = v18;
        (*(void (__fastcall **)(#1380 *, DisplayObject *))(*(_QWORD *)this + 160LL))(this, v17);
      }
      v19 = (DisplayObject *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "notification_number_red", v16);
      DisplayObject::setPixelSnappedXY(v19, 25.0, -87.0);
      v20 = (NotificationBadge *)operator new(32);
      NotificationBadge::NotificationBadge(v20, v19, 1);
      *((_QWORD *)this + 37) = v20;
      (*(void (__fastcall **)(#1380 *, DisplayObject *))(*(_QWORD *)this + 160LL))(this, v19);
      if ( a3 )
      {
        v22 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "UI_pageSelection_arrow_anim", v21);
        *((_QWORD *)this + 39) = v22;
        FrameIndex = MovieClip::getFrameIndex(v22, "stop");
        MovieClip::gotoAndStopFrameIndex(v22, FrameIndex);
        v24 = (DisplayObject *)*((_QWORD *)this + 39);
        v25 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v24 + 88LL))(v24);
        DisplayObject::setXY(v24, v25 + (float)(a5 * -0.5), -50.0);
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 39), 0);
        (*(void (__fastcall **)(#1380 *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 39));
      }
      if ( a4 )
      {
        v26 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "UI_pageSelection_arrow_anim", v21);
        *((_QWORD *)this + 40) = v26;
        v27 = MovieClip::getFrameIndex(v26, "stop");
        MovieClip::gotoAndStopFrameIndex(v26, v27);
        v28 = (DisplayObject *)*((_QWORD *)this + 40);
        v29 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v28 + 88LL))(v28);
        DisplayObject::setXY(v28, (float)(a5 * 0.5) - v29, -50.0);
        (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 40) + 48LL))(*((_QWORD *)this + 40), -1.0);
        MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 40), 0);
        (*(void (__fastcall **)(#1380 *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 40));
      }
      return this;
    }

    void __fastcall MainHUD::PageButton::~PageButton(#1380 *this)
    {
      void *v2; // x20
      void *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
    
      *(_QWORD *)this = off_1004601A8;
      v2 = (void *)*((_QWORD *)this + 37);
      if ( v2 )
      {
        NotificationBadge::~NotificationBadge(*((#1150 **)this + 37));
        operator delete(v2);
      }
      *((_QWORD *)this + 37) = 0;
      v3 = (void *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        NotificationBadge::~NotificationBadge(*((#1150 **)this + 38));
        operator delete(v3);
      }
      *((_QWORD *)this + 38) = 0;
      v4 = *((_QWORD *)this + 35);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 35) = 0;
      v5 = *((_QWORD *)this + 39);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 39) = 0;
      v6 = *((_QWORD *)this + 40);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 40) = 0;
      v7 = *((_QWORD *)this + 41);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 33) = 0;
      *(_QWORD *)((char *)this + 271) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 35) = 0;
      GameButton::~GameButton(this);
    }

    // attributes: thunk
    void __fastcall MainHUD::PageButton::~PageButton(#1380 *this)
    {
      __ZN7MainHUD10PageButtonD2Ev(this);
    }

    void __fastcall MainHUD::PageButton::~PageButton(#1380 *this)
    {
      MainHUD::PageButton::~PageButton(this);
      operator delete(this);
    }

    void __fastcall MainHUD::PageButton::setHighlightClip(#1380 *this, #1257 *a2)
    {
      __int64 v4; // x0
      float MidX; // s0
      Rect v6[2]; // [xsp+0h] [xbp-20h] BYREF
    
      v4 = *((_QWORD *)this + 41);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 41) = 0;
      if ( a2 )
      {
        Rect::Rect(v6);
        DisplayObject::getBounds(this, 0, v6);
        *((_QWORD *)this + 41) = a2;
        MidX = Rect::getMidX(v6);
        DisplayObject::setPixelSnappedXY(a2, MidX, *(float *)&v6[0].bottom);
        (*(void (__fastcall **)(#1380 *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 41));
        Rect::~Rect(v6);
      }
    }

}; // end class MainHUD::PageButton
