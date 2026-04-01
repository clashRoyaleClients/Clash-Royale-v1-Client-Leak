class SoundSystem
{
public:

    __int64 __fastcall SoundSystem::setSystemAudioMixing(__int64 a1, int a2)
    {
      int v3; // w8
      OSStatus v4; // w0
      __int64 result; // x0
      int inData; // [xsp+Ch] [xbp-14h] BYREF
    
      if ( !isOsAtLeast3_0() )
        v3 = 1634558569;
      else
        v3 = 1936682095;
      if ( a2 )
        v3 = 1634558569;
      inData = v3;
      v4 = AudioSessionSetProperty(0x61636174u, 4u, &inData);
      if ( v4 )
        printf("SoundSystem::preInit: Error setting audio category (2nd) %d", v4);
      result = AudioSessionSetActive(1u);
      if ( (_DWORD)result )
        return printf("SoundSystem::preInit: Error activating session (2nd) %d", result);
      return result;
    }

    AudioQueueRef **__fastcall SoundSystem::setMusicPaused(AudioQueueRef **result, int a2)
    {
      AudioQueueRef *v2; // x8
      _BYTE *v3; // x9
    
      v2 = *result;
      v3 = (char *)*result + 6197;
      if ( !*v3 || ((a2 ^ 1) & 1) != 0 )
      {
        if ( !*v3 )
        {
          *v3 = 1;
          return (AudioQueueRef **)AudioQueueStart(*v2, 0);
        }
      }
      else
      {
        *v3 = 0;
        return (AudioQueueRef **)AudioQueuePause(*v2);
      }
      return result;
    }

    __int64 SoundSystem::getInstance()
    {
      return SoundSystem::sm_pInstance;
    }

    SoundSystem *__fastcall SoundSystem::constructInstance(int a1)
    {
      SoundSystem *v2; // x19
      SoundSystem *result; // x0
    
      v2 = (SoundSystem *)operator new(16);
      result = SoundSystem::SoundSystem(v2, a1);
      SoundSystem::sm_pInstance = (__int64)v2;
      return result;
    }

    void SoundSystem::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)SoundSystem::sm_pInstance;
      if ( SoundSystem::sm_pInstance )
      {
        SoundSystem::~SoundSystem((SoundSystem *)SoundSystem::sm_pInstance);
        operator delete(v0);
      }
      SoundSystem::sm_pInstance = 0;
    }

    SoundSystem *__fastcall SoundSystem::SoundSystem(SoundSystem *a1, unsigned int a2)
    {
      __int64 v4; // x20
      _QWORD *v5; // x0
      _QWORD *v6; // x8
      _QWORD *v7; // x10
    
      v4 = operator new(6496);
      bzero((void *)(v4 + 48), 0x1800u);
      *(_QWORD *)(v4 + 16) = 0;
      *(_QWORD *)(v4 + 24) = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 6192) = 1065353216;
      *(_QWORD *)(v4 + 6216) = 0;
      *(_QWORD *)(v4 + 6208) = 0;
      *(_DWORD *)(v4 + 6488) = 1065353216;
      *(_DWORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 6196) = 0;
      *(_QWORD *)v4 = 0;
      *(_QWORD *)a1 = v4;
      *((_DWORD *)a1 + 2) = a2;
      v5 = (_QWORD *)operator new[](280LL * a2 + 16);
      *v5 = 280;
      v5[1] = a2;
      v6 = v5 + 2;
      if ( a2 )
      {
        v7 = v5 + 2;
        do
        {
          *(_DWORD *)v7 = 0;
          v7[1] = 0;
          *((_DWORD *)v7 + 4) = 0;
          *((_BYTE *)v7 + 24) = 0;
          v7 += 35;
        }
        while ( v7 != &v6[35 * a2] );
        v4 = *(_QWORD *)a1;
      }
      *(_QWORD *)(v4 + 6480) = v6;
      SoundSystem::Impl::initOpenAL((SoundSystem::Impl *)v4, a1);
      return a1;
    }

    __int64 __fastcall SoundSystem::~SoundSystem(__int64 a1)
    {
      _QWORD *v2; // x20
      __int64 v3; // x22
      __int64 v4; // x8
      __int64 v5; // x21
    
      v2 = *(_QWORD **)a1;
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 6480LL);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 - 8);
        if ( v4 )
        {
          v5 = 280 * v4;
          do
          {
            SoundSystem::Impl::SoundFX::purge(v3 - 280 + v5);
            v5 -= 280;
          }
          while ( v5 );
        }
        operator delete[](v3 - 16);
        v2 = *(_QWORD **)a1;
      }
      v2[810] = 0;
      if ( v2 )
      {
        SoundSystem::Impl::~Impl((__int64)v2);
        operator delete(v2);
      }
      *(_QWORD *)a1 = 0;
      return a1;
    }

    void __fastcall SoundSystem::update(ScrollResolutionOptions *this)
    {
      bool v1; // zf
    
      if ( g_soundToStop )
        v1 = iOs4AudioInterrupted == 0;
      else
        v1 = 0;
      if ( v1 )
      {
        alSourceStop(g_soundToStop);
        g_soundToStop = 0;
      }
    }

    __int64 __fastcall SoundSystem::loadSound(_DWORD *a1, const char *a2)
    {
      __int64 v4; // x22
      __int64 v5; // x19
      unsigned int v6; // w23
      __int64 v7; // x8
      int v8; // w0
    
      v4 = 0;
      LODWORD(v5) = 0;
      v6 = a1[2];
      while ( (unsigned int)v5 < v6 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 6480LL);
        if ( !*(_DWORD *)(v7 + v4) )
        {
          if ( (_DWORD)v5 != -1 )
          {
            v5 = (unsigned int)(v5 + 1);
            SoundSystem::Impl::SoundFX::loadFile((unsigned int *)(v7 + v4), a2);
            return v5;
          }
          return 0;
        }
        v8 = strcmp((const char *)(v7 + v4 + 24), a2);
        v5 = (unsigned int)(v5 + 1);
        v4 += 280;
        if ( !v8 )
          return v5;
      }
      return 0;
    }

    void __fastcall SoundSystem::unloadSound(ScrollResolutionOptions *this, unsigned int a2)
    {
      if ( a2 && *((_DWORD *)this + 2) >= a2 )
        SoundSystem::Impl::SoundFX::purge(*(_QWORD *)(*(_QWORD *)this + 6480LL) + 280LL * (a2 - 1));
      else
        printf("SoundSystem::playSfx: Sfx handle out of range (%d)\n", a2);
    }

    __int64 __fastcall SoundSystem::playSound(ScrollResolutionOptions *this, unsigned int a2, float a3, ALint a4)
    {
      __int64 v8; // x8
      float v9; // s9
      __int64 v12; // x8
      __int64 v13; // x22
      __int64 v14; // x9
      __int64 v15; // x8
      ALint value; // [xsp+Ch] [xbp-44h] BYREF
    
      v8 = *(_QWORD *)this;
      v9 = *(float *)(*(_QWORD *)this + 6488LL);
      if ( v9 < 0.001 && a4 == 0 )
        return 0;
      if ( !a2 || *((_DWORD *)this + 2) < a2 )
      {
        printf("SoundSystem::playSfx: Sfx handle out of range (%d)\n", a2);
        return 0;
      }
      value = 0;
      alGetSourcei(*(_DWORD *)(v8 + 6224), 4112, &value);
      v12 = 0;
      if ( value == 4114 )
      {
        while ( 1 )
        {
          v13 = v12 + 1;
          if ( (unsigned int)(v12 + 1) > 0x1F )
            return 0;
          v14 = *(_QWORD *)this;
          value = 0;
          alGetSourcei(*(_DWORD *)(v14 + 4 * v12 + 6228), 4112, &value);
          v12 = v13;
          if ( value != 4114 )
            goto LABEL_14;
        }
      }
      LODWORD(v13) = 0;
    LABEL_14:
      v15 = *(_QWORD *)this + 4LL * (int)v13;
      *(float *)(v15 + 6352) = a3;
      alSourceStop(*(_DWORD *)(v15 + 6224));
      alSourcei(
        *(_DWORD *)(*(_QWORD *)this + 4LL * (int)v13 + 6224),
        4105,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 6480LL) + 280LL * (a2 - 1)));
      alSourcei(*(_DWORD *)(*(_QWORD *)this + 4LL * (int)v13 + 6224), 4103, a4);
      alSourcef(*(_DWORD *)(*(_QWORD *)this + 4LL * (int)v13 + 6224), 4106, v9 * a3);
      alSourcef(*(_DWORD *)(*(_QWORD *)this + 4LL * (int)v13 + 6224), 4099, 1.0);
      alSourcePlay(*(_DWORD *)(*(_QWORD *)this + 4LL * (int)v13 + 6224));
      return (unsigned int)(v13 + 1);
    }

    bool __fastcall SoundSystem::isPlaying(ScrollResolutionOptions *this, int a2)
    {
      ALint value; // [xsp+Ch] [xbp-4h] BYREF
    
      value = 0;
      alGetSourcei(*(_DWORD *)(*(_QWORD *)this + 4LL * (unsigned int)(a2 - 1) + 6224), 4112, &value);
      return value == 4114;
    }

    float __fastcall SoundSystem::getSoundLengthSeconds(_DWORD *a1, unsigned int a2)
    {
      if ( a2 && a1[2] >= a2 )
        return *(float *)(*(_QWORD *)(*(_QWORD *)a1 + 6480LL) + 280LL * (a2 - 1) + 20);
      printf("SoundSystem::getSoundLengthSeconds: Sfx handle out of range (%d)\n", a2);
      return 0.0;
    }

    void __fastcall SoundSystem::setChannelVolume(__int64 *a1, unsigned int a2, float a3)
    {
      __int64 v3; // x9
      __int64 v4; // x8
    
      if ( a2 )
      {
        if ( a2 < 0x21 )
        {
          v3 = *a1;
          v4 = *a1 + 4LL * (a2 - 1);
          *(float *)(v4 + 6352) = a3;
          alSourcef(*(_DWORD *)(v4 + 6224), 4106, *(float *)(v3 + 6488) * a3);
        }
        else
        {
          printf("SoundSystem::stopSfx: Channel out of range (%d)\n", a2);
        }
      }
    }

    void __fastcall SoundSystem::setChannelPitch(_QWORD *a1, unsigned int a2, ALfloat a3)
    {
      if ( a2 )
      {
        if ( a2 < 0x21 )
          alSourcef(*(_DWORD *)(*a1 + 4LL * (a2 - 1) + 6224), 4099, a3);
        else
          printf("SoundSystem::stopSfx: Channel out of range (%d)\n", a2);
      }
    }

    void __fastcall SoundSystem::stopChannel(_QWORD *a1, unsigned int a2)
    {
      ALuint v2; // w0
    
      if ( a2 )
      {
        if ( a2 < 0x21 )
        {
          v2 = *(_DWORD *)(*a1 + 4LL * (a2 - 1) + 6224);
          if ( iOs4AudioInterrupted )
            g_soundToStop = v2;
          else
            alSourceStop(v2);
        }
        else
        {
          printf("SoundSystem::stopSfx: Channel out of range (%d)\n", a2);
        }
      }
    }

    void __fastcall SoundSystem::stopAllChannels(_QWORD *a1)
    {
      __int64 i; // x20
    
      for ( i = 1556; i != 1588; ++i )
        alSourceStop(*(_DWORD *)(*a1 + 4 * i));
    }

    __int64 __fastcall SoundSystem::isPlayingMusic(__int64 a1)
    {
      return *(unsigned __int8 *)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(*(_QWORD *)a1 + 6200LL) + 136);
    }

    __int64 __fastcall SoundSystem::loadMusic(_QWORD *a1, const char *a2)
    {
      __int64 v4; // x23
      __int64 v5; // x21
      AudioFileID *v6; // x22
      _BYTE *v7; // x24
      size_t v8; // x0
      const __CFURL *v9; // x0
      const __CFURL *v10; // x21
      __int64 v12; // x8
      __int64 v13; // x8
      _BYTE outAudioFile[12]; // [xsp+10h] [xbp-40h] BYREF
      UInt32 ioDataSize; // [xsp+1Ch] [xbp-34h] BYREF
    
      v4 = 0;
      v5 = *a1;
      v6 = (AudioFileID *)(*a1 + 80LL);
      do
      {
        if ( !*v6 )
          goto LABEL_7;
        ++v4;
        v6 += 12;
      }
      while ( (unsigned int)v4 < 0x40 );
      if ( (_DWORD)v4 == 64 )
        return 0;
      if ( *v6 )
        AudioFileClose(*v6);
    LABEL_7:
      v7 = (_BYTE *)(v5 + 96 * v4);
      v7[136] = 0;
      ioDataSize = 40;
      v8 = strlen(a2);
      v9 = CFURLCreateFromFileSystemRepresentation(kCFAllocatorDefault, (const UInt8 *)a2, v8, 0);
      v10 = v9;
      if ( !v9 )
        goto LABEL_14;
      *(_QWORD *)outAudioFile = 0;
      AudioFileOpenURL(v9, kAudioFileReadPermission, 0, (AudioFileID *)outAudioFile);
      CFRelease(v10);
      if ( !*(_QWORD *)outAudioFile )
      {
        printf("loadFileDataInfo: Error opening file %s\n");
        goto LABEL_14;
      }
      if ( AudioFileGetProperty(*(AudioFileID *)outAudioFile, 0x64666D74u, &ioDataSize, v7 + 88) )
      {
        printf("loadFileDataInfo: Error getting file format %s\n");
    LABEL_14:
        *v6 = 0;
    LABEL_15:
        printf("SoundSystem::loadMusic: Error getting file data info %s\n", a2);
        return 0;
      }
      ioDataSize = 8;
      if ( AudioFileGetProperty(*(AudioFileID *)outAudioFile, 0x62636E74u, &ioDataSize, v7 + 128) )
      {
        printf("loadFileDataInfo: Error getting file data size %s\n");
        goto LABEL_14;
      }
      v12 = *(_QWORD *)outAudioFile;
      *v6 = *(AudioFileID *)outAudioFile;
      if ( !v12 )
        goto LABEL_15;
      v13 = *a1;
      *(_BYTE *)(v13 + 6197) = 0;
      *(_BYTE *)(v13 + 6198) = 0;
      return (unsigned int)(v4 + 1);
    }

    void __fastcall SoundSystem::unloadMusic(AudioQueueRef **a1, unsigned int a2)
    {
      __int64 v2; // x19
      AudioQueueRef *v3; // x20
      AudioQueueRef *v4; // x21
      AudioQueueRef v5; // x0
      _QWORD *v6; // x21
      AudioQueueRef v7; // t1
      AudioQueueRef *v8; // x8
    
      if ( a2 )
      {
        if ( a2 < 0x41 )
        {
          v2 = (int)(a2 - 1);
          v3 = *a1;
          if ( LOBYTE((*a1)[12 * v2 + 17]) )
            AudioQueueStop(*v3, 1u);
          v4 = &v3[12 * v2];
          v7 = v4[9];
          v6 = v4 + 9;
          v5 = v7;
          if ( v7 )
            operator delete[](v5);
          *v6 = 0;
          v8 = &v3[12 * v2];
          v8[7] = 0;
          *((_DWORD *)v8 + 16) = 0;
          *((_DWORD *)v8 + 12) = 0;
        }
        else
        {
          printf("SoundSystem::unloadMusic: track out of range (%d)\n", a2);
        }
      }
    }

    __int64 __fastcall SoundSystem::playMusic(__int64 result, unsigned int a2, int a3, int a4, char a5)
    {
      SoundSystem *v9; // x19
      unsigned int i; // w21
      __int64 v11; // x26
      __int64 v12; // x21
      __int64 v13; // x8
      __int64 v14; // x25
      __int64 v15; // x8
      __int64 v16; // x8
      __int64 v17; // x0
      __int64 v18; // x20
    
      v9 = (SoundSystem *)result;
      if ( a2 )
      {
        if ( a2 < 0x41 )
        {
          for ( i = 1; i != 65; ++i )
            SoundSystem::stopMusic(v9, i, 1);
          v11 = a2 - 1;
          v12 = *(_QWORD *)v9;
          *(_DWORD *)(v12 + 6200) = v11;
          v13 = v12 + 96 * v11;
          v14 = v13 + 48;
          *(_BYTE *)(v13 + 137) = a5;
          if ( (SoundSystem::Impl::setupQueue(v12, v13 + 48) & 1) != 0 )
          {
            if ( (SoundSystem::Impl::setupBuffers(*(_QWORD *)v9, v14) & 1) != 0 )
            {
              v15 = *(_QWORD *)v9;
              result = **(_QWORD **)v9;
              if ( result )
              {
                if ( a3 && *(_BYTE *)(v15 + 6198) && *(_BYTE *)(v15 + 6197) )
                {
                  *(_BYTE *)(v15 + 6197) = 0;
                  AudioQueueStop((AudioQueueRef)result, 1u);
                  v15 = *(_QWORD *)v9;
                  *(_BYTE *)(v15 + 6198) = 0;
                  result = *(_QWORD *)v15;
                }
                *(_DWORD *)(v15 + 36) = 0;
                *(_DWORD *)(v15 + 40) = 0;
                v16 = v12 + 96 * v11;
                *(_BYTE *)(v16 + 136) = 1;
                attachCookie((OpaqueAudioQueue *)result, *(OpaqueAudioFileID **)(v16 + 80));
                if ( a4 )
                  *(_QWORD *)(v12 + 96 * v11 + 56) = 0;
                v17 = *(_QWORD *)v9;
                v18 = 8;
                if ( !*(_BYTE *)(*(_QWORD *)v9 + 6198LL) )
                {
                  do
                  {
                    SoundSystem::Impl::queueCallback(v17, *(void **)v17, *(AudioQueueBuffer **)(v17 + v18));
                    v17 = *(_QWORD *)v9;
                    v18 += 8;
                  }
                  while ( v18 != 32 );
                }
                result = AudioQueueSetParameter(*(AudioQueueRef *)v17, 1u, *(AudioQueueParameterValue *)(v17 + 6192));
                if ( !*(_BYTE *)(*(_QWORD *)v9 + 6197LL) )
                {
                  result = AudioQueueStart(**(AudioQueueRef **)v9, 0);
                  if ( (_DWORD)result )
                    return printf("SoundSystem::playMusic(): Error starting queue %d\n");
                  else
                    *(_BYTE *)(*(_QWORD *)v9 + 6197LL) = 1;
                }
              }
            }
            else
            {
              return printf("SoundSystem::playMusic: Error setting up queue buffers %d\n");
            }
          }
          else
          {
            return printf("SoundSystem::playMusic: Error setting up queue %d\n");
          }
        }
        else
        {
          return printf("SoundSystem::playMusic: track out of range (%d)\n");
        }
      }
      return result;
    }

    __int64 __fastcall SoundSystem::stopMusic(__int64 result, unsigned int a2, int a3)
    {
      _QWORD *v3; // x19
      __int64 v4; // x8
    
      v3 = (_QWORD *)result;
      if ( a2 )
      {
        if ( a2 < 0x41 )
        {
          v4 = *(_QWORD *)result;
          *(_BYTE *)(*(_QWORD *)result + 96LL * (a2 - 1) + 136) = 0;
          if ( a3 && *(_BYTE *)(v4 + 6198) )
          {
            if ( *(_BYTE *)(v4 + 6197) )
            {
              *(_BYTE *)(v4 + 6197) = 0;
              result = AudioQueueStop(*(AudioQueueRef *)v4, 1u);
              *(_BYTE *)(*v3 + 6198LL) = 0;
            }
          }
        }
        else
        {
          return printf("SoundSystem::stopMusic(): track out of range (%d)\n", a2);
        }
      }
      return result;
    }

    __int64 __fastcall SoundSystem::setMusicVolume(__int64 *a1, AudioQueueParameterValue a2)
    {
      __int64 v2; // x8
      __int64 result; // x0
    
      v2 = *a1;
      *(AudioQueueParameterValue *)(v2 + 6192) = a2;
      result = AudioQueueSetParameter(*(AudioQueueRef *)v2, 1u, a2);
      if ( (_DWORD)result )
        return printf("SoundSystem::setMusicVolume(): Error setting queue param %d\n", result);
      return result;
    }

}; // end class SoundSystem
