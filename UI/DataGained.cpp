class DataGained
{
public:

    __int64 __fastcall DataGained::DataGained(__int64 a1, __int64 a2, String *a3, int a4, __int64 a5)
    {
      const char *v10; // x2
      const char *v11; // x2
      MovieClip *MovieClip; // x0
      #1047 *v13; // x0
      int v14; // w1
      #1047 *Instance; // x0
      LogicClientAvatar *MainHUD; // x0
      __int64 ExpIconDisplayObject; // x24
      const char *v18; // x2
      MovieClip *v19; // x25
      #1047 *v20; // x0
      LogicClientAvatar *v21; // x0
      const char *v22; // x2
      #1047 *v23; // x0
      LogicClientAvatar *v24; // x0
      const char *v25; // x2
      #1047 *v26; // x0
      #1056 *BattlePage; // x0
      const char *v28; // x2
      const #916 *v29; // x2
      const String *v30; // x1
      const String *v31; // x1
      __int64 v32; // x28
      long double MidY; // q8
      float v34; // s11
      long double Width; // q0
      float v36; // s9
      float v37; // s10
      float v38; // s9
      long double v39; // q10
      float v40; // s0
      float v41; // s1
      float v42; // w9
      __int64 result; // x0
      float v44; // [xsp+28h] [xbp-178h] BYREF
      float v45; // [xsp+2Ch] [xbp-174h] BYREF
      float v46; // [xsp+30h] [xbp-170h] BYREF
      float MidX; // [xsp+34h] [xbp-16Ch] BYREF
      __int128 v48; // [xsp+38h] [xbp-168h] BYREF
      __int128 v49; // [xsp+48h] [xbp-158h] BYREF
      String v50; // [xsp+58h] [xbp-148h] BYREF
      String v51; // [xsp+70h] [xbp-130h] BYREF
      String v52; // [xsp+88h] [xbp-118h] BYREF
      String v53; // [xsp+A0h] [xbp-100h] BYREF
      String v54; // [xsp+B8h] [xbp-E8h] BYREF
      String v55; // [xsp+D0h] [xbp-D0h] BYREF
      String v56; // [xsp+E8h] [xbp-B8h] BYREF
      String v57; // [xsp+100h] [xbp-A0h] BYREF
      String v58; // [xsp+118h] [xbp-88h] BYREF
    
      Sprite::Sprite((Sprite *)a1);
      *(_QWORD *)a1 = off_10045E288;
      String::String((String *)(a1 + 184));
      String::String((String *)(a1 + 208));
      String::String((String *)(a1 + 232));
      String::String((String *)(a1 + 256));
      String::String((String *)(a1 + 280));
      String::String((String *)(a1 + 304));
      *(_QWORD *)(a1 + 328) = 0;
      *(_BYTE *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", v10);
      *(_DWORD *)(a1 + 104) = (_DWORD)a3;
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_animation", v11);
      *(_QWORD *)(a1 + 112) = MovieClip;
      MovieClip::gotoAndStopFrameIndex(MovieClip, 0);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 112));
      String::String(&v58, "appear");
      String::String(&v57, "appear_end");
      String::operator=((String *)(a1 + 184));
      String::operator=((String *)(a1 + 208));
      String::~String(&v57);
      String::~String(&v58);
      String::String(&v56, "disappear");
      String::String(&v55, "disappear_end");
      String::operator=((String *)(a1 + 232));
      String::operator=((String *)(a1 + 256));
      String::~String(&v55);
      String::~String(&v56);
      v13 = (#1047 *)DataGained::setValue((UnlockAccountFailedMessage *)a1, a4);
      *(_DWORD *)(a1 + 164) = 1143111680;
      switch ( (int)a3 )
      {
        case 0:
          Instance = (#1047 *)HomeScreen::getInstance(v13);
          MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
          ExpIconDisplayObject = MainHUD::getExpIconDisplayObject(MainHUD);
          v19 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_xp", v18);
          goto LABEL_6;
        case 1:
          v20 = (#1047 *)HomeScreen::getInstance(v13);
          v21 = (LogicClientAvatar *)HomeScreen::getMainHUD(v20);
          ExpIconDisplayObject = MainHUD::getGoldIconDisplayObject(v21);
          v19 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_gold", v22);
          goto LABEL_6;
        case 2:
          v23 = (#1047 *)HomeScreen::getInstance(v13);
          v24 = (LogicClientAvatar *)HomeScreen::getMainHUD(v23);
          ExpIconDisplayObject = MainHUD::getDiamondsIconDisplayObject(v24);
          v19 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "icon_gems", v25);
          goto LABEL_6;
        case 3:
          v26 = (#1047 *)HomeScreen::getInstance(v13);
          BattlePage = (#1056 *)HomeScreen::getBattlePage(v26);
          ExpIconDisplayObject = BattlePage::getStarsDisplayObject(BattlePage);
          v19 = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/effects.sc", "star_appear", v28);
          MovieClip::gotoAndStopFrameIndex(v19, 0);
          String::String(&v54, "sound_get_crown");
          *(_QWORD *)(a1 + 328) = LogicDataTables::getSoundByName((#1004 *)&v54, 0, v29);
          String::~String(&v54);
    LABEL_6:
          if ( !ExpIconDisplayObject )
            goto LABEL_7;
          if ( !v19 )
          {
            String::valueOf(&v50, a3, v14);
            operator+(&v51, "data gained: failed to find icon object for type: ", &v50);
            Debugger::error((Debugger *)&v51, v31);
          }
          if ( a5 )
          {
            v32 = 0xFFFFFFFFLL;
          }
          else
          {
            a5 = *(_QWORD *)(ExpIconDisplayObject + 48);
            v32 = *(unsigned int *)(ExpIconDisplayObject + 56);
          }
          MovieClip::changeTimelineChild(*(#1257 **)(a1 + 112), "icon_dummy", v19);
          Rect::Rect((Rect *)&v49);
          Rect::Rect((Rect *)&v48);
          DisplayObject::getGlobalBounds(a2, &v49);
          DisplayObject::getGlobalBounds(ExpIconDisplayObject, &v48);
          MidX = Rect::getMidX(&v49);
          MidY = Rect::getMidY(&v49);
          v46 = *(float *)&MidY;
          v34 = *(float *)&DataGained::MAX_RANDOM_OFFSET_PERCENT;
          if ( *(float *)&DataGained::MAX_RANDOM_OFFSET_PERCENT > 0.0 )
          {
            Width = Rect::getWidth(&v49);
            v36 = *(float *)&Width;
            v37 = *(float *)&DataGained::MAX_RANDOM_OFFSET_PERCENT;
            MidY = Rect::getHeight(&v49);
            MidX = MidX
                 + (float)((float)((float)((float)((float)((float)(v34 * v36) * 0.5) + (float)((float)(v34 * v36) * 0.5))
                                         * (float)(rand() % 1000))
                                 / 1000.0)
                         - (float)((float)(v34 * v36) * 0.5));
            *(float *)&MidY = v46
                            + (float)((float)((float)((float)((float)((float)(v37 * *(float *)&MidY) * 0.5)
                                                            + (float)((float)(v37 * *(float *)&MidY) * 0.5))
                                                    * (float)(rand() % 1000))
                                            / 1000.0)
                                    - (float)((float)(v37 * *(float *)&MidY) * 0.5));
            v46 = *(float *)&MidY;
          }
          v38 = Rect::getMidX(&v48);
          v45 = v38;
          v39 = Rect::getMidY(&v48);
          v44 = *(float *)&v39;
          if ( a5 )
          {
            DisplayObject::globalToLocal(a5, &MidX, &v46, MidX, MidY);
            DisplayObject::globalToLocal(a5, &v45, &v44, v38, v39);
            if ( (_DWORD)v32 == -1 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 160LL))(a5, a1);
            else
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a5 + 168LL))(a5, a1, v32);
          }
          v41 = v46;
          v40 = MidX;
          *(float *)(a1 + 128) = MidX;
          *(float *)(a1 + 132) = v41;
          DisplayObject::setXY((DisplayObject *)a1, v40, v41);
          v42 = v44;
          *(float *)(a1 + 136) = v45;
          *(float *)(a1 + 140) = v42;
          Rect::~Rect((Rect *)&v48);
          Rect::~Rect((Rect *)&v49);
          return a1;
        default:
    LABEL_7:
          String::valueOf(&v52, a3, v14);
          operator+(&v53, "data gained: failed to find target object for type: ", &v52);
          Debugger::error((Debugger *)&v53, v30);
          return result;
      }
    }

    void __fastcall DataGained::setValue(UnlockAccountFailedMessage *this, __int64 a2, const char *a3)
    {
      #1257 *v5; // x0
      MovieClip *MovieClip; // x0
      MovieClip *MovieClipByName; // x21
      const char *v8; // x1
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (int)a2 >= 1 )
      {
        v5 = (#1257 *)*((_QWORD *)this + 15);
        if ( !v5 )
        {
          MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "resource_floater", a3);
          *((_QWORD *)this + 15) = MovieClip;
          MovieClip::gotoAndStopFrameIndex(MovieClip, 0);
          (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 15) + 80LL))(
            *((_QWORD *)this + 15),
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          (*(void (__fastcall **)(UnlockAccountFailedMessage *, _QWORD))(*(_QWORD *)this + 160LL))(
            this,
            *((_QWORD *)this + 15));
          v5 = (#1257 *)*((_QWORD *)this + 15);
        }
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v5, "floater");
        String::format((String *)"+%d", v8, a2);
        MovieClip::setText(MovieClipByName, "txt", &v9);
        String::~String(&v9);
      }
      *((_DWORD *)this + 44) = a2;
    }

    __int64 __fastcall DataGained::setStartXY(UnlockAccountFailedMessage *this, float a2, float a3)
    {
      *((float *)this + 32) = a2;
      *((float *)this + 33) = a3;
      return DisplayObject::setXY(this, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall DataGained::DataGained(__int64 a1, __int64 a2, String *a3, int a4, __int64 a5)
    {
      return __ZN10DataGainedC2EP13DisplayObjectNS_4TypeEiP6Sprite(a1, a2, a3, a4, a5);
    }

    void __fastcall DataGained::~DataGained(UnlockAccountFailedMessage *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045E288;
      v3 = (_QWORD *)((char *)this + 112);
      v2 = *((_QWORD *)this + 14);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 14) = 0;
      v4 = *((_QWORD *)this + 15);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 41) = 0;
      *((_BYTE *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 20) = 0;
      v3[2] = 0;
      v3[3] = 0;
      *v3 = 0;
      v3[1] = 0;
      String::~String((String *)((char *)this + 304));
      String::~String((String *)((char *)this + 280));
      String::~String((String *)((char *)this + 256));
      String::~String((String *)((char *)this + 232));
      String::~String((String *)((char *)this + 208));
      String::~String((String *)((char *)this + 184));
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall DataGained::~DataGained(UnlockAccountFailedMessage *this)
    {
      __ZN10DataGainedD2Ev(this);
    }

    void __fastcall DataGained::~DataGained(UnlockAccountFailedMessage *this)
    {
      DataGained::~DataGained(this);
      operator delete(this);
    }

    __int64 __fastcall DataGained::setValueVisible(__int64 this, char a2)
    {
      __int64 v2; // x8
    
      v2 = *(_QWORD *)(this + 120);
      if ( v2 )
        *(_BYTE *)(v2 + 8) = a2;
      return this;
    }

    __int64 __fastcall DataGained::setSpawnDelay(__int64 this, float a2)
    {
      *(float *)(this + 168) = a2;
      return this;
    }

    __int64 __fastcall DataGained::setMoveDelay(__int64 this, float a2)
    {
      *(float *)(this + 172) = a2;
      return this;
    }

    bool __fastcall DataGained::update(UnlockAccountFailedMessage *this, float a2)
    {
      float v4; // s0
      const String *v5; // x1
      __int64 v6; // x0
      float v7; // s1
      float v8; // s0
      float v9; // s1
      float v10; // s0
      float v11; // s0
      float v12; // s1
      float v13; // s1
      float v14; // s0
      float v15; // s2
      float v16; // s4
      float v17; // s5
      float v18; // s0
      float v19; // s1
      __int64 v20; // x1
      float v21; // s0
      float v22; // s1
    
      switch ( *((_DWORD *)this + 45) )
      {
        case 0:
          v4 = *((float *)this + 42) - a2;
          *((float *)this + 42) = v4;
          if ( v4 <= 0.0 )
          {
            v5 = (const String *)((char *)this + 184);
            if ( *((_DWORD *)this + 46) && *((_DWORD *)this + 52) )
              MovieClip::gotoAndPlay(*((MovieClip **)this + 14), v5, (const String *)((char *)this + 208));
            v6 = *((_QWORD *)this + 15);
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64, const String *, float))(*(_QWORD *)v6 + 80LL))(v6, v5, 1.0);
              MovieClip::playOnce(*((MovieClip **)this + 15));
            }
            *((_DWORD *)this + 45) = 1;
            *((_DWORD *)this + 40) = 0;
          }
          break;
        case 1:
          if ( (MovieClip::isPlaying(*((_QWORD *)this + 14)) & 1) != 0 )
          {
            if ( *((_BYTE *)this + 100) )
            {
              *((float *)this + 40) = *((float *)this + 40) + a2;
              v7 = *((float *)this + 40) / (float)(MovieClip::getDuration(*((_QWORD *)this + 14)) * 0.25);
              if ( v7 >= 0.0 )
              {
                v21 = 1.0;
                if ( v7 <= 1.0 )
                  v21 = v7;
                v8 = v21 * v21;
                if ( v7 <= 1.0 )
                  v9 = v7 + v7;
                else
                  v9 = 2.0;
              }
              else
              {
                v8 = 0.0;
                v9 = 0.0;
              }
              v22 = v8 * (float)(3.0 - v9);
              v18 = *((float *)this + 23) + (float)(v22 * (float)(*((float *)this + 32) - *((float *)this + 23)));
              v19 = *((float *)this + 24) + (float)(v22 * (float)(*((float *)this + 33) - *((float *)this + 24)));
              goto LABEL_31;
            }
          }
          else
          {
            *((_DWORD *)this + 40) = 0;
            *((_DWORD *)this + 45) = 2;
            DisplayObject::setXY(this, *((float *)this + 32), *((float *)this + 33));
            DataGained::computeCurvePoints(this);
          }
          break;
        case 2:
          v10 = *((float *)this + 43) - a2;
          *((float *)this + 43) = v10;
          if ( v10 <= 0.0 )
          {
            DataGained::getDuration(this);
            v12 = *((float *)this + 40) + a2;
            *((float *)this + 40) = v12;
            if ( v12 >= v11 )
            {
              if ( *((_DWORD *)this + 58) && *((_DWORD *)this + 64) )
                MovieClip::gotoAndPlay(
                  *((MovieClip **)this + 14),
                  (const String *)((char *)this + 232),
                  (const String *)((char *)this + 256));
              v20 = *((_QWORD *)this + 41);
              if ( v20 )
                SoundManager::playSound(
                  SoundManager::sm_pInstance,
                  v20,
                  0xFFFFFFFFLL,
                  1.0,
                  COERCE_LONG_DOUBLE((unsigned __int128)0));
              *((_DWORD *)this + 45) = 3;
              v18 = *((float *)this + 34);
              v19 = *((float *)this + 35);
            }
            else
            {
              v13 = (float)((float)(v12 / v11) * (float)((float)(v12 / v11) * (float)(v12 / v11)))
                  * (float)((float)((float)(v12 / v11) * (float)((float)((float)(v12 / v11) * 6.0) + -15.0)) + 10.0);
              v14 = *((float *)this + 32);
              v15 = *((float *)this + 33);
              v16 = *((float *)this + 36);
              v17 = *((float *)this + 37);
              v18 = (float)((float)((float)((float)(v14 + v14) + (float)((float)(*((float *)this + 34) - v16) * v13))
                                  + (float)(v13
                                          * (float)(v13
                                                  * (float)((float)((float)((float)(v16 + v16) - (float)(v14 * 5.0))
                                                                  + (float)(*((float *)this + 34) * 4.0))
                                                          - *((float *)this + 38)))))
                          + (float)(v13
                                  * (float)(v13
                                          * (float)(v13
                                                  * (float)(*((float *)this + 38)
                                                          + (float)((float)((float)(v14 * 3.0) - v16)
                                                                  - (float)(*((float *)this + 34) * 3.0)))))))
                  * 0.5;
              v19 = (float)((float)((float)((float)(v15 + v15) + (float)(v13 * (float)(*((float *)this + 35) - v17)))
                                  + (float)(v13
                                          * (float)(v13
                                                  * (float)((float)((float)((float)(v17 + v17) - (float)(v15 * 5.0))
                                                                  + (float)(*((float *)this + 35) * 4.0))
                                                          - *((float *)this + 39)))))
                          + (float)(v13
                                  * (float)(v13
                                          * (float)(v13
                                                  * (float)(*((float *)this + 39)
                                                          + (float)((float)((float)(v15 * 3.0) - v17)
                                                                  - (float)(*((float *)this + 35) * 3.0)))))))
                  * 0.5;
            }
    LABEL_31:
            DisplayObject::setXY(this, v18, v19);
          }
          break;
        case 3:
          if ( (MovieClip::isPlaying(*((_QWORD *)this + 14)) & 1) == 0 )
            *((_DWORD *)this + 45) = 5;
          break;
        default:
          return *((_DWORD *)this + 45) != 5;
      }
      return *((_DWORD *)this + 45) != 5;
    }

    float __fastcall DataGained::computeCurvePoints(UnlockAccountFailedMessage *this)
    {
      float v1; // s0
      float v2; // s1
      float v3; // s2
      float v4; // s3
      float v5; // s6
      float v6; // s5
      float v7; // s4
      float v8; // s6
      float v9; // s5
      float v10; // s4
    
      v1 = *((float *)this + 34);
      v2 = *((float *)this + 35);
      v3 = *((float *)this + 32);
      v4 = *((float *)this + 33);
      v5 = sqrtf((float)((float)(v1 - v3) * (float)(v1 - v3)) + (float)((float)(v2 - v4) * (float)(v2 - v4)));
      v6 = (float)(v2 - v4) / v5;
      v7 = (float)(v1 - v3) / v5;
      v8 = v5 * 0.5;
      if ( v6 <= 0.0 )
        v6 = -v6;
      else
        v7 = -v7;
      v9 = v8 * v6;
      v10 = v8 * v7;
      *((float *)this + 36) = v3 + v9;
      *((float *)this + 37) = v10 + v4;
      *((float *)this + 38) = v9 + v1;
      *((float *)this + 39) = v10 + v2;
      return v10 + v2;
    }

    long double __fastcall DataGained::getDuration(UnlockAccountFailedMessage *this, double a2, long double a3)
    {
      float v3; // s0
      long double result; // q0
    
      v3 = *((float *)this + 41);
      if ( v3 <= 0.0 )
      {
        *(_OWORD *)&result = 0u;
      }
      else
      {
        *(float *)&a3 = sqrtf(
                          (float)((float)(*((float *)this + 34) - *((float *)this + 32))
                                * (float)(*((float *)this + 34) - *((float *)this + 32)))
                        + (float)((float)(*((float *)this + 35) - *((float *)this + 33))
                                * (float)(*((float *)this + 35) - *((float *)this + 33))))
                      / v3;
        LODWORD(result) = 0.5;
        if ( *(float *)&a3 >= 0.5 )
        {
          LODWORD(result) = 2.0;
          if ( *(float *)&a3 <= 2.0 )
            return a3;
        }
      }
      return result;
    }

    __int64 __fastcall DataGained::getTypeForData(UnlockAccountFailedMessage *this, const #916 *a2)
    {
      UnlockAccountFailedMessage *GoldData; // x0
      UnlockAccountFailedMessage *DiamondData; // x0
      __int64 Name; // x0
      const String *v7; // x1
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      GoldData = (UnlockAccountFailedMessage *)LogicDataTables::getGoldData(this);
      if ( GoldData == this )
        return 1;
      DiamondData = (UnlockAccountFailedMessage *)LogicDataTables::getDiamondData(GoldData);
      if ( DiamondData == this )
        return 2;
      if ( (UnlockAccountFailedMessage *)LogicDataTables::getStarCountData(DiamondData) == this )
        return 3;
      if ( (unsigned int)LogicData::getDataType(this) != 46 )
      {
        Name = LogicData::getName(this);
        operator+(&v8, "no data gained type for resource ", Name);
        Debugger::error((Debugger *)&v8, v7);
      }
      return 0;
    }

}; // end class DataGained
