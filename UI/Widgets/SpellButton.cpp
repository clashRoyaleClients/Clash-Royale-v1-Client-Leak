class SpellButton
{
public:

    void __fastcall SpellButton::SpellButton(SpellButton *this, OutOfSyncMessage *a2, const AllianceItem *a3)
    {
      const char *v6; // x2
      SpellTargetIndicator *v7; // x22
    
      SpellItem::SpellItem(this, 0, 0, 0);
      *(_QWORD *)this = off_100468F00;
      *((_QWORD *)this + 33) = off_1004690A0;
      *((_QWORD *)this + 34) = &off_100469100;
      Matrix2x3::Matrix2x3((SpellButton *)((char *)this + 616));
      *((_QWORD *)this + 58) = 0;
      *((_BYTE *)this + 579) = 0;
      *((_BYTE *)this + 581) = 0;
      *((_QWORD *)this + 76) = 0;
      *((_QWORD *)this + 75) = 0;
      *((_QWORD *)this + 74) = 0;
      *((_QWORD *)this + 73) = 0;
      *((_WORD *)this + 324) = 0;
      *((_QWORD *)this + 80) = 0;
      *((_DWORD *)this + 120) = -1;
      *((_QWORD *)this + 67) = 0;
      *((_DWORD *)this + 126) = 0;
      *((_DWORD *)this + 127) = 0;
      *((_DWORD *)this + 128) = 1065353216;
      *((_DWORD *)this + 121) = 0;
      *((_QWORD *)this + 59) = 0;
      *((_DWORD *)this + 142) = 0;
      *((_QWORD *)this + 70) = 0;
      *((_QWORD *)this + 69) = 0;
      *((_QWORD *)this + 68) = 0;
      *((_DWORD *)this + 143) = -1;
      *((_BYTE *)this + 577) = 0;
      *((_DWORD *)this + 123) = -1;
      *((_DWORD *)this + 124) = 0;
      *((_DWORD *)this + 125) = 0;
      *((_BYTE *)this + 576) = 0;
      *((_BYTE *)this + 578) = 0;
      *((_BYTE *)this + 580) = 0;
      *((_DWORD *)this + 133) = 0;
      *(_QWORD *)((char *)this + 524) = 0;
      *(_QWORD *)((char *)this + 516) = 0;
      GameButton::setClickSound(this, 0);
      Debugger::doAssert((Debugger *)(a3 != 0), (bool)"", v6);
      *((_QWORD *)this + 58) = a3;
      v7 = (SpellTargetIndicator *)operator new(160);
      SpellTargetIndicator::SpellTargetIndicator(v7, (__int64)a2);
      *((_QWORD *)this + 67) = v7;
      *((_BYTE *)this + 581) = 1;
    }

    // attributes: thunk
    void __fastcall SpellButton::SpellButton(SpellButton *this, OutOfSyncMessage *a2, const AllianceItem *a3)
    {
      __ZN11SpellButtonC2EP6SpritePK13LogicSummoner(this, a2, a3);
    }

    void __fastcall SpellButton::~SpellButton(AllianceLeaveOkMessage *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      void *v4; // x20
      __int64 v5; // x0
      __int64 v6; // x0
    
      *(_QWORD *)this = off_100468F00;
      *((_QWORD *)this + 33) = off_1004690A0;
      *((_QWORD *)this + 34) = &off_100469100;
      v2 = *((_QWORD *)this + 69);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *((_QWORD *)this + 69);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *((_QWORD *)this + 69) = 0;
      }
      v4 = (void *)*((_QWORD *)this + 67);
      if ( v4 )
      {
        SpellTargetIndicator::~SpellTargetIndicator(*((MovieClipHelper **)this + 67));
        operator delete(v4);
      }
      *((_QWORD *)this + 67) = 0;
      v5 = *((_QWORD *)this + 68);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 68) = 0;
      v6 = *((_QWORD *)this + 76);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 58) = 0;
      *((_BYTE *)this + 579) = 0;
      *((_BYTE *)this + 581) = 0;
      *((_WORD *)this + 324) = 0;
      *((_QWORD *)this + 80) = 0;
      *((_QWORD *)this + 76) = 0;
      *((_QWORD *)this + 75) = 0;
      *((_QWORD *)this + 74) = 0;
      *((_QWORD *)this + 73) = 0;
      *((_DWORD *)this + 120) = -1;
      *((_QWORD *)this + 67) = 0;
      *((_DWORD *)this + 126) = 0;
      *((_DWORD *)this + 127) = 0;
      *((_DWORD *)this + 128) = 1065353216;
      *((_DWORD *)this + 121) = 0;
      *((_QWORD *)this + 59) = 0;
      *((_DWORD *)this + 142) = 0;
      *((_QWORD *)this + 69) = 0;
      *((_QWORD *)this + 70) = 0;
      *((_QWORD *)this + 68) = 0;
      *((_DWORD *)this + 143) = -1;
      *((_BYTE *)this + 577) = 0;
      *((_DWORD *)this + 123) = -1;
      *((_DWORD *)this + 124) = 0;
      *((_DWORD *)this + 125) = 0;
      *((_BYTE *)this + 576) = 0;
      *((_BYTE *)this + 578) = 0;
      *((_BYTE *)this + 580) = 0;
      *((_DWORD *)this + 133) = 0;
      *(_QWORD *)((char *)this + 524) = 0;
      *(_QWORD *)((char *)this + 516) = 0;
      Matrix2x3::~Matrix2x3((AllianceLeaveOkMessage *)((char *)this + 616));
      SpellItem::~SpellItem(this);
    }

    // attributes: thunk
    void __fastcall SpellButton::~SpellButton(AllianceLeaveOkMessage *this)
    {
      __ZN11SpellButtonD2Ev(this);
    }

    void __fastcall SpellButton::~SpellButton(AllianceLeaveOkMessage *this)
    {
      SpellButton::~SpellButton(this);
      operator delete(this);
    }

    __int64 __fastcall SpellButton::setSpellChangeTransform(__int64 result, __int64 a2, float a3)
    {
      *(_QWORD *)(result + 632) = *(_QWORD *)(a2 + 16);
      *(_OWORD *)(result + 616) = *(_OWORD *)a2;
      *(float *)(result + 644) = a3;
      *(float *)(result + 640) = a3;
      *(_BYTE *)(result + 648) = 1;
      return result;
    }

    float __fastcall SpellButton::showSpellAppearAnim(AllianceLeaveOkMessage *this, float a2, char a3)
    {
      float result; // s0
    
      result = -a2;
      *((float *)this + 160) = result;
      *((_BYTE *)this + 649) = a3;
      return result;
    }

    LogicBattleEvent *__fastcall SpellButton::createReplayEvent(
            AllianceLeaveOkMessage *this,
            unsigned int a2,
            const char *a3)
    {
      char v3; // w20
      tween::Bounce *PlayerAvatar; // x22
      LogicBattleEvent *v6; // x21
      const #1236 *AccountId; // x0
    
      v3 = a2;
      Debugger::doAssert((Debugger *)(a2 < 0xFF), (bool)"", a3);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( !PlayerAvatar )
        return 0;
      v6 = (LogicBattleEvent *)operator new(48);
      AccountId = (const #1236 *)LogicClientAvatar::getAccountId(PlayerAvatar);
      LogicBattleEvent::LogicBattleEvent(v6, AccountId);
      LogicBattleEvent::setType((__int64)v6, v3);
      LogicBattleEvent::setParam(v6, 0, *((char *)this + 480));
      return v6;
    }

    __int64 __fastcall SpellButton::setSpell(__int64 this, const TextField *a2, int a3)
    {
      __int64 v4; // x19
      const TextField *v5; // x8
      bool v6; // zf
      #1257 *v7; // x20
      __int64 v8; // x0
      _QWORD *v9; // x21
    
      v4 = this;
      *(_DWORD *)(this + 480) = a3;
      v5 = *(const TextField **)(this + 304);
      if ( v5 != a2 )
      {
        if ( v5 )
          v6 = *(_BYTE *)(this + 648) == 0;
        else
          v6 = 1;
        if ( !v6 )
        {
          *(_DWORD *)(this + 640) = 0x80000000;
          *(_BYTE *)(this + 649) = 1;
        }
        SpellButton::setSelected((AllianceLeaveOkMessage *)this, 0, 0);
        *(_DWORD *)(v4 + 484) = 0;
        SpellItem::setSpell((SpellItem *)v4, a2);
        GameButton::setClickSound((GameButton *)v4, 0);
        this = *(_QWORD *)(v4 + 304);
        if ( this )
        {
          this = LogicSpell::getSpellData((TextField *)this);
          if ( this )
          {
            v7 = *(#1257 **)(v4 + 96);
            *(_QWORD *)(v4 + 472) = MovieClip::getMovieClipByName(v7, "frame");
            v8 = *(_QWORD *)(v4 + 544);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            *(_QWORD *)(v4 + 544) = 0;
            v9 = (_QWORD *)operator new(168);
            RectangleTimer::RectangleTimer(v9);
            *(_QWORD *)(v4 + 544) = v9;
            (*(void (__fastcall **)(_QWORD *, float))(*v9 + 56LL))(v9, 0.7);
            (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(v4 + 544) + 48LL))(*(_QWORD *)(v4 + 544), 0.6);
            return (*(__int64 (__fastcall **)(#1257 *, _QWORD))(*(_QWORD *)v7 + 160LL))(v7, *(_QWORD *)(v4 + 544));
          }
        }
      }
      return this;
    }

    __int64 __fastcall SpellButton::setSelected(__int64 this, int a2, int a3)
    {
      __int64 v5; // x19
      MovieClip *v6; // x0
      const String *v7; // x1
      __int64 SelectSpellSound; // x0
      LogicTutorialManager *Instance; // x0
      int v10; // w21
      InitState *SpellData; // x0
      Stage *v12; // x19
      const char *v13; // x1
      void *String; // x1
    
      v5 = this;
      if ( a2 != *(unsigned __int8 *)(this + 577) )
      {
        *(_BYTE *)(this + 577) = a2;
        *(_DWORD *)(this + 584) = 0;
        v6 = *(MovieClip **)(this + 472);
        if ( v6 )
        {
          if ( a2 )
            v7 = (const String *)&SpellItem::FRAME_LABEL_SELECTED;
          else
            v7 = (const String *)&SpellItem::FRAME_LABEL_NORMAL;
          v6 = (MovieClip *)MovieClip::gotoAndStop(v6, v7);
        }
        if ( a2 && a3 )
        {
          SelectSpellSound = LogicDataTables::getSelectSpellSound(v6);
          v6 = (MovieClip *)SoundManager::playSound(
                              SoundManager::sm_pInstance,
                              SelectSpellSound,
                              0xFFFFFFFFLL,
                              1.0,
                              COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
        Instance = (LogicTutorialManager *)BattleScreen::getInstance(v6);
        this = BattleScreen::isReplay(Instance);
        v10 = this;
        if ( a2 )
        {
          this = *(_QWORD *)(v5 + 304);
          if ( this )
          {
            SpellData = (InitState *)LogicSpell::getSpellData((TextField *)this);
            this = LogicSpellData::isMirror(SpellData);
            if ( ((v10 | (unsigned int)this ^ 1) & 1) == 0 )
            {
              this = LogicSummoner::getSimulatedLastSpell(*(_QWORD *)(v5 + 464));
              if ( !this )
              {
                v12 = (Stage *)GUI::getInstance(0);
                String = StringTable::getString((#1308 *)"TID_CANNOT_USE_MIRROR_FIRST", v13);
                return GUI::showCenteredFloaterText(
                         v12,
                         (__int64)String,
                         0xFFFFFFFFLL,
                         COERCE_LONG_DOUBLE((unsigned __int128)0));
              }
            }
          }
        }
      }
      return this;
    }

    __int64 __fastcall SpellButton::getSpellData(AllianceLeaveOkMessage *this)
    {
      TextField *v1; // x0
    
      v1 = (TextField *)*((_QWORD *)this + 38);
      if ( v1 )
        return LogicSpell::getSpellData(v1);
      else
        return 0;
    }

    __int64 __fastcall SpellButton::isSelected(AllianceLeaveOkMessage *this)
    {
      return *((unsigned __int8 *)this + 577);
    }

    __int64 __fastcall SpellButton::update(
            AllianceLeaveOkMessage *this,
            float a2,
            int a3,
            const TextField *a4,
            int a5,
            int a6,
            char a7)
    {
      long double v7; // q9
      long double v8; // q11
      long double v9; // q12
      LogicTutorialManager *Instance; // x0
      bool isReplay; // w26
      InitState *SpellData; // x27
      int v20; // w20
      _BOOL8 v21; // x21
      int v22; // w23
      float v23; // s0
      float v24; // s1
      float v25; // s0
      float v26; // s1
      float v27; // s2
      float v28; // s0
      float v29; // s10
      float v30; // s3
      float v31; // s0
      const AreaEffectObject *v32; // x2
      __int64 SoundByName; // x22
      float v34; // s0
      float v35; // s0
      LogicDataTables *v36; // x0
      __int64 v37; // x21
      __int64 SpellAvailableSound; // x0
      AllianceLeaveOkMessage *updated; // x0
      float v40; // s0
      float v41; // s0
      float v42; // s0
      float v43; // s0
      float v44; // s2
      float v45; // s3
      float v46; // s0
      float v47; // s0
      float v48; // s0
      float v49; // s1
      float v50; // s0
      float v51; // s0
      char v52; // w8
      float v53; // s0
      float *v54; // x8
      float v55; // w8
      float v57; // [xsp+0h] [xbp-C0h]
      float v58; // [xsp+0h] [xbp-C0h]
      _BOOL4 v59; // [xsp+10h] [xbp-B0h]
      float v60; // [xsp+10h] [xbp-B0h]
      int v61; // [xsp+20h] [xbp-A0h] BYREF
      float v62; // [xsp+24h] [xbp-9Ch] BYREF
      String v63; // [xsp+28h] [xbp-98h] BYREF
    
      if ( *((_BYTE *)this + 578) )
        v59 = *((_BYTE *)this + 8) != 0;
      else
        v59 = 0;
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(this);
      isReplay = BattleScreen::isReplay(Instance);
      *((_WORD *)this + 289) = 0;
      if ( a4 && (SpellData = (InitState *)LogicSpell::getSpellData(a4)) != 0 )
      {
        v20 = 100 * LogicSummoner::calculateSimulatedManaCost(*((_QWORD *)this + 58), SpellData);
        if ( v20 <= a3 )
          *((_BYTE *)this + 578) = 1;
      }
      else
      {
        v20 = 0;
        SpellData = 0;
      }
      (*(void (__fastcall **)(AllianceLeaveOkMessage *, float))(*(_QWORD *)this + 40LL))(this, *((float *)this + 128));
      v21 = (*((_BYTE *)this + 578) ^ 1 | a6) != 0;
      if ( SpellData && (unsigned int)LogicSpellData::isMirror(SpellData) )
      {
        if ( LogicSummoner::getSimulatedLastSpell(*((_QWORD *)this + 58)) )
          SpellItem::setMana(this, v20 / 100);
        else
          v21 = 1;
      }
      *((_BYTE *)this + 64) = (isReplay | a6) ^ 1;
      SpellButton::setSpell((__int64)this, a4, a5);
      SpellButton::refreshMirroredIcon(this);
      v22 = 0;
      if ( SpellData )
      {
        if ( *((_BYTE *)this + 578) )
          v23 = 1.0;
        else
          v23 = (float)a3 / (float)v20;
        RectangleTimer::update(*((_QWORD *)this + 68), v23);
        v24 = *((float *)this + 160);
        v25 = *((float *)this + 161);
        if ( v24 < v25 )
        {
          v26 = v24 + a2;
          *((float *)this + 160) = v26;
          if ( v26 >= 0.0 )
          {
            v27 = v26 / v25;
            if ( (float)(v26 / v25) < 0.0 )
              v27 = 0.0;
            LODWORD(v7) = 1.0;
            if ( v27 > 1.0 )
              v27 = 1.0;
            v28 = (float)(v26 * 4.0) / v25;
            if ( v28 < 0.0 )
              v28 = 0.0;
            if ( v28 > 1.0 )
              v28 = 1.0;
            v29 = *((float *)this + 159) + (float)((float)(*((float *)this + 127) - *((float *)this + 159)) * v28);
            v30 = *((float *)this + 128);
            *(float *)&v8 = *((float *)this + 154) + (float)(v28 * (float)(v30 - *((float *)this + 154)));
            *(float *)&v9 = *((float *)this + 157) + (float)(v28 * (float)(v30 - *((float *)this + 157)));
            werp1(*((float *)this + 158), *((float *)this + 126), v27, 0.33333, 20.0, 0.66667);
            DisplayObject::setXY(this, v31, v29);
            (*(void (__fastcall **)(AllianceLeaveOkMessage *, long double))(*(_QWORD *)this + 48LL))(this, v8);
            (*(void (__fastcall **)(AllianceLeaveOkMessage *, long double))(*(_QWORD *)this + 56LL))(this, v9);
            (*(void (__fastcall **)(AllianceLeaveOkMessage *, long double))(*(_QWORD *)this + 80LL))(this, v7);
            *((_DWORD *)this + 146) = 1047904911;
            if ( *((_BYTE *)this + 649) )
            {
              String::String(&v63, "sound_card_fly_in");
              SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v63, 0, v32);
              String::~String();
              SoundManager::playSound(
                SoundManager::sm_pInstance,
                SoundByName,
                0xFFFFFFFFLL,
                1.0,
                COERCE_LONG_DOUBLE((unsigned __int128)0));
              *((_BYTE *)this + 649) = 0;
            }
          }
          else
          {
            (*(void (__fastcall **)(AllianceLeaveOkMessage *, long double))(*(_QWORD *)this + 80LL))(
              this,
              COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
        }
        v22 = 1;
      }
      (*(void (__fastcall **)(AllianceLeaveOkMessage *, _BOOL8))(*(_QWORD *)this + 152LL))(this, v21);
      v34 = *((float *)this + 121);
      if ( v34 > 0.0 )
      {
        v35 = v34 - a2;
        *((float *)this + 121) = v35;
        if ( v35 > 0.0 )
          v22 = 0;
      }
      if ( !v59 && !v21 )
      {
        v36 = (LogicDataTables *)GameButton::wobble(this);
        if ( v22 )
        {
          if ( !*((_BYTE *)this + 581) )
          {
            v37 = SoundManager::sm_pInstance;
            SpellAvailableSound = LogicDataTables::getSpellAvailableSound(v36);
            SoundManager::playSound(v37, SpellAvailableSound, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
          }
        }
      }
      if ( *((_BYTE *)this + 576) )
      {
        updated = (AllianceLeaveOkMessage *)SpellButton::updateDragAnimation(this, a2, 0);
        if ( (unsigned int)SpellButton::isRecordingEnabled(updated) )
        {
          v40 = *((float *)this + 140) + a2;
          *((float *)this + 140) = v40;
          if ( v40 >= 2.0 )
            SpellButton::recordDragCoordinate(this, *((float *)this + 132), *((float *)this + 133), 1);
        }
        goto LABEL_64;
      }
      if ( *((float *)this + 160) < *((float *)this + 161) )
        goto LABEL_64;
      v41 = *((float *)this + 146);
      if ( v41 >= 0.24 )
        goto LABEL_64;
      v42 = v41 + a2;
      *((float *)this + 146) = v42;
      v43 = v42 / 0.24;
      if ( v43 >= 0.0 )
      {
        v44 = 1.0;
        if ( v43 <= 1.0 )
          v44 = v43;
      }
      else
      {
        v44 = 0.0;
      }
      if ( *((_BYTE *)this + 650) )
      {
        v45 = -17.0;
        v60 = 0.0;
      }
      else
      {
        v46 = 17.0;
        if ( !*((_DWORD *)this + 122) )
          v46 = -17.0;
        v60 = v46;
        v45 = 0.0;
      }
      if ( *((_BYTE *)this + 577) )
      {
        if ( v45 != 0.0 )
        {
          v57 = v44;
          werp1(*((float *)this + 126), v45 + *((float *)this + 126), v44, 0.2, 5.0, 0.8);
          DisplayObject::setX(this, v47);
          v44 = v57;
        }
        if ( v60 != 0.0 )
        {
          v48 = *((float *)this + 127);
          v49 = v60 + v48;
    LABEL_63:
          werp1(v48, v49, v44, 0.2, 5.0, 0.8);
          DisplayObject::setY(this, v51);
        }
      }
      else
      {
        if ( v45 != 0.0 )
        {
          v58 = v44;
          werp1(v45 + *((float *)this + 126), *((float *)this + 126), v44, 0.2, 5.0, 0.8);
          DisplayObject::setX(this, v50);
          v44 = v58;
        }
        if ( v60 != 0.0 )
        {
          v49 = *((float *)this + 127);
          v48 = v60 + v49;
          goto LABEL_63;
        }
      }
    LABEL_64:
      if ( v22 )
        v52 = a7;
      else
        v52 = 0;
      *((_BYTE *)this + 8) = v52;
      *((_BYTE *)this + 581) = 0;
      v53 = *((float *)this + 147);
      if ( v53 > 0.0 )
      {
        v62 = v53 - a2;
        v61 = 0;
        v54 = &v62;
        if ( (float)(v53 - a2) < 0.0 )
          v54 = (float *)&v61;
        v55 = *v54;
        *((float *)this + 147) = v55;
        if ( *((_BYTE *)this + 578) || v55 == 0.0 )
        {
          SpellButton::handleRelease(this);
          SpellTargetIndicator::update(*((MovieClipHelper **)this + 67), a2);
        }
      }
      return SpellItem::updateWobble(this, a2);
    }

    TextField *__fastcall SpellButton::refreshMirroredIcon(_QWORD *a1)
    {
      TextField *result; // x0
      InitState *SpellData; // x0
      long double v4; // q0
      InitState *v5; // x20
      const char *v6; // x1
      __int64 ChildByName; // x21
      String *IconFileName; // x0
      const String *v9; // x2
      __int64 v10; // x1
      int8x16_t v11; // q0
      String v12; // [xsp+8h] [xbp-38h] BYREF
    
      result = (TextField *)a1[38];
      if ( result )
      {
        SpellData = (InitState *)LogicSpell::getSpellData(result);
        result = (TextField *)LogicSpellData::isMirror(SpellData);
        if ( (_DWORD)result && (result = (TextField *)LogicSummoner::getSimulatedLastSpell(a1[58])) != 0 )
        {
          result = (TextField *)LogicSpell::getSpellData(result);
          v5 = result;
        }
        else
        {
          v5 = 0;
        }
        if ( (InitState *)a1[75] != v5 )
        {
          result = (TextField *)a1[76];
          if ( result )
            result = (TextField *)(*(__int64 (__fastcall **)(TextField *))(*(_QWORD *)result + 8LL))(result);
          a1[76] = 0;
          if ( v5 )
          {
            ChildByName = MovieClip::getChildByName(a1[12], "card_image", v4);
            if ( ChildByName )
            {
              String::String(&v12, "sc/ui_spells.sc");
              IconFileName = (String *)LogicSpellData::getIconFileName(v5);
              a1[76] = StringTable::getMovieClip((#1308 *)&v12, IconFileName, v9);
              String::~String();
              v10 = a1[76];
              v11 = *(int8x16_t *)(ChildByName + 16);
              *(_QWORD *)(v10 + 16) = v11.i64[0];
              *(_QWORD *)(v10 + 24) = vextq_s8(v11, v11, 8u).u64[0];
              *(_DWORD *)(v10 + 32) = *(_DWORD *)(ChildByName + 32);
              *(_DWORD *)(v10 + 36) = *(_DWORD *)(ChildByName + 36);
              result = (TextField *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[12] + 168LL))(a1[12]);
            }
            else
            {
              result = (TextField *)Debugger::warning(
                                      (__siginfo *)"can't find 'card_image' from SpellButton::getMovieClip.",
                                      v6);
            }
          }
          a1[75] = v5;
        }
      }
      return result;
    }

    __int64 __fastcall SpellButton::updateDragAnimation(__int64 a1, int a2, float a3)
    {
      long double v3; // q9
      float v7; // s0
      float v8; // s0
      LogicChest *Instance; // x21
      UnbindFacebookAccountMessage *v10; // x22
      LogicDataTables *RenderSystem; // x23
      int v12; // w24
      int v13; // w22
      int v14; // w8
      long double v15; // q1
      long double v16; // q1
      float v17; // s0
      float v18; // s1
      float v19; // s0
      __int64 v20; // x8
      int v21; // w26
      TextField *SimulatedLastSpell; // x22
      InitState *SpellData; // x0
      MovieClipHelper *v24; // x23
      const InitState *v25; // x22
      __int64 v26; // x24
      int v27; // w25
      LogicJSONObject *v28; // x0
      LogicJSONObject *v29; // x0
      long double v30; // q0
      long double v31; // q1
      float v33; // [xsp+8h] [xbp-68h] BYREF
      float v34; // [xsp+Ch] [xbp-64h] BYREF
      float v35; // [xsp+10h] [xbp-60h] BYREF
      _BYTE v36[4]; // [xsp+14h] [xbp-5Ch] BYREF
      float v37; // [xsp+18h] [xbp-58h] BYREF
      float v38; // [xsp+1Ch] [xbp-54h] BYREF
    
      v7 = *(float *)(a1 + 524);
      if ( v7 < 0.2 )
      {
        v8 = v7 + a3;
        *(float *)(a1 + 524) = v8;
        if ( v8 > 0.2 )
          *(_DWORD *)(a1 + 524) = 1045220557;
      }
      Instance = (LogicChest *)BattleScreen::getInstance((LogicTutorialManager *)a1);
      v10 = *(UnbindFacebookAccountMessage **)(GameScreen::getLogicGame(Instance) + 168);
      RenderSystem = (LogicDataTables *)BattleScreen::getRenderSystem(Instance);
      v12 = *(_DWORD *)(LogicDataTables::getGlobals(RenderSystem) + 196LL);
      v13 = LogicBattle::getTilemapHeight(v10) - v12;
      if ( (unsigned int)RenderSystem::isBottomPlayerInLogicTop(RenderSystem) )
        v14 = v12;
      else
        v14 = v13;
      RenderSystem::logicToGlobal(RenderSystem, 0, 500 * v14, &v38, &v37);
      *(float *)&v15 = v37;
      DisplayObject::globalToLocal(*(_QWORD *)(a1 + 48), v36, &v35, v38, v15);
      LODWORD(v16) = *(_DWORD *)(a1 + 532);
      DisplayObject::globalToLocal(*(_QWORD *)(a1 + 48), &v34, &v33, *(float *)(a1 + 528), v16);
      if ( BattleScreen::isReplay(Instance) )
        *(_QWORD *)(a1 + 516) = 0;
      v17 = *(float *)(a1 + 508);
      v18 = v17 - v35;
      LODWORD(v3) = 1.0;
      if ( (float)(v17 - v35) < 1.0 )
        v18 = 1.0;
      if ( v18 >= 1.0 && v33 < v17 )
      {
        v19 = 1.0
            - (float)((float)((float)(v17 - v33) / v18)
                    * (float)((float)((float)(v17 - v33) / v18) * (float)((float)(v17 - v33) / v18)));
        if ( v19 <= 1.0 )
          *(float *)&v3 = v19;
        else
          *(float *)&v3 = 1.0;
        v20 = *(_QWORD *)(a1 + 104);
        if ( *(float *)&v3 <= 0.0 )
        {
          *(_BYTE *)(v20 + 8) = 0;
          LODWORD(v3) = 1008981770;
        }
        else
        {
          *(_BYTE *)(v20 + 8) = 1;
        }
      }
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 104) + 80LL))(*(_QWORD *)(a1 + 104), v3);
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104), v3);
      DisplayObject::setXY(
        *(DisplayObject **)(a1 + 104),
        *(float *)&v3 * *(float *)(a1 + 516),
        *(float *)&v3 * *(float *)(a1 + 520));
      DisplayObject::setPixelSnappedXY((DisplayObject *)a1, v34, v33);
      v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 104) + 8LL);
      if ( (a2 & 1) == 0 && !*(_BYTE *)(a1 + 580) )
      {
        SimulatedLastSpell = *(TextField **)(a1 + 304);
        SpellData = (InitState *)LogicSpell::getSpellData(SimulatedLastSpell);
        if ( (unsigned int)LogicSpellData::isMirror(SpellData) )
          SimulatedLastSpell = (TextField *)LogicSummoner::getSimulatedLastSpell(*(_QWORD *)(a1 + 464));
        if ( v21 != 1 && SimulatedLastSpell )
        {
          *(_BYTE *)(a1 + 580) = 1;
          v24 = *(MovieClipHelper **)(a1 + 536);
          v25 = (const InitState *)LogicSpell::getSpellData(SimulatedLastSpell);
          v26 = *(unsigned int *)(*(_QWORD *)(a1 + 304) + 8LL);
          v27 = *(_DWORD *)(a1 + 480);
          v28 = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
          SpellTargetIndicator::start(v24, v25, v26, v27, v28);
        }
      }
      if ( !*(_BYTE *)(a1 + 580) )
        return 0;
      SpellTargetIndicator::update(*(MovieClipHelper **)(a1 + 536), a3);
      v29 = (LogicJSONObject *)BattleScreen::getRenderSystem(Instance);
      if ( (unsigned int)RenderSystem::getShowHUD(v29) )
      {
        *(float *)&v30 = 1.0 - *(float *)&v3;
        SpellTargetIndicator::setAlpha(*(MovieClipHelper **)(a1 + 536), v30);
      }
      LODWORD(v31) = *(_DWORD *)(a1 + 532);
      return BattleScreen::updateSpellTargetIndicatorPosition(
               Instance,
               *(float *)(a1 + 528),
               v31,
               a2,
               *(MovieClipHelper **)(a1 + 536),
               v21 != 1);
    }

    bool __fastcall SpellButton::isRecordingEnabled(AllianceLeaveOkMessage *this)
    {
      LogicDataTables *Instance; // x0
      LogicTutorialManager *Globals; // x0
      LogicTutorialManager *v3; // x0
    
      Instance = (LogicDataTables *)BattleScreen::getInstance(this);
      if ( !Instance )
        return 0;
      Globals = (LogicTutorialManager *)LogicDataTables::getGlobals(Instance);
      if ( !*((_BYTE *)Globals + 400) )
        return 0;
      v3 = (LogicTutorialManager *)BattleScreen::getInstance(Globals);
      return !BattleScreen::isReplay(v3);
    }

    _QWORD *__fastcall SpellButton::recordDragCoordinate(_QWORD *this, float a2, float a3, int a4, const char *a5)
    {
      _QWORD *v8; // x19
      LogicJSONObject **Instance; // x0
      LogicTutorialManager *v10; // x0
      int v11; // w22
      int32x2_t v12; // d8
      LogicChest *v13; // x0
      UnlockAccountPopup *LogicGame; // x0
      int v15; // w21
      float32x2_t v16; // d0
      int v17; // [xsp+0h] [xbp-50h]
      int v18; // [xsp+18h] [xbp-38h] BYREF
      int v19; // [xsp+1Ch] [xbp-34h] BYREF
    
      v8 = this;
      if ( *(this + 69)
        || (this = SpellButton::createReplayEvent((AllianceLeaveOkMessage *)this, 2u, a5), (v8[69] = this) != 0) )
      {
        Instance = (LogicJSONObject **)BattleScreen::getInstance((LogicTutorialManager *)this);
        v10 = (LogicTutorialManager *)BattleScreen::screenToLogic(Instance, a2, a3, &v19, &v18);
        v11 = v18;
        v12 = *(int32x2_t *)((char *)v8 + 564);
        v17 = v19;
        v13 = (LogicChest *)BattleScreen::getInstance(v10);
        LogicGame = (UnlockAccountPopup *)GameScreen::getLogicGame(v13);
        this = (_QWORD *)LogicGameMode::getTick(LogicGame);
        v15 = (int)this;
        if ( a4
          || (v16 = vdiv_f32(
                      vcvt_f32_s32(vsub_s32((int32x2_t)__PAIR64__(v11, v17), v12)),
                      (float32x2_t)vdup_n_s32(0x43FA0000u)),
              vaddv_f32(vmul_f32(v16, v16)) >= 4.0)
          && (_DWORD)this != *((_DWORD *)v8 + 143) )
        {
          this = (_QWORD *)LogicBattleEvent::addCoord(v8[69], (const char *)(unsigned int)v19, v18, (int)this);
          *((_DWORD *)v8 + 141) = v19;
          *((_DWORD *)v8 + 142) = v18;
          *((_DWORD *)v8 + 143) = v15;
          *((_DWORD *)v8 + 140) = 0;
        }
      }
      return this;
    }

    __int64 __fastcall SpellButton::handleRelease(AllianceLeaveOkMessage *this)
    {
      int v2; // w8
      char updated; // w1
    
      v2 = *((unsigned __int8 *)this + 576);
      *((_DWORD *)this + 147) = 0;
      if ( v2 )
        updated = SpellButton::updateDrag(this, *((float *)this + 148), *((float *)this + 149), 1);
      else
        updated = 1;
      return SpellButton::stopDrag(this, *((float *)this + 148), *((float *)this + 149), updated);
    }

    __int64 __fastcall SpellButton::setFakeUsed(__int64 this)
    {
      *(_DWORD *)(this + 484) = 1077936128;
      return this;
    }

    __int64 __fastcall SpellButton::touchPressed(_DWORD *a1, _DWORD *a2)
    {
      if ( a1[123] == -1 )
      {
        a1[123] = a2[19];
        a1[124] = a2[13];
        a1[125] = a2[14];
      }
      return CustomButton::touchPressed();
    }

    __int64 __fastcall SpellButton::touchMoved(float32x2_t *a1, __int64 a2)
    {
      float v4; // s0
      float32x2_t v5; // d2
    
      if ( *(_DWORD *)(a2 + 76) == a1[61].i32[1] && *(_QWORD *)&a1[38] )
      {
        v4 = *(float *)(a2 + 52);
        if ( a1[72].i8[0] )
        {
          SpellButton::updateDrag((SpellButton *)a1, v4, *(float *)(a2 + 56), 0);
        }
        else
        {
          v5 = vsub_f32(*(float32x2_t *)(a2 + 52), a1[62]);
          if ( vaddv_f32(vmul_f32(v5, v5)) > 225.0 )
            SpellButton::startDrag((SpellButton *)a1, v4, *(float *)(a2 + 56));
        }
      }
      return Sprite::touchMoved(a1, a2);
    }

    __int64 __fastcall SpellButton::updateDrag(__int64 a1, int a2, float a3, float a4)
    {
      const char *v8; // x2
    
      *(float *)(a1 + 528) = a3;
      *(float *)(a1 + 532) = a4;
      if ( SpellButton::isRecordingEnabled((AllianceLeaveOkMessage *)a1) )
        SpellButton::recordDragCoordinate((_QWORD *)a1, a3, a4, 0, v8);
      return SpellButton::updateDragAnimation(a1, a2, 0.0);
    }

    __int64 __fastcall SpellButton::startDrag(__int64 a1, float a2, float a3)
    {
      LogicDataTables *v6; // x0
      __int64 SelectSpellSound; // x0
      LogicTutorialManager *v8; // x0
      LogicTutorialManager *Instance; // x0
      GameState *CombatHUD; // x20
      __int64 OwnerAccountId; // x0
      const char *v12; // x1
      int HUDIndex; // w8
      float v15; // [xsp+8h] [xbp-28h]
      float v16; // [xsp+Ch] [xbp-24h]
    
      *(_BYTE *)(a1 + 576) = 1;
      *(_BYTE *)(a1 + 580) = 0;
      DisplayObject::localToGlobal(0.0, 0.0);
      *(float *)(a1 + 516) = v16 - a2;
      *(float *)(a1 + 520) = v15 - a3;
      *(_DWORD *)(a1 + 524) = 0;
      SpellButton::updateDrag(a1, 0, a2, a3);
      v6 = (LogicDataTables *)SpellButton::setSelected(a1, 1, 0);
      SelectSpellSound = LogicDataTables::getSelectSpellSound(v6);
      v8 = (LogicTutorialManager *)SoundManager::playSound(
                                     SoundManager::sm_pInstance,
                                     SelectSpellSound,
                                     0xFFFFFFFFLL,
                                     1.0,
                                     COERCE_LONG_DOUBLE((unsigned __int128)0));
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(v8);
      CombatHUD = (GameState *)BattleScreen::getCombatHUD(Instance);
      OwnerAccountId = LogicGameObject::getOwnerAccountId(*(LogicSpellListener ***)(a1 + 464));
      HUDIndex = CombatHUD::getHUDIndex(CombatHUD, OwnerAccountId);
      if ( HUDIndex == -1 )
        Debugger::error((__siginfo *)"start drag: cannot find hud for spell button", v12);
      CombatHUD::selectSpellButton(CombatHUD, HUDIndex, *(_DWORD *)(a1 + 480));
      return CombatHUD::dragStarted(CombatHUD, (SpellButton *)a1);
    }

    __int64 __fastcall SpellButton::stopDrag(__int64 a1, int a2, float a3, long double a4)
    {
      AllianceLeaveOkMessage *v8; // x0
      __int64 result; // x0
      const char *v10; // x2
      LogicTutorialManager *v11; // x0
      __int64 v12; // x0
      Projectile *v13; // x21
      LogicChest *Instance; // x0
      UnlockAccountPopup *LogicGame; // x0
      const char *Tick; // x0
      LogicTutorialManager *v17; // x0
      DisplayObject *v18; // x0
    
      v8 = (AllianceLeaveOkMessage *)LOG("spell button stop drag\n");
      result = SpellButton::isRecordingEnabled(v8);
      if ( (_DWORD)result )
      {
        result = *(_QWORD *)(a1 + 552);
        if ( *(_BYTE *)(a1 + 576) )
        {
          if ( !result )
            goto LABEL_12;
          v11 = (LogicTutorialManager *)SpellButton::recordDragCoordinate((_QWORD *)a1, a3, *(float *)&a4, 1, v10);
          goto LABEL_11;
        }
        if ( result )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
          v12 = *(_QWORD *)(a1 + 552);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          *(_QWORD *)(a1 + 552) = 0;
        }
        result = (__int64)SpellButton::createReplayEvent((AllianceLeaveOkMessage *)a1, 1u, v10);
        v13 = (Projectile *)result;
        *(_QWORD *)(a1 + 552) = result;
        if ( result )
        {
          Instance = (LogicChest *)BattleScreen::getInstance((LogicTutorialManager *)result);
          LogicGame = (UnlockAccountPopup *)GameScreen::getLogicGame(Instance);
          Tick = (const char *)LogicGameMode::getTick(LogicGame);
          v11 = (LogicTutorialManager *)LogicBattleEvent::setTick(v13, Tick);
    LABEL_11:
          v17 = (LogicTutorialManager *)BattleScreen::getInstance(v11);
          result = BattleScreen::sendBattleEvent(v17, *(Projectile **)(a1 + 552), 0);
          *(_QWORD *)(a1 + 552) = 0;
        }
      }
    LABEL_12:
      if ( *(_BYTE *)(a1 + 576) )
      {
        LODWORD(a4) = 1.0;
        (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104), a4);
        (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 104) + 80LL))(*(_QWORD *)(a1 + 104), a4);
        v18 = *(DisplayObject **)(a1 + 104);
        *((_BYTE *)v18 + 8) = 1;
        DisplayObject::setXY(v18, 0.0, 0.0);
        SpellTargetIndicator::hide(*(MovieClipHelper **)(a1 + 536));
        *(_BYTE *)(a1 + 576) = 0;
        if ( a2 )
          SpellButton::setSelected(a1, 0, 1);
        DisplayObject::setPixelSnappedXY((DisplayObject *)a1, *(float *)(a1 + 504), *(float *)(a1 + 508));
        result = GameButton::wobble((DeviceLinkCodeReceivedScreen *)a1);
      }
      *(_DWORD *)(a1 + 496) = 0;
      *(_DWORD *)(a1 + 492) = -1;
      *(_DWORD *)(a1 + 500) = 0;
      *(_DWORD *)(a1 + 516) = 0;
      *(_QWORD *)(a1 + 520) = 0;
      return result;
    }

    float *__fastcall SpellButton::endDelayedRelease(float *result)
    {
      if ( result[147] > 0.0 )
        return (float *)SpellButton::handleRelease((AllianceLeaveOkMessage *)result);
      return result;
    }

    bool __fastcall SpellButton::isDelayedReleaseActive(__int64 a1)
    {
      return *(float *)(a1 + 588) > 0.0;
    }

    __int64 __fastcall SpellButton::touchReleased(__int64 a1, float *a2)
    {
      long double v2; // q9
      int v5; // w22
      float v6; // s10
      bool v7; // zf
      LogicTutorialManager *hasEnoughManaForDelayedCast; // x0
      LogicTutorialManager *v9; // x21
      float v10; // s8
      const InitState *SpellData; // x0
      LogicTutorialManager *isSpellBlocked; // x0
      LogicTutorialManager *Instance; // x0
      CombatHUD *CombatHUD; // x0
    
      if ( *((_DWORD *)a2 + 19) == *(_DWORD *)(a1 + 492) )
      {
        v5 = *(unsigned __int8 *)(a1 + 576);
        *(float *)(a1 + 592) = a2[13];
        *(float *)(a1 + 596) = a2[14];
        v6 = *(float *)(LogicDataTables::getClientGlobals((pthread_attr_t *)a1) + 116LL);
        v7 = v6 > 0.0 && *(_BYTE *)(a1 + 578) == 0;
        if ( v7
          && (hasEnoughManaForDelayedCast = (LogicTutorialManager *)SpellButton::hasEnoughManaForDelayedCast(a1),
              (_DWORD)hasEnoughManaForDelayedCast)
          && (v9 = (LogicTutorialManager *)BattleScreen::getInstance(hasEnoughManaForDelayedCast),
              v10 = a2[13],
              *(float *)&v2 = a2[14],
              SpellData = (const InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304)),
              isSpellBlocked = (LogicTutorialManager *)BattleScreen::isSpellBlocked(v9, v10, v2, SpellData),
              !(_DWORD)isSpellBlocked) )
        {
          Instance = (LogicTutorialManager *)BattleScreen::getInstance(isSpellBlocked);
          CombatHUD = (CombatHUD *)BattleScreen::getCombatHUD(Instance);
          CombatHUD::cancelAllDelayedSpellButtonReleases(CombatHUD);
          *(float *)(a1 + 588) = v6;
        }
        else
        {
          SpellButton::handleRelease((AllianceLeaveOkMessage *)a1);
        }
        if ( v5 )
          *(_BYTE *)(a1 + 579) = 1;
        *(_DWORD *)(a1 + 584) = 0;
      }
      return CustomButton::touchReleased(a1, a2);
    }

    bool __fastcall SpellButton::hasEnoughManaForDelayedCast(__int64 a1)
    {
      VisitHomeMessage *Instance; // x0
      UnbindFacebookAccountMessage *v3; // x20
      __int64 AccountId; // x21
      unsigned int HigherInt; // w22
      const char *LowerInt; // x0
      __int64 LeaderCharacter; // x0
      const char *v8; // x1
      __int64 v9; // x20
      pthread_attr_t *SimulatedAccurateMana; // x0
      int v11; // w21
      float v12; // s0
      TextField *v13; // x0
      __int64 SpellData; // x0
    
      Instance = (VisitHomeMessage *)GameMode::getInstance();
      v3 = *(UnbindFacebookAccountMessage **)(*((_QWORD *)Instance + 14) + 168LL);
      AccountId = GameMode::getAccountId(Instance);
      HigherInt = LogicLong::getHigherInt(AccountId);
      LowerInt = (const char *)LogicLong::getLowerInt(AccountId);
      LeaderCharacter = LogicBattle::getLeaderCharacter(v3, HigherInt, LowerInt);
      v9 = LeaderCharacter;
      if ( LeaderCharacter )
      {
        SimulatedAccurateMana = (pthread_attr_t *)LogicSummoner::getSimulatedAccurateMana(LeaderCharacter);
        v11 = (int)SimulatedAccurateMana;
        v12 = *(float *)(LogicDataTables::getClientGlobals(SimulatedAccurateMana) + 116LL) + -0.1;
        if ( v12 > 0.0 )
          v11 += 100 * (int)(float)(v12 * 1000.0) / (int)LogicSummoner::getOneManaRegenRateMS(v9);
        v13 = *(TextField **)(a1 + 304);
        if ( v13 && LogicSpell::getSpellData(v13) )
        {
          SpellData = LogicSpell::getSpellData(*(TextField **)(a1 + 304));
          return v11 >= (int)(100 * LogicSummoner::calculateSimulatedManaCost(v9, SpellData));
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"SpellButton::hasEnoughManaForDelayedCast summoner == NULL", v8);
      }
      return 0;
    }

    __int64 __fastcall SpellButton::touchCancelled(__int64 a1, int a2, long double a3)
    {
      if ( *(_DWORD *)(a1 + 492) == a2 )
      {
        LODWORD(a3) = -1.0;
        SpellButton::stopDrag(a1, 0, -1.0, a3);
      }
      return CustomButton::touchCancelled((#1251 *)a1, a2);
    }

    void __fastcall SpellButton::setNormalXY(__int64 a1, float a2, float a3)
    {
      if ( !*(_BYTE *)(a1 + 576) )
        DisplayObject::setPixelSnappedXY((DisplayObject *)a1, a2, a3);
      *(float *)(a1 + 504) = a2;
      *(float *)(a1 + 508) = a3;
    }

    GameButton *__fastcall SpellButton::setState(GameButton *result, int a2)
    {
      if ( !*((_BYTE *)result + 576) )
        return (GameButton *)GameButton::setState(result, a2);
      return result;
    }

    __int64 __fastcall SpellButton::isDragged(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 576);
    }

    __int64 __fastcall SpellButton::isIgnoreClickEnabled(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 579);
    }

    __int64 __fastcall SpellButton::removeIgnoreClick(__int64 result)
    {
      *(_BYTE *)(result + 579) = 0;
      return result;
    }

    __int64 __fastcall SpellButton::getSpell(__int64 a1)
    {
      return *(_QWORD *)(a1 + 304);
    }

    // attributes: thunk
    __int64 __fastcall SpellButton::buttonPressed(GameButton *a1)
    {
      return GameButton::buttonPressed(a1);
    }

    __int64 __fastcall SpellButton::getSpellTargetIndicator(__int64 a1)
    {
      return *(_QWORD *)(a1 + 536);
    }

    __int64 __fastcall SpellButton::getSpellDataForDeploy(__int64 a1)
    {
      TextField *SimulatedLastSpell; // x19
      InitState *SpellData; // x0
    
      SimulatedLastSpell = *(TextField **)(a1 + 304);
      if ( SimulatedLastSpell
        && ((SpellData = (InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304)),
             !(unsigned int)LogicSpellData::isMirror(SpellData))
         || (SimulatedLastSpell = (TextField *)LogicSummoner::getSimulatedLastSpell(*(_QWORD *)(a1 + 464))) != 0) )
      {
        return LogicSpell::getSpellData(SimulatedLastSpell);
      }
      else
      {
        return 0;
      }
    }

}; // end class SpellButton
