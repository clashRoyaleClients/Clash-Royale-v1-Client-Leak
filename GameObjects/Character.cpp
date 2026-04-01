class Character
{
public:

    void __fastcall Character::~Character(LogicBattleEvent *this)
    {
      void *v2; // x0
      __int64 i; // x23
    
      *(_QWORD *)this = off_100468D80;
      GameObjectSprite::~GameObjectSprite((LogicBattleEvent *)((char *)this + 1544));
      std::vector<Character::LoopingEffectState>::~vector((char *)this + 1504);
      std::vector<Character::AnimFrameIndices>::~vector((char *)this + 1480);
      GameObjectSprite::~GameObjectSprite((LogicBattleEvent *)((char *)this + 1184));
      GameObjectSprite::~GameObjectSprite((LogicBattleEvent *)((char *)this + 1040));
      v2 = (void *)*((_QWORD *)this + 114);
      if ( v2 )
        operator delete(v2);
      GameObjectSprite::~GameObjectSprite((LogicBattleEvent *)((char *)this + 752));
      for ( i = 0; i != -288; i -= 48 )
        CharacterAnimator::~CharacterAnimator((LogicBattleEvent *)((char *)this + i + 696));
      GameObject::~GameObject(this);
    }

    __int64 __fastcall Character::cacheMovieClips(LogicBattleEvent *this)
    {
      return 1;
    }

    __int64 __fastcall Character::Character(__int64 a1, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      __int64 i; // x21
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x27
      __int64 v9; // x1
      __int64 v10; // x2
      _DWORD *FileName; // x24
      GameMain *BaseFileName; // x20
      const String *v13; // x1
      const String *v14; // x1
      AllianceJoinFailedMessage *v15; // x0
      __int64 v16; // x0
      const String *DamageExportName; // x20
      __int64 j; // x23
      const String *v19; // x2
      const String *BlueExportName; // x20
      __int64 BlueTopExportName; // x21
      pthread_attr_t *BlueBaseExportName; // x28
      unsigned int *v23; // x8
      unsigned int v24; // w0
      float *v25; // x1
      pthread_attr_t *v26; // x0
      __int64 v27; // x28
      char v28; // w25
      CharacterAnimator *v29; // x22
      const char *v30; // x1
      int DirectionCount; // w21
      long double Scale; // q8
      int v33; // w23
      const String *v34; // x21
      __int64 Name; // x0
      const char *v36; // x1
      _QWORD *v37; // x8
      _QWORD *v38; // x9
      internal_t *p_internal; // x10
      const String *v40; // x1
      AllianceJoinFailedMessage *v41; // x0
      Font *v42; // x0
      #1257 *Clip; // x23
      const String *v44; // x2
      #1257 *MovieClipFromPool; // x22
      MovieClip *MovieClipByName; // x0
      MovieClip *v47; // x21
      long double v48; // q0
      long double v49; // q0
      __int64 FrameLabel; // x8
      AllianceJoinFailedMessage *v51; // x0
      __int64 v52; // x0
      int FrameIndex; // w8
      AllianceJoinFailedMessage *v54; // x0
      __int64 v55; // x0
      int isBomb; // w8
      __int16 *v57; // x0
      int v58; // w1
      AllianceJoinFailedMessage *v59; // x0
      __int64 v60; // x0
      AllianceJoinFailedMessage *v61; // x0
      AllianceJoinFailedMessage *v62; // x0
      Font *v63; // x0
      AllianceJoinFailedMessage *v64; // x0
      Font *v65; // x0
      ResourceManager *v66; // x0
      const String *v67; // x2
      #1257 *v68; // x0
      ResourceManager *v69; // x0
      const String *v70; // x2
      int k; // w20
      ResourceManager *v72; // x0
      const String *v73; // x2
      MovieClip *MovieClip; // x1
      ResourceManager *v75; // x0
      const String *v76; // x2
      BuffSystem *v77; // x21
      const LogicCharacterBuffComponent *CharacterBuffComponent; // x0
      const LogicHealthBarData *HealthBar; // x20
      __int64 v80; // x1
      __int64 v81; // x2
      const String *v82; // x21
      float HealthBarOffsetY; // s8
      const String *PlayerExportName; // x0
      const String *NoDamagePlayerExportName; // x0
      MovieClip *HealthBarClip; // x0
      __int64 v87; // x0
      const String *v88; // x1
      const String *EnemyExportName; // x0
      MovieClip *v90; // x0
      #1257 *v91; // x0
      __int64 v92; // x0
      const char *v93; // x2
      LogicBackgroundDecoData *EffectManager; // x20
      int isOwnedByCurrentPlayer; // w22
      const AskForTVContentMessage *ContinuousEffect; // x21
      GameMode *v97; // x0
      int v98; // w23
      GameMode *v99; // x0
      int v100; // w24
      GameMode *v101; // x0
      int v102; // w25
      const GameMode *v103; // x0
      LogicDataTables *isLeader; // x0
      const AskForTVContentMessage *CharacterMarkerPlayer; // x21
      int v106; // w22
      GameMode *v107; // x0
      int v108; // w23
      GameMode *v109; // x0
      int v110; // w24
      GameMode *v111; // x0
      int v112; // w25
      const GameMode *v113; // x0
      __int64 v114; // x21
      const char *v115; // x2
      DropGUIContainer *v116; // x20
      float v117; // s0
      Sprite *v118; // x1
      MovieClip *v119; // x20
      const char *v120; // x1
      const String *String; // x0
      DisplayObject *v122; // x0
      __int64 v123; // x1
      __int64 result; // x0
      pthread_attr_t *v125; // [xsp+28h] [xbp-218h]
      #1257 *v126; // [xsp+28h] [xbp-218h]
      const String *v127; // [xsp+30h] [xbp-210h]
      const String *v128; // [xsp+30h] [xbp-210h]
      GameMode *v129; // [xsp+38h] [xbp-208h]
      __int16 **v130; // [xsp+58h] [xbp-1E8h]
      #1138 *v131; // [xsp+60h] [xbp-1E0h]
      _QWORD *v132; // [xsp+68h] [xbp-1D8h]
      __siginfo v133; // [xsp+70h] [xbp-1D0h] BYREF
      String v134; // [xsp+D8h] [xbp-168h] BYREF
      String v135; // [xsp+F0h] [xbp-150h] BYREF
      String v136; // [xsp+108h] [xbp-138h] BYREF
      String v137; // [xsp+120h] [xbp-120h] BYREF
      String v138; // [xsp+138h] [xbp-108h] BYREF
      String v139; // [xsp+150h] [xbp-F0h] BYREF
      String v140; // [xsp+168h] [xbp-D8h] BYREF
      String v141; // [xsp+180h] [xbp-C0h] BYREF
      String v142; // [xsp+198h] [xbp-A8h] BYREF
      String v143; // [xsp+1B0h] [xbp-90h] BYREF
      String v144; // [xsp+1C8h] [xbp-78h] BYREF
    
      GameObject::GameObject((GameObject *)a1, a2, a3);
      *(_QWORD *)a1 = off_100468D80;
      for ( i = 408; i != 696; i += 48 )
        CharacterAnimator::CharacterAnimator((CharacterAnimator *)(a1 + i + 48));
      GameObjectSprite::GameObjectSprite(a1 + 752, a3);
      *(_QWORD *)(a1 + 928) = 0;
      v132 = (_QWORD *)(a1 + 912);
      *(_QWORD *)(a1 + 920) = 0;
      *(_QWORD *)(a1 + 912) = 0;
      GameObjectSprite::GameObjectSprite(a1 + 1040, a3);
      v131 = (#1138 *)(a1 + 1184);
      GameObjectSprite::GameObjectSprite(a1 + 1184, a3);
      v129 = (GameMode *)a2;
      *(_QWORD *)(a1 + 1520) = 0;
      v130 = (__int16 **)(a1 + 1480);
      *(_QWORD *)(a1 + 1512) = 0;
      *(_QWORD *)(a1 + 1504) = 0;
      *(_QWORD *)(a1 + 1496) = 0;
      *(_QWORD *)(a1 + 1488) = 0;
      *(_QWORD *)(a1 + 1480) = 0;
      GameObjectSprite::GameObjectSprite(a1 + 1544, a3);
      Character::initializeMembers((LogicBattleEvent *)a1);
      *(_DWORD *)(a1 + 1420) = 9;
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
      FileName = (_DWORD *)LogicCharacterData::getFileName(CharacterData, v9, v10);
      BaseFileName = (GameMain *)LogicCharacterData::getBaseFileName(CharacterData);
      GameMain::loadAsset((GameMain *)FileName, v13);
      GameMain::loadAsset(BaseFileName, v14);
      v15 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      v16 = LogicCharacter::getCharacterData(v15);
      DamageExportName = (const String *)LogicCharacterData::getDamageExportName(v16);
      if ( DamageExportName->m_length )
      {
        std::vector<MovieClip *>::resize(v132, 4, 0);
        for ( j = 0; j < 4; ++j )
        {
          String::String(&v144, DamageExportName);
          switch ( (int)j )
          {
            case 0:
              String::String(&v143, "_down");
              String::operator+=(&v144, &v143);
              String::~String();
              break;
            case 1:
              String::String(&v140, "_left");
              String::operator+=(&v144, &v140);
              String::~String();
              break;
            case 2:
              String::String(&v142, "_up");
              String::operator+=(&v144, &v142);
              String::~String();
              break;
            case 3:
              String::String(&v141, "_right");
              String::operator+=(&v144, &v141);
              String::~String();
              break;
            default:
              break;
          }
          String::String(&v139, "sc/level.sc");
          *(_QWORD *)(*v132 + 8 * j) = ResourceManager::getMovieClipFromPool((ResourceManager *)&v139, &v144, v19);
          String::~String();
          String::~String();
        }
      }
      if ( (unsigned int)GameObject::isOwnedByBottomPlayer((ShutdownStartedMessage *)a1) )
      {
        BlueExportName = (const String *)LogicCharacterData::getBlueExportName(CharacterData);
        BlueTopExportName = LogicCharacterData::getBlueTopExportName(CharacterData);
        BlueBaseExportName = (pthread_attr_t *)LogicCharacterData::getBlueBaseExportName(CharacterData);
        v23 = (unsigned int *)(LogicDataTables::getClientGlobals(BlueBaseExportName) + 336LL);
      }
      else
      {
        BlueExportName = (const String *)LogicCharacterData::getRedExportName(CharacterData);
        BlueTopExportName = LogicCharacterData::getRedTopExportName(CharacterData);
        BlueBaseExportName = (pthread_attr_t *)LogicCharacterData::getRedBaseExportName(CharacterData);
        v23 = (unsigned int *)(LogicDataTables::getClientGlobals(BlueBaseExportName) + 332LL);
      }
      v24 = *v23;
      *(_BYTE *)(a1 + 1348) = *v23 != 0;
      v25 = (float *)(a1 + 1328);
      if ( v24 )
      {
        v26 = (pthread_attr_t *)col32ToFloatRGBA(v24, v25, (float *)(a1 + 1332), (float *)(a1 + 1336), (float *)(a1 + 1340));
        *(_DWORD *)(a1 + 1344) = *(_DWORD *)(LogicDataTables::getClientGlobals(v26) + 340LL);
      }
      else
      {
        *(_DWORD *)(a1 + 1344) = 0;
        *(_QWORD *)v25 = 0;
        *(_QWORD *)(a1 + 1336) = 0;
      }
      if ( !(unsigned int)LogicCharacterData::isUseAnimator(CharacterData) )
      {
        Scale = LogicCharacterData::getScale(CharacterData);
        v128 = (const String *)BlueTopExportName;
        LODWORD(v133.si_addr) = -1;
        std::vector<Character::AnimFrameIndices>::resize(v130, 5, &v133.si_addr);
        v126 = 0;
        v33 = 0;
        LODWORD(v133.si_addr) = -1;
        while ( 1 )
        {
          if ( v33 == 1 && !*(_BYTE *)(a1 + 1348) )
            goto LABEL_75;
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
            MovieClipFromPool = (#1257 *)ResourceManager::getMovieClipFromPool(
                                           (ResourceManager *)FileName,
                                           BlueExportName,
                                           v44);
          else
            MovieClipFromPool = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)FileName, BlueExportName, v44);
          MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClipFromPool, "turret");
          v47 = MovieClipByName;
          if ( MovieClipByName )
          {
            MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
            v48 = DisplayObject::getX(v47);
            *(_DWORD *)(a1 + 1460) = LODWORD(v48);
            v49 = DisplayObject::getY(v47);
            *(_DWORD *)(a1 + 1464) = LODWORD(v49);
          }
          FrameLabel = MovieClip::getFrameLabel(MovieClipFromPool, 0);
          if ( FrameLabel && (unsigned int)String::equalsIgnoreCase(&PLAY_ONCE_FRAME_LABEL, FrameLabel) )
          {
            MovieClip::playOnceRecursive(MovieClipFromPool);
          }
          else
          {
            v51 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v52 = LogicCharacter::getCharacterData(v51);
            if ( (unsigned int)LogicCharacterData::hasRotationOnTimeline(v52) )
            {
              MovieClip::stop(MovieClipFromPool);
            }
            else
            {
              FrameIndex = MovieClip::getFrameIndex(MovieClipFromPool, "attack");
              if ( (FrameIndex & 0x80000000) == 0 )
                MovieClip::gotoAndStopFrameIndex(MovieClipFromPool, FrameIndex);
              v54 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v55 = LogicCharacter::getCharacterData(v54);
              isBomb = LogicCharacterData::isBomb(v55);
              v57 = *v130;
              if ( isBomb )
              {
                Character::AnimFrameIndices::init(v57, MovieClipFromPool, 4);
                MovieClip::gotoAndStopFrameIndex(MovieClipFromPool, **v130);
              }
              else
              {
                Character::AnimFrameIndices::init(v57, MovieClipFromPool, 0);
                v58 = **v130;
                if ( (v58 & 0x80000000) == 0 && ((*v130)[1] & 0x80000000) == 0 )
                  MovieClip::gotoAndStopFrameIndex(MovieClipFromPool, v58);
              }
              v59 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v60 = LogicCharacter::getCharacterData(v59);
              if ( (unsigned int)LogicCharacterData::isHidingWhenNotAttacking(v60) )
              {
                Character::AnimFrameIndices::init(*v130 + 2, MovieClipFromPool, 1);
                Character::AnimFrameIndices::init(*v130 + 4, MovieClipFromPool, 2);
              }
              else
              {
                v61 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                if ( *(_BYTE *)(LogicCharacter::getCharacterData(v61) + 500) )
                  Character::AnimFrameIndices::init(*v130 + 6, MovieClipFromPool, 3);
              }
            }
          }
          (*(void (__fastcall **)(#1257 *, long double))(*(_QWORD *)MovieClipFromPool + 40LL))(MovieClipFromPool, Scale);
          switch ( v33 )
          {
            case 1:
              v64 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v65 = (Font *)LogicCharacter::getCharacterData(v64);
              if ( !LogicCharacterData::getAttachedCharacter(v65) )
              {
                Character::updateOutline((Character *)a1, MovieClipFromPool, 0);
                goto LABEL_71;
              }
    LABEL_75:
              MovieClipFromPool = v126;
    LABEL_41:
              ++v33;
              v126 = MovieClipFromPool;
              break;
            case 2:
              v62 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v63 = (Font *)LogicCharacter::getCharacterData(v62);
              if ( LogicCharacterData::getAttachedCharacter(v63) )
                goto LABEL_76;
              Character::updateShadow((Character *)a1, MovieClipFromPool, 0);
              goto LABEL_71;
            case 0:
              Character::updateClip((Character *)a1, MovieClipFromPool, 0);
              goto LABEL_41;
            default:
    LABEL_71:
              if ( ++v33 >= 3 )
              {
    LABEL_76:
                Clip = v126;
                v34 = v128;
                goto LABEL_78;
              }
              break;
          }
        }
      }
      v125 = BlueBaseExportName;
      v127 = (const String *)BlueTopExportName;
      v27 = 0;
      v28 = 0;
      v29 = (CharacterAnimator *)(a1 + 456);
      do
      {
        String::String(&v138, BlueExportName);
        switch ( (int)v27 )
        {
          case 0:
            String::String(&v137, "_run1_");
            String::operator+=(&v138, &v137);
            String::~String();
            break;
          case 1:
            String::String(&v134, "_idle1_");
            String::operator+=(&v138, &v134);
            String::~String();
            break;
          case 2:
            String::String((String *)&v133.__pad[4], "_attack1_");
            String::operator+=(&v138, &v133.__pad[4]);
            String::~String();
            break;
          case 3:
            String::String(&v136, "_charge1_");
            String::operator+=(&v138, &v136);
            String::~String();
            break;
          case 4:
            String::String(&v135, "_run1_");
            String::operator+=(&v138, &v135);
            String::~String();
            break;
          case 5:
            String::String((String *)&v133.__pad[1], "_deploy1_");
            String::operator+=(&v138, &v133.__pad[1]);
            String::~String();
            break;
          default:
            Debugger::error((__siginfo *)"Animation state not implemented", v30);
            return result;
        }
        CharacterAnimator::init(v29, (const String *)FileName, &v138, CharacterData, *(_BYTE *)(a1 + 1348));
        DirectionCount = CharacterAnimator::getDirectionCount(v29);
        String::~String();
        v28 |= DirectionCount > 0;
        ++v27;
        v29 = (CharacterAnimator *)((char *)v29 + 48);
      }
      while ( v27 < 6 );
      BlueBaseExportName = v125;
      v34 = v127;
      if ( (v28 & 1) == 0 )
      {
        Name = LogicData::getName(CharacterData);
        v37 = (_QWORD *)(Name + 8);
        if ( *(_DWORD *)(Name + 4) + 1 > 8 )
          v37 = (_QWORD *)*v37;
        v38 = FileName + 2;
        if ( FileName[1] + 1 > 8 )
          v38 = (_QWORD *)*v38;
        p_internal = &BlueExportName->internal;
        if ( BlueExportName->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format(
          (String *)"Couldn't create any animations for character %s. Filename %s, exportNamePrefix %s",
          v36,
          v37,
          v38,
          p_internal);
        Debugger::error((Debugger *)&v133.si_value, v40);
      }
      v41 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      v42 = (Font *)LogicCharacter::getCharacterData(v41);
      if ( LogicCharacterData::getAttachedCharacter(v42) )
        Clip = 0;
      else
        Clip = (#1257 *)CharacterAnimator::getClip((CharacterAnimator *)(a1 + 504), 0, 2, 1.0);
    LABEL_78:
      if ( v34->m_length )
      {
        v66 = (ResourceManager *)LogicCharacterData::getBaseFileName(CharacterData);
        v68 = (#1257 *)ResourceManager::getMovieClipFromPool(v66, v34, v67);
        GameObjectSprite::setMovieClip((#1138 *)(a1 + 160), v68);
        RenderSystem::addGameObjectSprite(a3, (#1138 *)(a1 + 160), (const char *)9);
      }
      if ( LODWORD(BlueBaseExportName->__sig) )
      {
        v69 = (ResourceManager *)LogicCharacterData::getBaseFileName(CharacterData);
        Clip = (#1257 *)ResourceManager::getMovieClipFromPool(v69, (const String *)BlueBaseExportName, v70);
        GameObjectSprite::setMovieClip((#1138 *)(a1 + 304), Clip);
        RenderSystem::addGameObjectSprite(a3, (#1138 *)(a1 + 304), (const char *)9);
        if ( LODWORD(BlueBaseExportName->__sig) )
        {
          for ( k = 0; k < 2; ++k )
          {
            while ( 1 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
              {
                v72 = (ResourceManager *)LogicCharacterData::getBaseFileName(CharacterData);
                MovieClip = (MovieClip *)ResourceManager::getMovieClipFromPool(v72, (const String *)BlueBaseExportName, v73);
              }
              else
              {
                v75 = (ResourceManager *)LogicCharacterData::getBaseFileName(CharacterData);
                MovieClip = (MovieClip *)ResourceManager::getMovieClip(v75, (const String *)BlueBaseExportName, v76);
              }
              if ( k )
                break;
              k = 1;
              Character::updateOutline((Character *)a1, MovieClip, 0);
            }
            Character::updateShadow((Character *)a1, MovieClip, 0);
          }
        }
      }
      if ( LogicGameObject::getCharacterBuffComponent(v129) )
      {
        v77 = (BuffSystem *)operator new(32);
        CharacterBuffComponent = (const LogicCharacterBuffComponent *)LogicGameObject::getCharacterBuffComponent(v129);
        BuffSystem::BuffSystem(v77, CharacterBuffComponent, (GameObject *)a1);
        *(_QWORD *)(a1 + 1032) = v77;
      }
      if ( (*(__int64 (**)(void))(*(_QWORD *)v129 + 136LL))() )
      {
        if ( Clip )
        {
          HealthBar = (const LogicHealthBarData *)LogicCharacterData::getHealthBar(CharacterData);
          v82 = (const String *)LogicHealthBarData::getFileName(HealthBar, v80, v81);
          HealthBarOffsetY = (float)(int)LogicCharacterData::getHealthBarOffsetY(CharacterData);
          if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) )
          {
            PlayerExportName = (const String *)LogicHealthBarData::getPlayerExportName(HealthBar);
            *(_QWORD *)(a1 + 904) = Character::createHealthBarClip(
                                      (Character *)a1,
                                      v82,
                                      PlayerExportName,
                                      Clip,
                                      HealthBar,
                                      HealthBarOffsetY);
            NoDamagePlayerExportName = (const String *)LogicHealthBarData::getNoDamagePlayerExportName(HealthBar);
          }
          else
          {
            EnemyExportName = (const String *)LogicHealthBarData::getEnemyExportName(HealthBar);
            *(_QWORD *)(a1 + 904) = Character::createHealthBarClip(
                                      (Character *)a1,
                                      v82,
                                      EnemyExportName,
                                      Clip,
                                      HealthBar,
                                      HealthBarOffsetY);
            NoDamagePlayerExportName = (const String *)LogicHealthBarData::getNoDamageEnemyExportName(HealthBar);
          }
          HealthBarClip = (MovieClip *)Character::createHealthBarClip(
                                         (Character *)a1,
                                         v82,
                                         NoDamagePlayerExportName,
                                         Clip,
                                         HealthBar,
                                         HealthBarOffsetY);
          *(_QWORD *)(a1 + 896) = HealthBarClip;
          MovieClip::stop(HealthBarClip);
          MovieClip::stop(*(MovieClip **)(a1 + 904));
          v90 = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 896), "bar");
          if ( v90 )
            MovieClip::gotoAndStopFrameIndex(v90, 0);
          v91 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 904), "ammo");
          *(_QWORD *)(a1 + 1368) = v91;
          if ( v91 )
            *(_QWORD *)(a1 + 1360) = MovieClip::getMovieClipByName(v91, "bar");
          v92 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 904), "bar");
          *(_QWORD *)(a1 + 1352) = v92;
          Debugger::doAssert((Debugger *)(v92 != 0), (bool)"", v93);
          GameObjectSprite::setMovieClip(v131, *(#1257 **)(a1 + 896));
          GameObjectSprite::setGameObject(v131, (ShutdownStartedMessage *)a1);
          RenderSystem::addGameObjectSprite(a3, v131, (const char *)0xB);
        }
        else
        {
          v87 = LogicData::getName(CharacterData);
          operator+(&v133, "Couldn't create health bar for ", v87);
          Debugger::warning(&v133, v88);
          String::~String();
        }
      }
      EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager((ShutdownStartedMessage *)a1);
      if ( LogicCharacterData::getContinuousEffect(CharacterData) )
      {
        isOwnedByCurrentPlayer = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1);
        ContinuousEffect = (const AskForTVContentMessage *)LogicCharacterData::getContinuousEffect(CharacterData);
        v97 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        v98 = LogicGameObject::getX(v97);
        v99 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        v100 = LogicGameObject::getY(v99);
        v101 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        v102 = LogicGameObject::getZ(v101);
        v103 = (const GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        EffectManager::addLoopingEffect(
          EffectManager,
          ContinuousEffect,
          v98,
          v100,
          v102,
          isOwnedByCurrentPlayer ^ 1,
          v103,
          1,
          0);
      }
      isLeader = (LogicDataTables *)LogicCharacter::isLeader(v129);
      if ( (_DWORD)isLeader )
      {
        CharacterMarkerPlayer = (const AskForTVContentMessage *)LogicDataTables::getCharacterMarkerPlayer(isLeader);
        if ( CharacterMarkerPlayer )
        {
          v106 = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1);
          v107 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v108 = LogicGameObject::getX(v107);
          v109 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v110 = LogicGameObject::getY(v109);
          v111 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v112 = LogicGameObject::getZ(v111);
          v113 = (const GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          EffectManager::addLoopingEffect(EffectManager, CharacterMarkerPlayer, v108, v110, v112, v106 ^ 1, v113, 1, 0);
          *(_DWORD *)(a1 + 1424) = EffectManager::getLastCreatedEffectId(EffectManager);
        }
      }
      if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1)
        && (unsigned int)LogicCharacterData::isBuilding(CharacterData)
        && LogicCharacterData::getMorphCharacter(CharacterData) )
      {
        v114 = operator new(144);
        GameObjectSprite::GameObjectSprite(v114, a3);
        *(_QWORD *)(a1 + 1448) = v114;
        v116 = (DropGUIContainer *)ResourceManager::getMovieClipFromPool(
                                     (ResourceManager *)"sc/ui.sc",
                                     "ui_deploy_timer",
                                     v115);
        *(_QWORD *)(a1 + 1432) = v116;
        v117 = (*(float (__fastcall **)(LogicJSONObject *))(*(_QWORD *)a3 + 64LL))(a3);
        DropGUIContainer::doFontScaling(v116, v118, v117);
        *(_QWORD *)(a1 + 1440) = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 1432), "time");
        v119 = *(MovieClip **)(a1 + 1432);
        String = (const String *)StringTable::getString((#1308 *)"TID_SECOND_SHORT", v120);
        MovieClip::setText(v119, "TID_s", String);
        v122 = *(DisplayObject **)(a1 + 1432);
        *((_BYTE *)v122 + 8) = 1;
        DisplayObject::setPixelSnappedXY(v122, 0.0, 0.0);
        GameObjectSprite::setMovieClip(*(#1138 **)(a1 + 1448), *(#1257 **)(a1 + 1432));
        GameObjectSprite::setGameObject(*(#1138 **)(a1 + 1448), (ShutdownStartedMessage *)a1);
        v123 = *(_QWORD *)(a1 + 1448);
        *(_BYTE *)(v123 + 8) = 1;
        RenderSystem::addGameObjectSprite(a3, (#1138 *)v123, (const char *)0xB);
      }
      return a1;
    }

    void __fastcall Character::updateClip(__int64 a1, __int64 a2, bool a3)
    {
      __int64 v6; // x8
      int8x16_t v7; // q0
      AllianceJoinFailedMessage *Logic; // x0
      AreaEffectObject *CharacterData; // x0
      __int64 Name; // x0
      const String *v11; // x1
      int8x16_t v12; // [xsp+0h] [xbp-50h] BYREF
      int v13; // [xsp+10h] [xbp-40h]
      int v14; // [xsp+14h] [xbp-3Ch]
      _QWORD v15[3]; // [xsp+18h] [xbp-38h] BYREF
    
      if ( a2 )
      {
        v6 = *(_QWORD *)(a1 + 936);
        if ( v6 )
        {
          Matrix2x3::Matrix2x3((#1256 *)&v12, (const #1256 *)(a2 + 16), (const #1256 *)(**(_QWORD **)(v6 + 72) + 16LL));
          v7 = v12;
          *(_QWORD *)(a2 + 16) = v12.i64[0];
          *(_QWORD *)(a2 + 24) = vextq_s8(v7, v7, 8u).u64[0];
          *(_DWORD *)(a2 + 32) = v13;
          *(_DWORD *)(a2 + 36) = v14;
          Matrix2x3::~Matrix2x3((#1256 *)&v12);
        }
        ColorTransform::reset((ColorTransform *)(a2 + 9));
        GameObjectSprite::setMovieClip((#1138 *)(a1 + 16), (#1257 *)a2, a3);
      }
      else
      {
        Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        CharacterData = (AreaEffectObject *)LogicCharacter::getCharacterData(Logic);
        Name = LogicData::getName(CharacterData);
        operator+(v15, "Character::updateClip NULL. Character: ", Name);
        Debugger::warning((__siginfo *)v15, v11);
        String::~String();
      }
    }

    void __fastcall Character::updateOutline(__int64 a1, #1257 *a2, bool a3)
    {
      AllianceJoinFailedMessage *Logic; // x0
      AreaEffectObject *CharacterData; // x0
      __int64 Name; // x0
      const String *v7; // x1
      _QWORD v8[3]; // [xsp+18h] [xbp-28h] BYREF
    
      if ( a2 )
      {
        GameObjectSprite::setMovieClip((#1138 *)(a1 + 1040), a2, a3);
        GameObjectSprite::setOutlineSettings(
          (#1138 *)(a1 + 1040),
          *(float *)(a1 + 1344),
          *(float *)(a1 + 1328),
          *(float *)(a1 + 1332),
          *(float *)(a1 + 1336),
          *(float *)(a1 + 1340),
          1.0,
          1.0,
          1.0);
      }
      else
      {
        Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        CharacterData = (AreaEffectObject *)LogicCharacter::getCharacterData(Logic);
        Name = LogicData::getName(CharacterData);
        operator+(v8, "Character::updateOutline NULL. Character: ", Name);
        Debugger::warning((__siginfo *)v8, v7);
        String::~String();
      }
    }

    void __fastcall Character::updateShadow(__int64 a1, #1257 *a2, bool a3)
    {
      int v6; // w8
      #1138 *v7; // x19
      #1138 *v8; // x0
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x20
      float v11; // s8
      float v12; // s9
      float v13; // s0
      float v14; // s10
      float v15; // s11
      long double ShadowY; // q0
      float v17; // s4
      #1138 *v18; // x0
      float v19; // s0
      float v20; // s1
      float v21; // s2
      float v22; // s3
      AllianceJoinFailedMessage *v23; // x0
      AreaEffectObject *v24; // x0
      __int64 Name; // x0
      const String *v26; // x1
      __int64 v27; // x0
      const char *v28; // x2
      #1257 *MovieClip; // x0
      AllianceJoinFailedMessage *v30; // x0
      Font *v31; // x0
      __siginfo _48; // [xsp+48h] [xbp-58h] BYREF
    
      if ( a2 )
      {
        v6 = *(_DWORD *)(GameMain::getInstance((AllianceStreamMessage *)a1) + 120);
        v7 = (#1138 *)(a1 + 752);
        v8 = (#1138 *)(a1 + 752);
        if ( v6 )
        {
          GameObjectSprite::setMovieClip(v8, a2, a3);
          Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
          LODWORD(v11) = COERCE_UNSIGNED_INT128(LogicCharacterData::getShadowScaleX());
          LODWORD(v12) = COERCE_UNSIGNED_INT128(LogicCharacterData::getShadowScaleY(CharacterData));
          LogicCharacterData::getShadowSkew(CharacterData);
          v14 = v13;
          LODWORD(v15) = COERCE_UNSIGNED_INT128(LogicCharacterData::getShadowX(CharacterData));
          ShadowY = LogicCharacterData::getShadowY(CharacterData);
          v17 = *(float *)&ShadowY;
          v18 = v7;
          v19 = v11;
          v20 = v12;
          v21 = v14;
          v22 = v15;
        }
        else
        {
          v27 = GameObjectSprite::removeMovieClip(v8);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/level.sc", "lores_blob_shadow", v28);
          GameObjectSprite::setMovieClip((#1138 *)(a1 + 752), MovieClip);
          v30 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v31 = (Font *)LogicCharacter::getCharacterData(v30);
          v19 = (float)(int)LogicCharacterData::getCollisionRadius(v31) / 1200.0;
          v21 = 0.0;
          v22 = 0.0;
          v17 = 0.0;
          v18 = (#1138 *)(a1 + 752);
          v20 = v19;
        }
        GameObjectSprite::setShadowSettings(v18, v19, v20, v21, v22, v17);
      }
      else
      {
        v23 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        v24 = (AreaEffectObject *)LogicCharacter::getCharacterData(v23);
        Name = LogicData::getName(v24);
        operator+(&_48, "Character::updateShadow NULL. Character: ", Name);
        Debugger::warning(&_48, v26);
        String::~String();
      }
    }

    DisplayObject *__fastcall Character::createHealthBarClip(
            ShutdownStartedMessage *a1,
            ResourceManager *a2,
            const String *a3,
            __int64 a4,
            __int64 a5,
            float a6)
    {
      DisplayObject *MovieClip; // x19
      AllianceJoinFailedMessage *Logic; // x25
      TextField *TextFieldByName; // x23
      long double v13; // q0
      int ExpLevel; // w24
      __int64 OwnerAccountId; // x26
      UnbindFacebookAccountMessage *LogicBattle; // x27
      int HigherInt; // w28
      int LowerInt; // w0
      UnbindFacebookAccountMessage *v19; // x0
      const char *v20; // x2
      tween::Bounce *Avatar; // x0
      long double v22; // q0
      float YOffset; // s9
      __int64 ChildByName; // x22
      __int64 RenderSystem; // x0
      float v26; // s0
      Sprite *v27; // x1
      Rect v29[2]; // [xsp+0h] [xbp-70h] BYREF
    
      MovieClip = (DisplayObject *)ResourceManager::getMovieClip(a2, a3, a3);
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(a1);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(MovieClip, "level");
      if ( TextFieldByName )
      {
        ExpLevel = LogicCharacter::getLevelIndex(Logic) + 1;
        if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)Logic + 200LL))(Logic) )
        {
          OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)Logic);
          LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)Logic);
          HigherInt = LogicLong::getHigherInt(OwnerAccountId);
          LowerInt = LogicLong::getLowerInt(OwnerAccountId);
          LODWORD(OwnerAccountId) = LogicBattle::getAccountIndex(LogicBattle, HigherInt, LowerInt);
          v19 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)Logic);
          Avatar = (tween::Bounce *)LogicBattle::getAvatar(v19, OwnerAccountId, v20);
          if ( Avatar )
            ExpLevel = LogicClientAvatar::getExpLevel(Avatar);
        }
        TextField::setNumberText(TextFieldByName, ExpLevel, 0);
      }
      *(_BYTE *)(MovieClip::getChildByName(MovieClip, "buff", v13) + 8) = 0;
      if ( (unsigned int)LogicHealthBarData::getYOffset(a5) )
      {
        YOffset = (float)(int)LogicHealthBarData::getYOffset(a5);
      }
      else
      {
        ChildByName = MovieClip::getChildByName(MovieClip, "bounding_box", v22);
        Rect::Rect(v29);
        if ( ChildByName )
          DisplayObject::getBounds(ChildByName, a4, v29);
        else
          DisplayObject::getBounds(a4, 0, v29);
        YOffset = ceilf(*(float *)&v29[0].bottom);
        Rect::~Rect(v29);
      }
      DisplayObject::setPixelSnappedXY(MovieClip, 0.0, YOffset + a6);
      RenderSystem = GameObject::getRenderSystem(a1);
      v26 = (*(float (__fastcall **)(__int64))(*(_QWORD *)RenderSystem + 64LL))(RenderSystem);
      DropGUIContainer::doFontScaling(MovieClip, v27, v26);
      return MovieClip;
    }

    // attributes: thunk
    void __fastcall Character::Character(Character *this, AvatarNameChangeFailedMessage **a2, LogicJSONObject *a3)
    {
      __ZN9CharacterC2EPK14LogicCharacterP12RenderSystem((__int64)this, a2, a3);
    }

    __int64 __fastcall Character::destruct(LogicBattleEvent *this)
    {
      #1257 *MovieClip; // x0
      #1249 *MovieClipByName; // x0
      DisplayObject *v4; // x21
      MovieClip *v5; // x1
      #1257 *v6; // x0
      #1249 *v7; // x0
      DisplayObject *v8; // x22
      ResourceManager *v9; // x0
      __int64 v10; // x8
      unsigned __int64 v11; // x9
      unsigned int v12; // w22
      ResourceManager *v13; // x0
      MovieClip *v14; // x1
      char v15; // w24
      ResourceManager *v16; // x0
      MovieClip *v17; // x1
      int i; // w25
      #1138 *v19; // x0
      ResourceManager *v20; // x23
      int v21; // w8
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x0
      MovieClip *v24; // x1
      void *v25; // x20
      __int64 v26; // x0
      __int64 v27; // x0
    
      Character::destroyTimeClip(this);
      Character::clearLoopingEffects(this);
      if ( GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 16)) )
      {
        MovieClip = (#1257 *)GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 16));
        MovieClipByName = (#1249 *)MovieClip::getMovieClipByName(MovieClip, "turret");
        v4 = MovieClipByName;
        if ( MovieClipByName )
        {
          DisplayObject::setX(MovieClipByName, *((float *)this + 365));
          DisplayObject::setY(v4, *((float *)this + 366));
        }
      }
      if ( GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 752)) )
      {
        v6 = (#1257 *)GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 752));
        v7 = (#1249 *)MovieClip::getMovieClipByName(v6, "turret");
        v8 = v7;
        if ( v7 )
        {
          DisplayObject::setX(v7, *((float *)this + 365));
          DisplayObject::setY(v8, *((float *)this + 366));
        }
      }
      v9 = (ResourceManager *)*((_QWORD *)this + 191);
      if ( v9 )
      {
        ResourceManager::putMovieClipToPool(v9, v5);
        *((_QWORD *)this + 191) = 0;
      }
      v10 = *((_QWORD *)this + 114);
      if ( *((_QWORD *)this + 115) != v10 )
      {
        v11 = 0;
        v12 = 1;
        do
        {
          ResourceManager::putMovieClipToPool(*(ResourceManager **)(v10 + 8 * v11), v5);
          v11 = v12;
          v10 = *((_QWORD *)this + 114);
          ++v12;
        }
        while ( v11 < (*((_QWORD *)this + 115) - v10) >> 3 );
      }
      *((_QWORD *)this + 115) = v10;
      v13 = (ResourceManager *)GameObjectSprite::removeMovieClip((LogicBattleEvent *)((char *)this + 304));
      if ( v13 )
      {
        ResourceManager::putMovieClipToPool(v13, v14);
        v15 = 1;
      }
      else
      {
        v15 = 0;
      }
      v16 = (ResourceManager *)GameObjectSprite::removeMovieClip((LogicBattleEvent *)((char *)this + 160));
      if ( v16 )
        ResourceManager::putMovieClipToPool(v16, v17);
      for ( i = 0; i != 3; ++i )
      {
        if ( i == 1 )
        {
          v19 = (LogicBattleEvent *)((char *)this + 1040);
        }
        else
        {
          if ( !i )
          {
            v20 = (ResourceManager *)GameObjectSprite::removeMovieClip((LogicBattleEvent *)((char *)this + 16));
    LABEL_25:
            Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
            CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
            v21 = LogicCharacterData::isUseAnimator(CharacterData) ^ 1;
            goto LABEL_26;
          }
          v19 = (LogicBattleEvent *)((char *)this + 752);
        }
        v20 = (ResourceManager *)GameObjectSprite::removeMovieClip(v19);
        if ( (v15 & 1) == 0 )
          goto LABEL_25;
        v21 = 1;
    LABEL_26:
        if ( v20 && ((v21 ^ 1) & 1) == 0 )
        {
          if ( (*(unsigned int (__fastcall **)(LogicBattleEvent *))(*(_QWORD *)this + 280LL))(this) )
            ResourceManager::putMovieClipToPool(v20, v24);
          else
            (*(void (__fastcall **)(ResourceManager *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v25 = (void *)*((_QWORD *)this + 129);
      if ( v25 )
      {
        BuffSystem::~BuffSystem(*((BuffSystem **)this + 129));
        operator delete(v25);
      }
      *((_QWORD *)this + 129) = 0;
      GameObjectSprite::removeMovieClip((LogicBattleEvent *)((char *)this + 1184));
      v26 = *((_QWORD *)this + 113);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      *((_QWORD *)this + 113) = 0;
      v27 = *((_QWORD *)this + 112);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      *((_QWORD *)this + 112) = 0;
      GameObject::destruct((const GameMode **)this);
      return Character::initializeMembers(this);
    }

    #1138 *__fastcall Character::destroyTimeClip(LogicBattleEvent *this)
    {
      #1138 *result; // x0
      ResourceManager *v3; // x0
      MovieClip *v4; // x1
    
      result = (#1138 *)*((_QWORD *)this + 181);
      if ( result )
      {
        v3 = (ResourceManager *)GameObjectSprite::removeMovieClip(result);
        ResourceManager::putMovieClipToPool(v3, v4);
        result = (#1138 *)*((_QWORD *)this + 181);
        if ( result )
          result = (#1138 *)(*(__int64 (__fastcall **)(#1138 *))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 181) = 0;
      }
      return result;
    }

    ShutdownStartedMessage *__fastcall Character::clearLoopingEffects(ShutdownStartedMessage *this)
    {
      ShutdownStartedMessage *v1; // x19
      __int64 v2; // x8
      __int64 v3; // x20
      unsigned __int64 v4; // x21
      __int64 i; // x22
      __int64 EffectManager; // x0
      __int64 v7; // x10
    
      v1 = this;
      v2 = *((_QWORD *)this + 189);
      v3 = *((_QWORD *)this + 188);
      v4 = (unsigned __int64)(v2 - v3) >> 4;
      if ( (_DWORD)v4 )
      {
        for ( i = 4; ; i += 16 )
        {
          if ( (*(_DWORD *)(v3 + i) & 0x80000000) == 0 )
          {
            EffectManager = GameObject::getEffectManager(v1);
            this = (ShutdownStartedMessage *)EffectManager::removeEffect(EffectManager, *(_DWORD *)(v3 + i));
            *(_DWORD *)(v3 + i) = -1;
          }
          LODWORD(v4) = v4 - 1;
          if ( !(_DWORD)v4 )
            break;
          v3 = *((_QWORD *)v1 + 188);
        }
        v3 = *((_QWORD *)v1 + 188);
        v2 = *((_QWORD *)v1 + 189);
      }
      if ( v2 != v3 )
      {
        v7 = v3;
        do
        {
          *(_DWORD *)v7 = -1;
          *(_DWORD *)(v7 + 4) = -1;
          *(_QWORD *)(v7 + 8) = 0;
          v7 += 16;
        }
        while ( v7 != v2 );
      }
      *((_QWORD *)v1 + 189) = v3;
      return this;
    }

    BuffSystem *__fastcall Character::update(LogicBattleEvent *this, long double a2, long double a3)
    {
      TextField *v6; // x20
      AllianceJoinFailedMessage *Logic; // x0
      int GrowthTimer; // w0
      __int64 v9; // x20
      void (__fastcall *v10)(__int64, long double, long double, long double); // x22
      long double v11; // q0
      long double v12; // q10
      long double v13; // q0
      long double v14; // q11
      long double v15; // q0
      AllianceJoinFailedMessage *v16; // x0
      Font *CharacterData; // x0
      __int64 v18; // x0
      bool v19; // w8
      __int64 EffectManager; // x0
      char *SpriteForEffects; // x0
      __int64 MovieClip; // x20
      char isOwnedByCurrentPlayer; // w8
      ColorTransform *v24; // x0
      float *v25; // x20
      float v26; // s0
      float v27; // s2
      float v28; // s0
      BuffSystem *result; // x0
    
      GameObject::update((GameMode **)this, *(float *)&a2, *(float *)&a3);
      if ( *((_QWORD *)this + 181) )
      {
        v6 = (TextField *)*((_QWORD *)this + 180);
        Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
        GrowthTimer = LogicCharacter::getGrowthTimer(Logic);
        TextField::setNumberText(v6, GrowthTimer / 1000 + 1, 0);
        v9 = *((_QWORD *)this + 181);
        v10 = *(void (__fastcall **)(__int64, long double, long double, long double))(*(_QWORD *)v9 + 272LL);
        GameObjectSprite::getTileX((LogicBattleEvent *)((char *)this + 16));
        v12 = v11;
        GameObjectSprite::getTileY((LogicBattleEvent *)((char *)this + 16));
        v14 = v13;
        GameObjectSprite::getTileZ((LogicBattleEvent *)((char *)this + 16));
        v10(v9, v12, v14, v15);
      }
      Character::updateLoopingEffects(this);
      Character::updateSpellPlacingEffect(this);
      Character::updateBaseMod(this, *(float *)&a2);
      (*(void (__fastcall **)(LogicBattleEvent *, long double, long double))(*(_QWORD *)this + 288LL))(this, a2, a3);
      v16 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(v16);
      if ( LogicCharacterData::getDeathEffect(CharacterData) )
      {
        v18 = GameObject::getLogic(this);
        v19 = ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 152LL))(v18) & 1) != 0 || *((_BYTE *)this + 448) != 0;
        *((_BYTE *)this + 24) = v19;
        *((_BYTE *)this + 168) = v19;
        *((_BYTE *)this + 760) = v19;
        *((_BYTE *)this + 1048) = v19;
        *((_BYTE *)this + 312) = v19;
        if ( !v19 )
        {
          if ( *((_DWORD *)this + 356) )
          {
            EffectManager = GameObject::getEffectManager(this);
            EffectManager::removeEffect(EffectManager, *((_DWORD *)this + 356));
            *((_DWORD *)this + 356) = 0;
          }
        }
      }
      if ( *((_QWORD *)this + 169) )
        Character::updateHealthBar(this);
      SpriteForEffects = GameObject::getSpriteForEffects(this);
      MovieClip = GameObjectSprite::getMovieClip((#1138 *)SpriteForEffects);
      if ( MovieClip )
      {
        isOwnedByCurrentPlayer = GameObject::isOwnedByCurrentPlayer(this);
        v24 = (ColorTransform *)(MovieClip + 9);
        v25 = (float *)((char *)this + 1408);
        if ( (isOwnedByCurrentPlayer & 1) != 0 )
        {
          v26 = 0.0;
          v27 = *((float *)this + 352) * 0.8;
        }
        else
        {
          v27 = 0.0;
          v26 = *((float *)this + 352) * 0.8;
        }
        ColorTransform::setAddColor(v24, v26, 0.0, v27);
      }
      else
      {
        v25 = (float *)((char *)this + 1408);
      }
      v28 = *v25 + (float)(*(float *)&a2 * -4.0);
      if ( v28 < 0.0 )
        v28 = 0.0;
      *v25 = v28;
      result = (BuffSystem *)*((_QWORD *)this + 129);
      if ( result )
        return (BuffSystem *)BuffSystem::update(result, *(float *)&a2);
      return result;
    }

    __int64 __fastcall Character::updateLoopingEffects(LogicBattleEvent *this)
    {
      AllianceJoinFailedMessage *Logic; // x0
      __int64 CharacterData; // x21
      __int64 result; // x0
      GameMode *v5; // x0
      AllianceListMessage *CombatComponent; // x0
      AllianceListMessage *v7; // x22
      __int64 Target; // x28
      __int64 HitTimer; // x8
      __int64 VariableDamageLevelIndex; // x24
      const AskForTVContentMessage *TargettedDamageEffect; // x23
      const AskForTVContentMessage *DamageLevelTransitionEffect; // x22
      const AskForTVContentMessage *InfernoFlameEffect; // x21
      __int64 LoopingEffectState; // x0
      __int64 v15; // x24
      __int64 EffectManager; // x0
      LogicBackgroundDecoData *v17; // x26
      GameMode *v18; // x0
      int v19; // w27
      GameMode *v20; // x0
      const AskForTVContentMessage *v21; // x25
      __int64 v22; // x21
      int v23; // w28
      GameMode *v24; // x0
      int v25; // w20
      const GameMode *v26; // x0
      int v27; // w3
      DonateAllianceUnitMessage *v28; // x20
      void (__fastcall *v29)(DonateAllianceUnitMessage *, _QWORD, __int64); // x25
      AllianceJoinFailedMessage *v30; // x0
      __int64 v31; // x0
      __int64 TargetEffectY; // x0
      __int64 v33; // x0
      __int64 v34; // x23
      __int64 v35; // x0
      int v36; // w20
      LogicBackgroundDecoData *v37; // x24
      GameMode *v38; // x0
      int v39; // w25
      GameMode *v40; // x0
      int v41; // w26
      GameMode *v42; // x0
      int v43; // w27
      const GameMode *v44; // x0
      DonateAllianceUnitMessage *v45; // x0
      __int64 v46; // x22
      __int64 v47; // x0
      int v48; // w20
      LogicBackgroundDecoData *v49; // x23
      GameMode *v50; // x0
      int v51; // w24
      GameMode *v52; // x0
      int v53; // w25
      GameMode *v54; // x0
      int v55; // w26
      const GameMode *v56; // x0
      DonateAllianceUnitMessage *v57; // x20
      void (__fastcall *v58)(DonateAllianceUnitMessage *, _QWORD, __int64); // x23
      AllianceJoinFailedMessage *v59; // x0
      __int64 v60; // x0
      __int64 v61; // x0
      int v62; // [xsp+Ch] [xbp-54h]
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      CharacterData = LogicCharacter::getCharacterData(Logic);
      result = LogicCharacterData::hasVariableDamage(CharacterData);
      if ( !(_DWORD)result )
        return result;
      v5 = (GameMode *)GameObject::getLogic(this);
      CombatComponent = (AllianceListMessage *)LogicGameObject::getCombatComponent(v5);
      v7 = CombatComponent;
      if ( !CombatComponent )
      {
        Target = 0;
        goto LABEL_6;
      }
      Target = LogicCombatComponent::getTarget(CombatComponent);
      HitTimer = LogicCombatComponent::getHitTimer(v7);
      if ( (int)HitTimer < 1 )
      {
    LABEL_6:
        InfernoFlameEffect = 0;
        DamageLevelTransitionEffect = 0;
        TargettedDamageEffect = 0;
        goto LABEL_7;
      }
      VariableDamageLevelIndex = LogicCharacterData::getVariableDamageLevelIndex(CharacterData, HitTimer);
      TargettedDamageEffect = (const AskForTVContentMessage *)LogicCharacterData::getTargettedDamageEffect(
                                                                CharacterData,
                                                                VariableDamageLevelIndex);
      DamageLevelTransitionEffect = (const AskForTVContentMessage *)LogicCharacterData::getDamageLevelTransitionEffect(
                                                                      CharacterData,
                                                                      VariableDamageLevelIndex);
      InfernoFlameEffect = (const AskForTVContentMessage *)LogicCharacterData::getInfernoFlameEffect(
                                                             CharacterData,
                                                             VariableDamageLevelIndex);
    LABEL_7:
      LoopingEffectState = Character::getLoopingEffectState(this, 0);
      v15 = LoopingEffectState;
      if ( TargettedDamageEffect != *(const AskForTVContentMessage **)(LoopingEffectState + 8) )
      {
        if ( (*(_DWORD *)(LoopingEffectState + 4) & 0x80000000) == 0 )
        {
          EffectManager = GameObject::getEffectManager(this);
          EffectManager::removeEffect(EffectManager, *(_DWORD *)(v15 + 4));
          *(_DWORD *)(v15 + 4) = -1;
          *(_QWORD *)(v15 + 8) = 0;
        }
        if ( Target && TargettedDamageEffect )
        {
          v62 = GameObject::isOwnedByCurrentPlayer(this) ^ 1;
          v17 = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
          v18 = (GameMode *)GameObject::getLogic(this);
          v19 = LogicGameObject::getX(v18);
          v20 = (GameMode *)GameObject::getLogic(this);
          v21 = InfernoFlameEffect;
          v22 = Target;
          v23 = LogicGameObject::getY(v20);
          v24 = (GameMode *)GameObject::getLogic(this);
          v25 = LogicGameObject::getZ(v24);
          v26 = (const GameMode *)GameObject::getLogic(this);
          v27 = v23;
          Target = v22;
          InfernoFlameEffect = v21;
          v28 = EffectManager::addLoopingEffect(v17, TargettedDamageEffect, v19, v27, v25, v62, v26, 1, 0);
          Effect::setTarget((__int64)v28, Target);
          v29 = *(void (__fastcall **)(DonateAllianceUnitMessage *, _QWORD, __int64))(*(_QWORD *)v28 + 64LL);
          v30 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
          v31 = LogicCharacter::getCharacterData(v30);
          TargetEffectY = LogicCharacterData::getTargetEffectY(v31);
          v29(v28, 0, TargetEffectY);
          *(_DWORD *)(v15 + 4) = Effect::getEffectId(v28);
          *(_QWORD *)(v15 + 8) = TargettedDamageEffect;
        }
      }
      v33 = Character::getLoopingEffectState(this, 1);
      v34 = v33;
      if ( DamageLevelTransitionEffect != *(const AskForTVContentMessage **)(v33 + 8) )
      {
        if ( (*(_DWORD *)(v33 + 4) & 0x80000000) == 0 )
        {
          v35 = GameObject::getEffectManager(this);
          EffectManager::removeEffect(v35, *(_DWORD *)(v34 + 4));
          *(_DWORD *)(v34 + 4) = -1;
          *(_QWORD *)(v34 + 8) = 0;
        }
        if ( DamageLevelTransitionEffect )
        {
          v36 = GameObject::isOwnedByCurrentPlayer(this) ^ 1;
          v37 = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
          v38 = (GameMode *)GameObject::getLogic(this);
          v39 = LogicGameObject::getX(v38);
          v40 = (GameMode *)GameObject::getLogic(this);
          v41 = LogicGameObject::getY(v40);
          v42 = (GameMode *)GameObject::getLogic(this);
          v43 = LogicGameObject::getZ(v42);
          v44 = (const GameMode *)GameObject::getLogic(this);
          v45 = EffectManager::addLoopingEffect(v37, DamageLevelTransitionEffect, v39, v41, v43, v36, v44, 1, 0);
          *(_DWORD *)(v34 + 4) = Effect::getEffectId(v45);
          *(_QWORD *)(v34 + 8) = DamageLevelTransitionEffect;
        }
      }
      result = Character::getLoopingEffectState(this, 2);
      v46 = result;
      if ( InfernoFlameEffect != *(const AskForTVContentMessage **)(result + 8) )
      {
        if ( (*(_DWORD *)(result + 4) & 0x80000000) == 0 )
        {
          v47 = GameObject::getEffectManager(this);
          result = EffectManager::removeEffect(v47, *(_DWORD *)(v46 + 4));
          *(_DWORD *)(v46 + 4) = -1;
          *(_QWORD *)(v46 + 8) = 0;
        }
        if ( Target )
        {
          if ( InfernoFlameEffect )
          {
            v48 = GameObject::isOwnedByCurrentPlayer(this) ^ 1;
            v49 = (LogicBackgroundDecoData *)GameObject::getEffectManager(this);
            v50 = (GameMode *)GameObject::getLogic(this);
            v51 = LogicGameObject::getX(v50);
            v52 = (GameMode *)GameObject::getLogic(this);
            v53 = LogicGameObject::getY(v52);
            v54 = (GameMode *)GameObject::getLogic(this);
            v55 = LogicGameObject::getZ(v54);
            v56 = (const GameMode *)GameObject::getLogic(this);
            v57 = EffectManager::addLoopingEffect(v49, InfernoFlameEffect, v51, v53, v55, v48, v56, 1, 0);
            Effect::setTarget((__int64)v57, Target);
            v58 = *(void (__fastcall **)(DonateAllianceUnitMessage *, _QWORD, __int64))(*(_QWORD *)v57 + 64LL);
            v59 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
            v60 = LogicCharacter::getCharacterData(v59);
            v61 = LogicCharacterData::getTargetEffectY(v60);
            v58(v57, 0, v61);
            result = Effect::getEffectId(v57);
            *(_DWORD *)(v46 + 4) = result;
            *(_QWORD *)(v46 + 8) = InfernoFlameEffect;
          }
        }
      }
      return result;
    }

    __int64 __fastcall Character::updateSpellPlacingEffect(__int64 this)
    {
      __int64 v1; // x19
      int v2; // w8
      const AskForTVContentMessage *GoodTargetEffect; // x20
      int v4; // w21
      LogicBackgroundDecoData *EffectManager; // x22
      GameMode *Logic; // x0
      int v7; // w23
      GameMode *v8; // x0
      int v9; // w24
      GameMode *v10; // x0
      int v11; // w25
      const GameMode *v12; // x0
      DonateAllianceUnitMessage *v13; // x0
      __int64 v14; // x0
      int v15; // w8
      const AskForTVContentMessage *RangeDangerEffect; // x20
      int v17; // w21
      LogicBackgroundDecoData *v18; // x22
      GameMode *v19; // x0
      int v20; // w23
      GameMode *v21; // x0
      int v22; // w24
      GameMode *v23; // x0
      int v24; // w25
      const GameMode *v25; // x0
      DonateAllianceUnitMessage *v26; // x0
      __int64 v27; // x0
    
      v1 = this;
      v2 = *(_DWORD *)(this + 1388);
      if ( *(_BYTE *)(this + 1458) )
      {
        if ( v2 < 0 )
        {
          GoodTargetEffect = (const AskForTVContentMessage *)LogicDataTables::getGoodTargetEffect((LogicDataTables *)this);
          v4 = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)v1) ^ 1;
          EffectManager = (LogicBackgroundDecoData *)GameObject::getEffectManager((ShutdownStartedMessage *)v1);
          Logic = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v7 = LogicGameObject::getX(Logic);
          v8 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v9 = LogicGameObject::getY(v8);
          v10 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v11 = LogicGameObject::getZ(v10);
          v12 = (const GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v13 = EffectManager::addLoopingEffect(EffectManager, GoodTargetEffect, v7, v9, v11, v4, v12, 1, 0);
          this = Effect::getEffectId(v13);
          *(_DWORD *)(v1 + 1388) = this;
        }
      }
      else if ( (v2 & 0x80000000) == 0 )
      {
        v14 = GameObject::getEffectManager((ShutdownStartedMessage *)this);
        this = EffectManager::removeEffect(v14, *(_DWORD *)(v1 + 1388));
        *(_DWORD *)(v1 + 1388) = -1;
      }
      v15 = *(_DWORD *)(v1 + 1392);
      if ( *(_BYTE *)(v1 + 1459) )
      {
        if ( v15 < 0 )
        {
          RangeDangerEffect = (const AskForTVContentMessage *)LogicDataTables::getRangeDangerEffect((LogicDataTables *)this);
          v17 = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)v1) ^ 1;
          v18 = (LogicBackgroundDecoData *)GameObject::getEffectManager((ShutdownStartedMessage *)v1);
          v19 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v20 = LogicGameObject::getX(v19);
          v21 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v22 = LogicGameObject::getY(v21);
          v23 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v24 = LogicGameObject::getZ(v23);
          v25 = (const GameMode *)GameObject::getLogic((ShutdownStartedMessage *)v1);
          v26 = EffectManager::addLoopingEffect(v18, RangeDangerEffect, v20, v22, v24, v17, v25, 1, 0);
          this = Effect::getEffectId(v26);
          *(_DWORD *)(v1 + 1392) = this;
        }
      }
      else if ( (v15 & 0x80000000) == 0 )
      {
        v27 = GameObject::getEffectManager((ShutdownStartedMessage *)v1);
        this = EffectManager::removeEffect(v27, *(_DWORD *)(v1 + 1392));
        *(_DWORD *)(v1 + 1392) = -1;
      }
      return this;
    }

    __int64 __fastcall Character::updateBaseMod(LogicBattleEvent *this, float a2)
    {
      __int64 result; // x0
      float v4; // s8
      int v5; // w20
    
      result = *((_QWORD *)this + 117);
      if ( result )
      {
        v4 = *((float *)this + 236) + a2;
        *((float *)this + 236) = v4;
        v5 = (int)(float)(v4 / MovieClip::getMSPerFrame(result));
        result = MovieClip::getTotalFrames(*((#1257 **)this + 117));
        if ( v5 >= (int)result )
        {
          *((_DWORD *)this + 236) = 0;
          *((_QWORD *)this + 117) = 0;
        }
        else
        {
          return MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 117), v5);
        }
      }
      return result;
    }

    __n128 __fastcall Character::updateHealthBar(LogicBattleEvent *this)
    {
      __int64 Logic; // x0
      LogicArenaData *v3; // x21
      __n128 result; // q0
      AllianceJoinFailedMessage *v5; // x22
      int Hitpoints; // w20
      int MaxHitpoints; // w21
      AllianceJoinFailedMessage *v8; // x0
      Font *CharacterData; // x0
      LogicTutorialManager *HealthBar; // x23
      LogicTutorialManager *Instance; // x0
      LogicTutorialManager *v12; // x0
      int v13; // w23
      int isShowOwnAlways; // w0
      AllianceJoinFailedMessage *v15; // x0
      Font *v16; // x0
      int SpawnLimit; // w25
      AllianceJoinFailedMessage *v18; // x0
      __int64 v19; // x0
      int ReloadAfterHits; // w26
      AllianceJoinFailedMessage *v21; // x0
      int v22; // w27
      AllianceJoinFailedMessage *v23; // x0
      int v24; // w28
      GameMode *v25; // x0
      FriendListMessage *CharacterBuffComponent; // x0
      FriendListMessage *v27; // x24
      int BuffCount; // w0
      __int64 v29; // x24
      bool v30; // zf
      __int64 v31; // x0
      #1138 *v32; // x23
      int v33; // w28
      #1257 *MovieClip; // x0
      #1257 *v35; // x28
      int TotalFrames; // w0
      int v37; // w28
      AllianceJoinFailedMessage *v38; // x0
      int Limit; // w0
      MovieClip *v40; // x8
      int v41; // w1
      AllianceJoinFailedMessage *v42; // x0
      int RemainingSpawnCount; // w0
      AllianceJoinFailedMessage *v44; // x0
      int RemainingAmmo; // w0
      Font *v46; // x0
      #1257 *v47; // x0
      __int64 MovieClipByName; // x0
      TextField *TextFieldByName; // x0
      int v50; // w0
      #1257 *v51; // x20
      long double v52; // q0
      ResourceManager *IconSWF; // x21
      const String *IconExportName; // x0
      const String *v55; // x2
      #1249 *v56; // x0
      float v57; // s0
      float v58; // s8
      float v59; // s0
      float v60; // s9
      #1138 *v61; // x0
      #1138 *v62; // x19
      float v63; // s0
      float v64; // s0
      float v65; // s0
      float v66; // s8
      long double v67; // q0
      int CurrentFrame; // [xsp+Ch] [xbp-64h]
      int v69; // [xsp+Ch] [xbp-64h]
    
      Logic = GameObject::getLogic(this);
      v3 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Logic + 136LL))(Logic);
      if ( !v3 )
        goto LABEL_23;
      v5 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      Hitpoints = LogicHitpointComponent::getHitpoints(v3);
      MaxHitpoints = LogicHitpointComponent::getMaxHitpoints(v3);
      v8 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(v8);
      HealthBar = (LogicTutorialManager *)LogicCharacterData::getHealthBar(CharacterData);
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(HealthBar);
      if ( Instance && (v12 = (LogicTutorialManager *)BattleScreen::getInstance(Instance), BattleScreen::isReplay(v12)) )
      {
        v13 = 1;
      }
      else
      {
        if ( (unsigned int)GameObject::isOwnedByCurrentPlayer(this) )
          isShowOwnAlways = LogicHealthBarData::isShowOwnAlways(HealthBar);
        else
          isShowOwnAlways = LogicHealthBarData::isShowEnemyAlways(HealthBar);
        v13 = isShowOwnAlways;
      }
      v15 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      v16 = (Font *)LogicCharacter::getCharacterData(v15);
      SpawnLimit = LogicCharacterData::getSpawnLimit(v16);
      v18 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      v19 = LogicCharacter::getCharacterData(v18);
      ReloadAfterHits = LogicCharacterData::getReloadAfterHits(v19);
      v21 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      v22 = *(_DWORD *)(LogicCharacter::getCharacterData(v21) + 496);
      v23 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      v24 = (SpawnLimit > 0 || ReloadAfterHits > 0 || v22 > 0)
          | (*(_DWORD *)(LogicCharacter::getCharacterData(v23) + 776) > 0);
      if ( v24 == 1 )
        v13 |= *((_BYTE *)this + 448) == 0;
      v25 = (GameMode *)GameObject::getLogic(this);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v25);
      v27 = CharacterBuffComponent;
      if ( CharacterBuffComponent
        && (BuffCount = LogicCharacterBuffComponent::getBuffCount(CharacterBuffComponent), BuffCount >= 1) )
      {
        v29 = *(_QWORD *)(LogicCharacterBuffComponent::getBuff(v27, BuffCount - 1) + 16);
      }
      else
      {
        v29 = 0;
      }
      v30 = Hitpoints >= MaxHitpoints && (v13 | (v29 != 0)) == 0;
      if ( v30
        || (v31 = GameObject::getLogic(this), !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 152LL))(v31)) )
      {
    LABEL_23:
        *((_BYTE *)this + 1192) = 0;
        return result;
      }
      v32 = (LogicBattleEvent *)((char *)this + 1184);
      *((_BYTE *)this + 1192) = 1;
      if ( ((Hitpoints < MaxHitpoints) | v24) == 1
        && GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 1184)) == *((_QWORD *)this + 112) )
      {
        MovieClip = (#1257 *)GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 1184));
        CurrentFrame = MovieClip::getCurrentFrame(MovieClip);
        v35 = (#1257 *)*((_QWORD *)this + 113);
        TotalFrames = MovieClip::getTotalFrames(v35);
        MovieClip::gotoAndPlayFrameIndex(v35, CurrentFrame, TotalFrames - 1);
        GameObjectSprite::removeMovieClip((LogicBattleEvent *)((char *)this + 1184));
        GameObjectSprite::setMovieClip((LogicBattleEvent *)((char *)this + 1184), *((#1257 **)this + 113));
        v33 = 1;
      }
      else
      {
        v33 = 0;
      }
      if ( *((_QWORD *)this + 171) )
      {
        v69 = v33;
        v37 = MovieClip::getTotalFrames(*((#1257 **)this + 170)) - 1;
        if ( v22 < 1 )
        {
          if ( SpawnLimit < 1 )
          {
            if ( ReloadAfterHits < 1 )
            {
              *(_BYTE *)(*((_QWORD *)this + 171) + 8LL) = 0;
              goto LABEL_33;
            }
            v44 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
            RemainingAmmo = LogicCharacter::getRemainingAmmo(v44);
            v40 = (MovieClip *)*((_QWORD *)this + 170);
            v41 = RemainingAmmo * v37 / ReloadAfterHits;
          }
          else
          {
            v42 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
            RemainingSpawnCount = LogicCharacter::getRemainingSpawnCount(v42);
            v40 = (MovieClip *)*((_QWORD *)this + 170);
            v41 = RemainingSpawnCount * v37 / SpawnLimit;
          }
        }
        else
        {
          v38 = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
          Limit = LogicCharacter::getRemainingManaGenerateLimit(v38);
          v40 = (MovieClip *)*((_QWORD *)this + 170);
          v41 = Limit * v37 / v22;
        }
        MovieClip::gotoAndStopFrameIndex(v40, v41);
        *(_BYTE *)(*((_QWORD *)this + 171) + 8LL) = 1;
    LABEL_33:
        v33 = v69;
      }
      v46 = (Font *)LogicCharacter::getCharacterData(v5);
      if ( (unsigned int)LogicCharacterData::showHealthNumber(v46) )
      {
        v47 = (#1257 *)GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 1184));
        MovieClipByName = MovieClip::getMovieClipByName(v47, "hpNumber");
        if ( MovieClipByName )
        {
          TextFieldByName = (TextField *)MovieClip::getTextFieldByName(MovieClipByName, "txt");
          if ( TextFieldByName )
            TextField::setNumberText(TextFieldByName, Hitpoints, 0);
        }
      }
      v50 = MovieClip::getTotalFrames(*((#1257 **)this + 169));
      MovieClip::gotoAndStopFrameIndex(*((MovieClip **)this + 169), v50 - 1 - (v50 - 1) * Hitpoints / MaxHitpoints);
      ColorTransform::setAddColor(
        (ColorTransform *)(*((_QWORD *)this + 169) + 9LL),
        *((float *)this + 352),
        *((float *)this + 352),
        *((float *)this + 352));
      if ( (v33 | (v29 != *((_QWORD *)this + 172))) == 1 )
      {
        *((_QWORD *)this + 172) = v29;
        v51 = (#1257 *)GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 1184));
        if ( v29 && *(_DWORD *)LogicData::getIconSWF(v29) && *(_DWORD *)LogicData::getIconExportName(v29) )
        {
          IconSWF = (ResourceManager *)LogicData::getIconSWF(v29);
          IconExportName = (const String *)LogicData::getIconExportName(v29);
          v56 = (#1249 *)ResourceManager::getMovieClip(IconSWF, IconExportName, v55);
          MovieClip::changeTimelineChild(v51, "buff", v56);
        }
        else
        {
          *(_BYTE *)(MovieClip::getChildByName(v51, "buff", v52) + 8) = 0;
        }
      }
      if ( GameObjectSprite::getMovieClip((LogicBattleEvent *)((char *)this + 304)) )
      {
        GameObjectSprite::getTileX((LogicBattleEvent *)((char *)this + 304));
        v58 = v57;
        GameObjectSprite::getTileY((LogicBattleEvent *)((char *)this + 304));
        v60 = v59;
        v61 = (LogicBattleEvent *)((char *)this + 304);
      }
      else
      {
        v62 = (LogicBattleEvent *)((char *)this + 16);
        GameObjectSprite::getTileX(v62);
        v58 = v63;
        GameObjectSprite::getTileY(v62);
        v60 = v64;
        v61 = v62;
      }
      GameObjectSprite::getTileZ(v61);
      GameObjectSprite::setTilePosition(v32, v58, v60, v65);
      LODWORD(v66) = COERCE_UNSIGNED_INT128(DisplayObject::getX(v32));
      v67 = DisplayObject::getY(v32);
      return DisplayObject::setPixelSnappedXY(v32, v66, *(float *)&v67);
    }

    __int64 __fastcall Character::getShadow(LogicBattleEvent *this)
    {
      return (__int64)this + 752;
    }

    __int64 __fastcall Character::getOutline(LogicBattleEvent *this)
    {
      if ( *((_BYTE *)this + 1348) )
        return (__int64)this + 1040;
      else
        return 0;
    }

    void __fastcall Character::showHighlightMarker(__int64 a1)
    {
      #1138 *v2; // x19
      const char *v3; // x1
      const String *v4; // x2
      #1257 *MovieClip; // x21
      MovieClip *MovieClipByName; // x25
      MovieClip *v7; // x24
      MovieClip *v8; // x23
      MovieClip *v9; // x22
      LogicJSONObject *RenderSystem; // x0
      String v11; // [xsp+8h] [xbp-68h] BYREF
      float32x4_t v12; // [xsp+20h] [xbp-50h] BYREF
    
      v2 = (#1138 *)(a1 + 1544);
      if ( !GameObjectSprite::getMovieClip((#1138 *)(a1 + 1544)) )
      {
        GameObject::getRenderBounds((ShutdownStartedMessage *)a1, (int *)&v12);
        v12 = vaddq_f32(v12, (float32x4_t)xmmword_1003E5250);
        if ( (unsigned int)GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) )
          v3 = "box_blue";
        else
          v3 = "box_red";
        String::String(&v11, v3);
        MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/tutorial.sc", (const char *)&v11, v4);
        MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "top_left");
        v7 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "top_right");
        v8 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "bottom_left");
        v9 = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "bottom_right");
        MovieClip::gotoAndPlay(MovieClipByName, "appear_start", "appear_end");
        MovieClip::gotoAndPlay(v7, "appear_start", "appear_end");
        MovieClip::gotoAndPlay(v8, "appear_start", "appear_end");
        MovieClip::gotoAndPlay(v9, "appear_start", "appear_end");
        DisplayObject::setXY(MovieClipByName, v12.f32[0], v12.f32[1]);
        DisplayObject::setXY(v7, v12.f32[2], v12.f32[1]);
        DisplayObject::setXY(v8, v12.f32[0], v12.f32[3]);
        DisplayObject::setXY(v9, v12.f32[2], v12.f32[3]);
        GameObjectSprite::setMovieClip(v2, MovieClip);
        GameObjectSprite::setGameObject(v2, (ShutdownStartedMessage *)a1);
        RenderSystem = (LogicJSONObject *)GameObject::getRenderSystem((ShutdownStartedMessage *)a1);
        RenderSystem::addGameObjectSprite(RenderSystem, v2, (const char *)0xA);
        String::~String();
        Rect::~Rect((Rect *)&v12);
      }
    }

    __int64 __fastcall Character::impulse(__int64 result, int a2, int a3)
    {
      __int64 v3; // x19
      int Angle; // w20
      int v5; // w8
      _BYTE v6[8]; // [xsp+8h] [xbp-18h] BYREF
    
      v3 = result;
      if ( *(_QWORD *)(result + 920) - *(_QWORD *)(result + 912) == 32 )
      {
        LogicVector2::LogicVector2((LogicVector2 *)v6, a2, a3);
        Angle = LogicVector2::getAngle(v6);
        if ( (unsigned int)GameObject::isBottomPlayerInLogicTop((ShutdownStartedMessage *)v3) )
          v5 = 135;
        else
          v5 = 315;
        *(_QWORD *)(v3 + 936) = *(_QWORD *)(*(_QWORD *)(v3 + 912) + 8LL * ((Angle + v5 + 360) % 360 / 90));
        *(_DWORD *)(v3 + 944) = 0;
        return LogicVector2::destruct((LogicVector2 *)v6);
      }
      return result;
    }

    __int64 __fastcall Character::playAttackStartEffect(ShutdownStartedMessage *a1)
    {
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x0
      __int64 result; // x0
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
      result = LogicCharacterData::getAttackStartEffect(CharacterData, 0);
      if ( result )
        return (*(__int64 (__fastcall **)(ShutdownStartedMessage *, __int64))(*(_QWORD *)a1 + 72LL))(a1, result);
      return result;
    }

    __int64 __fastcall Character::showAsGoodTarget(__int64 result, char a2)
    {
      *(_BYTE *)(result + 1458) = a2;
      return result;
    }

    __int64 __fastcall Character::showDangerRangeEffect(__int64 result, char a2)
    {
      *(_BYTE *)(result + 1459) = a2;
      return result;
    }

    void Character::madeDamage()
    {
      ;
    }

    LogicTutorialManager *__fastcall Character::gotDamage(ShutdownStartedMessage *a1)
    {
      AllianceJoinFailedMessage *Logic; // x0
      LogicTutorialManager *result; // x0
      GameState *CombatHUD; // x20
    
      *((_DWORD *)a1 + 352) = 1065353216;
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(a1);
      result = (LogicTutorialManager *)LogicCharacter::isLeader(Logic);
      if ( (_DWORD)result )
      {
        result = (LogicTutorialManager *)BattleScreen::getInstance(result);
        if ( result )
        {
          CombatHUD = (GameState *)BattleScreen::getCombatHUD(result);
          if ( (unsigned int)GameObject::isOwnedByCurrentPlayer(a1) )
            return (LogicTutorialManager *)CombatHUD::playerGotDamage(CombatHUD);
          else
            return (LogicTutorialManager *)CombatHUD::enemyGotDamage(CombatHUD);
        }
      }
      return result;
    }

    __int64 __fastcall Character::onDeath(ShutdownStartedMessage *a1)
    {
      __int64 result; // x0
      AllianceJoinFailedMessage *Logic; // x0
      __int64 CharacterData; // x20
      CombatHUD *CombatHUD; // x0
    
      result = GameObject::isOwnedByCurrentPlayer(a1);
      if ( (result & 1) == 0 )
      {
        Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(a1);
        CharacterData = LogicCharacter::getCharacterData(Logic);
        result = LogicCharacterData::getNoDeploySizeW();
        if ( (int)result >= 1 )
        {
          result = LogicCharacterData::getNoDeploySizeH(CharacterData);
          if ( (int)result >= 1 )
          {
            result = BattleScreen::getInstance((LogicTutorialManager *)result);
            if ( result )
            {
              CombatHUD = (CombatHUD *)BattleScreen::getCombatHUD((LogicTutorialManager *)result);
              result = CombatHUD::showNoDeployZone(CombatHUD, 1, 3.0);
            }
          }
        }
      }
      *((_BYTE *)a1 + 1552) = 0;
      return result;
    }

    void __fastcall Character::updateAnimation(__int64 a1, float a2, float a3)
    {
      long double v3; // q10
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x0
      int isUseAnimator; // w20
      AllianceJoinFailedMessage *v10; // x0
      AllianceJoinFailedMessage *v11; // x0
      __int64 State; // x28
      __int64 v13; // x0
      long double Scale; // q8
      AllianceJoinFailedMessage *v15; // x0
      __int16 *v16; // x8
      AllianceJoinFailedMessage *v17; // x0
      float DeployT; // s9
      AllianceJoinFailedMessage *v19; // x0
      __int64 v20; // x0
      int DeployTime; // w0
      __int16 *v22; // x8
      int v23; // w9
      float v24; // s1
      float v25; // s0
      AllianceJoinFailedMessage *v26; // x0
      __int64 v27; // x0
      int v28; // w24
      int RenderAngle; // w0
      float v30; // s0
      GameMode *v31; // x0
      __int64 MovementComponent; // x0
      int *v33; // x26
      _BOOL4 v34; // w23
      float *v35; // x20
      _BOOL4 v36; // w21
      AllianceJoinFailedMessage *v37; // x0
      __int64 v38; // x0
      int isHidingWhenNotAttacking; // w20
      AllianceJoinFailedMessage *v40; // x0
      int v41; // w20
      AllianceJoinFailedMessage *v42; // x0
      __int64 v43; // x0
      __int64 v44; // x8
      int v45; // w21
      int v46; // w22
      AllianceJoinFailedMessage *v47; // x0
      __int64 v48; // x0
      float v49; // s9
      AllianceJoinFailedMessage *v50; // x0
      __int64 v51; // x0
      int v52; // w20
      AllianceJoinFailedMessage *v53; // x0
      AllianceJoinFailedMessage *v54; // x0
      #1138 *v55; // x20
      float v56; // s11
      __int64 v57; // x0
      LogicSpellListener **v58; // x0
      bool v59; // cc
      unsigned int v60; // w9
      GameMode *v61; // x0
      GameMode *v62; // x0
      __int64 Target; // x0
      AllianceJoinFailedMessage *v64; // x0
      Font *v65; // x0
      GameMode *v66; // x0
      AllianceListMessage *CombatComponent; // x20
      int HitTimer; // w22
      int PrevHitTimer; // w21
      int FinishHitAnimationTimer; // w0
      __int64 v71; // x25
      AllianceJoinFailedMessage *v72; // x0
      __int64 v73; // x0
      __int64 ChargeEffect; // x8
      AllianceJoinFailedMessage *v75; // x0
      __int64 v76; // x0
      __int64 v77; // x8
      MovieClip *v78; // x0
      MovieClip *v79; // x0
      int v80; // w24
      AllianceJoinFailedMessage *v81; // x0
      Font *v82; // x0
      _DWORD *v83; // x0
      #1257 *v84; // x0
      _DWORD *v85; // x23
      AllianceJoinFailedMessage *v86; // x0
      Font *v87; // x0
      _DWORD *MovieClip; // x0
      #1257 *v89; // x0
      float v90; // s9
      AllianceJoinFailedMessage *v91; // x0
      float v92; // s9
      __int64 v93; // x0
      int v94; // w21
      MovieClip *v95; // x0
      MovieClip *v96; // x0
      __int64 v97; // x0
      __int64 v98; // x0
      __int64 v99; // x27
      float v100; // s9
      __int64 v101; // x23
      float v102; // s12
      float *v103; // x8
      #1257 *Clip; // x0
      #1257 *v105; // x20
      AllianceJoinFailedMessage *v106; // x0
      AreaEffectObject *v107; // x0
      __int64 Name; // x0
      const char *v109; // x1
      _QWORD *v110; // x8
      const String *v111; // x1
      const char *v112; // x1
      int AttackFrame; // w25
      AllianceJoinFailedMessage *v114; // x0
      AllianceJoinFailedMessage *v115; // x0
      Font *v116; // x0
      __int64 SpawnEffect; // x0
      AllianceJoinFailedMessage *v118; // x0
      __int64 v119; // x24
      int PreviousMoveTimer; // w21
      float v121; // s13
      int v122; // w23
      int v123; // w22
      int isWaitingAfterFootStep; // w0
      char v125; // w21
      __int64 v126; // x26
      int v127; // w28
      __int64 FrameIndex; // x8
      __int64 v129; // x3
      int Speed; // w21
      float v131; // s13
      float v132; // s15
      LogicMath *v133; // x21
      int TotalFrames; // w22
      LogicMath *v135; // x0
      int v136; // w2
      int v137; // w8
      int v138; // w0
      int v139; // w2
      AllianceJoinFailedMessage *v140; // x0
      int v141; // w21
      AllianceJoinFailedMessage *v142; // x0
      int PrevDeployT; // w0
      #1237 *v144; // x21
      int v145; // w0
      int v146; // w3
      int v147; // w8
      int v148; // w21
      int v149; // w0
      __int64 ExportName; // x0
      const char *v151; // x1
      const String *v152; // x1
      const AskForTVContentMessage *MoveEffect; // x22
      GameMode *v154; // x21
      char v155; // w24
      LogicJSONObject *RenderSystem; // x0
      LogicBackgroundDecoData *EffectManager; // x23
      int Angle; // w0
      int v159; // w21
      AllianceJoinFailedMessage *v160; // x0
      Font *v161; // x0
      AllianceJoinFailedMessage *v162; // x0
      Font *v163; // x0
      _DWORD *v164; // x0
      _DWORD *v165; // x0
      AllianceJoinFailedMessage *v166; // x0
      Font *v167; // x0
      __int64 v168; // x0
      #1257 *v169; // x0
      _DWORD *v170; // x0
      #1257 *v171; // x0
      int v172; // [xsp+24h] [xbp-13Ch]
      int v173; // [xsp+28h] [xbp-138h]
      int v174; // [xsp+2Ch] [xbp-134h]
      __int64 v175; // [xsp+30h] [xbp-130h]
      int v176; // [xsp+38h] [xbp-128h]
      char v177; // [xsp+3Ch] [xbp-124h]
      float *v178; // [xsp+40h] [xbp-120h]
      unsigned int v179; // [xsp+4Ch] [xbp-114h]
      unsigned int v180; // [xsp+50h] [xbp-110h]
      int v181; // [xsp+54h] [xbp-10Ch]
      unsigned int v182; // [xsp+58h] [xbp-108h]
      unsigned int RequiredTimeToHit; // [xsp+5Ch] [xbp-104h]
      _BOOL4 v184; // [xsp+60h] [xbp-100h]
      __int64 v185; // [xsp+60h] [xbp-100h]
      int *v186; // [xsp+68h] [xbp-F8h]
      __int64 v187; // [xsp+70h] [xbp-F0h]
      float *v188; // [xsp+78h] [xbp-E8h]
      int v189; // [xsp+78h] [xbp-E8h]
      _BOOL4 v190; // [xsp+84h] [xbp-DCh]
      CharacterAnimator *v191; // [xsp+88h] [xbp-D8h]
      __siginfo v192; // [xsp+90h] [xbp-D0h] BYREF
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
      isUseAnimator = LogicCharacterData::isUseAnimator(CharacterData);
      v10 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      if ( !isUseAnimator )
      {
        v13 = LogicCharacter::getCharacterData(v10);
        Scale = LogicCharacterData::getScale(v13);
        v15 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        if ( (unsigned int)LogicCharacter::getState(v15) != 5 || (v16 = *(__int16 **)(a1 + 1480), *v16 < 0) || v16[1] < 0 )
        {
          v26 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v27 = LogicCharacter::getCharacterData(v26);
          if ( (unsigned int)LogicCharacterData::hasRotationOnTimeline(v27) )
          {
            Character::updateTurretClip((Character *)a1, a2);
    LABEL_65:
            v80 = 0;
            while ( v80 )
            {
              if ( v80 == 2 )
              {
                v86 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                v87 = (Font *)LogicCharacter::getCharacterData(v86);
                if ( !LogicCharacterData::getAttachedCharacter(v87) )
                {
                  MovieClip = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
                  MovieClip[4] = 1065353216;
                  MovieClip[7] = 1065353216;
                  MovieClip[5] = 0;
                  MovieClip[6] = 0;
                  MovieClip[8] = 0;
                  MovieClip[9] = 0;
                  (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)MovieClip + 40LL))(MovieClip, Scale);
                  v89 = (#1257 *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
                  Character::updateShadow(a1, v89, 1);
                }
                goto LABEL_159;
              }
              if ( v80 == 1 )
              {
                if ( *(_BYTE *)(a1 + 1348) )
                {
                  v81 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                  v82 = (Font *)LogicCharacter::getCharacterData(v81);
                  if ( !LogicCharacterData::getAttachedCharacter(v82) )
                  {
                    v83 = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 1040));
                    v83[4] = 1065353216;
                    v83[7] = 1065353216;
                    v83[5] = 0;
                    v83[6] = 0;
                    v83[8] = 0;
                    v83[9] = 0;
                    (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)v83 + 40LL))(v83, Scale);
                    v84 = (#1257 *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 1040));
                    Character::updateOutline(a1, v84, 1);
                  }
                }
    LABEL_66:
                ++v80;
              }
              else if ( ++v80 == 3 )
              {
                goto LABEL_159;
              }
            }
            v85 = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
            v85[4] = 1065353216;
            v85[7] = 1065353216;
            v85[5] = 0;
            v85[6] = 0;
            v85[8] = 0;
            v85[9] = 0;
            (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)v85 + 40LL))(v85, Scale);
            Character::updateClip(a1, (__int64)v85, 1);
            goto LABEL_66;
          }
          v37 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v38 = LogicCharacter::getCharacterData(v37);
          isHidingWhenNotAttacking = LogicCharacterData::isHidingWhenNotAttacking(v38);
          v40 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          if ( !isHidingWhenNotAttacking )
          {
            if ( *(_BYTE *)(LogicCharacter::getCharacterData(v40) + 500) )
            {
              if ( *(_BYTE *)(a1 + 1688) )
              {
                v55 = (#1138 *)(a1 + 16);
              }
              else
              {
                v90 = (float)*(int *)(GameObject::getLogic((ShutdownStartedMessage *)a1) + 140);
                v91 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                v55 = (#1138 *)(a1 + 16);
                v92 = v90 / (float)*(int *)(LogicCharacter::getCharacterData(v91) + 508);
                v93 = GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
                v94 = (int)(float)(v92 * (float)(int)MovieClip::getFrameIndex(v93, "action_frame"));
                v95 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
                MovieClip::gotoAndStopFrameIndex(v95, v94);
                v96 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
                MovieClip::gotoAndStopFrameIndex(v96, v94);
              }
              v97 = GameObjectSprite::getMovieClip(v55);
              if ( (MovieClip::isPlaying(v97) & 1) == 0 )
                *(_BYTE *)(a1 + 1688) = 0;
            }
            goto LABEL_65;
          }
          v41 = *((_DWORD *)v40 + 36);
          v42 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v43 = LogicCharacter::getCharacterData(v42);
          if ( v41 > (int)LogicCharacterData::getHideTimeMs(v43) )
          {
            v44 = *(_QWORD *)(a1 + 1480);
            v45 = *(__int16 *)(v44 + 8);
            v46 = *(__int16 *)(v44 + 10);
            v47 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v48 = LogicCharacter::getCharacterData(v47);
            v49 = (float)(int)(v41 - LogicCharacterData::getHideTimeMs(v48));
            v50 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v51 = LogicCharacter::getCharacterData(v50);
            v52 = (int)(float)((float)(v46 - v45) * (float)(v49 / (float)(int)LogicCharacterData::getUpTimeMs(v51))) + v45;
    LABEL_64:
            v78 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
            MovieClip::gotoAndStopFrameIndex(v78, v52);
            v79 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
            MovieClip::gotoAndStopFrameIndex(v79, v52);
            goto LABEL_65;
          }
          v75 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v76 = LogicCharacter::getCharacterData(v75);
          v25 = (float)v41 / (float)(int)LogicCharacterData::getHideTimeMs(v76);
          v77 = *(_QWORD *)(a1 + 1480);
          v23 = *(__int16 *)(v77 + 4);
          v24 = (float)(*(__int16 *)(v77 + 6) - v23);
        }
        else
        {
          v17 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          DeployT = (float)(int)LogicCharacter::getDeployT(v17);
          v19 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v20 = LogicCharacter::getCharacterData(v19);
          DeployTime = LogicCharacterData::getDeployTime(v20);
          v22 = *(__int16 **)(a1 + 1480);
          v23 = *v22;
          v24 = (float)(v22[1] - v23);
          v25 = DeployT / (float)DeployTime;
        }
        v52 = (int)(float)(v25 * v24) + v23;
        goto LABEL_64;
      }
      if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v10 + 152LL))(v10) )
      {
        v11 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        State = LogicCharacter::getState(v11);
      }
      else
      {
        State = 0;
      }
      v28 = *(_DWORD *)(a1 + 948);
      RenderAngle = Character::getRenderAngle((LogicBattleEvent *)a1);
      v30 = *(float *)(a1 + 1412) - a2;
      *(float *)(a1 + 1412) = v30;
      if ( RenderAngle != v28 && ((_DWORD)State == 3 || v30 <= 0.0) )
      {
        *(_DWORD *)(a1 + 1412) = 1056964608;
        v28 = RenderAngle;
      }
      v31 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      MovementComponent = LogicGameObject::getMovementComponent(v31);
      v33 = (int *)MovementComponent;
      v186 = (int *)MovementComponent;
      if ( !MovementComponent )
      {
        v34 = 0;
        v36 = State == 4;
        v35 = (float *)(a1 + 1384);
    LABEL_23:
        *v35 = 0.0;
        goto LABEL_24;
      }
      v34 = *(_BYTE *)(MovementComponent + 488) != 0;
      v35 = (float *)(a1 + 1384);
      if ( (_DWORD)State != 4 )
      {
        v36 = 0;
        goto LABEL_23;
      }
      *v35 = *v35 + a2;
      v36 = 1;
    LABEL_24:
      v53 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      if ( *(_BYTE *)(LogicCharacter::getCharacterData(v53) + 408) && !*(_BYTE *)(a1 + 448) )
      {
        v54 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        if ( (unsigned int)LogicCharacter::getState(v54) == 6 )
          *(float *)(a1 + 1472) = *(float *)(a1 + 1472) + a2;
        else
          *(_DWORD *)(a1 + 1472) = 0;
      }
      v56 = *(float *)(GameObject::getRenderSystem((ShutdownStartedMessage *)a1) + 92);
      v57 = GameObject::getLogic((ShutdownStartedMessage *)a1);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v57 + 200LL))(v57) )
      {
        v58 = (LogicSpellListener **)GameObject::getLogic((ShutdownStartedMessage *)a1);
        LogicGameObject::getLogicBattle(v58);
      }
      if ( (_DWORD)State == 5 )
      {
        v184 = v36;
        v188 = v35;
        v59 = (int)CharacterAnimator::getDirectionCount(a1 + 696) <= 0;
        v60 = 5;
        goto LABEL_50;
      }
      if ( !*(_BYTE *)(a1 + 448) )
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)(a1 + 16) + 80LL))(a1 + 16, 1.0);
      if ( (_DWORD)State != 2 )
      {
        if ( (State & 0xFFFFFFFD) == 4 && v33 )
        {
          v184 = v36;
          v188 = v35;
          v59 = (int)CharacterAnimator::getDirectionCount(a1 + 648) <= 0;
          v60 = 4;
    LABEL_50:
          if ( v59 )
            v71 = 1;
          else
            v71 = v60;
          goto LABEL_85;
        }
        if ( (_DWORD)State != 1 || !v33 )
        {
          v184 = v36;
          v188 = v35;
          v71 = (_DWORD)State != 3;
          goto LABEL_85;
        }
        if ( v33[115] < 10000 )
        {
          v184 = v36;
          v188 = v35;
          if ( (unsigned int)LogicMovementComponent::getSpeed(v33) )
          {
            v71 = (int)CharacterAnimator::getDirectionCount(a1 + 456) < 1;
          }
          else
          {
            v28 = *(_DWORD *)(a1 + 948);
            v71 = 1;
          }
          goto LABEL_85;
        }
        if ( (int)CharacterAnimator::getDirectionCount(a1 + 600) >= 1 )
        {
          v184 = v36;
          v188 = v35;
          if ( *(_DWORD *)(a1 + 952) != 3 )
          {
            v72 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v73 = LogicCharacter::getCharacterData(v72);
            ChargeEffect = LogicCharacterData::getChargeEffect(v73);
            if ( ChargeEffect )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, ChargeEffect);
          }
          RequiredTimeToHit = 0;
          v180 = 0;
          HIBYTE(v192.__pad[1]) = 0;
          *(_BYTE *)(a1 + 1457) = 1;
          HitTimer = -1;
          v71 = 3;
          goto LABEL_86;
        }
    LABEL_61:
        v184 = v36;
        v188 = v35;
        v71 = 1;
    LABEL_85:
        RequiredTimeToHit = 0;
        v180 = 0;
        HIBYTE(v192.__pad[1]) = 0;
        *(_BYTE *)(a1 + 1457) = 0;
        HitTimer = -1;
    LABEL_86:
        PrevHitTimer = -1;
        goto LABEL_87;
      }
      v61 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      if ( !LogicGameObject::getCombatComponent(v61) )
        goto LABEL_61;
      if ( (int)CharacterAnimator::getDirectionCount(a1 + 552) < 1 )
        goto LABEL_61;
      v62 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      Target = LogicGameObject::getTarget(v62);
      if ( Target )
      {
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Target + 152LL))(Target) & 1) == 0 )
        {
          v64 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v65 = (Font *)LogicCharacter::getCharacterData(v64);
          if ( !LogicCharacterData::getProjectile(v65, 0) )
            goto LABEL_61;
        }
      }
      v184 = v36;
      v188 = v35;
      v66 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      CombatComponent = (AllianceListMessage *)LogicGameObject::getCombatComponent(v66);
      HitTimer = LogicCombatComponent::getHitTimer(CombatComponent);
      PrevHitTimer = LogicCombatComponent::getPrevHitTimer(CombatComponent);
      RequiredTimeToHit = LogicCombatComponent::getRequiredTimeToHit(CombatComponent);
      FinishHitAnimationTimer = LogicCombatComponent::getFinishHitAnimationTimer(CombatComponent);
      if ( FinishHitAnimationTimer >= 1 )
        FinishHitAnimationTimer += (int)(float)(a3 * 50.0);
      v180 = FinishHitAnimationTimer;
      HIBYTE(v192.__pad[1]) = 0;
      v71 = 2;
    LABEL_87:
      v181 = PrevHitTimer;
      v182 = HitTimer;
      v187 = v71;
      v176 = v28;
      if ( v34 )
        v28 = (v28 + 180) % 360;
      v98 = GameObject::getLogic((ShutdownStartedMessage *)a1);
      v99 = 0;
      v177 = 0;
      v100 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)v98 + 120LL))(v98) * 0.01;
      v101 = v71;
      v191 = (CharacterAnimator *)(a1 + 48 * v71 + 456);
      v190 = v33 != 0 && ((_DWORD)v71 == 0 || (_DWORD)v71 == 3);
      LODWORD(v3) = 1.0;
      v102 = 1.0 - a3;
      v175 = a1 + 16;
      v103 = (float *)(a1 + 1472);
      v179 = (int)(float)((float)((float)HitTimer * a3) + (float)((float)(1.0 - a3) * (float)PrevHitTimer));
      if ( v184 )
        v103 = v188;
      v178 = v103;
      v185 = a1 + 12 * v71;
      do
      {
        if ( (_DWORD)v99 != 1 || *(_BYTE *)(a1 + 1348) )
        {
          Clip = (#1257 *)CharacterAnimator::getClip(v191, v28, v99, v100);
          v105 = Clip;
          if ( !Clip )
          {
            v106 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v107 = (AreaEffectObject *)LogicCharacter::getCharacterData(v106);
            Name = LogicData::getName(v107);
            v110 = (_QWORD *)(Name + 8);
            if ( *(_DWORD *)(Name + 4) + 1 > 8 )
              v110 = (_QWORD *)*v110;
            String::format((String *)"Unable to get clip state %d from %s", v109, v101, v110);
            Debugger::error((Debugger *)&v192.si_value, v111);
          }
          AttackFrame = (int)(float)(v56 / MovieClip::getMSPerFrame(Clip));
          switch ( (int)v101 )
          {
            case 1:
              if ( (_DWORD)State == 5 )
              {
                v114 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                if ( (int)LogicCharacter::getDeployT(v114) >= *(_DWORD *)(a1 + 1468) && DisplayObject::getAlpha(v175) < 1.0 )
                {
                  v115 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                  v116 = (Font *)LogicCharacter::getCharacterData(v115);
                  SpawnEffect = LogicCharacterData::getSpawnEffect(v116);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, SpawnEffect);
                  *(_QWORD *)(a1 + 936) = *(_QWORD *)(a1 + 1528);
                  (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)(a1 + 16) + 80LL))(v175, v3);
                  *(_DWORD *)(a1 + 944) = 0;
                }
              }
              break;
            case 2:
              FrameIndex = MovieClip::getFrameIndex(v105, "action_frame");
              if ( (_DWORD)FrameIndex == -1 )
              {
                ExportName = MovieClip::getExportName(v105);
                String::format((String *)"No action_frame found from %s", v151, ExportName);
                Debugger::warning(&v192, v152);
                String::~String();
              }
              else
              {
                if ( v181 == v182 )
                  v129 = v182;
                else
                  v129 = v179;
                HIBYTE(v192.__pad[1]) = 0;
                AttackFrame = CharacterAnimator::getAttackFrame(
                                v191,
                                (char *)&v192.__pad[1] + 7,
                                RequiredTimeToHit,
                                v129,
                                v105,
                                FrameIndex,
                                v180);
                if ( HIBYTE(v192.__pad[1]) )
                {
                  if ( *(_BYTE *)(a1 + 1457) )
                  {
                    v28 = *(_DWORD *)(a1 + 948);
                    v105 = (#1257 *)CharacterAnimator::getClip(v191, v28, v99, v100);
                  }
                  else
                  {
                    v177 = 1;
                  }
                }
              }
              break;
            case 4:
              if ( v33 )
              {
                Speed = LogicMovementComponent::getSpeed(v33);
                LogicVector2::LogicVector2((LogicVector2 *)&v192.si_addr);
                LODWORD(v192.si_addr) = 500 * LogicMovementComponent::getPathX(v33, 0);
                HIDWORD(v192.si_addr) = 500 * LogicMovementComponent::getPathY(v33, 0);
                v131 = (float)(int)LogicMovementComponent::tickToTarget(
                                     (CommandStorage *)v33,
                                     Speed,
                                     (const #1240 *)&v192.si_addr)
                     / -20.0;
                v132 = *v178;
                v133 = (LogicMath *)(unsigned int)(int)(float)(v132 / MovieClip::getMSPerFrame(v105));
                TotalFrames = MovieClip::getTotalFrames(v105);
                v135 = (LogicMath *)(unsigned int)(int)(float)((float)TotalFrames
                                                             + (float)(v131 / MovieClip::getMSPerFrame(v105)));
                if ( TotalFrames >= 0 )
                  v137 = TotalFrames;
                else
                  v137 = TotalFrames + 1;
                v138 = LogicMath::max(v135, v137 >> 1, v136);
                AttackFrame = LogicMath::min(v133, v138, v139);
                LogicVector2::destruct((LogicVector2 *)&v192.si_addr);
              }
              else
              {
                Debugger::warning((__siginfo *)"dash out of sync", v112);
              }
              break;
            case 5:
              v140 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v141 = LogicCharacter::getDeployT(v140);
              v142 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              PrevDeployT = LogicCharacter::getPrevDeployT(v142);
              if ( v141 != PrevDeployT )
                v141 = (int)(float)((float)((float)v141 * a3) + (float)(v102 * (float)PrevDeployT));
              v144 = (#1237 *)(unsigned int)(int)(float)((float)((float)v141 * 0.001) / MovieClip::getMSPerFrame(v105));
              v145 = MovieClip::getTotalFrames(v105);
              AttackFrame = LogicMath::clamp(v144, 0, v145 - 1, v146);
              break;
            default:
              if ( v190 )
              {
                v189 = v28;
                v118 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                v119 = LogicCharacter::getCharacterData(v118);
                PreviousMoveTimer = LogicMovementComponent::getPreviousMoveTimer(v33);
                v121 = (float)(v102 * (float)PreviousMoveTimer)
                     + (float)((float)(int)LogicMovementComponent::getMoveTimer(v33) * a3);
                v122 = MovieClip::getFrameIndex(v105, "action_frame1");
                v123 = MovieClip::getFrameIndex(v105, "action_frame2");
                if ( (int)LogicCharacterData::getWaitMS(v119) < 1 )
                {
                  AttackFrame = (int)(float)((float)(v121 * 0.001) / MovieClip::getMSPerFrame(v105));
                }
                else
                {
                  isWaitingAfterFootStep = LogicMovementComponent::isWaitingAfterFootStep(v33);
                  v125 = isWaitingAfterFootStep;
                  if ( isWaitingAfterFootStep != *(unsigned __int8 *)(a1 + 1456) )
                  {
                    if ( (isWaitingAfterFootStep & 1) == 0 )
                      *(_DWORD *)(a1 + 1416) = (*(_DWORD *)(a1 + 1416) & 1) == 0;
                    *(_BYTE *)(a1 + 1456) = isWaitingAfterFootStep;
                  }
                  if ( v122 != -1 )
                  {
                    v126 = State;
                    if ( *(_DWORD *)(a1 + 1416) == 1 )
                    {
                      AttackFrame = MovieClip::getTotalFrames(v105) + v122;
                      v127 = v123;
                    }
                    else
                    {
                      AttackFrame = v123;
                      v127 = v122;
                    }
                    if ( (v125 & 1) == 0 )
                    {
                      v147 = (int)(float)((float)((float)(AttackFrame - v127)
                                                * (float)(v121 / (float)(int)LogicCharacterData::getStopMovementAfterMS(v119)))
                                        + 0.5)
                           + v127;
                      if ( v147 < AttackFrame )
                        AttackFrame = v147;
                    }
                    State = v126;
                    v33 = v186;
                  }
                }
                AttackFrame %= (int)MovieClip::getTotalFrames(v105);
                if ( !(_DWORD)v99 && (v123 & v122) != 0xFFFFFFFF )
                {
                  v148 = *(_DWORD *)(v185 + 4 * v99 + 956);
                  if ( AttackFrame != v148 )
                  {
                    v149 = MovieClip::getTotalFrames(v105);
                    while ( v148 != v122 && v148 != v123 )
                    {
                      v148 = (v148 + 1) % v149;
                      if ( v148 == AttackFrame )
                        goto LABEL_146;
                    }
                    MoveEffect = (const AskForTVContentMessage *)LogicCharacterData::getMoveEffect(v119);
                    if ( MoveEffect )
                    {
                      v154 = (GameMode *)GameObject::getLogic((ShutdownStartedMessage *)a1);
                      v174 = LogicGameObject::getX(v154);
                      v173 = LogicGameObject::getY(v154);
                      v172 = LogicGameObject::getZ(v154);
                      v155 = GameObject::isOwnedByCurrentPlayer((ShutdownStartedMessage *)a1) ^ 1;
                      RenderSystem = (LogicJSONObject *)GameObject::getRenderSystem((ShutdownStartedMessage *)a1);
                      EffectManager = (LogicBackgroundDecoData *)RenderSystem::getEffectManager(RenderSystem);
                      Angle = LogicCharacter::getAngle(v154);
                      EffectManager::addEffectNoLoop(EffectManager, MoveEffect, v174, v173, v172, v155, 0, 0, Angle);
                    }
                  }
                }
    LABEL_146:
                v101 = v187;
                v28 = v189;
              }
              break;
          }
          v159 = AttackFrame % (int)MovieClip::getTotalFrames(v105);
          MovieClip::gotoAndStopFrameIndex(v105, v159);
          *(_DWORD *)(a1 + 12 * v101 + 4 * v99 + 956) = v159;
          switch ( (_DWORD)v99 )
          {
            case 2:
              v162 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v163 = (Font *)LogicCharacter::getCharacterData(v162);
              if ( !LogicCharacterData::getAttachedCharacter(v163) )
                Character::updateShadow(a1, v105, 0);
              break;
            case 1:
              v160 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
              v161 = (Font *)LogicCharacter::getCharacterData(v160);
              if ( !LogicCharacterData::getAttachedCharacter(v161) )
                Character::updateOutline(a1, v105, 0);
              break;
            case 0:
              Character::updateClip(a1, (__int64)v105, 0);
              break;
          }
        }
        ++v99;
      }
      while ( v99 < 3 );
      if ( (v177 & 1) != 0 )
        Character::playAttackStartEffect((ShutdownStartedMessage *)a1);
      *(_BYTE *)(a1 + 1457) = HIBYTE(v192.__pad[1]);
      *(_DWORD *)(a1 + 948) = v176;
      *(_DWORD *)(a1 + 952) = v101;
    LABEL_159:
      v164 = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 304));
      if ( v164 )
      {
        v164[5] = 0;
        v164[4] = 1065353216;
        v164[6] = 0;
        v164[7] = 1065353216;
        v164[8] = 0;
        v164[9] = 0;
        ColorTransform::reset((ColorTransform *)((char *)v164 + 9));
      }
      v165 = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 160));
      if ( v165 )
      {
        v165[5] = 0;
        v165[4] = 1065353216;
        v165[6] = 0;
        v165[7] = 1065353216;
        v165[8] = 0;
        v165[9] = 0;
        ColorTransform::reset((ColorTransform *)((char *)v165 + 9));
      }
      v166 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      v167 = (Font *)LogicCharacter::getCharacterData(v166);
      if ( LogicCharacterData::getAttachedCharacter(v167) )
      {
        v168 = GameObjectSprite::getMovieClip((#1138 *)(a1 + 1040));
        *(_DWORD *)(v168 + 20) = 0;
        *(_DWORD *)(v168 + 16) = 1065353216;
        *(_DWORD *)(v168 + 24) = 0;
        *(_QWORD *)(v168 + 28) = 1065353216;
        *(_DWORD *)(v168 + 36) = 0;
        v169 = (#1257 *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 1040));
        Character::updateOutline(a1, v169, 1);
        v170 = (_DWORD *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
        v170[4] = 1065353216;
        v170[7] = 1065353216;
        v170[5] = 0;
        v170[6] = 0;
        v170[8] = 0;
        v170[9] = 0;
        v171 = (#1257 *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
        Character::updateShadow(a1, v171, 1);
      }
    }

    __int64 __fastcall Character::getRenderAngle(LogicBattleEvent *this)
    {
      AllianceJoinFailedMessage *Logic; // x0
      __int64 Direction; // x0
      int Angle; // w20
      int v5; // w8
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      Direction = LogicCharacter::getDirection(Logic);
      Angle = LogicVector2::getAngle(Direction);
      if ( (unsigned int)GameObject::isBottomPlayerInLogicTop(this) )
        v5 = 270;
      else
        v5 = 450;
      return (unsigned int)((v5 + Angle) % 360);
    }

    MovieClip *__fastcall Character::updateTurretClip(__int64 a1, float a2)
    {
      long double v2; // q9
      #1257 *MovieClip; // x0
      MovieClip *result; // x0
      #1257 *v7; // x20
      int RenderAngle; // w21
      AllianceJoinFailedMessage *Logic; // x0
      __int64 CharacterData; // x0
      float v11; // s10
      __float2 v12; // kr00_8
      float v13; // s11
      float v14; // s10
      int TotalFrames; // w0
      int v16; // w9
      int v17; // w10
      _BOOL4 v18; // w9
      int v19; // w8
      bool v20; // vf
      int v21; // w8
      int v22; // w11
      int v23; // w8
      int v24; // w21
      MovieClip *v25; // x20
      #1249 *v26; // x20
    
      MovieClip = (#1257 *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
      result = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "turret");
      v7 = result;
      if ( result )
      {
        RenderAngle = Character::getRenderAngle((LogicBattleEvent *)a1);
        Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        CharacterData = LogicCharacter::getCharacterData(Logic);
        LODWORD(v2) = 1.0;
        v11 = (float)*(int *)(CharacterData + 792)
            / (float)((float)((float)*(int *)(CharacterData + 792) * *(float *)(a1 + 744)) + 1.0);
        v12 = __sincosf_stret((float)((float)RenderAngle * 3.1416) / 180.0);
        v13 = v11 * v12.__sinval;
        v14 = v11 * v12.__cosval;
        TotalFrames = MovieClip::getTotalFrames(v7);
        v16 = 4 * TotalFrames - 4;
        v17 = v16 * RenderAngle / 360;
        if ( v16 < 0 )
          v16 = 4 * TotalFrames - 3;
        v18 = v17 > v16 >> 1;
        v19 = 4 * TotalFrames - 5;
        v20 = __OFSUB__(v19, v17);
        v21 = v19 - v17;
        if ( (v21 < 0) ^ v20 | (v21 == 0) )
          v22 = 0;
        else
          v22 = 1;
        if ( (v22 & v18) != 0 )
          *(float *)&v2 = -1.0;
        else
          v21 = v17;
        v23 = (v21 + 1) >> 1;
        if ( v23 < TotalFrames )
          v24 = v23;
        else
          v24 = 0;
        MovieClip::gotoAndStopFrameIndex(v7, v24);
        (*(void (__fastcall **)(#1257 *, long double))(*(_QWORD *)v7 + 48LL))(v7, v2);
        DisplayObject::setX(v7, *(float *)(a1 + 1460) - v13);
        DisplayObject::setY(v7, v14 + *(float *)(a1 + 1464));
        v25 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
        MovieClip::gotoAndStopFrameIndex(v25, 0);
        result = (MovieClip *)MovieClip::getMovieClipByName(v25, "turret");
        v26 = result;
        if ( result )
        {
          MovieClip::gotoAndStopFrameIndex(result, v24);
          DisplayObject::setX(v26, *(float *)(a1 + 1460) - v13);
          DisplayObject::setY(v26, v14 + *(float *)(a1 + 1464));
          result = (MovieClip *)(*(__int64 (__fastcall **)(#1249 *, long double))(*(_QWORD *)v26 + 48LL))(v26, v2);
        }
        *(float *)(a1 + 744) = *(float *)(a1 + 744) + a2;
      }
      return result;
    }

    __int64 __fastcall Character::isCharacter(LogicBattleEvent *this)
    {
      return 1;
    }

    #1138 *__fastcall Character::setAsDummySpellPreviewObject(__int64 a1)
    {
      __int64 MovieClip; // x0
    
      GameObject::setAsDummySpellPreviewObject((pthread_attr_t *)a1);
      MovieClip = GameObjectSprite::getMovieClip((#1138 *)(a1 + 1184));
      if ( MovieClip )
        *(_BYTE *)(MovieClip + 8) = 0;
      return Character::destroyTimeClip((LogicBattleEvent *)a1);
    }

    float __fastcall Character::getDummySpellNameYPosition(pthread_attr_t *this)
    {
      __int64 MovieClip; // x0
      long double v3; // q0
    
      MovieClip = GameObjectSprite::getMovieClip((#1138 *)((char *)this + 1184));
      if ( !MovieClip )
        return GameObject::getDummySpellNameYPosition(this);
      v3 = DisplayObject::getY(MovieClip);
      return *(float *)&v3;
    }

    __int64 __fastcall Character::getLayer(LogicBattleEvent *this)
    {
      return *((unsigned int *)this + 355);
    }

    __int64 __fastcall Character::getZOffset(LogicBattleEvent *this)
    {
      AllianceJoinFailedMessage *Logic; // x0
      Font *CharacterData; // x19
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(Logic);
      if ( LogicCharacterData::getAttachedCharacter(CharacterData) )
        return LogicCharacterData::getAttachedCharacterHeight(CharacterData);
      else
        return 0;
    }

    __int64 __fastcall Character::characterStateChanged(__int64 this)
    {
      *(_DWORD *)(this + 1412) = 0;
      return this;
    }

    _DWORD *__fastcall Character::getLoopingEffectState(LogicBattleEvent *this, unsigned int a2)
    {
      _OWORD *v4; // x1
      _OWORD *v5; // x9
      unsigned __int64 v6; // x12
      unsigned int v7; // w11
      _DWORD *result; // x0
      __int64 v9; // x8
    
      v4 = (_OWORD *)*((_QWORD *)this + 189);
      v5 = (_OWORD *)*((_QWORD *)this + 188);
      if ( v4 == v5 )
      {
    LABEL_5:
        if ( v4 == *((_OWORD **)this + 190) )
        {
          std::vector<Character::LoopingEffectState>::_M_insert_aux((char *)this + 1504);
          v9 = *((_QWORD *)this + 189);
        }
        else
        {
          *v4 = a2 | 0xFFFFFFFF00000000LL;
          v9 = *((_QWORD *)this + 189) + 16LL;
          *((_QWORD *)this + 189) = v9;
        }
        return (_DWORD *)(((v9 - *((_QWORD *)this + 188)) & 0xFFFFFFFFFFFFFFF0LL) + *((_QWORD *)this + 188) - 16);
      }
      else
      {
        v6 = 0;
        v7 = 1;
        while ( 1 )
        {
          result = &v5[v6];
          if ( *result == a2 )
            break;
          v6 = v7++;
          if ( v6 >= v4 - v5 )
            goto LABEL_5;
        }
      }
      return result;
    }

    __int64 __fastcall Character::hide(__int64 a1, int a2, int a3)
    {
      char *v3; // x0
    
      if ( a2 )
        v3 = "hide true";
      else
        v3 = "hide false";
      return Debugger::hudPrint((__siginfo *)v3, (const char *)0xFFFFFFFFLL, a3);
    }

    void __fastcall Character::collectElixir(__int64 a1)
    {
      __int64 MovieClip; // x0
      #1257 *v3; // x21
      int FrameIndex; // w20
      int TotalFrames; // w0
      const char *v6; // x1
      int v7; // w22
      MovieClip *v8; // x0
    
      MovieClip = GameObjectSprite::getMovieClip((#1138 *)(a1 + 16));
      v3 = (#1257 *)MovieClip;
      if ( MovieClip )
      {
        FrameIndex = MovieClip::getFrameIndex(MovieClip, "action_frame");
        TotalFrames = MovieClip::getTotalFrames(v3);
        if ( FrameIndex < 0 || TotalFrames <= 0 )
        {
          Debugger::warning((__siginfo *)"Character::collectElixir: can't find collect animation", v6);
        }
        else
        {
          v7 = TotalFrames - 1;
          *(_BYTE *)(a1 + 1688) = 1;
          MovieClip::gotoAndPlayFrameIndex(v3, FrameIndex, TotalFrames - 1);
          v8 = (MovieClip *)GameObjectSprite::getMovieClip((#1138 *)(a1 + 752));
          if ( v8 )
            MovieClip::gotoAndPlayFrameIndex(v8, FrameIndex, v7);
        }
      }
    }

    __int64 __fastcall Character::projectileShot(__int64 result)
    {
      *(_DWORD *)(result + 744) = 0;
      return result;
    }

    void __fastcall Character::setSpawnEffectDelay(__int64 a1, int a2)
    {
      AllianceJoinFailedMessage *Logic; // x0
      AllianceJoinFailedMessage *v5; // x0
      Font *CharacterData; // x0
      pthread_attr_t *isUseAnimator; // x0
      __int64 ClientGlobals; // x0
      AllianceJoinFailedMessage *v9; // x0
      __int64 v10; // x0
      AllianceJoinFailedMessage *v11; // x0
      __int64 v12; // x0
      const String *DeployBaseAnimExportName; // x0
      const String *v14; // x2
      String v15; // [xsp+8h] [xbp-28h] BYREF
    
      Logic = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
      if ( (unsigned int)LogicCharacter::getState(Logic) == 5 )
      {
        v5 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
        CharacterData = (Font *)LogicCharacter::getCharacterData(v5);
        isUseAnimator = (pthread_attr_t *)LogicCharacterData::isUseAnimator(CharacterData);
        if ( (_DWORD)isUseAnimator )
        {
          *(_DWORD *)(a1 + 1468) = a2;
          ClientGlobals = LogicDataTables::getClientGlobals(isUseAnimator);
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)(a1 + 16) + 80LL))(
            a1 + 16,
            (float)*(int *)(ClientGlobals + 100) / 100.0);
          v9 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
          v10 = LogicCharacter::getCharacterData(v9);
          if ( *(_DWORD *)LogicCharacterData::getDeployBaseAnimExportName(v10) )
          {
            String::String(&v15, "sc/level.sc");
            v11 = (AllianceJoinFailedMessage *)GameObject::getLogic((ShutdownStartedMessage *)a1);
            v12 = LogicCharacter::getCharacterData(v11);
            DeployBaseAnimExportName = (const String *)LogicCharacterData::getDeployBaseAnimExportName(v12);
            *(_QWORD *)(a1 + 1528) = ResourceManager::getMovieClipFromPool(
                                       (ResourceManager *)&v15,
                                       DeployBaseAnimExportName,
                                       v14);
            String::~String();
          }
        }
      }
    }

    __int64 __fastcall Character::initializeMembers(__int64 this)
    {
      _DWORD *v1; // x8
      __int64 v2; // x9
      _DWORD *v3; // x11
      __int64 i; // x12
    
      v1 = (_DWORD *)(this + 1024);
      v2 = 5;
      do
      {
        v3 = v1;
        for ( i = 3; i > 0; --i )
          *v3-- = -1;
        v1 -= 3;
      }
      while ( v2-- >= 1 );
      *(_QWORD *)(this + 1528) = 0;
      *(_QWORD *)(this + 1468) = 0;
      *(_QWORD *)(this + 1460) = 0;
      *(_DWORD *)(this + 744) = 1120403456;
      *(_BYTE *)(this + 1688) = 0;
      *(_QWORD *)(this + 1536) = 0;
      *(_DWORD *)(this + 1416) = 0;
      *(_DWORD *)(this + 1408) = 0;
      *(_QWORD *)(this + 1341) = 0;
      *(_QWORD *)(this + 1336) = 0;
      *(_QWORD *)(this + 1328) = 0;
      *(_BYTE *)(this + 1456) = 0;
      *(_QWORD *)(this + 1448) = 0;
      *(_QWORD *)(this + 1440) = 0;
      *(_QWORD *)(this + 1432) = 0;
      *(_DWORD *)(this + 1392) = -1;
      *(_DWORD *)(this + 1388) = -1;
      *(_DWORD *)(this + 1396) = -1;
      *(_BYTE *)(this + 1458) = 0;
      *(_BYTE *)(this + 1459) = 0;
      *(_DWORD *)(this + 1384) = 0;
      *(_DWORD *)(this + 944) = 0;
      *(_QWORD *)(this + 936) = 0;
      *(_QWORD *)(this + 904) = 0;
      *(_QWORD *)(this + 896) = 0;
      *(_QWORD *)(this + 1368) = 0;
      *(_QWORD *)(this + 1360) = 0;
      *(_DWORD *)(this + 948) = -1;
      *(_QWORD *)(this + 1032) = 0;
      *(_QWORD *)(this + 1352) = 0;
      *(_QWORD *)(this + 1376) = 0;
      *(_DWORD *)(this + 1412) = 0;
      *(_BYTE *)(this + 1457) = 0;
      *(_DWORD *)(this + 952) = 1;
      *(_DWORD *)(this + 1420) = 0;
      *(_DWORD *)(this + 1424) = 0;
      return this;
    }

    // attributes: thunk
    void __fastcall Character::~Character(LogicBattleEvent *this)
    {
      __ZN9CharacterD2Ev(this);
    }

    void __fastcall Character::~Character(LogicBattleEvent *a1)
    {
      Character::~Character(a1);
      operator delete(a1);
    }

}; // end class Character
