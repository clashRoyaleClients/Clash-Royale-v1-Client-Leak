class SoundManager
{
public:

    void __fastcall SoundManager::SoundManager(SoundManager *this)
    {
      String::String((String *)this);
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 17) = (char *)this + 120;
      *((_QWORD *)this + 18) = (char *)this + 120;
      *((_QWORD *)this + 24) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 23) = (char *)this + 168;
      *((_QWORD *)this + 24) = (char *)this + 168;
      SoundManager::initializeMembers(this);
      LogicArrayList<PlayingSFX *>::ensureCapacity((char *)this + 80, 30);
      LogicArrayList<DelayedSFX *>::ensureCapacity((char *)this + 96, 30);
      *((_DWORD *)this + 14) = 1065353216;
      *((_BYTE *)this + 213) = 0;
    }

    void __fastcall SoundManager::~SoundManager(NoAlliance *this)
    {
      _QWORD *v2; // x24
      __int64 v3; // x20
      __int64 i; // x22
      void *v5; // x21
      _QWORD *v6; // x25
      int v7; // w20
      __int64 v8; // x21
      void *v9; // x0
      NoAlliance *v10; // x23
      void *v11; // x22
      NoAlliance *v12; // x21
      void *v13; // x0
      __int64 v14; // x0
      __int64 v15; // x0
    
      SoundManager::stopMusic(this);
      v2 = (_QWORD *)((char *)this + 96);
      v3 = *((int *)this + 27);
      if ( (int)v3 >= 1 )
      {
        for ( i = 0; i < v3; ++i )
        {
          v5 = *(void **)(*v2 + 8 * i);
          if ( v5 )
          {
            String::~String();
            operator delete(v5);
          }
        }
      }
      v6 = (_QWORD *)((char *)this + 80);
      v7 = *((_DWORD *)this + 23);
      if ( v7 >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = *(void **)(*v6 + 8 * v8);
          if ( v9 )
            operator delete(v9);
          ++v8;
        }
        while ( v7 != (_DWORD)v8 );
      }
      v10 = (NoAlliance *)*((_QWORD *)this + 17);
      if ( v10 != (NoAlliance *)((char *)this + 120) )
      {
        do
        {
          v11 = (void *)*((_QWORD *)v10 + 5);
          v12 = (NoAlliance *)std::_Rb_tree_increment(v10);
          v13 = (void *)std::_Rb_tree_rebalance_for_erase(v10, (char *)this + 120);
          operator delete(v13);
          --*((_QWORD *)this + 19);
          if ( v11 )
            operator delete(v11);
          v10 = v12;
        }
        while ( v12 != (NoAlliance *)((char *)this + 120) );
      }
      std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
        (char *)this + 160,
        *((_QWORD *)this + 22));
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = (char *)this + 168;
      *((_QWORD *)this + 24) = (char *)this + 168;
      *((_QWORD *)this + 25) = 0;
      SoundManager::initializeMembers(this);
      std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
        (char *)this + 160,
        *((_QWORD *)this + 22));
      std::_Rb_tree<int,std::pair<int const,SFXSequenceInfo *>,std::_Select1st<std::pair<int const,SFXSequenceInfo *>>,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>::_M_erase(
        (char *)this + 112,
        *((_QWORD *)this + 16));
      v14 = *((_QWORD *)this + 12);
      if ( v14 )
        operator delete[](v14);
      *v2 = 0;
      *((_QWORD *)this + 13) = 0;
      if ( *v6 )
        operator delete[](*v6);
      *v6 = 0;
      *((_QWORD *)this + 11) = 0;
      v15 = *((_QWORD *)this + 8);
      if ( v15 )
        operator delete[](v15);
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      String::~String();
    }

    _DWORD *__fastcall SoundManager::stopMusic(_DWORD *this)
    {
      _DWORD *v1; // x19
      SoundSystem *Instance; // x0
    
      v1 = this;
      if ( *(this + 6) )
      {
        Instance = (SoundSystem *)SoundSystem::getInstance((SoundSystem *)this);
        SoundSystem::stopMusic(Instance, v1[6], 0);
        v1[6] = 0;
        return (_DWORD *)String::operator=(v1, "");
      }
      return this;
    }

    __int64 __fastcall SoundManager::update(NoAlliance *this, float a2)
    {
      __int64 v4; // x8
      _QWORD *v5; // x20
      __int64 v6; // x22
      __int64 v7; // x23
      __int64 v8; // x21
      float v9; // s0
      __int64 v10; // x8
      __int64 v11; // x20
      __int64 v12; // x23
      float v13; // s0
      const char *v14; // x1
      int v15; // w2
      __int64 v16; // x21
      void *v17; // x23
      const char *v18; // x1
      int v19; // w2
      NoAlliance *v20; // x24
      float *v21; // x25
      float v22; // s9
      NoAlliance *v23; // x23
      void *v24; // x0
      const char *v25; // x1
      int v26; // w2
      _BOOL8 isSfxEnabled; // x0
      SoundSystem *Instance; // x0
      int v29; // w8
      __int64 v30; // x21
      void *v31; // x0
      int v32; // w8
      SoundSystem *updated; // x0
      #1201 *v34; // x0
      __siginfo v36; // [xsp+8h] [xbp-98h] BYREF
    
      v4 = *((int *)this + 19);
      if ( (int)v4 >= 1 )
      {
        v5 = (_QWORD *)((char *)this + 64);
        v6 = v4 + 1;
        v7 = 8 * v4 - 4;
        v8 = (unsigned int)(v4 - 1);
        do
        {
          v9 = *(float *)(*v5 + v7) - a2;
          if ( v9 <= 0.0 )
            LogicArrayList<BlockSFX>::remove((char *)this + 64, v8);
          else
            *(float *)(*v5 + v7) = v9;
          --v6;
          v7 -= 8;
          v8 = (unsigned int)(v8 - 1);
        }
        while ( v6 > 1 );
      }
      LODWORD(v10) = *((_DWORD *)this + 27);
      if ( (int)v10 >= 1 )
      {
        v11 = 0;
        do
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v11);
            v13 = *(float *)(v12 + 44) - a2;
            *(float *)(v12 + 44) = v13;
            if ( v13 < 0.0 )
              break;
            if ( ++v11 >= (int)v10 )
              goto LABEL_17;
          }
          SoundManager::playSound(
            this,
            (const String *)v12,
            *(float *)(v12 + 24),
            *(float *)(v12 + 28),
            *(_DWORD *)(v12 + 32),
            *(_DWORD *)(v12 + 36),
            *(_DWORD *)(v12 + 40),
            *(_BYTE *)(v12 + 52),
            0.0,
            *(float *)(v12 + 48));
          LogicArrayList<DelayedSFX *>::remove((char *)this + 96, v11);
          if ( v12 )
          {
            String::~String();
            operator delete((void *)v12);
          }
          if ( SoundManager::sm_debugPrintEnabled )
          {
            String::format((String *)"<SFX> Delayed SFX started. Removing effect from delayed queue.", v14);
            Debugger::hudPrint((__siginfo *)v36.__pad, (const String *)0xFFFFFFFFLL, v15);
            String::~String();
          }
          v10 = *((int *)this + 27);
        }
        while ( v11 < v10 );
      }
    LABEL_17:
      if ( *((int *)this + 23) >= 1 )
      {
        v16 = 0;
        do
        {
          v17 = *(void **)(*((_QWORD *)this + 10) + 8 * v16);
          if ( PlayingSFX::update((#1318 *)v17, a2) )
          {
            LogicArrayList<PlayingSFX *>::remove((char *)this + 80, v16);
            if ( v17 )
              operator delete(v17);
            if ( SoundManager::sm_debugPrintEnabled )
            {
              String::format((String *)"<SFX> SFX done. Removing effect.", v18);
              Debugger::hudPrint((__siginfo *)&v36.si_addr, (const String *)0xFFFFFFFFLL, v19);
              String::~String();
            }
          }
          else
          {
            ++v16;
          }
        }
        while ( v16 < *((int *)this + 23) );
      }
      v20 = (NoAlliance *)*((_QWORD *)this + 17);
      if ( v20 != (NoAlliance *)((char *)this + 120) )
      {
        do
        {
          v21 = (float *)*((_QWORD *)v20 + 5);
          v22 = *v21 - a2;
          *v21 = v22;
          v23 = (NoAlliance *)std::_Rb_tree_increment(v20);
          if ( v22 < 0.0 )
          {
            v24 = (void *)std::_Rb_tree_rebalance_for_erase(v20, (char *)this + 120);
            operator delete(v24);
            --*((_QWORD *)this + 19);
            if ( v21 )
              operator delete(v21);
            if ( SoundManager::sm_debugPrintEnabled )
            {
              String::format((String *)"<SFX> SFX sequence info expired. Removing sequence info.", v25);
              Debugger::hudPrint(&v36, (const String *)0xFFFFFFFFLL, v26);
              String::~String();
            }
          }
          v20 = v23;
        }
        while ( v23 != (NoAlliance *)((char *)this + 120) );
      }
      if ( GameSettings::isSfxEnabled((ClanPage *)GameSettings::sm_pInstance) != *((_BYTE *)this + 212) )
      {
        isSfxEnabled = GameSettings::isSfxEnabled((ClanPage *)GameSettings::sm_pInstance);
        *((_BYTE *)this + 212) = isSfxEnabled;
        if ( !isSfxEnabled )
        {
          Instance = (SoundSystem *)SoundSystem::getInstance((SoundSystem *)isSfxEnabled);
          SoundSystem::stopAllChannels(Instance);
          v29 = *((_DWORD *)this + 23);
          v30 = (unsigned int)(v29 - 1);
          if ( v29 >= 1 )
          {
            do
            {
              v31 = (void *)LogicArrayList<PlayingSFX *>::remove((char *)this + 80, v30);
              if ( v31 )
                operator delete(v31);
              v32 = v30 + 1;
              v30 = (unsigned int)(v30 - 1);
            }
            while ( v32 > 1 );
          }
        }
      }
      updated = (SoundSystem *)SoundManager::updateVolume(this, a2, 0);
      v34 = (#1201 *)SoundSystem::getInstance(updated);
      return SoundSystem::update(v34);
    }

    sigval __fastcall SoundManager::playSound(
            NoAlliance *this,
            const String *a2,
            float a3,
            float a4,
            int a5,
            int a6,
            unsigned int a7,
            bool a8,
            float a9,
            float a10)
    {
      const char *v20; // x1
      SoundSystem *Instance; // x23
      double v22; // d0
      __int64 v23; // x8
      __int64 v24; // x12
      char v25; // w11
      int v26; // w10
      int v27; // w9
      __int64 v28; // x27
      __int64 v29; // x15
      int v30; // w15
      _QWORD *v31; // x26
      int v32; // w13
      __int64 v33; // x12
      __int64 v34; // x13
      __int64 v36; // x14
      int v37; // w2
      int v38; // w2
      unsigned int *v39; // x27
      int v40; // w2
      int v41; // w2
      sigval v42; // x25
      ResourceManager *p_internal; // x0
      unsigned int Sound; // w27
      unsigned int v46; // w28
      int v47; // w8
      float v48; // s0
      float v49; // s0
      const char *v50; // x1
      int v51; // w2
      __siginfo v52; // [xsp+8h] [xbp-F8h] BYREF
      __siginfo v53; // [xsp+78h] [xbp-88h] BYREF
    
      if ( !*((_BYTE *)this + 212) )
        return 0;
      Instance = (SoundSystem *)SoundSystem::getInstance(this);
      v23 = *((int *)this + 23);
      if ( (int)v23 < 1 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0xFFFFFFFFLL;
      }
      else
      {
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        LODWORD(v28) = -1;
        LODWORD(v22) = -1138501878;
        do
        {
          v29 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v24);
          if ( *(_DWORD *)(v29 + 8) == a7 )
          {
            ++v26;
            if ( *(float *)(v29 + 36) > (float)(*(float *)(v29 + 40) + -0.01) )
              v25 = 1;
          }
          v30 = *(_DWORD *)(v29 + 4);
          if ( v30 <= v27 )
            v28 = (unsigned int)v28;
          else
            v28 = (unsigned int)v24;
          if ( v30 > v27 )
            v27 = v30;
          ++v24;
        }
        while ( v24 < v23 );
      }
      v31 = (_QWORD *)((char *)this + 64);
      v32 = *((_DWORD *)this + 19);
    LABEL_16:
      v33 = v32;
      v34 = 8LL * (v32 - 1);
      while ( v33-- >= 1 )
      {
        v36 = v34 - 8;
        LODWORD(v22) = *(_DWORD *)(*v31 + v34 + 4);
        v34 -= 8;
        if ( *(float *)&v22 > 0.0 )
        {
          v25 |= *(_DWORD *)(*v31 + v36 + 8) == a7;
          v32 = v33;
          goto LABEL_16;
        }
      }
      if ( (v25 & 1) != 0 )
      {
        if ( SoundManager::sm_debugPrintEnabled )
        {
          String::format((String *)"<SFX> Skipping sfx because similar sound started shortly before.", v20, v22);
          Debugger::hudPrint(&v53, (const String *)0xFFFFFFFFLL, v37);
    LABEL_34:
          String::~String();
          return 0;
        }
        return 0;
      }
      if ( v26 >= a6 )
      {
        if ( SoundManager::sm_debugPrintEnabled )
        {
          String::format((String *)"<SFX> Maximum amount of these sfx playing already.", v20, v22);
          Debugger::hudPrint((__siginfo *)&v52.__pad[5], (const String *)0xFFFFFFFFLL, v40);
          goto LABEL_34;
        }
        return 0;
      }
      if ( (int)v23 >= 30 )
      {
        if ( v27 <= a5 )
        {
          if ( SoundManager::sm_debugPrintEnabled )
          {
            String::format((String *)"<SFX> All channels in use. New sfx has too low priority and is ignored.", v20, v22);
            Debugger::hudPrint((__siginfo *)&v52.si_band, (const String *)0xFFFFFFFFLL, v41);
            goto LABEL_34;
          }
          return 0;
        }
        if ( SoundManager::sm_debugPrintEnabled )
        {
          String::format(
            (String *)"<SFX> All channels in use. High priority sfx played on top of old lowest priority sfx.",
            v20,
            v22);
          Debugger::hudPrint((__siginfo *)&v52.__pad[2], (const String *)0xFFFFFFFFLL, v38);
          String::~String();
        }
        v39 = (unsigned int *)LogicArrayList<PlayingSFX *>::remove((char *)this + 80, v28);
        if ( (unsigned int)SoundSystem::isPlaying(Instance, v39[11]) )
        {
          SoundSystem::stopChannel(Instance, v39[11]);
        }
        else if ( !v39 )
        {
          goto LABEL_39;
        }
        operator delete(v39);
      }
    LABEL_39:
      p_internal = (ResourceManager *)&a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = *(ResourceManager **)p_internal;
      Sound = ResourceManager::getSound(p_internal, v20);
      if ( !Sound )
        return 0;
      v46 = SoundSystem::playSound(Instance, Sound, a4, a8);
      if ( !v46 )
        return 0;
      SoundManager::removePlayingSound(this, v46);
      SoundSystem::setChannelPitch(Instance, v46, a3);
      v42.sival_ptr = (void *)operator new(52);
      v47 = *((_DWORD *)this + 58) + 1;
      *((_DWORD *)this + 58) = v47;
      *(_DWORD *)v42.sival_ptr = v47;
      *((_DWORD *)v42.sival_ptr + 9) = 0;
      *((_QWORD *)v42.sival_ptr + 5) = 0;
      *(_QWORD *)((char *)v42.sival_ptr + 12) = 0;
      *(_QWORD *)((char *)v42.sival_ptr + 4) = 0;
      *(_QWORD *)((char *)v42.sival_ptr + 20) = 1065353216;
      *((_DWORD *)v42.sival_ptr + 7) = 0;
      *((_DWORD *)v42.sival_ptr + 8) = 1065353216;
      *((_BYTE *)v42.sival_ptr + 48) = 0;
      v52.si_value = v42;
      *((_DWORD *)v42.sival_ptr + 1) = a5;
      *((_DWORD *)v42.sival_ptr + 2) = a7;
      SoundSystem::getSoundLengthSeconds(Instance, Sound);
      *((_DWORD *)v42.sival_ptr + 11) = v46;
      *((_BYTE *)v42.sival_ptr + 48) = a8;
      *((float *)v42.sival_ptr + 3) = a4;
      v49 = v48 + a9;
      *((float *)v42.sival_ptr + 9) = v49;
      *((float *)v42.sival_ptr + 10) = v49;
      *((float *)v42.sival_ptr + 4) = a4;
      *((float *)v42.sival_ptr + 6) = a3;
      *((float *)v42.sival_ptr + 7) = a3;
      if ( a10 > 0.01 )
      {
        v52.si_addr = (void *)__PAIR64__(LODWORD(a10), a7);
        LogicArrayList<BlockSFX>::add((char *)this + 64, &v52.si_addr);
      }
      LogicArrayList<PlayingSFX *>::add((char *)this + 80, &v52.si_value);
      if ( SoundManager::sm_debugPrintEnabled )
      {
        String::format((String *)"<SFX> Added new sfx to list of playing sfx.", v50);
        Debugger::hudPrint(&v52, (const String *)0xFFFFFFFFLL, v51);
        String::~String();
      }
      return v42;
    }

    void __fastcall SoundManager::updateVolume(NoAlliance *this, float a2, int a3)
    {
      int isMusicEnabled; // w8
      SoundSystem *isPlayingMusic; // x0
      char v8; // w22
      float v9; // s0
      float v10; // s1
      float v11; // s1
      SoundSystem *Instance; // x0
      xTimer *v13; // x21
      uint64_t NativeTime; // x0
      unsigned __int64 v15; // x2
      long double PassedTimeMs; // q0
      float v17; // s0
      float v18; // s1
      float v19; // s2
      float v20; // s8
      SoundSystem *v21; // x0
      float v22; // s0
    
      isMusicEnabled = GameSettings::isMusicEnabled((ClanPage *)GameSettings::sm_pInstance);
      isPlayingMusic = (SoundSystem *)*((unsigned __int8 *)this + 213);
      if ( isMusicEnabled == (_DWORD)isPlayingMusic )
      {
        v8 = 0;
      }
      else
      {
        isPlayingMusic = (SoundSystem *)GameSettings::isMusicEnabled((ClanPage *)GameSettings::sm_pInstance);
        *((_BYTE *)this + 213) = (_BYTE)isPlayingMusic;
        v8 = 1;
      }
      if ( !(_DWORD)isPlayingMusic )
        goto LABEL_14;
      v9 = *((float *)this + 56);
      v10 = *((float *)this + 57);
      if ( v10 < v9 )
      {
        v11 = v10 + a2;
        if ( v11 >= v9 )
          v11 = *((float *)this + 56);
        *((float *)this + 57) = v11;
        *((float *)this + 14) = *((float *)this + 54)
                              + (float)((float)(*((float *)this + 55) - *((float *)this + 54)) * (float)(v11 / v9));
        v8 = 1;
      }
      if ( *((float *)this + 10) <= 0.0 )
        goto LABEL_14;
      Instance = (SoundSystem *)SoundSystem::getInstance(isPlayingMusic);
      isPlayingMusic = (SoundSystem *)SoundSystem::isPlayingMusic(Instance);
      if ( !(_DWORD)isPlayingMusic )
        goto LABEL_14;
      v13 = (xTimer *)*((_QWORD *)this + 6);
      NativeTime = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(v13, NativeTime, v15);
      v17 = *(float *)&PassedTimeMs * 0.001;
      v18 = *((float *)this + 10);
      v19 = *((float *)this + 11) - v18;
      if ( v17 > v19 )
      {
        *((float *)this + 8) = *((float *)this + 9) * (float)(1.0 - (float)((float)(v17 - v19) / v18));
      }
      else
      {
    LABEL_14:
        if ( (v8 & 1) == 0 && !a3 )
          return;
      }
      if ( *((_BYTE *)this + 213) )
      {
        v20 = *((float *)this + 14) * *((float *)this + 8);
        v21 = (SoundSystem *)SoundSystem::getInstance(isPlayingMusic);
        v22 = v20;
      }
      else
      {
        v21 = (SoundSystem *)SoundSystem::getInstance(isPlayingMusic);
        v22 = 0.0;
      }
      SoundSystem::setMusicVolume(v21, v22);
    }

    __int64 __fastcall SoundManager::isPlayingMusic(NoAlliance *this)
    {
      SoundSystem *Instance; // x0
    
      Instance = (SoundSystem *)SoundSystem::getInstance(this);
      return SoundSystem::isPlayingMusic(Instance);
    }

    void __fastcall SoundManager::constructInstance(NoAlliance *this)
    {
      SoundManager *v1; // x19
    
      v1 = (SoundManager *)operator new(240);
      SoundManager::SoundManager(v1);
      SoundManager::sm_pInstance = (__int64)v1;
    }

    void __fastcall SoundManager::destructInstance(NoAlliance *this)
    {
      void *v1; // x19
    
      v1 = (void *)SoundManager::sm_pInstance;
      if ( SoundManager::sm_pInstance )
      {
        SoundManager::~SoundManager((NoAlliance *)SoundManager::sm_pInstance);
        operator delete(v1);
      }
      SoundManager::sm_pInstance = 0;
    }

    void __fastcall SoundManager::playMusic(__int64 a1, AreaEffectObject *a2)
    {
      __int64 InstanceID; // x0
      const char *v5; // x1
      const String *v6; // x1
      int VariationCount; // w20
      const String *v8; // x1
      __int64 v9; // x23
      __int64 v10; // x22
      char Loop; // w27
      int Volume; // w25
      int FadeOutTimeSeconds; // w24
      int PlayCount; // w23
      int DurationSeconds; // w26
      const String *v16; // x1
      const char *v17; // x1
      internal_t *p_internal; // x28
      internal_t *pHeap; // x0
      SoundSystem *Music; // x0
      SoundSystem *Instance; // x0
      float v22; // s0
      int v23; // w8
      float v24; // s0
      bool v25; // nf
      float v26; // s0
      bool v27; // cc
      __int64 Name; // x0
      const char *v29; // x8
      int v30; // w1
      const String *v31; // x2
      String v32; // [xsp+30h] [xbp-B0h] BYREF
      String v33; // [xsp+48h] [xbp-98h] BYREF
      String v34; // [xsp+60h] [xbp-80h] BYREF
      String v35; // [xsp+78h] [xbp-68h] BYREF
    
      if ( !a2 )
        return;
      InstanceID = LogicData::getInstanceID(a2, (int)a2);
      String::format((String *)"music_%d", v5, InstanceID);
      VariationCount = LogicMusicData::getVariationCount(a2);
      if ( VariationCount >= 2 )
      {
        Application::getKeyValue((Application *)&v35, v6);
        if ( v34.m_length )
          v9 = (unsigned int)((int)LogicStringUtil::convertToInt((LogicStringUtil *)&v34, v8) % VariationCount);
        else
          v9 = 0;
        if ( *(int *)(a1 + 28) >= 1 )
        {
          v10 = (unsigned int)(((int)v9 - 1) % VariationCount);
          if ( (int)v9 <= 0 )
            v10 = (unsigned int)(((int)v10 + VariationCount) % VariationCount);
          if ( *(_DWORD *)(a1 + 28) < (int)LogicMusicData::getPlayCount(a2, v10) )
            goto LABEL_13;
          *(_DWORD *)(a1 + 28) = 0;
        }
        v10 = v9;
    LABEL_13:
        String::~String();
        goto LABEL_14;
      }
      v10 = 0;
    LABEL_14:
      LogicMusicData::getFileName(a2, v10);
      Loop = LogicMusicData::getLoop(a2, v10);
      Volume = LogicMusicData::getVolume(a2, v10);
      FadeOutTimeSeconds = LogicMusicData::getFadeOutTimeSeconds(a2, v10);
      PlayCount = LogicMusicData::getPlayCount(a2, v10);
      DurationSeconds = LogicMusicData::getDurationSeconds(a2, v10);
      GameMain::loadAsset((GameMain *)&v33, v16);
      p_internal = &v33.internal;
      if ( v33.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v33.internal.pHeap;
      else
        pHeap = &v33.internal;
      Music = (SoundSystem *)ResourceManager::getMusic((ResourceManager *)pHeap, v17);
      *(_DWORD *)(a1 + 24) = (_DWORD)Music;
      Instance = (SoundSystem *)SoundSystem::getInstance(Music);
      SoundSystem::playMusic(Instance, *(_DWORD *)(a1 + 24), 1, 1, Loop);
      *(_QWORD *)(a1 + 48) = xTimer::getNativeTime();
      ++*(_DWORD *)(a1 + 28);
      String::operator=((String *)a1);
      v22 = (float)Volume / 100.0;
      v23 = *(_DWORD *)(a1 + 28);
      *(float *)(a1 + 32) = v22;
      *(float *)(a1 + 36) = v22;
      v24 = 0.0;
      *(float *)(a1 + 44) = (float)DurationSeconds;
      if ( v23 >= PlayCount )
        v24 = (float)FadeOutTimeSeconds;
      v25 = v24 < (float)DurationSeconds;
      v26 = 0.0;
      if ( v25 )
      {
        v27 = v23 < PlayCount;
      }
      else
      {
        v26 = (float)DurationSeconds;
        v27 = 1;
      }
      if ( !v27 )
        v26 = (float)FadeOutTimeSeconds;
      *(float *)(a1 + 40) = v26;
      Name = LogicData::getName(a2);
      v29 = (const char *)(Name + 8);
      if ( *(_DWORD *)(Name + 4) + 1 > 8 )
        v29 = *(const char **)v29;
      if ( v33.m_bytes + 1 > 8 )
        p_internal = (internal_t *)v33.internal.pHeap;
      LOG(
        "[MUSIC] %s var:%d(%s) cnt:%d/%d fadeTime:%.2f\n",
        v29,
        v10,
        (const char *)p_internal,
        *(_DWORD *)(a1 + 28),
        PlayCount,
        *(float *)(a1 + 40));
      if ( VariationCount >= 2 && *(_DWORD *)(a1 + 28) == 1 )
      {
        String::valueOf(&v32, (String *)(unsigned int)(((int)v10 + 1) % VariationCount), v30);
        Application::storeKeyValue((Application *)&v35, &v32, v31);
        String::~String();
      }
      SoundManager::updateVolume((NoAlliance *)a1, 0.0, 1);
      String::~String();
      String::~String();
    }

    __int64 __fastcall SoundManager::fadeMusic(__int64 result, float a2, float a3, float a4)
    {
      *(float *)(result + 216) = a2;
      *(float *)(result + 220) = a3;
      *(float *)(result + 224) = a4;
      *(_DWORD *)(result + 228) = 0;
      return result;
    }

    SoundManager *__fastcall SoundManager::playSound(SoundManager *result, __int64 a2, bool a3, float a4, float a5)
    {
      SoundManager *v8; // x19
      char *v9; // x0
      ResourceManager *v10; // x0
      unsigned int v11; // w21
      #1201 *Instance; // x0
      unsigned int v13; // w20
      SoundSystem *v14; // x0
      SoundSystem *v15; // x0
    
      v8 = result;
      if ( *((_BYTE *)result + 212) )
      {
        if ( a4 < 0.01 )
        {
          v9 = "<SFX> PITCH very small. Ignoring sound!";
          return (SoundManager *)Debugger::warning((__siginfo *)v9, (const char *)a2);
        }
        if ( a5 < 0.01 )
        {
          v9 = "<SFX> VOLUME very small. Ignoring sound!";
          return (SoundManager *)Debugger::warning((__siginfo *)v9, (const char *)a2);
        }
        v10 = (ResourceManager *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v10 = *(ResourceManager **)v10;
        result = (SoundManager *)ResourceManager::getSound(v10, (const char *)a2);
        v11 = (unsigned int)result;
        if ( (_DWORD)result )
        {
          Instance = (#1201 *)SoundSystem::getInstance(result);
          result = (SoundManager *)SoundSystem::playSound(Instance, v11, a5, a3);
          v13 = (unsigned int)result;
          if ( (_DWORD)result )
          {
            v14 = (SoundSystem *)SoundManager::removePlayingSound(v8, (unsigned int)result);
            v15 = (SoundSystem *)SoundSystem::getInstance(v14);
            return (SoundManager *)SoundSystem::setChannelPitch(v15, v13, a4);
          }
        }
      }
      return result;
    }

    void __fastcall SoundManager::removePlayingSound(__int64 a1, int a2)
    {
      __int64 v2; // x9
      __int64 v3; // x8
      _QWORD *v4; // x0
      _DWORD *v5; // x19
    
      v2 = *(int *)(a1 + 92);
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        v4 = (_QWORD *)(a1 + 80);
        while ( 1 )
        {
          v5 = *(_DWORD **)(*v4 + 8 * v3);
          if ( v5[11] == a2 )
            break;
          if ( ++v3 >= v2 )
            return;
        }
        LogicArrayList<PlayingSFX *>::remove(v4, v3);
        if ( v5 )
          operator delete(v5);
      }
    }

    sigval __fastcall SoundManager::playSound(NoAlliance *a1, AreaEffectObject *a2, __int64 a3, float a4, float a5)
    {
      __int64 FileNameCount; // x21
      int PlayVariationsInSequence; // w22
      __int64 v12; // x0
      __int64 v13; // x0
      const char *v14; // x1
      __int64 v15; // x8
      _QWORD *v16; // x23
      int v17; // w2
      GameMain *FileName; // x21
      int MinPitch; // w27
      int MaxPitch; // w22
      int MinVolume; // w25
      int MaxVolume; // w26
      int MaximumByType; // w0
      int v24; // w8
      int StartDelayMinMs; // w28
      int StartDelayMaxMs; // w24
      const String *v27; // x1
      int MaxRepeatMs; // w23
      bool v29; // vf
      int v30; // w24
      int v31; // w24
      float v32; // s9
      int v33; // w22
      int v34; // w24
      float v35; // s11
      float v36; // s9
      float v37; // s8
      __int64 v38; // x22
      unsigned int GlobalID; // w0
      int PadEmpyToEndMs; // [xsp+10h] [xbp-B0h]
      char Loop; // [xsp+14h] [xbp-ACh]
      int v43; // [xsp+18h] [xbp-A8h]
      int Priority; // [xsp+1Ch] [xbp-A4h]
      __int64 v45; // [xsp+20h] [xbp-A0h] BYREF
      __siginfo v46; // [xsp+28h] [xbp-98h] BYREF
    
      if ( !a2 )
        return 0;
      FileNameCount = LogicSoundData::getFileNameCount((__int64)a2);
      if ( !(_DWORD)FileNameCount )
        return 0;
      if ( (a3 & 0x80000000) != 0 )
      {
        PlayVariationsInSequence = LogicSoundData::getPlayVariationsInSequence((__int64)a2);
        if ( (unsigned int)LogicSoundData::getPlayVariationsInSequenceManualReset((__int64)a2) )
        {
          HIDWORD(v46.si_value.sival_ptr) = LogicData::getGlobalID(a2);
          v12 = std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::find(
                  (char *)a1 + 160,
                  (char *)&v46.si_value.sival_ptr + 4);
          if ( (NoAlliance *)v12 == (NoAlliance *)((char *)a1 + 168) )
          {
            v46.si_value.sival_int = LogicData::getGlobalID(a2);
            a3 = 0;
            *(_DWORD *)std::map<int,int>::operator[]((char *)a1 + 160, &v46.si_value) = 1 % (int)FileNameCount;
          }
          else
          {
            a3 = *(unsigned int *)(v12 + 36);
            *(_DWORD *)(v12 + 36) = ((int)a3 + 1) % (int)FileNameCount;
          }
        }
        else if ( PlayVariationsInSequence )
        {
          HIDWORD(v46.si_addr) = LogicData::getGlobalID(a2);
          v13 = std::_Rb_tree<int,std::pair<int const,SFXSequenceInfo *>,std::_Select1st<std::pair<int const,SFXSequenceInfo *>>,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>::find(
                  (char *)a1 + 112,
                  (char *)&v46.si_addr + 4);
          if ( (NoAlliance *)v13 == (NoAlliance *)((char *)a1 + 120) )
          {
            v16 = (_QWORD *)operator new(8);
            *v16 = 1056964608;
            LODWORD(v46.si_addr) = LogicData::getGlobalID(a2);
            a3 = 0;
            *(_QWORD *)std::map<int,SFXSequenceInfo *>::operator[]((char *)a1 + 112, &v46.si_addr) = v16;
          }
          else
          {
            v15 = *(_QWORD *)(v13 + 40);
            if ( *(float *)v15 <= 0.0 )
            {
              a3 = 0;
            }
            else
            {
              a3 = (unsigned int)(*(_DWORD *)(v15 + 4) + 1);
              *(_DWORD *)(v15 + 4) = a3;
            }
            *(_DWORD *)v15 = 1056964608;
          }
          if ( (int)a3 >= (int)FileNameCount )
          {
            if ( SoundManager::sm_debugPrintEnabled )
            {
              String::format(
                (String *)"<SFX> Tried to play variation %d. Maximum variations in CSV is %d",
                v14,
                a3,
                FileNameCount);
              Debugger::hudPrint(&v46, (const String *)0xFFFFFFFFLL, v17);
              String::~String();
            }
            a3 = (unsigned int)(FileNameCount - 1);
          }
        }
        else
        {
          a3 = (unsigned int)(rand() % (int)FileNameCount);
        }
      }
      FileName = (GameMain *)LogicSoundData::getFileName((__int64)a2, a3);
      if ( !*(_DWORD *)FileName )
        return 0;
      MinPitch = LogicSoundData::getMinPitch((__int64)a2, a3);
      MaxPitch = LogicSoundData::getMaxPitch((__int64)a2, a3);
      MinVolume = LogicSoundData::getMinVolume((__int64)a2, a3);
      MaxVolume = LogicSoundData::getMaxVolume((__int64)a2, a3);
      Priority = LogicSoundData::getPriority((__int64)a2, a3);
      MaximumByType = LogicSoundData::getMaximumByType((__int64)a2, a3);
      if ( MaximumByType )
        v24 = MaximumByType;
      else
        v24 = 10;
      v43 = v24;
      StartDelayMinMs = LogicSoundData::getStartDelayMinMs((__int64)a2, a3);
      StartDelayMaxMs = LogicSoundData::getStartDelayMaxMs((__int64)a2, a3);
      Loop = LogicSoundData::getLoop((__int64)a2);
      PadEmpyToEndMs = LogicSoundData::getPadEmpyToEndMs((__int64)a2);
      MaxRepeatMs = LogicSoundData::getMaxRepeatMs((__int64)a2);
      v29 = __OFSUB__(StartDelayMaxMs, StartDelayMinMs);
      v30 = StartDelayMaxMs - StartDelayMinMs;
      if ( !((v30 < 0) ^ v29 | (v30 == 0)) )
        StartDelayMinMs = rand() % v30;
      v31 = (int)(float)(a5 * 1000.0);
      v32 = (float)MinPitch;
      v29 = __OFSUB__(MaxPitch, MinPitch);
      v33 = MaxPitch - MinPitch;
      if ( !((v33 < 0) ^ v29 | (v33 == 0)) )
        v32 = v32 + (float)(rand() % v33);
      v34 = StartDelayMinMs + v31;
      v35 = (float)MinVolume;
      if ( MaxVolume > MinVolume )
        v35 = v35 + (float)(rand() % (MaxVolume - MinVolume));
      v36 = v32 * 0.01;
      v37 = (float)(v35 * 0.01) * a4;
      GameMain::loadAsset(FileName, v27);
      if ( v34 >= 1 )
      {
        v38 = operator new(56);
        DelayedSFX::DelayedSFX((#1360 *)v38);
        v45 = v38;
        String::operator=((String *)v38);
        *(float *)(v38 + 24) = v36;
        *(float *)(v38 + 28) = v37;
        *(_DWORD *)(v38 + 32) = Priority;
        *(_DWORD *)(v38 + 40) = LogicData::getGlobalID(a2);
        *(_DWORD *)(v38 + 36) = v43;
        *(_BYTE *)(v38 + 52) = Loop;
        *(float *)(v38 + 44) = (float)v34 / 1000.0;
        LogicArrayList<DelayedSFX *>::add((char *)a1 + 96, &v45);
        return 0;
      }
      GlobalID = LogicData::getGlobalID(a2);
      return SoundManager::playSound(
               a1,
               (const String *)FileName,
               v36,
               v37,
               Priority,
               v43,
               GlobalID,
               Loop,
               (float)PadEmpyToEndMs * 0.001,
               (float)MaxRepeatMs * 0.001);
    }

    void __fastcall SoundManager::stopAllSounds(int *a1, __int64 a2)
    {
      SoundSystem *Instance; // x0
      const char *v5; // x1
      SoundSystem *v6; // x20
      int v7; // w2
      __int64 v8; // x8
      _QWORD *v9; // x21
      __int64 v10; // x22
      unsigned int *v11; // x23
      __int64 v12; // x8
      SoundSystem *v13; // x0
      int v14; // w8
      __int64 v15; // x19
      void *v16; // x0
      int v17; // w8
      char v18; // [xsp+8h] [xbp-48h] BYREF
    
      Instance = (SoundSystem *)SoundSystem::getInstance((SoundSystem *)a1);
      v6 = Instance;
      if ( SoundManager::sm_debugPrintEnabled )
      {
        String::format((String *)"<SFX> Stopped all sfx with stopAllSounds.", v5);
        Debugger::hudPrint((__siginfo *)&v18, (const String *)0xFFFFFFFFLL, v7);
        String::~String();
      }
      if ( a2 )
      {
        v8 = a1[23];
        if ( (int)v8 >= 1 )
        {
          v9 = a1 + 20;
          v10 = v8 - 1;
          do
          {
            if ( *(_QWORD *)(*v9 + 8 * v10) != a2 )
            {
              v11 = (unsigned int *)LogicArrayList<PlayingSFX *>::remove(v9, v10);
              if ( (unsigned int)SoundSystem::isPlaying(v6, v11[11]) )
              {
                SoundSystem::stopChannel(v6, v11[11]);
    LABEL_10:
                operator delete(v11);
                goto LABEL_11;
              }
              if ( v11 )
                goto LABEL_10;
            }
    LABEL_11:
            v12 = v10-- + 1;
          }
          while ( v12 > 1 );
        }
      }
      else
      {
        v13 = (SoundSystem *)SoundSystem::getInstance(Instance);
        SoundSystem::stopAllChannels(v13);
        v14 = a1[23];
        v15 = (unsigned int)(v14 - 1);
        if ( v14 >= 1 )
        {
          do
          {
            v16 = (void *)LogicArrayList<PlayingSFX *>::remove(a1 + 20, v15);
            if ( v16 )
              operator delete(v16);
            v17 = v15 + 1;
            v15 = (unsigned int)(v15 - 1);
          }
          while ( v17 > 1 );
        }
      }
    }

    float __fastcall SoundManager::getMusicPassedTime(NoAlliance *this)
    {
      xTimer *v1; // x19
      uint64_t NativeTime; // x0
      unsigned __int64 v3; // x2
      long double PassedTimeMs; // q0
    
      v1 = (xTimer *)*((_QWORD *)this + 6);
      NativeTime = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(v1, NativeTime, v3);
      return *(float *)&PassedTimeMs * 0.001;
    }

    float __fastcall SoundManager::getMusicDuration(NoAlliance *this)
    {
      return *((float *)this + 11);
    }

    void __fastcall SoundManager::stopSound(NoAlliance *this, int a2)
    {
      __int64 v2; // x9
      __int64 v3; // x8
      _QWORD *v4; // x0
      _DWORD *v5; // x19
      SoundSystem *v6; // x0
      SoundSystem *Instance; // x20
    
      v2 = *((int *)this + 23);
      if ( (int)v2 >= 1 )
      {
        v3 = 0;
        v4 = (_QWORD *)((char *)this + 80);
        while ( 1 )
        {
          v5 = *(_DWORD **)(*v4 + 8 * v3);
          if ( *v5 == a2 )
            break;
          if ( ++v3 >= v2 )
            return;
        }
        v6 = (SoundSystem *)LogicArrayList<PlayingSFX *>::remove(v4, v3);
        Instance = (SoundSystem *)SoundSystem::getInstance(v6);
        if ( (unsigned int)SoundSystem::isPlaying(Instance, v5[11]) )
          SoundSystem::stopChannel(Instance, v5[11]);
        operator delete(v5);
      }
    }

    __int64 __fastcall SoundManager::initializeMembers(NoAlliance *this)
    {
      __int64 result; // x0
    
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)((char *)this + 52) = 0;
      *(_QWORD *)((char *)this + 44) = 0;
      *((_DWORD *)this + 58) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 28) = 0;
      String::operator=(this, "");
      *((_DWORD *)this + 23) = 0;
      *((_BYTE *)this + 212) = 1;
      *((_BYTE *)this + 213) = 1;
      *((_DWORD *)this + 27) = 0;
      std::_Rb_tree<int,std::pair<int const,SFXSequenceInfo *>,std::_Select1st<std::pair<int const,SFXSequenceInfo *>>,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>::_M_erase(
        (char *)this + 112,
        *((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = (char *)this + 120;
      *((_QWORD *)this + 18) = (char *)this + 120;
      *((_QWORD *)this + 19) = 0;
      result = std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
                 (char *)this + 160,
                 *((_QWORD *)this + 22));
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = (char *)this + 168;
      *((_QWORD *)this + 24) = (char *)this + 168;
      *((_QWORD *)this + 25) = 0;
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 52) = -1;
      return result;
    }

}; // end class SoundManager
