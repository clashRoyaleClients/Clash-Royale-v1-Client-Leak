class SoundSystem::Impl::SoundFX
{
public:

    void __fastcall SoundSystem::Impl::SoundFX::purge(__int64 a1)
    {
      void *v2; // x0
    
      if ( *(_DWORD *)a1 )
      {
        alDeleteBuffers(1, (const ALuint *)a1);
        *(_DWORD *)a1 = 0;
      }
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        free(v2);
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 16) = 0;
    }

    __int64 __fastcall SoundSystem::Impl::SoundFX::loadFile(unsigned int *a1, const char *a2)
    {
      const char *v3; // x20
      size_t v4; // x0
      const __CFURL *v5; // x20
      unsigned int v6; // w8
      UInt32 v7; // x23^4
      unsigned int v8; // w8
      int v9; // w27
      __int64 v10; // x20
      unsigned int v11; // w8
      int v12; // w11
      unsigned int v13; // w9
      __int64 v14; // x23
      __int64 v15; // x21
      __int64 v16; // x22
      double v17; // d8
      void (__fastcall *ProcAddress)(__int64, __int64, __int64, __int64, _QWORD); // x8
      unsigned __int64 v19; // d1
      float v20; // s1
      _BYTE v22[16392]; // [xsp-4000h] [xbp-4100h] BYREF
      UInt32 ioNumberFrames; // [xsp+14h] [xbp-ECh] BYREF
      AudioBufferList ioData; // [xsp+18h] [xbp-E8h] BYREF
      __int64 v25; // [xsp+30h] [xbp-D0h] BYREF
      double inPropertyData; // [xsp+38h] [xbp-C8h] BYREF
      __int64 v27; // [xsp+40h] [xbp-C0h]
      __int64 v28; // [xsp+48h] [xbp-B8h]
      __int64 v29; // [xsp+50h] [xbp-B0h]
      __int64 v30; // [xsp+58h] [xbp-A8h]
      _QWORD outPropertyData[4]; // [xsp+60h] [xbp-A0h] BYREF
      __int64 v32; // [xsp+80h] [xbp-80h]
      UInt32 ioPropertyDataSize; // [xsp+8Ch] [xbp-74h] BYREF
      __int128 outExtAudioFile; // [xsp+90h] [xbp-70h] BYREF
    
      v3 = (const char *)(a1 + 6);
      strcpy((char *)a1 + 24, a2);
      *((_BYTE *)a1 + 279) = 0;
      v4 = strlen(v3);
      v5 = CFURLCreateFromFileSystemRepresentation(0, (const UInt8 *)v3, v4, 0);
      if ( ExtAudioFileOpenURL(v5, (ExtAudioFileRef *)&outExtAudioFile) )
        __assert_rtn(
          "loadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/SoundSystem.cpp",
          416,
          "status == noErr");
      CFRelease(v5);
      v32 = 0;
      memset(outPropertyData, 0, sizeof(outPropertyData));
      ioPropertyDataSize = 40;
      if ( ExtAudioFileGetProperty((ExtAudioFileRef)outExtAudioFile, 0x66666D74u, &ioPropertyDataSize, outPropertyData) )
        __assert_rtn(
          "loadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/SoundSystem.cpp",
          423,
          "status == noErr");
      v29 = 0x200000000LL;
      v30 = 0;
      v27 = 0xC6C70636DLL;
      v28 = 0;
      inPropertyData = *(double *)outPropertyData;
      if ( (_DWORD)v32 == 8 )
        v6 = 8;
      else
        v6 = 16;
      LODWORD(v30) = v6;
      LODWORD(v29) = v6 >> 2;
      LODWORD(v28) = v6 >> 2;
      HIDWORD(v28) = 1;
      if ( ExtAudioFileSetProperty((ExtAudioFileRef)outExtAudioFile, 0x63666D74u, 0x28u, &inPropertyData) )
        __assert_rtn(
          "loadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/SoundSystem.cpp",
          441,
          "status == noErr");
      v25 = 0;
      ioPropertyDataSize = 8;
      if ( ExtAudioFileGetProperty((ExtAudioFileRef)outExtAudioFile, 0x2366726Du, &ioPropertyDataSize, &v25) )
        __assert_rtn(
          "loadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/SoundSystem.cpp",
          446,
          "status == noErr");
      v7 = HIDWORD(v29);
      v8 = v29 * v25;
      a1[4] = v29 * v25;
      *((_QWORD *)a1 + 1) = malloc(v8);
      ioData.mNumberBuffers = 1;
      ioData.mBuffers[0].mNumberChannels = v7;
      ioData.mBuffers[0].mDataByteSize = 0x4000;
      ioData.mBuffers[0].mData = v22;
      ioNumberFrames = 4096;
      if ( ExtAudioFileRead((ExtAudioFileRef)outExtAudioFile, &ioNumberFrames, &ioData) )
    LABEL_12:
        __assert_rtn(
          "loadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/SoundSystem.cpp",
          472,
          "status == noErr");
      v9 = 0;
      while ( ioNumberFrames )
      {
        memcpy((void *)(*((_QWORD *)a1 + 1) + v9), ioData.mBuffers[0].mData, ioData.mBuffers[0].mDataByteSize);
        ioData.mNumberBuffers = 1;
        v9 += ioData.mBuffers[0].mDataByteSize;
        ioData.mBuffers[0].mNumberChannels = HIDWORD(v29);
        ioData.mBuffers[0].mDataByteSize = 0x4000;
        ioData.mBuffers[0].mData = v22;
        ioNumberFrames = 4096;
        if ( ExtAudioFileRead((ExtAudioFileRef)outExtAudioFile, &ioNumberFrames, &ioData) )
          goto LABEL_12;
      }
      ExtAudioFileDispose((ExtAudioFileRef)outExtAudioFile);
      alGenBuffers(1, a1);
      if ( (_DWORD)v27 == 1819304813 && (unsigned int)(HIDWORD(v29) - 1) <= 1 )
      {
        if ( HIDWORD(v29) == 1 )
          v11 = 4353;
        else
          v11 = 4355;
        if ( HIDWORD(v29) == 1 )
          v12 = 4352;
        else
          v12 = 4354;
        if ( (_DWORD)v30 == 8 )
          v13 = v12;
        else
          v13 = -1;
        if ( (_DWORD)v30 == 16 )
          v10 = v11;
        else
          v10 = v13;
      }
      else
      {
        v10 = 0xFFFFFFFFLL;
      }
      v14 = *a1;
      v15 = *((_QWORD *)a1 + 1);
      v16 = a1[4];
      v17 = inPropertyData;
      ProcAddress = (void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))alBufferDataStaticProc(int,int,void *,int,int)::proc;
      if ( alBufferDataStaticProc(int,int,void *,int,int)::proc
        || (ProcAddress = (void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))alcGetProcAddress(
                                                                                             0,
                                                                                             "alBufferDataStatic"),
            (alBufferDataStaticProc(int,int,void *,int,int)::proc = ProcAddress) != 0) )
      {
        ProcAddress(v14, v10, v15, v16, (unsigned int)(int)v17);
      }
      LODWORD(v19) = v29;
      v20 = (double)v19 * inPropertyData;
      *((float *)a1 + 5) = (float)a1[4] / v20;
      return 1;
    }

}; // end class SoundSystem::Impl::SoundFX
