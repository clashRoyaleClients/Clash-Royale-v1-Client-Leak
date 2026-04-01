class ExpBar
{
public:

    void __fastcall ExpBar::ExpBar(
            ExpBar *this,
            #1257 *a2,
            #1257 *a3,
            #1271 *a4,
            #1271 *a5,
            __int64 a6,
            __int64 a7,
            int a8,
            int a9)
    {
      const char *v17; // x2
      const char *v18; // x1
      int TotalFrames; // w0
      String v20; // [xsp+18h] [xbp-68h] BYREF
    
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_1004716E8;
      *((_QWORD *)this + 16) = -1;
      *((_DWORD *)this + 31) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      Sprite::addChild(this, a2);
      *((_QWORD *)this + 17) = a2;
      Debugger::doAssert((Debugger *)(a3 != 0), (bool)"", v17);
      *((_QWORD *)this + 21) = MovieClip::getTextFieldByName(a3, "xp_bar_tip");
      *((_QWORD *)this + 18) = a3;
      MovieClip::stopAll(a3);
      *((_QWORD *)this + 19) = a4;
      if ( a4 )
        *((_BYTE *)a4 + 72) = 0;
      *((_QWORD *)this + 20) = a5;
      if ( a5 )
        *((_BYTE *)a5 + 72) = 0;
      if ( a4 )
      {
        TextField::setNumberText(a4, a8, 0);
        *((_DWORD *)this + 29) = a8;
        a5 = (#1271 *)*((_QWORD *)this + 20);
      }
      if ( a5 )
      {
        String::format((String *)"%d/%d", v18, a6, a7);
        TextField::setText(a5, &v20);
        String::~String();
      }
      *((_DWORD *)this + 31) = a9;
      *((float *)this + 24) = (float)(int)a6;
      *((float *)this + 25) = (float)(int)a6;
      *((float *)this + 26) = (float)(int)a7;
      *((_DWORD *)this + 30) = a6;
      if ( (int)a7 < 1 )
      {
        TotalFrames = MovieClip::getTotalFrames(*((#1257 **)this + 18));
        MovieClip::gotoAndStopFrameIndex(
          *((MovieClip **)this + 18),
          (int)(float)((float)((float)(TotalFrames - 1) * 0.0) + 0.5));
      }
      else
      {
        ExpBar::setFillProg(this, (float)(int)a6 / (float)(int)a7);
      }
    }

    __n128 __fastcall ExpBar::setFillProg(#1257 **this, float a2)
    {
      float v3; // s2
      float v4; // s8
      int v5; // w1
    
      v3 = 1.0;
      if ( a2 <= 1.0 )
        v3 = a2;
      if ( a2 >= 0.0 )
        v4 = v3;
      else
        v4 = 0.0;
      v5 = (int)(float)((float)(v4 * (float)(int)(MovieClip::getTotalFrames(*(this + 18)) - 1)) + 0.5);
      return MovieClip::gotoAndStopFrameIndex(*(this + 18), v5);
    }

    void __fastcall ExpBar::ExpBar(
            ExpBar *this,
            #1257 *a2,
            #1257 *a3,
            #1271 *a4,
            #1271 *a5,
            __int64 a6,
            __int64 a7,
            int a8,
            int a9)
    {
      ExpBar::ExpBar(this, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    void __fastcall ExpBar::~ExpBar(Egg *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)this = off_1004716E8;
      v3 = (_QWORD *)((char *)this + 136);
      v2 = *((_QWORD *)this + 17);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_DWORD *)this + 31) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *((_QWORD *)this + 16) = -1;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      v3[3] = 0;
      v3[4] = 0;
      v3[1] = 0;
      v3[2] = 0;
      *v3 = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall ExpBar::~ExpBar(Egg *this)
    {
      __ZN6ExpBarD2Ev(this);
    }

    void __fastcall ExpBar::~ExpBar(Egg *this)
    {
      ExpBar::~ExpBar(this);
      operator delete(this);
    }

    void __fastcall ExpBar::update(Egg *this, float a2, int a3, int a4, int a5, int a6)
    {
      float *v11; // x24
      float v12; // s0
      float v13; // s1
      float v14; // s2
      float v15; // s2
      const char *v16; // x1
      __int64 v17; // x23
      int v18; // w25
      float v19; // s0
      float v20; // s9
      bool v21; // zf
      float v22; // s0
      float v23; // s0
      float v24; // s0
      float v25; // s10
      float v26; // s0
      float v27; // s0
      float v28; // s0
      float v29; // s0
      int v30; // w8
      LogicPageOpenedCommand *v31; // x0
      LogicPageOpenedCommand *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicJSONObject **EffectManager; // x22
      const AreaEffectObject *v35; // x2
      const AskForTVContentMessage *EffectByName; // x0
      long double v37; // q1
      TextField *v38; // x0
      String v39; // [xsp+10h] [xbp-A0h] BYREF
      Rect v40; // [xsp+28h] [xbp-88h] BYREF
      float v41; // [xsp+30h] [xbp-80h]
      int v42; // [xsp+34h] [xbp-7Ch]
      String v43; // [xsp+38h] [xbp-78h] BYREF
    
      *((float *)this + 23) = *((float *)this + 23) + a2;
      if ( *((_DWORD *)this + 29) == a4 )
      {
        if ( *((float *)this + 28) <= 0.0 )
        {
          v12 = (float)a5;
          *((float *)this + 26) = (float)a5;
          v11 = (float *)((char *)this + 100);
          if ( *((_DWORD *)this + 31) > a4 )
            v12 = (float)a3;
          *((float *)this + 25) = v12;
        }
        else
        {
          v11 = (float *)((char *)this + 100);
          v12 = *((float *)this + 25);
        }
      }
      else
      {
        v11 = (float *)((char *)this + 100);
        v12 = (float)((int)*((float *)this + 26) - a6);
        if ( v12 <= *((float *)this + 25) )
          v12 = *((float *)this + 25);
        else
          *v11 = v12;
      }
      v13 = *((float *)this + 24);
      if ( v12 >= v13 )
      {
        v14 = v13 - v12;
        if ( (float)(v13 - v12) < 0.0 )
          v14 = -(float)(v13 - v12);
        if ( v14 > 0.5 )
        {
          v15 = (float)(a2 * 12.0) / 0.016667;
          if ( v15 >= 1.0 )
            v12 = (float)(v12 + (float)(v13 * (float)(v15 + -1.0))) / v15;
          else
            v12 = *((float *)this + 24);
        }
      }
      *((float *)this + 24) = v12;
      ExpBar::setFillProg((#1257 **)this, v12 / *((float *)this + 26));
      v17 = *((_QWORD *)this + 20);
      if ( v17 )
      {
        v18 = (int)(float)(*((float *)this + 24) + 0.5);
        v19 = *((float *)this + 26);
        if ( v18 != *((_DWORD *)this + 32) || (int)v19 != *((_DWORD *)this + 33) )
        {
          String::format(
            (String *)"%d/%d",
            v16,
            (unsigned int)(int)(float)(*((float *)this + 24) + 0.5),
            (unsigned int)(int)v19);
          MovieClipHelper::setTextAndScaleIfNecessary(v17, &v43, 0);
          String::~String();
          *((_DWORD *)this + 32) = v18;
          *((_DWORD *)this + 33) = (int)*((float *)this + 26);
        }
      }
      v20 = fabsf(*((float *)this + 24) - *v11);
      if ( *((_DWORD *)this + 29) != a4 || (v20 <= 0.5 ? (v21 = *((_DWORD *)this + 30) == a3) : (v21 = 0), !v21) )
        *((_DWORD *)this + 23) = 0;
      v22 = *((float *)this + 28);
      if ( v22 > 0.0 )
      {
        v23 = v22 - a2;
        if ( v23 <= 0.0 )
          v23 = 0.0;
        *((float *)this + 28) = v23;
        v24 = v23 / 0.7;
        v25 = v24 * 0.15;
        v26 = sinf((float)(v24 * 3.1416) * 4.0);
        (*(void (__fastcall **)(_QWORD, float))(**((_QWORD **)this + 17) + 40LL))(
          *((_QWORD *)this + 17),
          (float)(v25 * v26) + 1.0);
      }
      v27 = *((float *)this + 27);
      if ( v27 > 0.0 )
      {
        v28 = v27 - a2;
        if ( v28 <= 0.0 )
          v28 = 0.0;
        *((float *)this + 27) = v28;
        v29 = sinf((float)(v28 / 0.6) * 3.1416);
        ColorTransform::setAddColor((ColorTransform *)(*((_QWORD *)this + 18) + 9LL), v29 * 0.5, v29 * 0.5, v29 * 0.5);
      }
      v30 = (int)*v11;
      if ( v30 != *((_DWORD *)this + 30) )
      {
        *((_DWORD *)this + 27) = 1058642330;
        *((_DWORD *)this + 30) = v30;
        if ( *((_QWORD *)this + 21) )
        {
          Rect::Rect(&v40);
          DisplayObject::getGlobalBounds(*((_QWORD *)this + 21), &v40);
          Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(v31);
          RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
          EffectManager = (LogicJSONObject **)RenderSystem::getEffectManager(RenderSystem);
          String::String(&v39, "level_up_hud");
          EffectByName = (const AskForTVContentMessage *)LogicDataTables::getEffectByName(
                                                           (LogicKickAllianceMemberCommand *)&v39,
                                                           0,
                                                           v35);
          LODWORD(v37) = v42;
          EffectManager::addEffectNoLoopScreen(EffectManager, EffectByName, v41, v37, 0, 0, 0, 0);
          String::~String();
          Rect::~Rect(&v40);
        }
      }
      if ( *((_DWORD *)this + 29) != a4 && !a6 && v20 <= 0.5 )
      {
        *((_DWORD *)this + 28) = 1060320051;
        *((_DWORD *)this + 29) = a4;
        v38 = (TextField *)*((_QWORD *)this + 19);
        if ( v38 )
          TextField::setNumberText(v38, a4, 0);
      }
    }

    bool __fastcall ExpBar::isAnimating(Egg *this)
    {
      return fabsf(*((float *)this + 24) - *((float *)this + 25)) > 0.5;
    }

}; // end class ExpBar
