class SoundSystem::Impl
{
public:

    __int64 __fastcall SoundSystem::Impl::preInit(__int64 a1)
    {
      SoundSystem *Property; // x0
      bool v3; // w1
      UInt32 ioDataSize; // [xsp+8h] [xbp-18h] BYREF
      int outData; // [xsp+Ch] [xbp-14h] BYREF
    
      *(_BYTE *)(a1 + 6199) = 0;
      outData = 0;
      ioDataSize = 4;
      Property = (SoundSystem *)AudioSessionGetProperty(0x6F746872u, &ioDataSize, &outData);
      if ( (_DWORD)Property )
        Property = (SoundSystem *)printf(
                                    "SoundSystem::preInit: Error getting the state of any other audio playing %d",
                                    (_DWORD)Property);
      v3 = outData != 0;
      *(_BYTE *)(a1 + 6196) = outData != 0;
      return SoundSystem::setSystemAudioMixing(Property, v3);
    }

    void __fastcall SoundSystem::Impl::interruptionListenerCallback(__int64 *a1, int a2)
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          beginAudioInterruption((SoundSystem *)a1);
      }
      else
      {
        endAudioInterruption(a1);
      }
    }

    __int64 __fastcall SoundSystem::Impl::initOpenAL(__int64 a1, void *a2)
    {
      ALCdevice *v4; // x0
      long double v5; // q0
      ALCcontext *Context; // x0
      const char *v8; // x0
    
      AudioSessionInitialize(
        0,
        kCFRunLoopDefaultMode,
        (AudioSessionInterruptionListener)SoundSystem::Impl::interruptionListenerCallback,
        a2);
      soundSystem = (__int64)a2;
      SoundSystem::Impl::preInit(a1);
      v4 = alcOpenDevice(0);
      *(_QWORD *)(a1 + 6216) = v4;
      if ( v4 )
      {
        *(_QWORD *)&v5 = 0x40E5888000000000LL;
        alcMacOSXMixerOutputRateProc(v5);
        Context = alcCreateContext(*(ALCdevice **)(a1 + 6216), 0);
        *(_QWORD *)(a1 + 6208) = Context;
        if ( Context )
        {
          alcMakeContextCurrent(Context);
          alListener3f(4100, 0.0, 0.0, 1.0);
          alGenSources(32, (ALuint *)(a1 + 6224));
          return 1;
        }
        v8 = "SoundSystem::initOpenAL: Could not create OpenAL context";
      }
      else
      {
        v8 = "SoundSystem::initOpenAL: Could not init OpenAL";
      }
      puts(v8);
      return 0;
    }

    __int64 __fastcall SoundSystem::Impl::~Impl(__int64 a1)
    {
      OpaqueAudioQueue *v2; // x0
      __int64 v3; // x20
      OpaqueAudioFileID *v4; // x0
      __int64 v5; // x0
      ALCcontext *v6; // x0
      ALCdevice *v7; // x0
    
      v2 = *(OpaqueAudioQueue **)a1;
      if ( v2 )
        AudioQueueDispose(v2, 1u);
      v3 = -6144;
      do
      {
        v4 = *(OpaqueAudioFileID **)(a1 + v3 + 6224);
        if ( v4 )
          AudioFileClose(v4);
        v5 = *(_QWORD *)(a1 + v3 + 6216);
        if ( v5 )
          operator delete[](v5);
        v3 += 96;
      }
      while ( v3 );
      *(_DWORD *)(a1 + 32) = 0;
      if ( *(_DWORD *)(a1 + 6224) )
        alDeleteSources(32, (const ALuint *)(a1 + 6224));
      v6 = *(ALCcontext **)(a1 + 6208);
      if ( v6 )
        alcDestroyContext(v6);
      v7 = *(ALCdevice **)(a1 + 6216);
      if ( v7 )
        alcCloseDevice(v7);
      AudioSessionSetActive(0);
      return a1;
    }

    __int64 __fastcall SoundSystem::Impl::queueCallback(__int64 result, void *a2, AudioQueueBuffer *a3)
    {
      __int64 v5; // x19
      __int64 v6; // x24
      __int64 v7; // x25
      __int64 v8; // x23
      _BYTE *v9; // x23
      int v10; // t1
      __int64 v11; // x26
      __int64 v12; // x26
      AudioStreamPacketDescription *v13; // t1
      _QWORD *v14; // x22
      AudioQueueBuffer *v15; // x3
      UInt32 v16; // w8
      UInt32 v17; // w2
      UInt32 outNumBytes; // [xsp+8h] [xbp-48h] BYREF
      UInt32 ioNumPackets; // [xsp+Ch] [xbp-44h] BYREF
    
      v5 = result;
      v6 = *(unsigned int *)(result + 6200);
      v7 = result + 48;
      v8 = result + 48 + 96 * v6;
      v10 = *(unsigned __int8 *)(v8 + 88);
      v9 = (_BYTE *)(v8 + 88);
      if ( v10 )
      {
        v11 = v7 + 96 * v6;
        ioNumPackets = *(_DWORD *)(v11 + 16);
        v13 = *(AudioStreamPacketDescription **)(v11 + 24);
        v12 = v11 + 24;
        v14 = (_QWORD *)(v12 - 16);
        AudioFileReadPackets(
          *(AudioFileID *)(v12 + 8),
          0,
          &outNumBytes,
          v13,
          *(_QWORD *)(v12 - 16),
          &ioNumPackets,
          a3->mAudioData);
        v16 = ioNumPackets;
        if ( ioNumPackets )
        {
          a3->mAudioDataByteSize = outNumBytes;
          if ( *(_QWORD *)v12 )
            v17 = v16;
          else
            v17 = 0;
          result = AudioQueueEnqueueBuffer(*(AudioQueueRef *)v5, a3, v17, *(const AudioStreamPacketDescription **)v12);
          *v14 += ioNumPackets;
          *(_BYTE *)(v5 + 6198) = 1;
        }
        else if ( *(_BYTE *)(v7 + 96 * v6 + 89) )
        {
          *v14 = 0;
          return SoundSystem::Impl::queueCallback((SoundSystem::Impl *)v5, a2, (OpaqueAudioQueue *)a3, v15);
        }
        else
        {
          result = AudioQueueStop(*(AudioQueueRef *)v5, 0);
          *v9 = 0;
          *(_WORD *)(v5 + 6197) = 0;
        }
      }
      return result;
    }

    __int64 __fastcall SoundSystem::Impl::setupQueue(__int64 a1, __int64 a2)
    {
      OpaqueAudioQueue *v4; // x0
      bool v6; // zf
      void *v7; // x21
      OSStatus Property; // w0
      OSStatus v9; // w20
      UInt32 outDataSize; // [xsp+Ch] [xbp-24h] BYREF
    
      v4 = *(OpaqueAudioQueue **)a1;
      if ( v4 )
      {
        AudioQueueDispose(v4, 0);
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_QWORD *)a1 = 0;
      outDataSize = 0;
      if ( AudioQueueNewOutput(
             (const AudioStreamBasicDescription *)(a2 + 40),
             (AudioQueueOutputCallback)SoundSystem::Impl::queueCallback,
             (void *)a1,
             0,
             kCFRunLoopCommonModes,
             0,
             (AudioQueueRef *)a1) )
      {
        printf("SoundSystem::setupQueue: Error creating queue %d\n");
        return 0;
      }
      attachCookie(*(OpaqueAudioQueue **)a1, *(OpaqueAudioFileID **)(a2 + 32));
      if ( AudioFileGetPropertyInfo(*(AudioFileID *)(a2 + 32), 0x636D6170u, &outDataSize, 0) )
        v6 = 1;
      else
        v6 = outDataSize == 0;
      if ( !v6 )
      {
        v7 = malloc(outDataSize);
        Property = AudioFileGetProperty(*(AudioFileID *)(a2 + 32), 0x636D6170u, &outDataSize, v7);
        if ( Property )
        {
          printf("SoundSystem::setupQueue: Error getting channel layout from file %d\n", Property);
          free(v7);
          return 0;
        }
        v9 = AudioQueueSetProperty(*(AudioQueueRef *)a1, 0x6171636Cu, v7, outDataSize);
        free(v7);
        if ( v9 )
        {
          printf("SoundSystem::setupQueue: Error setting channel layout on queue %d\n");
          return 0;
        }
      }
      *(_QWORD *)(a1 + 36) = 0;
      return 1;
    }

    __int64 __fastcall SoundSystem::Impl::setupBuffers(__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
      unsigned int v6; // w12
      unsigned int v7; // w8
      unsigned int v8; // w21
      _BOOL4 v9; // w10
      unsigned int v11; // w8
      __int64 v12; // x0
      int v13; // w22
      AudioQueueBufferRef *v14; // x21
      UInt32 ioDataSize; // [xsp+8h] [xbp-28h] BYREF
      unsigned int outPropertyData; // [xsp+Ch] [xbp-24h] BYREF
    
      v4 = *(_QWORD *)(a2 + 24);
      if ( v4 )
        operator delete[](v4);
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)a2 = 0;
      ioDataSize = 4;
      if ( AudioFileGetProperty(*(AudioFileID *)(a2 + 32), 0x706B7562u, &ioDataSize, &outPropertyData) )
      {
        printf("SoundSystem::setupBuffers: Error getting packet upper bound size: %d\n");
        return 0;
      }
      v6 = *(_DWORD *)(a2 + 60);
      v7 = outPropertyData;
      if ( v6 )
      {
        v8 = (unsigned int)((double)outPropertyData * (*(double *)(a2 + 40) / (double)v6 * 0.1));
      }
      else if ( outPropertyData >= 0xA00000 )
      {
        v8 = outPropertyData;
      }
      else
      {
        v8 = 10485760;
      }
      v9 = *(_DWORD *)(a2 + 56) == 0 || v6 == 0;
      *(_DWORD *)a2 = v8;
      if ( v8 > 0xA00000 && v8 > v7 )
      {
        *(_DWORD *)a2 = 10485760;
        v8 = 10485760;
      }
      else if ( v8 <= 0xFFF )
      {
        v8 = 4096;
        *(_DWORD *)a2 = 4096;
      }
      v11 = v8 / v7;
      *(_DWORD *)(a2 + 16) = v11;
      if ( v9 )
        v12 = operator new[](16LL * v11);
      else
        v12 = 0;
      *(_QWORD *)(a2 + 24) = v12;
      if ( v8 > *(_DWORD *)(a1 + 32) )
      {
        v13 = 0;
        *(_DWORD *)(a1 + 32) = v8;
        v14 = (AudioQueueBufferRef *)(a1 + 8);
        while ( !*v14 || !AudioQueueFreeBuffer(*(AudioQueueRef *)a1, *v14) )
        {
          if ( AudioQueueAllocateBuffer(*(AudioQueueRef *)a1, *(_DWORD *)(a1 + 32), v14) )
          {
            printf("SoundSystem::setupBuffers: Error allocating buffer for queue %d.\n");
            return 0;
          }
          ++v14;
          if ( (unsigned int)++v13 > 2 )
            goto LABEL_28;
        }
        printf("SoundSystem::setupBuffers: Error freeing buffer for queue %d.\n");
        return 0;
      }
    LABEL_28:
      *(_QWORD *)(a2 + 8) = 0;
      return 1;
    }

}; // end class SoundSystem::Impl
