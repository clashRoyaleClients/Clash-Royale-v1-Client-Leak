class SpellTargetIndicator
{
public:

    __int64 __fastcall SpellTargetIndicator::SpellTargetIndicator(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      Sprite *v5; // x21
    
      v4 = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 72) = -1;
      *(_DWORD *)(a1 + 76) = -1;
      *(_QWORD *)(a1 + 88) = 0;
      *(_BYTE *)(a1 + 1) = 0;
      *(_DWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 148) = 0;
      *(_QWORD *)(a1 + 116) = 0;
      *(_QWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 92) = 0;
      *(_BYTE *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      do
      {
        *(_QWORD *)(a1 + 8 * v4 + 16) = SpellTargetIndicator::createIndicatorMovieClip((SpellTargetIndicator *)v4, a2);
        ++v4;
      }
      while ( v4 < 4 );
      v5 = (Sprite *)operator new(96);
      Sprite::Sprite(v5, 4);
      *(_QWORD *)(a1 + 56) = v5;
      (*(void (__fastcall **)(__int64, Sprite *))(*(_QWORD *)a2 + 160LL))(a2, v5);
      return a1;
    }

    __int64 __fastcall SpellTargetIndicator::createIndicatorMovieClip(int a1)
    {
      const char *v2; // x1
      const String *v3; // x2
      __int64 MovieClip; // x20
      __int64 result; // x0
      String v6; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v6);
      switch ( a1 )
      {
        case 0:
          String::operator=(&v6, "spell_placement_1x1");
          break;
        case 1:
          String::operator=(&v6, "spell_placement_2x2");
          break;
        case 2:
          String::operator=(&v6, "spell_placement_3x3");
          break;
        case 3:
          String::operator=(&v6, "spell_placement_4x4");
          break;
        default:
          Debugger::error((__siginfo *)"SpellTargetIndicator::createIndicatorMovieClip", v2);
          return result;
      }
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v6, v3);
      *(_DWORD *)(MovieClip + 60) = a1;
      *(_BYTE *)(MovieClip + 8) = 0;
      String::~String(&v6);
      return MovieClip;
    }

    // attributes: thunk
    void __fastcall SpellTargetIndicator::SpellTargetIndicator(SpellTargetIndicator *this, __int64 a2)
    {
      __ZN20SpellTargetIndicatorC2EP6Sprite((__int64)this, a2);
    }

    void __fastcall SpellTargetIndicator::~SpellTargetIndicator(MovieClipHelper *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      unsigned __int64 v5; // x20
      char *v6; // x21
      __int64 v7; // x0
      __int64 v8; // x0
    
      v2 = *((_QWORD *)this + 6);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 6) = 0;
      Sprite::removeAllChildren(*((OutOfSyncMessage **)this + 7));
      v3 = *((_QWORD *)this + 7);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 7) = 0;
      SpellTargetIndicator::destroyDummyObjects(this);
      v4 = *((_QWORD *)this + 12);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 0;
      *((_QWORD *)this + 12) = 0;
      do
      {
        v6 = (char *)this + 8 * v5;
        v7 = *((_QWORD *)v6 + 2);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        *((_QWORD *)v6 + 2) = 0;
        ++v5;
      }
      while ( v5 < 4 );
      *((_BYTE *)this + 1) = 0;
      *((_DWORD *)this + 38) = 0;
      *(_QWORD *)((char *)this + 4) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_DWORD *)this + 18) = -1;
      *((_DWORD *)this + 19) = -1;
      *(_BYTE *)this = 0;
      *((_DWORD *)this + 37) = 0;
      *(_QWORD *)((char *)this + 116) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *((_BYTE *)this + 144) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      v8 = *((_QWORD *)this + 10);
      if ( v8 )
        operator delete[](v8);
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 11) = 0;
    }

    _DWORD *__fastcall SpellTargetIndicator::destroyDummyObjects(_DWORD *this)
    {
      int v1; // w8
      int v2; // w19
      __int64 *v3; // x20
      __int64 v4; // x21
      int v5; // w8
    
      v1 = *(this + 23);
      v2 = v1 - 1;
      if ( v1 >= 1 )
      {
        v3 = (__int64 *)(this + 20);
        do
        {
          this = (_DWORD *)LogicArrayList<LogicGameObject *>::remove(v3, v2);
          v4 = (__int64)this;
          if ( this )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)this + 24LL))(this);
            this = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          }
          v5 = v2-- + 1;
        }
        while ( v5 > 1 );
      }
      return this;
    }

    // attributes: thunk
    void __fastcall SpellTargetIndicator::~SpellTargetIndicator(MovieClipHelper *this)
    {
      __ZN20SpellTargetIndicatorD2Ev(this);
    }

    __int64 __fastcall SpellTargetIndicator::start(
            MovieClipHelper *this,
            const InitState *a2,
            __int64 a3,
            int a4,
            LogicJSONObject *a5)
    {
      LogicTutorialManager *SummonCharacter; // x25
      vm_address_t *Instance; // x22
      VisitHomeMessage *v12; // x0
      __int64 AccountId; // x21
      const char *v14; // x2
      float v15; // s8
      LogicMath *SummonNumber; // x0
      int v17; // w2
      int v18; // w26
      const AreaEffectObject *v19; // x1
      __int64 Egg; // x27
      #1401 *MorphResultCharacter; // x0
      LoginMessage *GameObjectByData; // x20
      __int64 LogicGame; // x0
      int AccountIndex; // w0
      _QWORD *v25; // x23
      __int64 CharacterData; // x0
      __int64 v27; // x20
      __int64 MovieClip; // x0
      const char *v29; // x1
      const char *v30; // x2
      #1271 *TextFieldByName; // x20
      void *String; // x23
      int v33; // w1
      __int64 v34; // x20
      const AreaEffectObject *v35; // x1
      #1308 *LocalizedName; // x0
      __int64 CombatHUD; // x0
      __int64 MovieClipByName; // x0
      UnbindFacebookAccountMessage *v39; // x20
      unsigned int HigherInt; // w22
      const char *LowerInt; // x0
      GameMode *LeaderCharacter; // x20
      int v43; // w21
      int v44; // w0
      const InitState *v46; // [xsp+8h] [xbp-B8h]
      String v47; // [xsp+10h] [xbp-B0h] BYREF
      String v48; // [xsp+28h] [xbp-98h] BYREF
      String v49; // [xsp+40h] [xbp-80h] BYREF
      LoginMessage *v50; // [xsp+58h] [xbp-68h] BYREF
    
      SpellTargetIndicator::hide(this);
      *(_BYTE *)(*((_QWORD *)this + 7) + 8LL) = 1;
      *((_QWORD *)this + 8) = a2;
      *((_DWORD *)this + 18) = a3;
      *((_DWORD *)this + 19) = a4;
      SummonCharacter = (LogicTutorialManager *)LogicSpellData::getSummonCharacter(a2);
      Instance = (vm_address_t *)BattleScreen::getInstance(SummonCharacter);
      v12 = (VisitHomeMessage *)GameMode::getInstance(Instance);
      AccountId = GameMode::getAccountId(v12);
      v15 = *(float *)(LogicDataTables::getClientGlobals((pthread_attr_t *)AccountId) + 108LL);
      if ( SummonCharacter )
      {
        v46 = a2;
        SummonNumber = (LogicMath *)LogicSpellData::getSummonNumber(a2);
        v18 = LogicMath::max(SummonNumber, 1, v17);
        Egg = LogicCharacterData::getEgg(SummonCharacter);
        if ( v18 >= 1 )
        {
          do
          {
            v50 = 0;
            if ( Egg )
            {
              MorphResultCharacter = (#1401 *)Egg;
            }
            else if ( LogicCharacterData::getMorphResultCharacter(SummonCharacter)
                   && (unsigned int)LogicCharacterData::isBuilding(SummonCharacter) )
            {
              MorphResultCharacter = (#1401 *)LogicCharacterData::getMorphResultCharacter(SummonCharacter);
            }
            else
            {
              MorphResultCharacter = SummonCharacter;
            }
            GameObjectByData = LogicGameObjectFactory::createGameObjectByData(MorphResultCharacter, v19);
            v50 = GameObjectByData;
            LogicGame = GameScreen::getLogicGame((LogicChest *)Instance);
            AccountIndex = LogicBattle::getAccountIndex(
                             *(UnbindFacebookAccountMessage **)(LogicGame + 168),
                             *(_DWORD *)AccountId,
                             *(_DWORD *)(AccountId + 4));
            LogicGameObject::setOwnerIndex((__int64)GameObjectByData, AccountIndex);
            v25 = (_QWORD *)Instance[33];
            if ( (*(unsigned int (__fastcall **)(LoginMessage *))(*(_QWORD *)GameObjectByData + 88LL))(GameObjectByData) == 5 )
            {
              LogicCharacter::setLevelIndex(GameObjectByData, a3, 0);
              CharacterData = LogicCharacter::getCharacterData(GameObjectByData);
              if ( (int)LogicCharacterData::getDeployTime(CharacterData) >= 1 )
                LogicCharacter::setState(GameObjectByData, 0);
            }
            (*(void (__fastcall **)(LoginMessage *, _QWORD))(*(_QWORD *)GameObjectByData + 16LL))(GameObjectByData, v25[1]);
            (*(void (__fastcall **)(_QWORD *, LoginMessage *))(*v25 + 24LL))(v25, GameObjectByData);
            v27 = *((_QWORD *)GameObjectByData + 5);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 264LL))(v27);
            LODWORD(v15) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v27 + 272LL))(v27));
            LogicArrayList<LogicGameObject *>::add((__int64)this + 80, (__int64 *)&v50);
            --v18;
          }
          while ( v18 );
        }
      }
      else
      {
        v46 = a2;
      }
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "spell_placement_text", v14);
      *((_QWORD *)this + 12) = MovieClip;
      *((_QWORD *)this + 13) = MovieClip::getTextFieldByName(MovieClip, "txt");
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), "level");
      if ( TextFieldByName )
      {
        String = StringTable::getString((#1308 *)"TID_SPELL_ITEM_LEVEL_SHORT", v29);
        String::String(&v48, "<NUMBER>");
        String::valueOf(&v47, (String *)(unsigned int)(a3 + 1), v33);
        String::replace(&v49, String, &v48, &v47);
        TextField::setText(TextFieldByName, &v49);
        String::~String(&v49);
        String::~String(&v47);
        String::~String(&v48);
      }
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 13) != 0), (bool)"", v30);
      v34 = *((_QWORD *)this + 13);
      *((_DWORD *)this + 28) = *(_DWORD *)(v34 + 64);
      LocalizedName = StringTable::getLocalizedName(v46, v35);
      TextField::setText((#1271 *)v34, (const String *)LocalizedName);
      *((float *)this + 29) = v15 / (*(float (__fastcall **)(LogicJSONObject *))(*(_QWORD *)a5 + 64LL))(a5);
      CombatHUD = BattleScreen::getCombatHUD((LogicTutorialManager *)Instance);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)CombatHUD + 168LL))(CombatHUD, *((_QWORD *)this + 12), 0);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 12), "mana");
      *((_QWORD *)this + 16) = MovieClipByName;
      if ( MovieClipByName )
      {
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)MovieClipByName + 80LL))(
          MovieClipByName,
          COERCE_LONG_DOUBLE((unsigned __int128)0));
        ColorTransform::setAddColor((ColorTransform *)(*((_QWORD *)this + 16) + 9LL), 0.0, 0.0, 0.0);
        *((_QWORD *)this + 17) = MovieClip::getTextFieldByName(*((_QWORD *)this + 16), "txt");
        *(_QWORD *)((char *)this + 148) = 0xFFFFFFFF00000000LL;
      }
      v39 = *(UnbindFacebookAccountMessage **)(GameScreen::getLogicGame((LogicChest *)Instance) + 168);
      HigherInt = LogicLong::getHigherInt(AccountId);
      LowerInt = (const char *)LogicLong::getLowerInt(AccountId);
      LeaderCharacter = (GameMode *)LogicBattle::getLeaderCharacter(v39, HigherInt, LowerInt);
      v43 = LogicGameObject::getX(LeaderCharacter);
      v44 = LogicGameObject::getY(LeaderCharacter);
      SpellTargetIndicator::updateScale(this, v43, v44, a5, 0);
      return SpellTargetIndicator::update(this, 0.0);
    }

    __int64 __fastcall SpellTargetIndicator::hide(MovieClipHelper *this)
    {
      __int64 v2; // x0
      __int64 result; // x0
    
      Sprite::removeAllChildren(*((OutOfSyncMessage **)this + 7));
      *(_BYTE *)(*((_QWORD *)this + 7) + 8LL) = 0;
      v2 = *((_QWORD *)this + 6);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_DWORD *)this + 18) = -1;
      *((_DWORD *)this + 19) = -1;
      *(_QWORD *)((char *)this + 4) = 0;
      SpellTargetIndicator::destroyDummyObjects(this);
      result = *((_QWORD *)this + 12);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      return result;
    }

    __int64 __fastcall SpellTargetIndicator::updateScale(
            MovieClipHelper *this,
            int a2,
            int a3,
            LogicJSONObject *a4,
            char a5)
    {
      long double v5; // q8
      __int64 v10; // x8
      int v11; // w21
      int v12; // w26
      int NumChildren; // w24
      _BOOL8 v14; // x19
      __int64 v15; // x0
      AttackRadiusSprite *v16; // x25
      GameMode *v17; // x25
      __int64 Data; // x0
      int v19; // w3
      Font *v20; // x25
      __int64 SizeInTiles; // x25
      MovieClip *v22; // x24
      long double v23; // q0
      LogicTutorialManager *v24; // x0
      LogicChest *Instance; // x0
      UnbindFacebookAccountMessage *v26; // x24
      long double v27; // q1
      __int64 v28; // x28
      __int64 v29; // x25
      char v30; // w21
      GameMode *v31; // x27
      ShutdownStartedMessage *v32; // x26
      const char *v33; // x19
      _BOOL4 isOwnerTop; // w0
      unsigned int v35; // w0
      const char *v36; // x2
      const GameMode *LeaderByIndex; // x0
      long double v38; // q1
      __int64 result; // x0
      LogicJSONObject *v40; // [xsp+8h] [xbp-98h]
      float v42; // [xsp+18h] [xbp-88h] BYREF
      float v43; // [xsp+1Ch] [xbp-84h] BYREF
      float v44; // [xsp+20h] [xbp-80h] BYREF
      float v45; // [xsp+24h] [xbp-7Ch] BYREF
      float v46; // [xsp+28h] [xbp-78h] BYREF
      float v47; // [xsp+2Ch] [xbp-74h] BYREF
      _DWORD v48[2]; // [xsp+30h] [xbp-70h] BYREF
      float v49; // [xsp+38h] [xbp-68h] BYREF
      float v50; // [xsp+3Ch] [xbp-64h] BYREF
    
      v10 = *((_QWORD *)this + 8);
      v11 = *(_DWORD *)(v10 + 220);
      v12 = *(_DWORD *)(v10 + 224);
      NumChildren = Sprite::getNumChildren(*((_QWORD *)this + 7));
      v14 = v11 > 0;
      if ( v11 >= 1 && !NumChildren )
      {
        v15 = *((_QWORD *)this + 6);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        *((_QWORD *)this + 6) = 0;
        v16 = (AttackRadiusSprite *)operator new(160);
        AttackRadiusSprite::AttackRadiusSprite(
          v16,
          (float)v12 * (float)(15.0 / 500.0),
          (float)v11 * (float)(15.0 / 500.0),
          15.0 / 12.0,
          0.0,
          0.0);
        *((_QWORD *)this + 6) = v16;
        (*(void (__fastcall **)(_QWORD, AttackRadiusSprite *))(**((_QWORD **)this + 7) + 160LL))(*((_QWORD *)this + 7), v16);
        v14 = 1;
      }
      *((_DWORD *)this + 30) = v11;
      if ( *((_DWORD *)this + 23) )
      {
        v17 = (GameMode *)**((_QWORD **)this + 10);
        Data = LogicGameObject::getData(v17);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Data + 56LL))(Data)
          && (v20 = (Font *)LogicGameObject::getData(v17), (unsigned int)LogicCharacterData::isBuilding(v20)) )
        {
          SizeInTiles = LogicCharacterData::getSizeInTiles(v20);
        }
        else
        {
          SizeInTiles = 1;
        }
        *(float *)&v5 = (float)(int)SizeInTiles / (float)(int)LogicMath::clamp((#1237 *)SizeInTiles, 1, 4, v19);
        if ( NumChildren )
        {
          v22 = *(MovieClip **)(*(_QWORD *)(*((_QWORD *)this + 7) + 72LL) + 8 * v14);
        }
        else
        {
          v22 = (MovieClip *)*((_QWORD *)this + (int)SizeInTiles + 1);
          *(__n128 *)&v23 = MovieClip::gotoAndPlay(v22, "appear", "appear_end");
          *((_BYTE *)v22 + 8) = 1;
          (*(void (__fastcall **)(_QWORD, MovieClip *, long double))(**((_QWORD **)this + 7) + 160LL))(
            *((_QWORD *)this + 7),
            v22,
            v23);
        }
        (*(void (__fastcall **)(MovieClip *, long double))(*(_QWORD *)v22 + 40LL))(v22, v5);
      }
      v49 = 0.0;
      v50 = 0.0;
      v40 = a4;
      v24 = (LogicTutorialManager *)RenderSystem::logicToGlobal(a4, a2, a3, &v50, &v49);
      Instance = (LogicChest *)BattleScreen::getInstance(v24);
      v26 = *(UnbindFacebookAccountMessage **)(GameScreen::getLogicGame(Instance) + 168);
      LogicVector2::LogicVector2((LogicVector2 *)v48);
      LODWORD(v28) = *((_DWORD *)this + 23);
      if ( (int)v28 >= 1 )
      {
        v29 = 0;
        v30 = a5 ^ 1;
        LODWORD(v5) = 1.0;
        do
        {
          v31 = *(GameMode **)(*((_QWORD *)this + 10) + 8 * v29);
          v32 = (ShutdownStartedMessage *)*((_QWORD *)v31 + 5);
          v33 = (const char *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v31 + 112LL))(v31);
          isOwnerTop = LogicGameObject::isOwnerTop(v31);
          LogicBattle::getSpawnOffset(v29, v28, v33, isOwnerTop, v48);
          LogicGameObject::setPosition(v31, v48[0] + a2, v48[1] + a3, 0);
          (*(void (__fastcall **)(GameMode *))(*(_QWORD *)v31 + 192LL))(v31);
          if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v31 + 88LL))(v31) == 5 )
          {
            v35 = LogicGameObject::isOwnerTop(v31);
            LeaderByIndex = (const GameMode *)LogicBattle::getLeaderByIndex(v26, v35, v36);
            LogicCharacter::setDirectionTowardsTargetObject(v31, LeaderByIndex);
          }
          (*(void (__fastcall **)(ShutdownStartedMessage *, long double, long double))(*(_QWORD *)v32 + 192LL))(
            v32,
            COERCE_LONG_DOUBLE((unsigned __int128)0),
            v5);
          if ( GameObject::getGameObjectSprite(v32) )
            *(_BYTE *)(GameObject::getGameObjectSprite(v32) + 8) = v30;
          if ( (*(__int64 (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v32 + 208LL))(v32) )
            *(_BYTE *)((*(__int64 (__fastcall **)(ShutdownStartedMessage *))(*(_QWORD *)v32 + 208LL))(v32) + 8) = v30;
          if ( GameObject::getTopSprite(v32) )
            *(_BYTE *)(GameObject::getTopSprite(v32) + 8) = v30;
          ++v29;
          v28 = *((int *)this + 23);
        }
        while ( v29 < v28 );
      }
      if ( *((_QWORD *)this + 12) )
      {
        v46 = 0.0;
        v47 = 0.0;
        RenderSystem::logicToGlobal(v40, a2, a3, &v47, &v46);
        v44 = 0.0;
        v45 = 0.0;
        *(float *)&v38 = v46;
        DisplayObject::globalToLocal(*(_QWORD *)(*((_QWORD *)this + 12) + 48LL), &v45, &v44, v47, v38);
        DisplayObject::setPixelSnappedXY(*((DisplayObject **)this + 12), v45, v44 + *((float *)this + 29));
      }
      v42 = 0.0;
      v43 = 0.0;
      *(float *)&v27 = v49;
      DisplayObject::globalToLocal(v40, &v43, &v42, v50, v27);
      result = DisplayObject::setXY(*((DisplayObject **)this + 7), v43, v42);
      *(_BYTE *)(*((_QWORD *)this + 7) + 8LL) = a5 ^ 1;
      return result;
    }

    void __fastcall SpellTargetIndicator::update(MovieClipHelper *this, float a2)
    {
      LogicTutorialManager *v4; // x0
      _QWORD *v5; // x23
      LogicChest *Instance; // x0
      vm_address_t *LogicGame; // x0
      UnbindFacebookAccountMessage *v8; // x20
      VisitHomeMessage *v9; // x0
      __int64 AccountId; // x21
      unsigned int HigherInt; // w22
      const char *LowerInt; // x0
      #1094 *LeaderCharacter; // x0
      int SimulatedMana; // w20
      const char *v15; // x1
      __int64 ManaCost; // x21
      long double v17; // q0
      int v18; // w8
      int v20; // s0
      __int64 v21; // x8
      __int64 v22; // x20
      void (__fastcall *v23)(__int64, float); // x21
      float Alpha; // s0
      float v25; // s0
      float v26; // s0
      float v27; // s0
      float v28; // s0
      ColorTransform *v29; // x0
      float v30; // s1
      float v31; // s2
      String v32; // [xsp+18h] [xbp-58h] BYREF
    
      v5 = (_QWORD *)((char *)this + 128);
      v4 = (LogicTutorialManager *)*((_QWORD *)this + 16);
      if ( !v4 )
        return;
      if ( *((_QWORD *)this + 8) )
      {
        Instance = (LogicChest *)BattleScreen::getInstance(v4);
        LogicGame = (vm_address_t *)GameScreen::getLogicGame(Instance);
        v8 = (UnbindFacebookAccountMessage *)LogicGame[21];
        v9 = (VisitHomeMessage *)GameMode::getInstance(LogicGame);
        AccountId = GameMode::getAccountId(v9);
        HigherInt = LogicLong::getHigherInt(AccountId);
        LowerInt = (const char *)LogicLong::getLowerInt(AccountId);
        LeaderCharacter = (#1094 *)LogicBattle::getLeaderCharacter(v8, HigherInt, LowerInt);
        SimulatedMana = LogicSummoner::getSimulatedMana(LeaderCharacter);
        ManaCost = LogicSpellData::getManaCost(*((InitState **)this + 8));
        *((float *)this + 37) = *((float *)this + 37) + a2;
        v18 = *((_DWORD *)this + 38);
        if ( SimulatedMana <= (int)ManaCost && SimulatedMana != v18 )
        {
          if ( v18 == -1 )
          {
            if ( SimulatedMana >= (int)ManaCost )
              *(_OWORD *)&v17 = 0u;
            else
              LODWORD(v17) = 1.0;
            (*(void (__fastcall **)(long double))(*(_QWORD *)*v5 + 80LL))(v17);
            v20 = 1148846080;
          }
          else
          {
            v20 = 0;
          }
          *((_DWORD *)this + 37) = v20;
          if ( SimulatedMana >= (int)ManaCost )
            v21 = (unsigned int)ManaCost;
          else
            v21 = (unsigned int)SimulatedMana;
          String::format((String *)"%d/%d", v15, v21, ManaCost);
          TextField::setText(*((#1271 **)this + 17), &v32);
          *((_DWORD *)this + 38) = SimulatedMana;
          String::~String(&v32);
        }
        if ( SimulatedMana < (int)ManaCost )
          goto LABEL_20;
      }
      else
      {
        (*(void (__fastcall **)(LogicTutorialManager *, long double))(*(_QWORD *)v4 + 80LL))(
          v4,
          COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      v22 = *v5;
      v23 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)*v5 + 80LL);
      Alpha = DisplayObject::getAlpha(*v5);
      v23(v22, Alpha + (float)(a2 * -3.0));
    LABEL_20:
      if ( DisplayObject::getAlpha(*v5) > 0.0 )
      {
        v25 = *((float *)this + 37);
        if ( v25 >= 0.28 )
        {
          v29 = (ColorTransform *)(*v5 + 9LL);
          v28 = 0.0;
          v30 = 0.0;
          v31 = 0.0;
        }
        else
        {
          v26 = v25 / 0.28;
          if ( v26 < 0.0 )
            v26 = 0.0;
          if ( v26 <= 1.0 )
            v27 = v26 * 3.1416;
          else
            v27 = 3.1416;
          v28 = sinf(v27) * 0.5;
          v29 = (ColorTransform *)(*v5 + 9LL);
          v30 = v28;
          v31 = v28;
        }
        ColorTransform::setAddColor(v29, v28, v30, v31);
      }
    }

    long double __fastcall SpellTargetIndicator::getX(MovieClipHelper *this)
    {
      return DisplayObject::getX(*((_QWORD *)this + 7));
    }

    long double __fastcall SpellTargetIndicator::getY(MovieClipHelper *this)
    {
      return DisplayObject::getY(*((_QWORD *)this + 7));
    }

    __int64 __fastcall SpellTargetIndicator::getSpellData(MovieClipHelper *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall SpellTargetIndicator::getSpellButtonIndex(MovieClipHelper *this)
    {
      return *((unsigned int *)this + 19);
    }

    __int64 __fastcall SpellTargetIndicator::setAlpha(MovieClipHelper *this, long double a2)
    {
      __int64 result; // x0
    
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 80LL))(*((_QWORD *)this + 7));
      *(_BYTE *)(*((_QWORD *)this + 7) + 8LL) = *(float *)&a2 > 0.01;
      result = *((_QWORD *)this + 12);
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 80LL))(result, a2);
        *(_BYTE *)(*((_QWORD *)this + 12) + 8LL) = *(_BYTE *)(*((_QWORD *)this + 7) + 8LL);
      }
      return result;
    }

    __int64 __fastcall SpellTargetIndicator::removeDummyLogicObjects(__int64 result, __int64 a2)
    {
      __int64 v3; // x19
      __int64 v4; // x21
      __int64 v5; // x22
    
      v3 = result;
      if ( *(int *)(result + 92) >= 1 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          result = LogicArrayList<LogicGameObject *>::add(a2, (__int64 *)(*(_QWORD *)(v3 + 80) + v4));
          ++v5;
          v4 += 8;
        }
        while ( v5 < *(int *)(v3 + 92) );
      }
      *(_DWORD *)(v3 + 92) = 0;
      return result;
    }

    __int64 __fastcall SpellTargetIndicator::removeSpellNameClip(MovieClipHelper *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      return v1;
    }

    __int64 __fastcall SpellTargetIndicator::getGlobalCoordinates(MovieClipHelper *this, float *a2, float *a3)
    {
      return DisplayObject::localToGlobal(0.0, 0.0);
    }

    __int64 __fastcall SpellTargetIndicator::setCurrentSpellPosition(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 4) = a2;
      *(_DWORD *)(this + 8) = a3;
      return this;
    }

    __int64 __fastcall SpellTargetIndicator::getCurrentSpellPosition(__int64 this, int *a2, int *a3)
    {
      *a2 = *(_DWORD *)(this + 4);
      *a3 = *(_DWORD *)(this + 8);
      return this;
    }

    #1249 *__fastcall SpellTargetIndicator::removeAreaIndicator(MovieClipHelper *this)
    {
      #1249 *v1; // x19
    
      v1 = (#1249 *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0;
      if ( v1 )
        DisplayObject::removeFromParent(v1);
      return v1;
    }

}; // end class SpellTargetIndicator
