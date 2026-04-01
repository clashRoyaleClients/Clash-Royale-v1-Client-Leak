class GUI
{
public:

    void __fastcall GUI::GUI(GUI *this, VisitHomeMessage *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      __int64 v5; // x25
      Sprite *v6; // x20
      LogicComponent *v7; // x20
      const String *v8; // x2
      Stage *v9; // x0
      DisplayObject *v10; // x20
      Stage *Instance; // x0
      int v12; // w25
      __int64 v13; // x0
      String v14; // [xsp+0h] [xbp-70h] BYREF
      String v15; // [xsp+18h] [xbp-58h] BYREF
    
      v3 = 6;
      Sprite::Sprite(this, 6);
      *(_QWORD *)this = off_1004629A0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 40) = 0;
      v4 = 256;
      do
      {
        *(_QWORD *)((char *)this + v4) = 0;
        --v3;
        v4 -= 16;
      }
      while ( v3 > 0 );
      v5 = 0;
      *((_DWORD *)this + 68) = 0;
      *((_DWORD *)this + 39) = 0;
      *((_DWORD *)this + 81) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_DWORD *)this + 74) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_BYTE *)this + 356) = 0;
      *(_QWORD *)((char *)this + 348) = 0;
      *(_QWORD *)((char *)this + 340) = 0;
      *((_BYTE *)this + 64) = 1;
      do
      {
        v6 = (Sprite *)operator new(96);
        Sprite::Sprite(v6, 8);
        *((_QWORD *)this + v5 + 12) = v6;
        *((_BYTE *)v6 + 64) = 1;
        (*(void (__fastcall **)(GUI *, Sprite *))(*(_QWORD *)this + 160LL))(this, v6);
        ++v5;
      }
      while ( v5 < 6 );
      *(_BYTE *)(*((_QWORD *)this + 13) + 64LL) = 0;
      v7 = (LogicComponent *)operator new(128);
      Modal::Modal(v7, 0);
      *((_QWORD *)this + 35) = v7;
      (*(void (__fastcall **)(_QWORD, LogicComponent *))(**((_QWORD **)this + 14) + 160LL))(*((_QWORD *)this + 14), v7);
      String::String(&v15, "sc/ui.sc");
      String::String(&v14, "bad_connection");
      *((_QWORD *)this + 43) = StringTable::getMovieClip((#1308 *)&v15, &v14, v8);
      String::~String(&v14);
      String::~String(&v15);
      v9 = (Stage *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 160LL))(
                      *((_QWORD *)this + 17),
                      *((_QWORD *)this + 43));
      v10 = (DisplayObject *)*((_QWORD *)this + 43);
      *((_BYTE *)v10 + 8) = 0;
      Instance = (Stage *)Stage::getInstance(v9);
      v12 = *((_DWORD *)Instance + 107);
      v13 = Stage::getInstance(Instance);
      DisplayObject::setXY(v10, (float)v12 * 0.5, (float)*(int *)(v13 + 432) * 0.5);
      *((_DWORD *)this + 88) = 0;
    }

    void __fastcall GUI::~GUI(BadgePopup *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      _QWORD *v6; // x20
      __int64 v7; // x8
      __int64 v8; // x21
      __int64 v9; // x0
      __int64 v10; // x8
      __int64 v11; // x22
      __int64 v12; // x23
      __int64 v13; // x0
      __int64 v14; // x24
      __int64 v15; // x22
      __int64 v16; // x23
      char *v17; // x25
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      __int64 v21; // x0
    
      *(_QWORD *)this = off_1004629A0;
      v2 = *((_QWORD *)this + 43);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 43) = 0;
      v3 = *((_QWORD *)this + 38);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 38) = 0;
      v4 = *((_QWORD *)this + 35);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 35) = 0;
      v5 = *((_QWORD *)this + 36);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 36) = 0;
      GUI::destroyPopups(this);
      v6 = (_QWORD *)((char *)this + 312);
      v7 = *((int *)this + 81);
      if ( (int)v7 >= 1 )
      {
        v8 = v7 - 1;
        do
        {
          v9 = *(_QWORD *)(*v6 + 8 * v8);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v10 = v8-- + 1;
        }
        while ( v10 > 1 );
      }
      v11 = 0;
      *((_DWORD *)this + 81) = 0;
      v12 = 176;
      do
      {
        v13 = *(_QWORD *)((char *)this + v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        *(_QWORD *)((char *)this + v12) = 0;
        ++v11;
        v12 += 16;
      }
      while ( v11 < 6 );
      v14 = 0;
      v15 = 6;
      v16 = 256;
      do
      {
        v17 = (char *)this + 8 * v14;
        v18 = *((_QWORD *)v17 + 12);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        *((_QWORD *)v17 + 12) = 0;
        ++v14;
      }
      while ( v14 < 6 );
      do
      {
        *(_QWORD *)((char *)this + v16) = 0;
        --v15;
        v16 -= 16;
      }
      while ( v15 > 0 );
      *((_DWORD *)this + 68) = 0;
      *((_DWORD *)this + 39) = 0;
      *((_DWORD *)this + 81) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_DWORD *)this + 74) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_BYTE *)this + 356) = 0;
      *(_QWORD *)((char *)this + 348) = 0;
      *(_QWORD *)((char *)this + 340) = 0;
      v19 = *((_QWORD *)this + 41);
      if ( v19 )
        operator delete[](v19);
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 42) = 0;
      if ( *v6 )
        operator delete[](*v6);
      *v6 = 0;
      *((_QWORD *)this + 40) = 0;
      v20 = *((_QWORD *)this + 20);
      if ( v20 )
        operator delete[](v20);
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
      v21 = *((_QWORD *)this + 18);
      if ( v21 )
        operator delete[](v21);
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      Sprite::~Sprite(this);
    }

    __int64 __fastcall GUI::destroyPopups(BadgePopup *this)
    {
      int v1; // w8
      __int64 v2; // x19
      char *v3; // x20
      int v4; // w8
      GameMain *Instance; // x0
    
      v1 = *((_DWORD *)this + 39);
      v2 = (unsigned int)(v1 - 1);
      if ( v1 >= 1 )
      {
        v3 = (char *)this + 144;
        do
        {
          this = (BadgePopup *)LogicArrayList<PopupBase *>::remove(v3, v2);
          if ( this )
            this = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *))(*(_QWORD *)this + 8LL))(this);
          v4 = v2 + 1;
          v2 = (unsigned int)(v2 - 1);
        }
        while ( v4 > 1 );
      }
      Instance = (GameMain *)GameMain::getInstance(this);
      return GameMain::disableBlur(Instance, 0);
    }

    // attributes: thunk
    void __fastcall GUI::~GUI(BadgePopup *this)
    {
      __ZN3GUID2Ev(this);
    }

    void __fastcall GUI::~GUI(BadgePopup *this)
    {
      GUI::~GUI(this);
      operator delete(this);
    }

    __int64 __fastcall GUI::getInstance(BadgePopup *this)
    {
      return GUI::sm_pInstance;
    }

    void __fastcall GUI::constructInstance(BadgePopup *this, VisitHomeMessage *a2)
    {
      GUI *v2; // x19
      VisitHomeMessage *v3; // x1
    
      if ( !GUI::sm_pInstance )
      {
        v2 = (GUI *)operator new(360);
        GUI::GUI(v2, v3);
        GUI::sm_pInstance = (__int64)v2;
      }
    }

    __int64 __fastcall GUI::destructInstance(BadgePopup *this)
    {
      __int64 result; // x0
    
      result = GUI::sm_pInstance;
      if ( GUI::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)GUI::sm_pInstance + 8LL))(GUI::sm_pInstance);
      GUI::sm_pInstance = 0;
      return result;
    }

    #1257 *__fastcall GUI::update(BadgePopup *this, long double a2)
    {
      __int64 v4; // x24
      int v5; // w23
      _QWORD *v6; // x21
      _BYTE *v7; // x22
      char v8; // w20
      __int64 v9; // x8
      __int64 v10; // x1
      float *v12; // x0
      __int64 v13; // x8
      __int64 v14; // x21
      UnlockAccountFailedMessage *v15; // x0
      __int64 v16; // x0
      __int64 v17; // x8
      #1257 *result; // x0
      int v19; // w1
      #1257 *MovieClipByName; // x20
      int v21; // w24
      int v22; // w25
      int v23; // w22
      MovieClip *v24; // x23
      int v25; // w8
      int v26; // w9
      __int64 v27; // x0
      _QWORD *v28; // x9
      const LogicAchievementData *v29; // x20
      _QWORD *v30; // x9
      __int64 v31; // x8
      float v32; // s0
      String v33; // [xsp+0h] [xbp-80h] BYREF
      String v34; // [xsp+18h] [xbp-68h] BYREF
    
      v4 = *((int *)this + 39);
      if ( (int)v4 < 1 )
      {
        LOBYTE(v5) = 0;
        v8 = 1;
      }
      else
      {
        v5 = 0;
        v6 = (_QWORD *)((char *)this + 144);
        do
        {
          v7 = *(_BYTE **)(*v6 + 8 * (v4 - 1));
          v7[216] = 1;
          v8 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 416LL))(v7);
          v5 |= (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 424LL))(v7);
          (*(void (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v7 + 336LL))(v7, a2);
          v7[216] = 0;
          if ( ((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 368LL))(v7) & 1) != 0 )
          {
            v9 = *((int *)this + 39);
            if ( (int)v9 >= 1 )
            {
              v10 = 0;
              while ( *(_BYTE **)(*v6 + 8 * v10) != v7 )
              {
                if ( ++v10 >= v9 )
                  goto LABEL_12;
              }
              if ( (_DWORD)v10 != -1 )
              {
                LogicArrayList<PopupBase *>::remove((char *)this + 144, v10);
                if ( v7 )
                  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 8LL))(v7);
              }
            }
          }
    LABEL_12:
          ;
        }
        while ( v4-- > 1 );
      }
      v12 = (float *)*((_QWORD *)this + 38);
      if ( v12 )
      {
        if ( v12[52] >= 0.0 )
        {
          (*(void (__fastcall **)(float *, long double))(*(_QWORD *)v12 + 272LL))(v12, a2);
        }
        else
        {
          (*(void (__fastcall **)(float *))(*(_QWORD *)v12 + 8LL))(v12);
          *((_QWORD *)this + 38) = 0;
        }
      }
      Modal::update(*((LogicComponent **)this + 35), v5 & 1, *(float *)&a2, v8);
      GUI::updateFloaterTexts(this, *(float *)&a2);
      v13 = *((int *)this + 81);
      if ( (int)v13 >= 1 )
      {
        v14 = v13 - 1;
        do
        {
          v15 = *(UnlockAccountFailedMessage **)(*((_QWORD *)this + 39) + 8 * v14);
          if ( *((_BYTE *)v15 + 8) )
          {
            if ( !DataGained::update(v15, *(float *)&a2) )
            {
              v16 = LogicArrayList<DataGained *>::remove((char *)this + 312, v14);
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            }
          }
          v17 = v14-- + 1;
        }
        while ( v17 > 1 );
      }
      result = (#1257 *)*((_QWORD *)this + 36);
      if ( result )
      {
        MovieClipByName = (#1257 *)MovieClip::getMovieClipByName(result, "item");
        v21 = 0;
        v22 = 0;
        do
        {
          v23 = v22 + 1;
          String::valueOf(&v33, (String *)(unsigned int)(v22 + 1), v19);
          operator+(&v34, "star0", &v33);
          String::~String(&v33);
          v24 = (MovieClip *)MovieClip::getMovieClipByName(MovieClipByName, &v34);
          if ( v22 < *((_DWORD *)this + 74) && (int)MovieClip::getCurrentFrame(*((#1257 **)this + 36)) >= v21 )
          {
            if ( (MovieClip::isPlaying(v24) & 1) == 0 )
              MovieClip::playOnce(v24);
          }
          else
          {
            MovieClip::stop(v24);
          }
          String::~String(&v34);
          v21 += 4;
          ++v22;
        }
        while ( v23 < 3 );
        result = (#1257 *)MovieClip::isStopped(*((#1257 **)this + 36));
        if ( (_DWORD)result )
        {
          result = (#1257 *)*((_QWORD *)this + 36);
          if ( result )
            result = (#1257 *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)result + 8LL))(result);
          *((_QWORD *)this + 36) = 0;
        }
      }
      else
      {
        v25 = *((_DWORD *)this + 85);
        if ( v25 < 1 )
          goto LABEL_50;
        v26 = *((_DWORD *)this + 39);
        if ( v26 <= 0 )
        {
          v28 = (_QWORD *)*((_QWORD *)this + 41);
          v29 = (const LogicAchievementData *)*v28;
        }
        else
        {
          v27 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * (v26 - 1));
          v28 = (_QWORD *)*((_QWORD *)this + 41);
          v29 = (const LogicAchievementData *)*v28;
          if ( v27 )
          {
            result = (#1257 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 440LL))(v27, *v28);
            if ( !(_DWORD)result )
              goto LABEL_50;
            v28 = (_QWORD *)*((_QWORD *)this + 41);
            v25 = *((_DWORD *)this + 85);
          }
        }
        *((_DWORD *)this + 85) = v25 - 1;
        if ( v25 >= 2 )
        {
          v30 = v28 + 1;
          do
          {
            *(v30 - 1) = *v30;
            --v25;
            ++v30;
          }
          while ( v25 > 1 );
        }
        result = (#1257 *)GUI::showAchievementCompletedInternal(this, v29);
      }
    LABEL_50:
      v31 = *((_QWORD *)this + 43);
      if ( v31 )
      {
        v32 = *((float *)this + 88) - *(float *)&a2;
        if ( v32 < 0.0 )
          v32 = 0.0;
        *((float *)this + 88) = v32;
        *(_BYTE *)(v31 + 8) = v32 > 0.0;
      }
      return result;
    }

    __int64 __fastcall GUI::removePopover(BadgePopup *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 38);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 38) = 0;
      return result;
    }

    __int64 __fastcall GUI::updateFloaterTexts(BadgePopup *this, float a2)
    {
      __int64 v4; // x20
      char *v5; // x21
      char *v6; // x8
      __int64 result; // x0
      _QWORD *v8; // x23
      float *v9; // x8
      float v10; // t1
      float v11; // s0
      float v12; // s0
      __int64 v13; // x9
      _QWORD *v14; // x8
      __int64 v15; // x10
    
      v4 = 0;
      v5 = (char *)this + 136;
      do
      {
        v6 = (char *)this + 16 * v4;
        v8 = v6 + 176;
        result = *((_QWORD *)v6 + 22);
        if ( result )
        {
          v10 = *((float *)v6 + 46);
          v9 = (float *)(v6 + 184);
          v11 = v10;
          if ( v10 <= 0.0 )
          {
            result = MovieClip::isPlaying(result);
            if ( (result & 1) == 0 )
            {
              v13 = 0;
              v14 = (_QWORD *)*v8;
              while ( v13 + 6 >= 1 )
              {
                result = v14[6];
                v15 = *(_QWORD *)&v5[8 * v13--];
                if ( result == v15 )
                {
                  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 176LL))(result, *v8);
                  v14 = (_QWORD *)*v8;
                  break;
                }
              }
              if ( v14 )
                result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
              *v8 = 0;
              --*((_DWORD *)this + 68);
            }
          }
          else
          {
            v12 = v11 - a2;
            *v9 = v12;
            if ( v12 <= 0.0 )
            {
              result = MovieClip::playOnce((MovieClip *)result);
              *(_BYTE *)(*v8 + 8LL) = 1;
            }
          }
        }
        ++v4;
      }
      while ( v4 != 6 );
      return result;
    }

    __int64 __fastcall GUI::getTopPopup(BadgePopup *this)
    {
      int v1; // w8
      bool v2; // vf
      int v3; // w8
    
      v1 = *((_DWORD *)this + 39);
      v2 = __OFSUB__(v1, 1);
      v3 = v1 - 1;
      if ( v3 < 0 != v2 )
        return 0;
      else
        return *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v3);
    }

    void __fastcall GUI::showAchievementCompletedInternal(__int64 a1, __int64 a2)
    {
      const AreaEffectObject *v4; // x2
      __int64 SoundByName; // x21
      __int64 v6; // x0
      const String *v7; // x2
      Stage *v8; // x0
      int v9; // w8
      int v10; // w8
      DisplayObject *v11; // x21
      __int64 Instance; // x0
      #1308 *TID; // x0
      const String *v14; // x1
      const String *String; // x0
      MovieClip *MovieClipByName; // x0
      String v17; // [xsp+0h] [xbp-80h] BYREF
      String v18; // [xsp+18h] [xbp-68h] BYREF
      String v19; // [xsp+30h] [xbp-50h] BYREF
      String v20; // [xsp+48h] [xbp-38h] BYREF
    
      String::String(&v20, "Achievement Unlock");
      SoundByName = LogicDataTables::getSoundByName((#1004 *)&v20, 0, v4);
      String::~String(&v20);
      SoundManager::playSound(
        SoundManager::sm_pInstance,
        SoundByName,
        0xFFFFFFFFLL,
        1.0,
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      v6 = *(_QWORD *)(a1 + 288);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *(_QWORD *)(a1 + 288) = 0;
      }
      String::String(&v19, "sc/ui.sc");
      String::String(&v18, "achievement_item_ingame_anim");
      *(_QWORD *)(a1 + 288) = StringTable::getMovieClip((#1308 *)&v19, &v18, v7);
      String::~String(&v18);
      String::~String(&v19);
      v9 = *(_DWORD *)(a2 + 116);
      if ( v9 == 1 )
      {
        v10 = 2;
      }
      else if ( v9 == 2 )
      {
        v10 = 3;
      }
      else
      {
        v10 = 1;
      }
      *(_DWORD *)(a1 + 296) = v10;
      v11 = *(DisplayObject **)(a1 + 288);
      Instance = Stage::getInstance(v8);
      DisplayObject::setXY(v11, (float)*(int *)(Instance + 428) * 0.5, 0.0);
      TID = (#1308 *)LogicData::getTID(a2);
      String = (const String *)StringTable::getString(TID, v14);
      String::String(&v17, String);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 288), "item");
      MovieClip::setText(MovieClipByName, "title", &v17);
      MovieClip::playOnce(*(MovieClip **)(a1 + 288));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 160LL))(
        *(_QWORD *)(a1 + 136),
        *(_QWORD *)(a1 + 288));
      String::~String(&v17);
    }

    float __fastcall GUI::getDefaultFloaterPos(Stage *a1)
    {
      return floorf((float)*(int *)(Stage::getInstance(a1) + 428LL) * 0.5);
    }

    __int64 __fastcall GUI::showCenteredFloaterText(Stage *a1, __int64 a2, __int64 a3, long double a4)
    {
      int *Instance; // x0
      float v9; // s10
      float v10; // s0
      _DWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
    
      Instance = (int *)Stage::getInstance(a1);
      v9 = (float)Instance[107] * 0.5;
      v10 = (float)*(int *)(Stage::getInstance((Stage *)Instance) + 432LL) * 0.5;
      *(float *)v12 = v9;
      *(float *)&v12[1] = v10;
      return GUI::showFloaterTextAt(a1, v12, a2, a3, a4);
    }

    void __fastcall GUI::showFloaterTextAt(__int64 a1, float *a2, const String *a3, int a4, float a5)
    {
      __int64 FreeFloaterTextSlot; // x0
      const char *v11; // x1
      DisplayObject **v12; // x19
      #1257 *v13; // x0
      const String *v14; // x2
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x24
      MovieClip *v17; // x20
      int TotalFrames; // w0
      int v19; // w8
      Stage *GlobalBounds; // x0
      __int64 Instance; // x0
      float v22; // s9
      #1249 *v23; // x20
      long double v24; // q0
      float v25; // s9
      float v26; // s10
      #1249 *v27; // x20
      long double v28; // q0
      MovieClip *v29; // x0
      Rect v30; // [xsp+0h] [xbp-90h] BYREF
      float v31; // [xsp+8h] [xbp-88h]
      String v32; // [xsp+10h] [xbp-80h] BYREF
      String v33; // [xsp+28h] [xbp-68h] BYREF
    
      if ( *(int *)(a1 + 272) <= 5 )
      {
        FreeFloaterTextSlot = GUI::getFreeFloaterTextSlot((BadgePopup *)a1, a3);
        v12 = (DisplayObject **)FreeFloaterTextSlot;
        if ( !FreeFloaterTextSlot )
          Debugger::error((__siginfo *)"not able to find free floater text slot", v11);
        *(float *)(FreeFloaterTextSlot + 8) = a5;
        v13 = *(#1257 **)FreeFloaterTextSlot;
        if ( !*v12 )
        {
          String::String(&v33, "sc/ui.sc");
          String::String(&v32, "floater_text");
          *v12 = (DisplayObject *)MovieClipHelper::getUIMovieClip((MovieClipHelper *)&v33, &v32, v14);
          String::~String(&v32);
          String::~String(&v33);
          ++*(_DWORD *)(a1 + 272);
          v13 = *v12;
        }
        MovieClipByName = MovieClip::getMovieClipByName(v13, "FloaterContent");
        TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "Text");
        TextField::setMultiLine((#1271 *)TextFieldByName, 1);
        TextField::setText((#1271 *)TextFieldByName, a3);
        *(_DWORD *)(TextFieldByName + 64) = a4;
        *(_BYTE *)(TextFieldByName + 73) = 0;
        DisplayObject::setXY(*v12, *a2, a2[1]);
        (*(void (__fastcall **)(_QWORD, DisplayObject *))(**(_QWORD **)(a1 + 128) + 160LL))(*(_QWORD *)(a1 + 128), *v12);
        v17 = *v12;
        TotalFrames = MovieClip::getTotalFrames(*v12);
        v19 = TotalFrames - 1;
        if ( TotalFrames - 1 < 0 )
          v19 = TotalFrames;
        MovieClip::gotoAndStopFrameIndex(v17, v19 >> 1);
        Rect::Rect(&v30);
        GlobalBounds = (Stage *)DisplayObject::getGlobalBounds(*v12, &v30);
        Instance = Stage::getInstance(GlobalBounds);
        v22 = *(float *)&v30.top;
        if ( *(float *)&v30.top >= 1.0 )
        {
          v25 = v31;
          v26 = (float)*(int *)(Instance + 428) + -1.0;
          if ( v31 > v26 )
          {
            v27 = *v12;
            v28 = DisplayObject::getX(*v12);
            DisplayObject::setX(v27, (float)(v26 - v25) + *(float *)&v28);
          }
        }
        else
        {
          v23 = *v12;
          v24 = DisplayObject::getX(*v12);
          DisplayObject::setX(v23, (float)(1.0 - v22) + *(float *)&v24);
        }
        v29 = *v12;
        if ( a5 <= 0.0 )
        {
          MovieClip::playOnce(v29);
        }
        else
        {
          MovieClip::stop(v29);
          *((_BYTE *)*v12 + 8) = 0;
        }
        Rect::~Rect(&v30);
      }
    }

    #1257 **__fastcall GUI::getFreeFloaterTextSlot(BadgePopup *this, const String *a2)
    {
      __int64 v4; // x24
      #1257 **i; // x19
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x0
      __int64 StringObject; // x0
    
      v4 = 0;
      for ( i = (#1257 **)((char *)this + 176); *i; i += 2 )
      {
        MovieClipByName = MovieClip::getMovieClipByName(*i, "FloaterContent");
        TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "Text");
        StringObject = TextField::getStringObject(TextFieldByName);
        if ( (unsigned int)String::equals(StringObject, a2) )
          return (#1257 **)((char *)this + 16 * v4 + 176);
        if ( ++v4 > 5 )
          return 0;
      }
      return i;
    }

    __int64 __fastcall GUI::showPopup(__int64 result, DisplayObject *a2, int a3, char a4, int a5)
    {
      _QWORD *v9; // x20
      __int64 v10; // x0
      pthread_attr_t *PopupByType; // x0
      __int64 ClientGlobals; // x0
      float v13; // s8
      __int64 v14; // x0
      int v15; // w22
      #1080 *Instance; // x23
      __int64 v17; // x0
      #986 *v18; // x0
      #1080 *v19; // x0
      __int64 v20; // x0
      #1080 *StageWidth; // x0
      float v22; // s8
      __int64 v23; // x0
      int StageHeight; // w0
      __int64 v25; // x0
      DisplayObject *v26; // [xsp+8h] [xbp-48h] BYREF
    
      v9 = (_QWORD *)result;
      v26 = a2;
      if ( *(_BYTE *)(result + 356) )
      {
        if ( !a2 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v10 = (*(__int64 (__fastcall **)(DisplayObject *))(*(_QWORD *)a2 + 328LL))(a2);
      PopupByType = (pthread_attr_t *)GUI::getPopupByType(v9, v10);
      if ( PopupByType && (a4 & 1) == 0 )
      {
    LABEL_6:
        result = (*(__int64 (__fastcall **)(DisplayObject *))(*(_QWORD *)a2 + 8LL))(a2);
    LABEL_7:
        v26 = 0;
        return result;
      }
      if ( a5 )
      {
        ClientGlobals = LogicDataTables::getClientGlobals(PopupByType);
        v13 = *(float *)(ClientGlobals + 352);
        v14 = LogicDataTables::getClientGlobals((pthread_attr_t *)ClientGlobals);
        v15 = *(_DWORD *)(v14 + 356);
        Instance = (#1080 *)GameMain::getInstance((#1080 *)v14);
        v17 = GameMain::getInstance(Instance);
        GameMain::enableBlur(Instance, *(OutOfSyncMessage **)(v17 + 72), v13, v15);
      }
      v18 = (#986 *)v9[38];
      if ( v18 )
        Popover::fadeOut(v18);
      v19 = (#1080 *)LogicArrayList<PopupBase *>::add(v9 + 18, &v26);
      if ( a3 )
      {
        v20 = GameMain::getInstance(v19);
        StageWidth = (#1080 *)GameMain::getStageWidth(v20);
        v22 = (float)(int)StageWidth * 0.5;
        v23 = GameMain::getInstance(StageWidth);
        StageHeight = GameMain::getStageHeight(v23);
        DisplayObject::setPixelSnappedXY(a2, v22, (float)StageHeight * 0.5);
      }
      if ( (*(unsigned int (__fastcall **)(DisplayObject *))(*(_QWORD *)a2 + 328LL))(a2) == 7 )
        v25 = v9[15];
      else
        v25 = v9[14];
      return (*(__int64 (__fastcall **)(__int64, DisplayObject *))(*(_QWORD *)v25 + 160LL))(v25, a2);
    }

    __int64 __fastcall GUI::getPopupByType(__int64 a1, int a2)
    {
      __int64 v4; // x22
      __int64 v5; // x23
      __int64 v6; // x21
    
      v4 = *(int *)(a1 + 156);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v5);
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 360LL))(v6) & 1) == 0
          && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 368LL))(v6) & 1) == 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 328LL))(v6) == a2 )
        {
          break;
        }
        if ( ++v5 >= v4 )
          return 0;
      }
      return v6;
    }

    #986 *__fastcall GUI::fadeOutPopover(__int64 a1)
    {
      #986 *result; // x0
    
      result = *(#986 **)(a1 + 304);
      if ( result )
        return (#986 *)Popover::fadeOut(result);
      return result;
    }

    __int64 __fastcall GUI::getLayer(__int64 a1, unsigned int a2)
    {
      return *(_QWORD *)(a1 + 8LL * a2 + 96);
    }

    #986 *__fastcall GUI::popupClosed(__int64 a1)
    {
      #986 *result; // x0
      GameMain *Instance; // x0
    
      result = *(#986 **)(a1 + 304);
      if ( result )
        result = (#986 *)Popover::fadeOut(result);
      if ( *(_DWORD *)(a1 + 156) == 1 )
      {
        Instance = (GameMain *)GameMain::getInstance(result);
        return (#986 *)GameMain::disableBlur(Instance, 0);
      }
      return result;
    }

    __int64 __fastcall GUI::setPopupsBlocked(__int64 result, char a2)
    {
      *(_BYTE *)(result + 356) = a2;
      return result;
    }

    __int64 __fastcall GUI::getEditClanPopup(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( *(int *)(a1 + 156) < 1 )
        return 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) == 32 )
          break;
        if ( ++v2 >= *(int *)(a1 + 156) )
          return 0;
      }
      return v3;
    }

    __int64 __fastcall GUI::getDeviceLinkWindow(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( *(int *)(a1 + 156) < 1 )
        return 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) == 50 )
          break;
        if ( ++v2 >= *(int *)(a1 + 156) )
          return 0;
      }
      return v3;
    }

    __int64 __fastcall GUI::getEventScreen(BadgePopup *this)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( *((int *)this + 39) < 1 )
        return 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v2);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) == 34 )
          break;
        if ( ++v2 >= *((int *)this + 39) )
          return 0;
      }
      return v3;
    }

    __int64 __fastcall GUI::closeTutorialPopup(__int64 this, const LogicMusicData *a2)
    {
      __int64 v3; // x20
      int v4; // w22
      __int64 v5; // x23
      AllianceStreamEntryRemovedMessage *v6; // x21
      __int64 TutorialData; // x0
    
      v3 = this;
      v4 = *(_DWORD *)(this + 156);
      if ( v4 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(AllianceStreamEntryRemovedMessage **)(*(_QWORD *)(v3 + 144) + 8 * v5);
          this = (*(__int64 (__fastcall **)(AllianceStreamEntryRemovedMessage *))(*(_QWORD *)v6 + 328LL))(v6);
          if ( (_DWORD)this == 7 )
          {
            TutorialData = TutorialPopup::getTutorialData(v6);
            this = LogicData::equals(TutorialData, a2);
            if ( (_DWORD)this )
              this = (*(__int64 (__fastcall **)(AllianceStreamEntryRemovedMessage *))(*(_QWORD *)v6 + 352LL))(v6);
          }
          ++v5;
        }
        while ( v4 != (_DWORD)v5 );
      }
      return this;
    }

    __int64 __fastcall GUI::needToHideTutorialPopup(BadgePopup *this)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x20
    
      v2 = *((int *)this + 39);
      if ( (int)v2 < 1 )
        return 0;
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v3);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 328LL))(v4) != 5
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 328LL))(v4) != 7 )
        {
          break;
        }
        if ( ++v3 >= v2 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall GUI::needToHideTutorialArrow(BadgePopup *this, const LogicMusicData *a2)
    {
      __int64 result; // x0
      __int64 PopupByType; // x8
    
      if ( (unsigned int)LogicTutorialData::getFinishRequirement(a2) != 106 )
        return GUI::needToHideTutorialPopup(this);
      if ( GUI::getPopupByType((__int64)this, 10) )
        return 0;
      PopupByType = GUI::getPopupByType((__int64)this, 0);
      result = 0;
      if ( !PopupByType )
        return GUI::needToHideTutorialPopup(this);
      return result;
    }

    __int64 __fastcall GUI::closeAllPopups(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x21
      __int64 v3; // x20
    
      v1 = this;
      if ( *(int *)(this + 156) >= 1 )
      {
        v2 = 0;
        do
        {
          v3 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8 * v2);
          this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 360LL))(v3);
          if ( (this & 1) == 0 )
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 352LL))(v3);
          ++v2;
        }
        while ( v2 < *(int *)(v1 + 156) );
      }
      return this;
    }

    __int64 __fastcall GUI::showPopover(BadgePopup *this, #986 *a2, float a3, float a4, int a5)
    {
      __int64 v10; // x0
    
      v10 = *((_QWORD *)this + 38);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_QWORD *)this + 38) = a2;
      Popover::setPosition(a2, a3, a4);
      Popover::setAlignment(*((#986 **)this + 38), a5);
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 160LL))(
               *((_QWORD *)this + 17),
               *((_QWORD *)this + 38));
    }

    __int64 __fastcall GUI::getPopover(BadgePopup *this)
    {
      return *((_QWORD *)this + 38);
    }

    __int64 __fastcall GUI::addDataGained(
            __int64 a1,
            __int64 a2,
            String *a3,
            int a4,
            char a5,
            float a6,
            float a7,
            float a8,
            float a9)
    {
      __int64 v18; // x19
      __int64 v20; // [xsp+8h] [xbp-58h] BYREF
    
      v18 = operator new(336);
      DataGained::DataGained(v18, a2, a3, a4, a1);
      v20 = v18;
      DataGained::setStartXY((UnlockAccountFailedMessage *)v18, *(float *)(v18 + 128) + a6, *(float *)(v18 + 132) + a7);
      DataGained::setSpawnDelay(v18, a8);
      DataGained::setMoveDelay(v18, a9);
      *(_BYTE *)(v18 + 8) = a5 ^ 1;
      LogicArrayList<DataGained *>::add(a1 + 312, &v20);
      return v18;
    }

    __int64 __fastcall GUI::addDataGained(
            BadgePopup *this,
            #1249 *a2,
            const AreaEffectObject *a3,
            int a4,
            char a5,
            float a6,
            float a7,
            float a8,
            float a9)
    {
      String *TypeForData; // x2
    
      TypeForData = (String *)DataGained::getTypeForData(a3, a2);
      return GUI::addDataGained((__int64)this, (__int64)a2, TypeForData, a4, a5, a6, a7, a8, a9);
    }

    __int64 __fastcall GUI::showPendingDataGained(__int64 this)
    {
      __int64 v1; // x9
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x11
    
      v1 = *(int *)(this + 324);
      if ( (int)v1 >= 1 )
      {
        v2 = *(_QWORD *)(this + 312);
        v3 = v1 - 1;
        do
        {
          *(_BYTE *)(*(_QWORD *)(v2 + 8 * v3) + 8LL) = 1;
          v4 = v3-- + 1;
        }
        while ( v4 > 1 );
      }
      return this;
    }

    __int64 __fastcall GUI::getTotalValueOfPendingDataGained(__int64 a1, int a2)
    {
      int v3; // w10
      __int64 result; // x0
      __int64 v5; // x8
      __int64 v6; // x9
      __int64 *i; // x10
      __int64 v8; // x11
      int v9; // w12
    
      v3 = *(_DWORD *)(a1 + 324);
      if ( v3 < 1 )
        return 0;
      result = 0;
      v5 = *(_QWORD *)(a1 + 312);
      do
      {
        v6 = v3;
        for ( i = (__int64 *)(v5 + 8LL * (v3 - 1)); ; --i )
        {
          v8 = *i;
          if ( *(_DWORD *)(*i + 104) == a2 )
          {
            v9 = *(_DWORD *)(v8 + 180);
            if ( v9 != 3 && v9 != 5 )
              break;
          }
          if ( v6-- <= 1 )
            return result;
        }
        result = (unsigned int)(*(_DWORD *)(v8 + 176) + result);
        v3 = v6 - 1;
      }
      while ( (int)v6 > 1 );
      return result;
    }

    bool __fastcall GUI::hasPendingDataGained(__int64 a1)
    {
      return *(_DWORD *)(a1 + 324) > 0;
    }

    __int64 __fastcall GUI::getVisiblePopOver(__int64 a1)
    {
      #986 *v2; // x0
    
      v2 = *(#986 **)(a1 + 304);
      if ( v2 && (Popover::isFadingOut(v2) & 1) == 0 )
        return *(_QWORD *)(a1 + 304);
      else
        return 0;
    }

    void __fastcall GUI::showAchievementCompleted(__int64 a1, __int64 a2)
    {
      int v4; // w8
      bool v5; // vf
      int v6; // w8
      __int64 v7; // x0
      __int64 v8; // [xsp+8h] [xbp-18h] BYREF
    
      v8 = a2;
      v4 = *(_DWORD *)(a1 + 156);
      v5 = __OFSUB__(v4, 1);
      v6 = v4 - 1;
      if ( v6 < 0 != v5
        || (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL * v6)) == 0
        || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 440LL))(v7, a2) )
      {
        GUI::showAchievementCompletedInternal(a1, a2);
      }
      else
      {
        LogicArrayList<LogicAchievementData const*>::add(a1 + 328, &v8);
      }
    }

    void __fastcall GUI::openSpellInfo(vm_address_t *a1, const TextField *a2, char a3)
    {
      __int64 Instance; // x0
      tween::Bounce *PlayerAvatar; // x19
      InitState *v7; // x21
      const #1143 *Arena; // x0
      const char *v9; // x1
      ScrollArea *v10; // x21
      Stage *v11; // x19
      __int64 String; // x21
      InitState *SpellData; // x0
      #1308 *UnlockArena; // x0
      const AreaEffectObject *v15; // x1
      __int64 LocalizedName; // x0
      InitState *v17; // x0
      __int64 Rarity; // x0
      __int64 TID; // x0
      String v20; // [xsp+0h] [xbp-80h] BYREF
      String v21; // [xsp+18h] [xbp-68h] BYREF
      String v22; // [xsp+30h] [xbp-50h] BYREF
      String v23; // [xsp+48h] [xbp-38h] BYREF
    
      Instance = GameMode::getInstance(a1);
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(Instance);
      if ( (a3 & 1) != 0
        || (v7 = (InitState *)LogicSpell::getSpellData(a2),
            Arena = (const #1143 *)LogicClientAvatar::getArena(PlayerAvatar),
            (unsigned int)LogicSpellData::isUnlockedInArena(v7, Arena)) )
      {
        v10 = (ScrollArea *)operator new(288);
        SpellInfoPopup::SpellInfoPopup(v10, a2, 0, 0);
        GUI::showPopup(GUI::sm_pInstance, v10, 0, 0, 0);
      }
      else
      {
        v11 = (Stage *)GUI::sm_pInstance;
        String = StringTable::getString((#1308 *)"TID_LOCKED_CARD_PRESSED", v9);
        String::String(&v21, "<ARENA_NAME>");
        SpellData = (InitState *)LogicSpell::getSpellData(a2);
        UnlockArena = (#1308 *)LogicSpellData::getUnlockArena(SpellData);
        LocalizedName = StringTable::getLocalizedName(UnlockArena, v15);
        String::replace(&v22, String, &v21, LocalizedName);
        String::String(&v20, "<RARITY>");
        v17 = (InitState *)LogicSpell::getSpellData(a2);
        Rarity = LogicSpellData::getRarity(v17);
        TID = LogicData::getTID(Rarity);
        String::replace(&v23, &v22, &v20, TID);
        GUI::showCenteredFloaterText(v11, (__int64)&v23, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String(&v23);
        String::~String(&v20);
        String::~String(&v22);
        String::~String(&v21);
      }
    }

    __int64 __fastcall GUI::hideBadConnection(__int64 result)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(result + 344);
      if ( v1 )
      {
        *(_BYTE *)(v1 + 8) = 0;
        *(_DWORD *)(result + 352) = 1036831949;
      }
      return result;
    }

    __int64 __fastcall GUI::showBadConnection(__int64 result)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(result + 344);
      if ( v1 )
      {
        *(_BYTE *)(v1 + 8) = 1;
        *(_DWORD *)(result + 352) = 1065353216;
      }
      return result;
    }

    __int64 __fastcall GUI::getNameChangeHandler(__int64 a1)
    {
      __int64 NamePopup; // x0
      NameChangeWindow *v4; // x0
    
      if ( ((__int64 (*)(void))GUI::getNamePopup)() )
      {
        NamePopup = GUI::getNamePopup(a1);
        if ( NamePopup )
          return NamePopup + 232;
        else
          return 0;
      }
      else if ( GUI::getNameChangeWindow(a1) )
      {
        v4 = (NameChangeWindow *)GUI::getNameChangeWindow(a1);
        return NameChangeWindow::getNameChangeHandlerScreen(v4);
      }
      else
      {
        return 0;
      }
    }

    __int64 __fastcall GUI::getNamePopup(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( *(int *)(a1 + 156) < 1 )
        return 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) == 5
          && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 360LL))(v3) & 1) == 0 )
        {
          break;
        }
        if ( ++v2 >= *(int *)(a1 + 156) )
          return 0;
      }
      return v3;
    }

    __int64 __fastcall GUI::getNameChangeWindow(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( *(int *)(a1 + 156) < 1 )
        return 0;
      v2 = 0;
      while ( 1 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) == 51
          && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 360LL))(v3) & 1) == 0 )
        {
          break;
        }
        if ( ++v2 >= *(int *)(a1 + 156) )
          return 0;
      }
      return v3;
    }

}; // end class GUI
