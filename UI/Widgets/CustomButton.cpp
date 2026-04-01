class CustomButton
{
public:

    __int64 __fastcall CustomButton::CustomButton(__int64 a1)
    {
      Sprite::Sprite((Sprite *)a1, 1);
      *(_QWORD *)a1 = off_100475EF8;
      String::String(a1 + 120);
      String::String(a1 + 168);
      String::String(a1 + 192);
      CustomButton::initializeMembers((lzham *)a1);
      *(_BYTE *)(a1 + 64) = 1;
      *(_DWORD *)(a1 + 148) = 7;
      String::operator=((String *)(a1 + 168), &CustomButton::sm_defaultTimelineFileName);
      String::operator=((String *)(a1 + 192), &CustomButton::sm_defaultTimelineExportName);
      return a1;
    }

    __int64 __fastcall CustomButton::CustomButton(__int64 a1)
    {
      CustomButton::CustomButton(a1);
      return a1;
    }

    CustomButton *__fastcall CustomButton::~CustomButton(CustomButton *a1)
    {
      *(_QWORD *)a1 = off_100475EF8;
      CustomButton::destructClips(a1);
      CustomButton::initializeMembers(a1);
      String::~String((__int64)a1 + 192);
      String::~String((__int64)a1 + 168);
      String::~String((__int64)a1 + 120);
      Sprite::~Sprite(a1);
      return a1;
    }

    __int64 __fastcall CustomButton::destructClips(__int64 a1)
    {
      __int64 v2; // x8
      __int64 result; // x0
    
      v2 = *(_QWORD *)(a1 + 160);
      result = *(_QWORD *)(a1 + 104);
      if ( v2 != result )
      {
        if ( v2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
          result = *(_QWORD *)(a1 + 104);
        }
        *(_QWORD *)(a1 + 160) = 0;
      }
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *(_QWORD *)(a1 + 104) = 0;
      return result;
    }

    CustomButton *__fastcall CustomButton::~CustomButton(CustomButton *a1)
    {
      CustomButton::~CustomButton(a1);
      return a1;
    }

    void __fastcall CustomButton::~CustomButton(CustomButton *a1)
    {
      CustomButton::~CustomButton(a1);
      operator delete(a1);
    }

    __int64 __fastcall CustomButton::buttonPressed(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 152);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 8LL))(result, a1);
      return result;
    }

    __int64 __fastcall CustomButton::touchReleased(__int64 a1, __int64 a2)
    {
      int isTouchIn; // w21
    
      isTouchIn = Sprite::isTouchIn(a1, *(unsigned int *)(a2 + 76));
      Sprite::touchReleased(a1, a2);
      *(_DWORD *)(a1 + 144) = -1;
      if ( isTouchIn && *(_DWORD *)(a1 + 112) != -1000 && (!*(_BYTE *)(a1 + 232) || *(int *)(a1 + 228) <= 0) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        if ( *(_BYTE *)(a1 + 233) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
      }
      return 1;
    }

    __int64 __fastcall CustomButton::touchPressed(_DWORD *a1, __int64 a2)
    {
      if ( a1[28] != -1000 )
      {
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
        a1[36] = *(_DWORD *)(a2 + 76);
        a1[57] = 0;
        a1[54] = 0;
      }
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall CustomButton::touchIn(Sprite *a1, int a2)
    {
      __int64 result; // x0
    
      result = Sprite::touchIn(a1, a2);
      if ( *((_DWORD *)a1 + 36) == a2 )
        return (*(__int64 (__fastcall **)(Sprite *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
      return result;
    }

    __int64 __fastcall CustomButton::touchOut(Sprite *a1, int a2)
    {
      __int64 result; // x0
    
      result = Sprite::touchOut(a1, a2);
      if ( *((_DWORD *)a1 + 28) != 2 )
        return (*(__int64 (__fastcall **)(Sprite *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
      return result;
    }

    __int64 __fastcall CustomButton::setMovieClip(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
    }

    String *__fastcall CustomButton::setAnalyticsName(String *a1, String *a2)
    {
      return String::operator=(a1 + 5, a2);
    }

    __n128 __fastcall CustomButton::setText(__int64 a1, const String *a2)
    {
      return MovieClip::setText((MovieClip *)*(_QWORD *)(a1 + 96), CustomButton::DEFAULT_TEXT_INSTANCE_NAME, a2);
    }

    __int64 __fastcall CustomButton::setState(__int64 result, __int64 a2)
    {
      int v2; // w9
    
      v2 = *(_DWORD *)(result + 112);
      if ( v2 != (_DWORD)a2 && v2 != -1000 )
      {
        *(_DWORD *)(result + 112) = a2;
        return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)result + 320LL))(
                 result,
                 *(_QWORD *)(result + 104),
                 a2);
      }
      return result;
    }

    __int64 __fastcall CustomButton::setEnabled(_DWORD *a1, int a2)
    {
      int v4; // w1
      __int64 result; // x0
    
      v4 = a1[37];
      if ( a2 )
      {
        result = DisplayObject::disableRenderConfigBits((__int64)a1, v4);
        if ( a1[28] == -1000 )
        {
          a1[28] = -1;
          return (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
        }
      }
      else
      {
        DisplayObject::enableRenderConfigBits((__int64)a1, v4);
        return (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 4294966296LL);
      }
      return result;
    }

    __int64 __fastcall CustomButton::render(__int64 a1, __int64 a2, __int64 a3, __int64 a4, long double a5)
    {
      __int64 v6; // x20
      DataLoaderTexture *v7; // x0
    
      v6 = Sprite::render(a1, a2, a3, a4, a5);
      if ( *(_DWORD *)(a1 + 112) == 2 )
      {
        v7 = *(DataLoaderTexture **)(a1 + 104);
        if ( v7 )
        {
          if ( (unsigned int)MovieClip::isStopped(v7) )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
        }
      }
      if ( *(_BYTE *)(a1 + 234) && (unsigned int)MovieClip::isStopped(*(DataLoaderTexture **)(a1 + 104)) )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
          a1,
          *(_QWORD *)(a1 + 104),
          *(unsigned int *)(a1 + 112));
      return v6;
    }

    __int64 __fastcall CustomButton::setButtonListener(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 152) = a2;
      return result;
    }

    __int64 __fastcall CustomButton::setTimelineMovieClip(lzham *this, DataLoaderTexture *a2)
    {
      int8x16_t *v4; // x2
      int8x16_t v5; // q0
      Multitouch *v6; // x21
      __int64 v7; // x1
    
      do
      {
        if ( (!a2 || !*((_QWORD *)this + 20))
          && (unsigned int)Assert::report(
                             (__int64)"m_pDisplayObject != NULL && pTimelineMovieClip != NULL",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash"
                                      "/gui/CustomButton.cpp",
                             204) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      *((_BYTE *)a2 + 64) = 1;
      v4 = (int8x16_t *)*((_QWORD *)this + 20);
      v5 = v4[1];
      *((_QWORD *)a2 + 2) = v5.i64[0];
      *((_QWORD *)a2 + 3) = vextq_s8(v5, v5, 8u).u64[0];
      *((_DWORD *)a2 + 8) = v4[2].i32[0];
      *((_DWORD *)a2 + 9) = v4[2].i32[1];
      v6 = (Multitouch *)**((_QWORD **)a2 + 9);
      MovieClip::changeTimelineChild(a2, v6, (Multitouch *)v4);
      if ( v6 )
        (*(void (__fastcall **)(Multitouch *))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 13) = a2;
      v7 = *((unsigned int *)this + 28);
      *((_DWORD *)this + 28) = -1;
      return (*(__int64 (__fastcall **)(lzham *, __int64))(*(_QWORD *)this + 304LL))(this, v7);
    }

    String *__fastcall CustomButton::setDefaultTimelineResource(String *this, String *a2, const String *a3)
    {
      String::operator=(&CustomButton::sm_defaultTimelineFileName, this);
      return String::operator=(&CustomButton::sm_defaultTimelineExportName, a2);
    }

    __int64 __fastcall CustomButton::setDisplayObject(__int64 a1, __int64 a2, int a3)
    {
      _QWORD *v6; // x0
      DataLoaderTexture *MovieClip; // x0
      __int64 v8; // x20
    
      CustomButton::destructClips(a1);
      *(_QWORD *)(a1 + 160) = a2;
      *(_QWORD *)(a1 + 96) = 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2) )
        *(_QWORD *)(a1 + 96) = a2;
      if ( a3 && *(_DWORD *)(a1 + 168) )
      {
        v6 = (_QWORD *)(a1 + 176);
        if ( *(_DWORD *)(a1 + 172) + 1 > 8 )
          v6 = (_QWORD *)*v6;
        if ( ResourceManager::isResourceLoaded((__int64)v6) || ResourceManager::sm_lazyLoadingEnabled )
        {
          MovieClip = (DataLoaderTexture *)ResourceManager::getMovieClip(a1 + 168, a1 + 192);
          CustomButton::setTimelineMovieClip((lzham *)a1, MovieClip);
          goto LABEL_13;
        }
        Debugger::warning("CustomButton unable to set timeline clip. Resource is not loaded.");
      }
      *(_QWORD *)(a1 + 104) = 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2) )
        *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
    LABEL_13:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
      v8 = *(unsigned int *)(a1 + 112);
      *(_DWORD *)(a1 + 112) = -1;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, v8);
    }

    __int64 __fastcall CustomButton::updateHitArea(__int64 a1)
    {
      Rect *v2; // x20
      __int64 v3; // x0
      __int64 result; // x0
    
      v2 = *(Rect **)(a1 + 80);
      if ( !v2 )
      {
        v2 = (Rect *)operator new(16);
        Rect::Rect(v2);
        *(_QWORD *)(a1 + 80) = v2;
      }
      v3 = *(_QWORD *)(a1 + 104);
      if ( !v3 )
        v3 = *(_QWORD *)(a1 + 160);
      DisplayObject::getBounds(v3, (const Sprite *)a1, v2);
      result = Sprite::setHitArea((OutOfSyncMessage *)a1, *(DataLoaderFlash **)(a1 + 80));
      *(_BYTE *)(a1 + 65) = 1;
      return result;
    }

    __n128 __fastcall CustomButton::updateTimelineClip(lzham *this, DataLoaderTexture *a2, __int64 a3)
    {
      __int64 v6; // x0
      int FrameIndex; // w20
      __int64 v8; // x0
      int v9; // w0
      __n128 result; // q0
      int v11; // w23
      __int64 v12; // x0
      int v13; // w24
      __int64 v14; // x0
      int v15; // w1
      int v16; // w2
    
      if ( a2 )
      {
        v6 = (*(__int64 (__fastcall **)(lzham *, _QWORD))(*(_QWORD *)this + 328LL))(this, 0);
        FrameIndex = MovieClip::getFrameIndex(a2, v6);
        v8 = (*(__int64 (__fastcall **)(lzham *, _QWORD))(*(_QWORD *)this + 336LL))(this, 0);
        v9 = MovieClip::getFrameIndex(a2, v8);
        v11 = v9;
        if ( (_DWORD)a3 )
        {
          v12 = (*(__int64 (__fastcall **)(lzham *, __int64))(*(_QWORD *)this + 328LL))(this, a3);
          v13 = MovieClip::getFrameIndex(a2, v12);
          v14 = (*(__int64 (__fastcall **)(lzham *, __int64))(*(_QWORD *)this + 336LL))(this, a3);
          v9 = MovieClip::getFrameIndex(a2, v14);
        }
        else
        {
          v13 = FrameIndex;
        }
        if ( v13 == -1 )
          v15 = FrameIndex;
        else
          v15 = v13;
        if ( v13 == -1 )
          v16 = v11;
        else
          v16 = v9;
        if ( v15 != -1 )
        {
          if ( v16 == -1 )
            return MovieClip::gotoAndStopFrameIndex(a2, v15);
          else
            return MovieClip::gotoAndPlayFrameIndex(a2, v15, v16);
        }
      }
      return result;
    }

    bool __fastcall CustomButton::isEnabled(lzham *this)
    {
      return *((_DWORD *)this + 28) != -1000;
    }

    __int64 __fastcall CustomButton::getButtonState(lzham *this)
    {
      return *((unsigned int *)this + 28);
    }

    __int64 __fastcall CustomButton::enableContinuousPresses(__int64 this, char a2)
    {
      *(_BYTE *)(this + 232) = a2;
      if ( (a2 & 1) == 0 )
        *(_DWORD *)(this + 216) = 0;
      return this;
    }

    __int64 __fastcall CustomButton::updateContinuousPresses(__int64 this, float a2)
    {
      float *v3; // x19
      __int64 v4; // x1
      float v5; // s0
      int v6; // w8
      float *v7; // x9
    
      v3 = (float *)this;
      if ( *(_DWORD *)(this + 112) == -1000 )
        goto LABEL_9;
      if ( !*(_BYTE *)(this + 232) )
        goto LABEL_9;
      v4 = *(unsigned int *)(this + 144);
      if ( (_DWORD)v4 == -1 )
        goto LABEL_9;
      this = Sprite::isTouchIn(this, v4);
      if ( (this & 1) == 0 )
        goto LABEL_9;
      v5 = v3[54] + a2;
      v3[54] = v5;
      v6 = *((_DWORD *)v3 + 57);
      v7 = v3 + 56;
      if ( v6 <= 0 )
        v7 = v3 + 55;
      if ( v5 >= *v7 )
      {
        *((_DWORD *)v3 + 57) = v6 + 1;
        (*(void (__fastcall **)(float *, __int64))(*(_QWORD *)v3 + 304LL))(v3, 2);
        this = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v3 + 272LL))(v3);
    LABEL_9:
        v3[54] = 0.0;
      }
      return this;
    }

    const char *__fastcall CustomButton::getStateStartFrameLabel(lzham *this, int a2)
    {
      if ( a2 > 0 )
      {
        if ( a2 == 2 )
          return "Clicked";
        if ( a2 == 1 )
          return "Down";
      }
      else
      {
        if ( a2 == -1000 )
          return "Disabled";
        if ( !a2 )
          return "Idle";
      }
      return 0;
    }

    const char *__fastcall CustomButton::getStateEndFrameLabel(lzham *this, int a2)
    {
      if ( a2 > 0 )
      {
        if ( a2 == 2 )
          return "ClickedEnd";
        if ( a2 == 1 )
          return "DownEnd";
      }
      else
      {
        if ( a2 == -1000 )
          return "DisabledEnd";
        if ( !a2 )
          return "IdleEnd";
      }
      return 0;
    }

    void __fastcall CustomButton::sendAnalyticsEvent(lzham *this)
    {
      char *v2; // x19
      __int64 (__fastcall ***v3)(_QWORD); // x0
      _DWORD *v4; // x9
      String *v5; // x0
      String v6; // [xsp+0h] [xbp-70h] BYREF
      String v7; // [xsp+18h] [xbp-58h] BYREF
      String v8; // [xsp+30h] [xbp-40h] BYREF
      _BYTE v9[24]; // [xsp+48h] [xbp-28h] BYREF
    
      v2 = (char *)this + 120;
      if ( *((_DWORD *)this + 30) && Track::isInitialized(this) )
      {
        v3 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 19);
        if ( v3 && (v4 = (_DWORD *)(**v3)(v3), *v4) )
        {
          operator+("Game.UI.", (__int64)v4, (__int64)v9);
          String::String(&v8, "ButtonPressed");
          Track::event((__int64)v9, (__int64)&v8, (__int64)v2);
          String::~String((__int64)&v8);
          v5 = (String *)v9;
        }
        else
        {
          String::String(&v7, "Game.UI");
          String::String(&v6, "ButtonPressed");
          Track::event((__int64)&v7, (__int64)&v6, (__int64)v2);
          String::~String((__int64)&v6);
          v5 = &v7;
        }
        String::~String((__int64)v5);
      }
    }

    __int64 __fastcall CustomButton::getButtonListener(lzham *this)
    {
      return *((_QWORD *)this + 19);
    }

    __int64 __fastcall CustomButton::touchCancelled(lzham *this, int a2)
    {
      __int64 result; // x0
    
      result = Sprite::touchCancelled(this, a2);
      *((_DWORD *)this + 36) = -1;
      return result;
    }

    _DWORD *__fastcall CustomButton::initializeMembers(lzham *this)
    {
      _DWORD *result; // x0
    
      *((_DWORD *)this + 57) = 0;
      *((_DWORD *)this + 55) = 1058642330;
      *((_BYTE *)this + 232) = 0;
      *((_DWORD *)this + 54) = 0;
      *((_DWORD *)this + 56) = 1036831949;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 28) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 20) = 0;
      String::operator=((_DWORD *)this + 42, "");
      result = String::operator=((_DWORD *)this + 48, "");
      *((_DWORD *)this + 37) = 0;
      *(_WORD *)((char *)this + 233) = 1;
      return result;
    }

}; // end class CustomButton
