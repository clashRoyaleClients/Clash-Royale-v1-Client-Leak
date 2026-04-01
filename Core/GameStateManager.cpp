class GameStateManager
{
public:

    void __fastcall GameStateManager::constructInstance(LogicProgressSimulator *this)
    {
      GameStateManager *v1; // x19
      #1080 *v2; // x0
      __int64 Instance; // x0
    
      if ( !GameStateManager::sm_pInstance )
      {
        v1 = (GameStateManager *)operator new(104);
        v2 = GameStateManager::GameStateManager(v1);
        GameStateManager::sm_pInstance = (__int64)v1;
        Instance = GameMain::getInstance(v2);
        InputSystem::addListener(*(_QWORD *)(Instance + 64), GameStateManager::sm_pInstance);
      }
    }

    #1080 *__fastcall GameStateManager::destructInstance(#1080 *this)
    {
      __int64 Instance; // x0
    
      if ( GameStateManager::sm_pInstance )
      {
        Instance = GameMain::getInstance(this);
        InputSystem::removeListener(*(_QWORD *)(Instance + 64), GameStateManager::sm_pInstance);
        this = (#1080 *)GameStateManager::sm_pInstance;
        if ( GameStateManager::sm_pInstance )
          this = (#1080 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)GameStateManager::sm_pInstance + 40LL))(GameStateManager::sm_pInstance);
        GameStateManager::sm_pInstance = 0;
      }
      return this;
    }

    __int64 GameStateManager::getInstance()
    {
      return GameStateManager::sm_pInstance;
    }

    InitState *__fastcall GameStateManager::createState(int a1)
    {
      InitState *v1; // x19
    
      switch ( a1 )
      {
        case 2:
          v1 = (InitState *)operator new(128);
          InitState::InitState(v1);
          break;
        case 3:
          v1 = (InitState *)operator new(72);
          LoadingScreen::LoadingScreen(v1);
          break;
        case 4:
          v1 = (InitState *)operator new(232);
          GameMode::GameMode(v1, 0);
          break;
        case 5:
          v1 = (InitState *)operator new(232);
          GameMode::GameMode(v1, 1);
          break;
        default:
          if ( Assert::g_false )
          {
            while ( 1 )
              ;
          }
          v1 = 0;
          break;
      }
      return v1;
    }

    #1080 *__fastcall GameStateManager::exitAndDestroyState(#1080 *result)
    {
      #1080 **v1; // x19
      __int64 Instance; // x0
    
      v1 = (#1080 **)result;
      if ( result && *(_QWORD *)result )
      {
        Instance = GameMain::getInstance(result);
        InputSystem::removeListener(*(_QWORD *)(Instance + 64), *v1);
        (*(void (__fastcall **)(#1080 *))(*(_QWORD *)*v1 + 56LL))(*v1);
        result = *v1;
        if ( *v1 )
          result = (#1080 *)(*(__int64 (__fastcall **)(#1080 *))(*(_QWORD *)result + 40LL))(result);
        *v1 = 0;
      }
      return result;
    }

    __int64 __fastcall GameStateManager::GameStateManager(__int64 a1)
    {
      AvatarStreamManager *Instance; // x0
      RoyalTvManager *v3; // x0
    
      *(_BYTE *)(a1 + 78) = 0;
      *(_DWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 60) = 0;
      *(_QWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)a1 = off_100460530;
      *(_QWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 16) = -1;
      *(_BYTE *)(a1 + 76) = 0;
      *(_BYTE *)(a1 + 77) = 0;
      *(_DWORD *)(a1 + 8) = 4;
      *(_DWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 96) = 0;
      Instance = (AvatarStreamManager *)AllianceStream::createInstance((AllianceStream *)a1);
      v3 = (RoyalTvManager *)AvatarStreamManager::constructInstance(Instance);
      RoyalTvManager::constructInstance(v3);
      GameStateManager::clearGameData((GameStateManager *)a1);
      return a1;
    }

    void __fastcall GameStateManager::clearGameData(__int64 a1)
    {
      #1146 *v2; // x0
      __int64 v3; // x19
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
    
      v2 = *(#1146 **)(a1 + 48);
      if ( v2 )
      {
        LogicClientHome::destruct(v2);
        v3 = *(_QWORD *)(a1 + 48);
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 376);
          if ( v4 )
            operator delete[](v4);
          *(_QWORD *)(v3 + 376) = 0;
          *(_QWORD *)(v3 + 384) = 0;
          String::~String((String *)(v3 + 352));
          v5 = *(_QWORD *)(v3 + 264);
          if ( v5 )
            operator delete[](v5);
          *(_QWORD *)(v3 + 264) = 0;
          *(_QWORD *)(v3 + 272) = 0;
          v6 = *(_QWORD *)(v3 + 104);
          if ( v6 )
            operator delete[](v6);
          *(_QWORD *)(v3 + 104) = 0;
          *(_QWORD *)(v3 + 112) = 0;
          v7 = *(_QWORD *)(v3 + 40);
          if ( v7 )
            operator delete[](v7);
          *(_QWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0;
          v8 = *(_QWORD *)(v3 + 24);
          if ( v8 )
            operator delete[](v8);
          operator delete((void *)v3);
        }
        *(_QWORD *)(a1 + 48) = 0;
      }
      *(_QWORD *)(a1 + 64) = 0xFFFFFFFF00000000LL;
      *(_DWORD *)(a1 + 72) = 0;
    }

    __int64 __fastcall GameStateManager::~GameStateManager(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      #1146 *v4; // x0
      __int64 v5; // x20
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      void *v11; // x20
      RoyalTvManager *v12; // x0
      AvatarStreamManager *v13; // x0
      AllianceStream *v14; // x0
    
      *(_QWORD *)a1 = off_100460530;
      GameStateManager::exitAndDestroyState((#1080 *)(a1 + 32));
      GameStateManager::exitAndDestroyState((#1080 *)(a1 + 24));
      v2 = *(_QWORD *)(a1 + 56);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *(_QWORD *)(a1 + 56);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 56) = 0;
      }
      v4 = *(#1146 **)(a1 + 48);
      if ( v4 )
      {
        LogicClientHome::destruct(v4);
        v5 = *(_QWORD *)(a1 + 48);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 376);
          if ( v6 )
            operator delete[](v6);
          *(_QWORD *)(v5 + 376) = 0;
          *(_QWORD *)(v5 + 384) = 0;
          String::~String((String *)(v5 + 352));
          v7 = *(_QWORD *)(v5 + 264);
          if ( v7 )
            operator delete[](v7);
          *(_QWORD *)(v5 + 264) = 0;
          *(_QWORD *)(v5 + 272) = 0;
          v8 = *(_QWORD *)(v5 + 104);
          if ( v8 )
            operator delete[](v8);
          *(_QWORD *)(v5 + 104) = 0;
          *(_QWORD *)(v5 + 112) = 0;
          v9 = *(_QWORD *)(v5 + 40);
          if ( v9 )
            operator delete[](v9);
          *(_QWORD *)(v5 + 40) = 0;
          *(_QWORD *)(v5 + 48) = 0;
          v10 = *(_QWORD *)(v5 + 24);
          if ( v10 )
            operator delete[](v10);
          operator delete((void *)v5);
        }
        *(_QWORD *)(a1 + 48) = 0;
      }
      v11 = *(void **)(a1 + 80);
      if ( v11 )
      {
        String::~String(*(String **)(a1 + 80));
        operator delete(v11);
      }
      *(_QWORD *)(a1 + 80) = 0;
      v12 = *(RoyalTvManager **)(a1 + 88);
      if ( v12 )
      {
        (*(void (__fastcall **)(RoyalTvManager *))(*(_QWORD *)v12 + 16LL))(v12);
        v12 = *(RoyalTvManager **)(a1 + 88);
        if ( v12 )
          v12 = (RoyalTvManager *)(*(__int64 (__fastcall **)(RoyalTvManager *))(*(_QWORD *)v12 + 8LL))(v12);
        *(_QWORD *)(a1 + 88) = 0;
      }
      v13 = (AvatarStreamManager *)RoyalTvManager::destructInstance(v12);
      v14 = (AllianceStream *)AvatarStreamManager::destructInstance(v13);
      AllianceStream::destroyInstance(v14);
      *(_BYTE *)(a1 + 78) = 0;
      *(_DWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 60) = 0;
      *(_QWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 16) = -1;
      *(_BYTE *)(a1 + 76) = 0;
      *(_BYTE *)(a1 + 77) = 0;
      *(_DWORD *)(a1 + 8) = 4;
      *(_DWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 96) = 0;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall GameStateManager::~GameStateManager(__int64 a1)
    {
      return __ZN16GameStateManagerD2Ev(a1);
    }

    void __fastcall GameStateManager::~GameStateManager(void *a1)
    {
      GameStateManager::~GameStateManager((__int64)a1);
      operator delete(a1);
    }

    bool __fastcall GameStateManager::isChangingMode(LogicProgressSimulator *this)
    {
      return *((_DWORD *)this + 11) != 0;
    }

    __int64 __fastcall GameStateManager::update(__int64 a1, long double a2)
    {
      CustomButton *v3; // x0
      #1080 *v4; // x20
      __int64 result; // x0
      InitState **v6; // x21
      InitState *State; // x22
      long double v8; // q0
      float v9; // s8
      float *v10; // x22
      float v11; // s0
      float v12; // s1
      float v13; // s1
      float v14; // s0
      InitState *v15; // x21
      #945 *Instance; // x0
      long double v18; // [xsp+0h] [xbp-40h]
    
      v4 = (#1080 *)(a1 + 24);
      v3 = *(CustomButton **)(a1 + 24);
      if ( v3 )
      {
        result = LoadingScreen::isPlayingSplashAnimation(v3);
        if ( (result & 1) != 0 )
          return result;
      }
      v6 = (InitState **)(a1 + 32);
      if ( *(_DWORD *)(a1 + 44) )
      {
        GameStateManager::exitAndDestroyState((#1080 *)(a1 + 32));
        State = GameStateManager::createState(*(_DWORD *)(a1 + 44));
        (*(void (__fastcall **)(InitState *))(*(_QWORD *)State + 48LL))(State);
        *(_QWORD *)(a1 + 32) = State;
        *(_QWORD *)(a1 + 40) = *(unsigned int *)(a1 + 44);
        *(_OWORD *)&a2 = 0u;
      }
      else
      {
        State = *v6;
      }
      if ( State )
      {
        if ( ((*(__int64 (__fastcall **)(InitState *))(*(_QWORD *)State + 64LL))(State) & 1) != 0 )
        {
          (*(void (__fastcall **)(long double))(*(_QWORD *)*v6 + 96LL))(a2);
        }
        else
        {
          if ( *(float *)(a1 + 20) >= 0.99 )
            (*(void (__fastcall **)(InitState *, long double))(*(_QWORD *)*v6 + 72LL))(*v6, a2);
          if ( (*(unsigned int (__fastcall **)(InitState *))(*(_QWORD *)*v6 + 64LL))(*v6) )
            (*(void (__fastcall **)(long double))(*(_QWORD *)*v6 + 96LL))(COERCE_LONG_DOUBLE((unsigned __int128)0));
        }
      }
      if ( AvatarStreamManager::sm_pInstance )
        AvatarStreamManager::timeElapsed((AvatarStreamManager *)AvatarStreamManager::sm_pInstance, *(float *)&a2);
      v8 = a2;
      if ( RoyalTvManager::sm_pInstance )
      {
        RoyalTvManager::timeElapsed((RoyalTvManager *)RoyalTvManager::sm_pInstance, *(float *)&a2);
        v8 = a2;
      }
      v18 = v8;
      if ( *(float *)&v8 > 0.1 )
        *(float *)&v8 = 0.1;
      if ( *(float *)&v8 >= 0.0 )
        v9 = *(float *)&v8;
      else
        v9 = 0.0;
      result = (__int64)*v6;
      if ( *v6 && (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result), (result & 1) == 0) )
      {
        v12 = v9 * 1.6667;
        v10 = (float *)(a1 + 20);
        v11 = *(float *)(a1 + 20);
      }
      else
      {
        v10 = (float *)(a1 + 20);
        v11 = *(float *)(a1 + 20);
        v12 = v9 * 1.6667;
        if ( !*(_DWORD *)(a1 + 44) )
        {
          v13 = v11 - v12;
          *v10 = v13;
          if ( v13 < 0.0 )
          {
            *v10 = 0.0;
            goto LABEL_33;
          }
          goto LABEL_30;
        }
      }
      v13 = v11 + v12;
      *v10 = v13;
      v14 = 1.0;
      if ( v13 > 1.0 )
      {
        *v10 = 1.0;
        goto LABEL_31;
      }
    LABEL_30:
      v14 = v13;
      if ( v13 > 0.0 )
      {
    LABEL_31:
        if ( !*(_QWORD *)v4 )
        {
          v15 = GameStateManager::createState(3);
          (*(void (__fastcall **)(InitState *))(*(_QWORD *)v15 + 48LL))(v15);
          *(_QWORD *)v4 = v15;
          *v10 = 0.01;
    LABEL_36:
          result = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
          {
            (*(void (__fastcall **)(__int64, float))(*(_QWORD *)result + 120LL))(result, *v10);
            result = (*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)v4 + 96LL))(*(_QWORD *)v4, v18);
          }
          goto LABEL_38;
        }
      }
      if ( v14 >= 0.01 )
        goto LABEL_36;
    LABEL_33:
      if ( *(_QWORD *)v4 )
      {
        GameStateManager::exitAndDestroyState(v4);
        goto LABEL_36;
      }
    LABEL_38:
      if ( *(_BYTE *)(a1 + 77) )
      {
        if ( *(_BYTE *)(a1 + 76) )
        {
          *(_BYTE *)(a1 + 77) = 0;
          Instance = (#945 *)GameMode::getInstance((vm_address_t *)result);
          return GameMode::sendHomeLogicStoppedMessage(Instance);
        }
      }
      return result;
    }

    __int64 __fastcall GameStateManager::changeToState(__int64 a1)
    {
      InitState *State; // x20
      __int64 result; // x0
    
      GameStateManager::exitAndDestroyState((#1080 *)(a1 + 32));
      State = GameStateManager::createState(*(_DWORD *)(a1 + 44));
      result = (*(__int64 (__fastcall **)(InitState *))(*(_QWORD *)State + 48LL))(State);
      *(_QWORD *)(a1 + 32) = State;
      *(_QWORD *)(a1 + 40) = *(unsigned int *)(a1 + 44);
      return result;
    }

    void __fastcall GameStateManager::draw(LogicProgressSimulator *this)
    {
      ;
    }

    __int64 __fastcall GameStateManager::setReplayData(__int64 a1, String *a2, const char *a3)
    {
      void *v5; // x21
      int ByteLength; // w0
      __int64 result; // x0
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"replay data passed as NULL to game state manager", a3);
      v5 = *(void **)(a1 + 80);
      if ( v5 )
      {
        String::~String(*(String **)(a1 + 80));
        operator delete(v5);
      }
      *(_QWORD *)(a1 + 80) = a2;
      ByteLength = String::getByteLength(a2);
      result = LOG("loading replay of size %d bytes\n", ByteLength);
      *(_DWORD *)(a1 + 68) = -1;
      *(_DWORD *)(a1 + 44) = 5;
      *(_DWORD *)(a1 + 16) = 3;
      return result;
    }

    bool __fastcall GameStateManager::hasReplayData(LogicProgressSimulator *this)
    {
      return *((_QWORD *)this + 10) != 0;
    }

    __int64 __fastcall GameStateManager::clearReplayData(__int64 a1)
    {
      void *v2; // x20
      __int64 result; // x0
    
      v2 = *(void **)(a1 + 80);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 80));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 80) = 0;
      result = *(_QWORD *)(a1 + 88);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 88);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 88) = 0;
      }
      return result;
    }

    __int64 __fastcall GameStateManager::getReplayData(LogicProgressSimulator *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall GameStateManager::getReplayBattleLogJSON(LogicProgressSimulator *this)
    {
      return *((_QWORD *)this + 11);
    }

    __int64 __fastcall GameStateManager::changeState(__int64 result, int a2)
    {
      *(_DWORD *)(result + 44) = a2;
      return result;
    }

    __int64 __fastcall GameStateManager::getCurrentState(LogicProgressSimulator *this)
    {
      return *((_QWORD *)this + 4);
    }

    bool __fastcall GameStateManager::isState(__int64 a1, int a2)
    {
      return *(_DWORD *)(a1 + 40) == a2;
    }

    __int64 __fastcall GameStateManager::isInitialLoadingDone(__int64 a1)
    {
      if ( *(_DWORD *)(a1 + 40) == 2 )
        return InitState::resourcesLoaded(*(LoadingScreen **)(a1 + 32));
      else
        return 1;
    }

    void __fastcall GameStateManager::setGameData(__int64 a1, const char *a2, __int64 a3, int a4, int a5, int a6)
    {
      __int64 v12; // x0
      __int64 v13; // x0
      #1146 *v14; // x0
      __int64 v15; // x24
      __int64 v16; // x0
      __int64 v17; // x0
      __int64 v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
    
      if ( *(_DWORD *)(a1 + 68) != -1 )
        Debugger::warning((__siginfo *)"Was already loading other game, overriding!", a2);
      if ( *(_QWORD *)(a1 + 56) != a3 )
      {
        Debugger::print((Debugger *)"GameStateManager::setGameData, new owner", a2);
        v12 = *(_QWORD *)(a1 + 56);
        if ( v12 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          v13 = *(_QWORD *)(a1 + 56);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          *(_QWORD *)(a1 + 56) = 0;
        }
        *(_QWORD *)(a1 + 56) = a3;
      }
      v14 = *(#1146 **)(a1 + 48);
      if ( v14 != (#1146 *)a2 )
      {
        if ( v14 )
        {
          LogicClientHome::destruct(v14);
          v15 = *(_QWORD *)(a1 + 48);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 376);
            if ( v16 )
              operator delete[](v16);
            *(_QWORD *)(v15 + 376) = 0;
            *(_QWORD *)(v15 + 384) = 0;
            String::~String((String *)(v15 + 352));
            v17 = *(_QWORD *)(v15 + 264);
            if ( v17 )
              operator delete[](v17);
            *(_QWORD *)(v15 + 264) = 0;
            *(_QWORD *)(v15 + 272) = 0;
            v18 = *(_QWORD *)(v15 + 104);
            if ( v18 )
              operator delete[](v18);
            *(_QWORD *)(v15 + 104) = 0;
            *(_QWORD *)(v15 + 112) = 0;
            v19 = *(_QWORD *)(v15 + 40);
            if ( v19 )
              operator delete[](v19);
            *(_QWORD *)(v15 + 40) = 0;
            *(_QWORD *)(v15 + 48) = 0;
            v20 = *(_QWORD *)(v15 + 24);
            if ( v20 )
              operator delete[](v20);
            operator delete((void *)v15);
          }
          *(_QWORD *)(a1 + 48) = 0;
        }
        *(_QWORD *)(a1 + 48) = a2;
      }
      *(_DWORD *)(a1 + 64) = a4;
      *(_DWORD *)(a1 + 68) = a5;
      *(_DWORD *)(a1 + 72) = a6;
    }

    bool __fastcall GameStateManager::hasGameData(LogicProgressSimulator *this)
    {
      return *((_DWORD *)this + 17) != -1;
    }

    __int64 __fastcall GameStateManager::removeHomeData(LogicProgressSimulator *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0;
      return v1;
    }

    __int64 __fastcall GameStateManager::getPlayerAvatar(LogicProgressSimulator *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall GameStateManager::getHomePassedTimeSeconds(LogicProgressSimulator *this)
    {
      return *((unsigned int *)this + 16);
    }

    __int64 __fastcall GameStateManager::getHomeGameState(LogicProgressSimulator *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall GameStateManager::keyUp(LogicProgressSimulator *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 4);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 136LL))(result);
      return result;
    }

    __int64 __fastcall GameStateManager::touchPressed(__int64 a1)
    {
      __int64 (__fastcall ***v1)(_QWORD); // x0
    
      v1 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 32);
      if ( v1 )
        return (**v1)(v1);
      else
        return 0;
    }

    __int64 __fastcall GameStateManager::touchMoved(__int64 a1)
    {
      __int64 v1; // x0
    
      v1 = *(_QWORD *)(a1 + 32);
      if ( v1 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
      else
        return 0;
    }

    __int64 __fastcall GameStateManager::touchReleased(__int64 a1)
    {
      __int64 v1; // x0
    
      v1 = *(_QWORD *)(a1 + 32);
      if ( v1 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      else
        return 0;
    }

    __int64 __fastcall GameStateManager::touchCancelled(LogicProgressSimulator *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 4);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
      return result;
    }

    __int64 __fastcall GameStateManager::setWaitingForSectorState(__int64 this, int a2)
    {
      *(_BYTE *)(this + 76) = a2;
      if ( a2 )
        *(_BYTE *)(this + 77) = 1;
      return this;
    }

    __int64 __fastcall GameStateManager::setWaitingForNPCSectorState(__int64 this, char a2)
    {
      *(_BYTE *)(this + 76) = a2;
      *(_BYTE *)(this + 77) = 0;
      return this;
    }

    __int64 __fastcall GameStateManager::getHomeRandomSeed(LogicProgressSimulator *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall GameStateManager::setServerIsShuttingDown(__int64 this)
    {
      *(_BYTE *)(this + 78) = 1;
      return this;
    }

    __int64 __fastcall GameStateManager::setNextBattleTypePvp(__int64 a1)
    {
      __int64 result; // x0
    
      result = GameStateManager::clearReplayData(a1);
      *(_DWORD *)(a1 + 16) = 0;
      return result;
    }

    __int64 __fastcall GameStateManager::setNextBattleTypeNpc(__int64 a1)
    {
      __int64 result; // x0
    
      result = GameStateManager::clearReplayData(a1);
      *(_DWORD *)(a1 + 16) = 1;
      return result;
    }

    __int64 __fastcall GameStateManager::setNextBattleTypeReplay(LogicProgressSimulator *this, #1234 *a2)
    {
      __int64 result; // x0
    
      *((_DWORD *)this + 4) = 3;
      GameStateManager::clearReplayData((__int64)this);
      result = *((_QWORD *)this + 11);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 11);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 11) = 0;
      }
      *((_QWORD *)this + 11) = a2;
      return result;
    }

    __int64 __fastcall GameStateManager::isServerShuttingDown(LogicProgressSimulator *this)
    {
      return *((unsigned __int8 *)this + 78);
    }

    bool __fastcall GameStateManager::isLoading(LogicProgressSimulator *this)
    {
      return GameStateManager::isState((__int64)this, 2) || GameStateManager::isState((__int64)this, 3);
    }

}; // end class GameStateManager
