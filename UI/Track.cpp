class Track
{
public:

    __int64 __fastcall Track::init(__int64 a1, String *a2, String *a3, __int64 a4)
    {
      CPVRTString *v8; // x0
      __int64 v9; // x22
      const char *v10; // x1
      String *v11; // x0
      String *v12; // x0
      __int64 v13; // x20
      __int64 v14; // x19
      const String *v15; // x2
      const String *v16; // x1
      Track *exists; // x0
      const String *v18; // x1
      const String *v19; // x3
      const String *v20; // x1
      String v22; // [xsp+0h] [xbp-C0h] BYREF
      String v23; // [xsp+18h] [xbp-A8h] BYREF
      String v24; // [xsp+30h] [xbp-90h] BYREF
      String v25; // [xsp+48h] [xbp-78h] BYREF
      String v26; // [xsp+60h] [xbp-60h] BYREF
      String v27; // [xsp+78h] [xbp-48h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( TrackImpl::instance )
        __assert_rtn(
          "init",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          419,
          "!TrackImpl::instance && \"Already has a session\"");
      v8 = (CPVRTString *)operator new(184);
      v9 = (__int64)v8;
      v10 = (const char *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v10 = *(const char **)v10;
      TrackImpl::TrackImpl(v8, v10);
      TrackImpl::instance = v9;
      v11 = String::operator=((String *)(v9 + 104), a2);
      Application::getAppVersion((Application *)v11);
      v12 = (String *)(TrackImpl::instance + 128);
      if ( v27.m_length )
        String::operator=(v12, &v27);
      else
        String::operator=(v12, a3);
      String::~String((__int64)&v27);
      v13 = TrackImpl::instance;
      operator+(a1, "&v=", (__int64)&v25);
      operator+((__int64 *)&v26.m_length, &v25, (String *)(TrackImpl::instance + 128));
      String::operator=((String *)(v13 + 152), &v26);
      String::~String((__int64)&v26);
      String::~String((__int64)&v25);
      v14 = TrackImpl::instance;
      if ( !*(_QWORD *)(TrackImpl::instance + 80) )
      {
        *(_QWORD *)(v14 + 80) = operator new[](524802);
        *(_DWORD *)(v14 + 88) = 0;
        v14 = TrackImpl::instance;
      }
      TrackImpl::openLog((TrackImpl *)v14, 0);
      Mutex::unlock(&g_trackMutex);
      String::String(&v24, Track::PARAM_PLATFORM[0]);
      LogicDefines::getPlatformName(&v23);
      Track::setGlobalParam((Track *)&v24, &v23, v15);
      String::~String((__int64)&v23);
      String::~String((__int64)&v24);
      exists = (Track *)Application::existsKeyValue((Application *)&CHECKPOINT_SEND_KEY, v16);
      if ( (_DWORD)exists )
      {
        Application::getKeyValue((Application *)&CHECKPOINT_SEND_KEY, v18);
        Track::event((Track *)&EVENT_CHECKPOINT, &PARAM_CHECKPOINT, &v22, v19);
        Application::removeKeyValue((Application *)&CHECKPOINT_SEND_KEY, v20);
        String::~String((__int64)&v22);
      }
      return Track::flush(exists);
    }

    __int64 __fastcall Track::setGlobalParam(const String *a1, const String *a2)
    {
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "setGlobalParam",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          712,
          "TrackImpl::instance");
      TrackImpl::setGlobalParam((CPVRTString *)TrackImpl::instance, a1, a2);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(__int64 a1, __int64 a2, __int64 a3)
    {
      char *v6; // x8
      char *v7; // x8
      char *v8; // x8
      char *v10[4]; // [xsp+28h] [xbp-48h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          608,
          "TrackImpl::instance");
      v10[0] = Track::PARAM_TYPE[0];
      v6 = (char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v6 = *(char **)v6;
      v10[1] = v6;
      v7 = (char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v7 = *(char **)v7;
      v10[2] = v7;
      v8 = (char *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v8 = *(char **)v8;
      v10[3] = v8;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 4u, (const char **)v10, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 Track::flush()
    {
      Mutex::lock(&g_trackMutex);
      if ( TrackImpl::instance )
        TrackImpl::flush((CPVRTString *)TrackImpl::instance, 1);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 Track::deinit()
    {
      Track *v0; // x0
      CPVRTString *v1; // x8
      void *v2; // x19
    
      v0 = (Track *)Mutex::lock(&g_trackMutex);
      v1 = (CPVRTString *)TrackImpl::instance;
      if ( TrackImpl::instance )
      {
        if ( *(_BYTE *)(TrackImpl::instance + 176) )
        {
          Track::endSessionNoLock(v0);
          v1 = (CPVRTString *)TrackImpl::instance;
        }
        TrackImpl::deinit(v1);
        v2 = (void *)TrackImpl::instance;
        if ( TrackImpl::instance )
        {
          TrackImpl::~TrackImpl((CPVRTString *)TrackImpl::instance);
          operator delete(v2);
        }
        TrackImpl::instance = 0;
      }
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 Track::endSessionNoLock()
    {
      __int64 result; // x0
      char *v1[2]; // [xsp+8h] [xbp-28h] BYREF
    
      result = TrackImpl::instance;
      if ( TrackImpl::instance )
      {
        if ( *(_BYTE *)(TrackImpl::instance + 176) )
        {
          v1[0] = Track::PARAM_TYPE[0];
          v1[1] = EVENT_SESSIONEND;
          TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 2u, (const char **)v1, 0);
          result = TrackImpl::flush((CPVRTString *)TrackImpl::instance, 1);
          *(_BYTE *)(TrackImpl::instance + 176) = 0;
        }
      }
      return result;
    }

    void Track::startSession()
    {
      Application *v0; // x0
      __uint64_t *Hostname; // x0
      Application *DeviceType; // x0
      Application *SystemVersion; // x0
      Application *OpenUDID; // x0
      Application *UDID; // x0
      Application *AdvertiserID; // x0
      Application *PrimaryMAC; // x0
      __int64 AdvertiserTrackingEnabled; // x0
      #1285 *v9; // x0
      char *v10; // x8
      char *v11; // x8
      char *v12; // x8
      char *v13; // x8
      char *v14; // x8
      char *v15; // x8
      char *v16; // x8
      char *v17; // x8
      char *v18; // x8
      char *v19; // x8
      char *v20; // x8
      char *v21; // x8
      const String *v22; // x1
      const String *v23; // x1
      const String *v24; // x1
      int v25; // w19
      String *v26; // x19
      const String *v27; // x2
      CPVRTString *v28; // x20
      _QWORD *v29; // x0
      _BYTE *v30; // x1
      String v31; // [xsp+8h] [xbp-258h] BYREF
      String v32; // [xsp+20h] [xbp-240h] BYREF
      String v33; // [xsp+38h] [xbp-228h] BYREF
      _BYTE v34[24]; // [xsp+50h] [xbp-210h] BYREF
      _BYTE v35[4]; // [xsp+68h] [xbp-1F8h] BYREF
      int v36; // [xsp+6Ch] [xbp-1F4h]
      char *v37; // [xsp+70h] [xbp-1F0h] BYREF
      __int64 v38; // [xsp+80h] [xbp-1E0h] BYREF
      char *v39; // [xsp+88h] [xbp-1D8h] BYREF
      _BYTE v40[4]; // [xsp+98h] [xbp-1C8h] BYREF
      int v41; // [xsp+9Ch] [xbp-1C4h]
      char *v42; // [xsp+A0h] [xbp-1C0h] BYREF
      _BYTE v43[4]; // [xsp+B0h] [xbp-1B0h] BYREF
      int v44; // [xsp+B4h] [xbp-1ACh]
      char *v45; // [xsp+B8h] [xbp-1A8h] BYREF
      _BYTE v46[4]; // [xsp+C8h] [xbp-198h] BYREF
      int v47; // [xsp+CCh] [xbp-194h]
      char *v48; // [xsp+D0h] [xbp-190h] BYREF
      _BYTE v49[4]; // [xsp+E0h] [xbp-180h] BYREF
      int v50; // [xsp+E4h] [xbp-17Ch]
      char *v51; // [xsp+E8h] [xbp-178h] BYREF
      _BYTE v52[4]; // [xsp+F8h] [xbp-168h] BYREF
      int v53; // [xsp+FCh] [xbp-164h]
      char *v54; // [xsp+100h] [xbp-160h] BYREF
      _BYTE v55[4]; // [xsp+110h] [xbp-150h] BYREF
      int v56; // [xsp+114h] [xbp-14Ch]
      char *v57; // [xsp+118h] [xbp-148h] BYREF
      _BYTE v58[4]; // [xsp+128h] [xbp-138h] BYREF
      int v59; // [xsp+12Ch] [xbp-134h]
      char *v60; // [xsp+130h] [xbp-130h] BYREF
      _BYTE v61[4]; // [xsp+140h] [xbp-120h] BYREF
      int v62; // [xsp+144h] [xbp-11Ch]
      char *v63; // [xsp+148h] [xbp-118h] BYREF
      char *v64[26]; // [xsp+158h] [xbp-108h] BYREF
    
      v0 = (Application *)Mutex::lock(&g_trackMutex);
      if ( TrackImpl::instance && !*(_BYTE *)(TrackImpl::instance + 176) )
      {
        *(_BYTE *)(TrackImpl::instance + 176) = 1;
        Hostname = (__uint64_t *)Application::getHostname(v0);
        DeviceType = (Application *)Application::getDeviceType(Hostname);
        SystemVersion = (Application *)Application::getSystemVersion(DeviceType);
        OpenUDID = (Application *)Application::getOpenUDID(SystemVersion);
        UDID = (Application *)Application::getUDID(OpenUDID);
        AdvertiserID = (Application *)Application::getAdvertiserID(UDID);
        PrimaryMAC = (Application *)Application::getPrimaryMAC(AdvertiserID);
        AdvertiserTrackingEnabled = Application::getAdvertiserTrackingEnabled(PrimaryMAC);
        v9 = (#1285 *)String::format((String *)"%d", (__int64)v40, AdvertiserTrackingEnabled);
        Application::getPreferredLanguage(&v38, v9);
        String::format((String *)"%u", (__int64)v35, antihack_results2 | (unsigned int)antihack_results1);
        v64[0] = Track::PARAM_TYPE[0];
        v64[1] = EVENT_SESSIONSTART[0];
        v64[2] = Track::PARAM_APPLICATION_KEY[0];
        v10 = (char *)(TrackImpl::instance + 112);
        if ( *(_DWORD *)(TrackImpl::instance + 108) + 1 > 8 )
          v10 = *(char **)v10;
        v64[3] = v10;
        v64[4] = Track::PARAM_APPLICATION_VERSION[0];
        v11 = (char *)(TrackImpl::instance + 136);
        if ( *(_DWORD *)(TrackImpl::instance + 132) + 1 > 8 )
          v11 = *(char **)v11;
        v64[5] = v11;
        v64[6] = Track::PARAM_HOST[0];
        if ( v62 + 1 > 8 )
          v12 = v63;
        else
          v12 = (char *)&v63;
        v64[7] = v12;
        v64[8] = Track::PARAM_DEVICE[0];
        if ( v59 + 1 > 8 )
          v13 = v60;
        else
          v13 = (char *)&v60;
        v64[9] = v13;
        v64[10] = Track::PARAM_OSVER[0];
        if ( v56 + 1 > 8 )
          v14 = v57;
        else
          v14 = (char *)&v57;
        v64[11] = v14;
        v64[12] = Track::PARAM_OPENUDID[0];
        if ( v53 + 1 > 8 )
          v15 = v54;
        else
          v15 = (char *)&v54;
        v64[13] = v15;
        v64[14] = Track::PARAM_UDID[0];
        if ( v50 + 1 > 8 )
          v16 = v51;
        else
          v16 = (char *)&v51;
        v64[15] = v16;
        v64[16] = Track::PARAM_ADID[0];
        if ( v47 + 1 > 8 )
          v17 = v48;
        else
          v17 = (char *)&v48;
        v64[17] = v17;
        v64[18] = Track::PARAM_MAC[0];
        if ( v44 + 1 > 8 )
          v18 = v45;
        else
          v18 = (char *)&v45;
        v64[19] = v18;
        v64[20] = Track::PARAM_ATE[0];
        if ( v41 + 1 > 8 )
          v19 = v42;
        else
          v19 = (char *)&v42;
        v64[21] = v19;
        v64[22] = Track::PARAM_OS_LANGUAGE[0];
        if ( HIDWORD(v38) + 1 > 8 )
          v20 = v39;
        else
          v20 = (char *)&v39;
        v64[23] = v20;
        v64[24] = Track::PARAM_ANTIHACK[0];
        if ( v36 + 1 > 8 )
          v21 = v37;
        else
          v21 = (char *)&v37;
        v64[25] = v21;
        TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 0x1Au, (const char **)v64, 0);
        TrackImpl::flush((CPVRTString *)TrackImpl::instance, 1);
        String::~String((__int64)v35);
        String::~String((__int64)&v38);
        String::~String((__int64)v40);
        String::~String((__int64)v43);
        String::~String((__int64)v46);
        String::~String((__int64)v49);
        String::~String((__int64)v52);
        String::~String((__int64)v55);
        String::~String((__int64)v58);
        String::~String((__int64)v61);
        Mutex::unlock(&g_trackMutex);
        *(_QWORD *)(TrackImpl::instance + 96) = 0;
        if ( (unsigned int)Application::existsKeyValue((Application *)&TRACK_SESSION_ID, v22) )
        {
          Application::getKeyValue((Application *)&TRACK_SESSION_ID, v23);
          v25 = LogicStringUtil::convertToInt((LogicStringUtil *)v34, v24);
          String::~String((__int64)v34);
          v26 = (String *)(unsigned int)(v25 + 1);
        }
        else
        {
          v26 = 0;
        }
        String::valueOf(&v33, v26);
        Application::storeKeyValue((Application *)&TRACK_SESSION_ID, &v33, v27);
        String::~String((__int64)&v33);
        v28 = (CPVRTString *)TrackImpl::instance;
        String::String(&v32, Track::PARAM_SESSION_ID[0]);
        String::valueOf(&v31, v26);
        TrackImpl::setGlobalParam(v28, &v32, &v31);
        String::~String((__int64)&v31);
        String::~String((__int64)&v32);
        v29 = (_QWORD *)(TrackImpl::instance + 160);
        if ( *(_DWORD *)(TrackImpl::instance + 156) + 1 > 8 )
          v29 = (_QWORD *)*v29;
        v30 = (_BYTE *)(TrackImpl::instance + 56);
        if ( *(_DWORD *)(TrackImpl::instance + 52) + 1 > 8 )
          v30 = *(_BYTE **)v30;
        initiateLogUpload((__int64)v29, v30);
        Debugger::print((__int64)"Track::startSession()");
      }
      else
      {
        Mutex::unlock(&g_trackMutex);
      }
    }

    __int64 __fastcall Track::endSession(CPVRTMemoryFileSystem::CAtExit *this)
    {
      Debugger::print((__int64)"Track::endSession()");
      Mutex::lock(&g_trackMutex);
      Track::endSessionNoLock();
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(CPVRTMemoryFileSystem::CAtExit *this, const String *a2)
    {
      char *v3; // x8
      char *v5[2]; // [xsp+8h] [xbp-28h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          601,
          "TrackImpl::instance");
      v5[0] = Track::PARAM_TYPE[0];
      v3 = (char *)this + 8;
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v3 = *(char **)v3;
      v5[1] = v3;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 2u, (const char **)v5, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(
            CPVRTMemoryFileSystem::CAtExit *this,
            const String *a2,
            const String *a3,
            const String *a4,
            const String *a5,
            const String *a6)
    {
      char *v11; // x8
      internal_t *p_internal; // x8
      internal_t *v13; // x8
      internal_t *v14; // x8
      internal_t *v15; // x8
      char *v17[6]; // [xsp+8h] [xbp-68h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          615,
          "TrackImpl::instance");
      v17[0] = Track::PARAM_TYPE[0];
      v11 = (char *)this + 8;
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v11 = *(char **)v11;
      v17[1] = v11;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v17[2] = (char *)p_internal;
      v13 = &a3->internal;
      if ( a3->m_bytes + 1 > 8 )
        v13 = (internal_t *)v13->pHeap;
      v17[3] = (char *)v13;
      v14 = &a4->internal;
      if ( a4->m_bytes + 1 > 8 )
        v14 = (internal_t *)v14->pHeap;
      v17[4] = (char *)v14;
      v15 = &a5->internal;
      if ( a5->m_bytes + 1 > 8 )
        v15 = (internal_t *)v15->pHeap;
      v17[5] = (char *)v15;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 6u, (const char **)v17, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(
            CPVRTMemoryFileSystem::CAtExit *this,
            const String *a2,
            const String *a3,
            const String *a4,
            const String *a5,
            const String *a6,
            const String *a7,
            const String *a8)
    {
      char *v15; // x8
      internal_t *p_internal; // x8
      internal_t *v17; // x8
      internal_t *v18; // x8
      internal_t *v19; // x8
      internal_t *v20; // x8
      internal_t *v21; // x8
      char *v23[8]; // [xsp+8h] [xbp-88h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          622,
          "TrackImpl::instance");
      v23[0] = Track::PARAM_TYPE[0];
      v15 = (char *)this + 8;
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v15 = *(char **)v15;
      v23[1] = v15;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v23[2] = (char *)p_internal;
      v17 = &a3->internal;
      if ( a3->m_bytes + 1 > 8 )
        v17 = (internal_t *)v17->pHeap;
      v23[3] = (char *)v17;
      v18 = &a4->internal;
      if ( a4->m_bytes + 1 > 8 )
        v18 = (internal_t *)v18->pHeap;
      v23[4] = (char *)v18;
      v19 = &a5->internal;
      if ( a5->m_bytes + 1 > 8 )
        v19 = (internal_t *)v19->pHeap;
      v23[5] = (char *)v19;
      v20 = &a6->internal;
      if ( a6->m_bytes + 1 > 8 )
        v20 = (internal_t *)v20->pHeap;
      v23[6] = (char *)v20;
      v21 = &a7->internal;
      if ( a7->m_bytes + 1 > 8 )
        v21 = (internal_t *)v21->pHeap;
      v23[7] = (char *)v21;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 8u, (const char **)v23, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            __int64 a9)
    {
      char *v17; // x8
      char *v18; // x8
      char *v19; // x8
      char *v20; // x8
      char *v21; // x8
      char *v22; // x8
      char *v23; // x8
      char *v24; // x8
      char *v25; // x8
      char *v27[10]; // [xsp+8h] [xbp-A8h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          629,
          "TrackImpl::instance");
      v27[0] = Track::PARAM_TYPE[0];
      v17 = (char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v17 = *(char **)v17;
      v27[1] = v17;
      v18 = (char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v18 = *(char **)v18;
      v27[2] = v18;
      v19 = (char *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v19 = *(char **)v19;
      v27[3] = v19;
      v20 = (char *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v20 = *(char **)v20;
      v27[4] = v20;
      v21 = (char *)(a5 + 8);
      if ( *(_DWORD *)(a5 + 4) + 1 > 8 )
        v21 = *(char **)v21;
      v27[5] = v21;
      v22 = (char *)(a6 + 8);
      if ( *(_DWORD *)(a6 + 4) + 1 > 8 )
        v22 = *(char **)v22;
      v27[6] = v22;
      v23 = (char *)(a7 + 8);
      if ( *(_DWORD *)(a7 + 4) + 1 > 8 )
        v23 = *(char **)v23;
      v27[7] = v23;
      v24 = (char *)(a8 + 8);
      if ( *(_DWORD *)(a8 + 4) + 1 > 8 )
        v24 = *(char **)v24;
      v27[8] = v24;
      v25 = (char *)(a9 + 8);
      if ( *(_DWORD *)(a9 + 4) + 1 > 8 )
        v25 = *(char **)v25;
      v27[9] = v25;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 0xAu, (const char **)v27, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            __int64 a9,
            __int64 a10,
            __int64 a11)
    {
      char *v18; // x8
      char *v19; // x8
      char *v20; // x8
      char *v21; // x8
      char *v22; // x8
      char *v23; // x8
      char *v24; // x8
      char *v25; // x8
      char *v26; // x8
      char *v27; // x8
      char *v28; // x8
      char *v31[12]; // [xsp+8h] [xbp-B8h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          636,
          "TrackImpl::instance");
      v31[0] = Track::PARAM_TYPE[0];
      v18 = (char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v18 = *(char **)v18;
      v31[1] = v18;
      v19 = (char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v19 = *(char **)v19;
      v31[2] = v19;
      v20 = (char *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v20 = *(char **)v20;
      v31[3] = v20;
      v21 = (char *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v21 = *(char **)v21;
      v31[4] = v21;
      v22 = (char *)(a5 + 8);
      if ( *(_DWORD *)(a5 + 4) + 1 > 8 )
        v22 = *(char **)v22;
      v31[5] = v22;
      v23 = (char *)(a6 + 8);
      if ( *(_DWORD *)(a6 + 4) + 1 > 8 )
        v23 = *(char **)v23;
      v31[6] = v23;
      v24 = (char *)(a7 + 8);
      if ( *(_DWORD *)(a7 + 4) + 1 > 8 )
        v24 = *(char **)v24;
      v31[7] = v24;
      v25 = (char *)(a8 + 8);
      if ( *(_DWORD *)(a8 + 4) + 1 > 8 )
        v25 = *(char **)v25;
      v31[8] = v25;
      v26 = (char *)(a9 + 8);
      if ( *(_DWORD *)(a9 + 4) + 1 > 8 )
        v26 = *(char **)v26;
      v31[9] = v26;
      v27 = (char *)(a10 + 8);
      if ( *(_DWORD *)(a10 + 4) + 1 > 8 )
        v27 = *(char **)v27;
      v31[10] = v27;
      v28 = (char *)(a11 + 8);
      if ( *(_DWORD *)(a11 + 4) + 1 > 8 )
        v28 = *(char **)v28;
      v31[11] = v28;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 0xCu, (const char **)v31, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    __int64 __fastcall Track::event(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            const String *a9,
            const String *a10,
            __int64 a11,
            const String *a12,
            __int64 a13)
    {
      char *v18; // x8
      char *v19; // x8
      char *v20; // x8
      char *v21; // x8
      char *v22; // x8
      char *v23; // x8
      char *v24; // x8
      char *v25; // x8
      char *p_internal; // x8
      char *v27; // x8
      char *v28; // x8
      char *v29; // x8
      char *v30; // x8
      char *v35[14]; // [xsp+18h] [xbp-C8h] BYREF
    
      Mutex::lock(&g_trackMutex);
      if ( !TrackImpl::instance )
        __assert_rtn(
          "event",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          643,
          "TrackImpl::instance");
      v35[0] = Track::PARAM_TYPE[0];
      v18 = (char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v18 = *(char **)v18;
      v35[1] = v18;
      v19 = (char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v19 = *(char **)v19;
      v35[2] = v19;
      v20 = (char *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v20 = *(char **)v20;
      v35[3] = v20;
      v21 = (char *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v21 = *(char **)v21;
      v35[4] = v21;
      v22 = (char *)(a5 + 8);
      if ( *(_DWORD *)(a5 + 4) + 1 > 8 )
        v22 = *(char **)v22;
      v35[5] = v22;
      v23 = (char *)(a6 + 8);
      if ( *(_DWORD *)(a6 + 4) + 1 > 8 )
        v23 = *(char **)v23;
      v35[6] = v23;
      v24 = (char *)(a7 + 8);
      if ( *(_DWORD *)(a7 + 4) + 1 > 8 )
        v24 = *(char **)v24;
      v35[7] = v24;
      v25 = (char *)(a8 + 8);
      if ( *(_DWORD *)(a8 + 4) + 1 > 8 )
        v25 = *(char **)v25;
      v35[8] = v25;
      p_internal = (char *)&a9->internal;
      if ( a9->m_bytes + 1 > 8 )
        p_internal = *(char **)p_internal;
      v35[9] = p_internal;
      v27 = (char *)&a10->internal;
      if ( a10->m_bytes + 1 > 8 )
        v27 = *(char **)v27;
      v35[10] = v27;
      v28 = (char *)(a11 + 8);
      if ( *(_DWORD *)(a11 + 4) + 1 > 8 )
        v28 = *(char **)v28;
      v35[11] = v28;
      v29 = (char *)&a12->internal;
      if ( a12->m_bytes + 1 > 8 )
        v29 = *(char **)v29;
      v35[12] = v29;
      v30 = (char *)(a13 + 8);
      if ( *(_DWORD *)(a13 + 4) + 1 > 8 )
        v30 = *(char **)v30;
      v35[13] = v30;
      TrackImpl::event_a((CPVRTString *)TrackImpl::instance, 0xEu, (const char **)v35, 0);
      return Mutex::unlock(&g_trackMutex);
    }

    bool __fastcall Track::isInitialized(CPVRTMemoryFileSystem::CAtExit *this)
    {
      _BOOL8 v1; // x20
    
      Mutex::lock(&g_trackMutex);
      v1 = TrackImpl::instance != 0;
      Mutex::unlock(&g_trackMutex);
      return v1;
    }

    bool __fastcall Track::hasActiveSession(CPVRTMemoryFileSystem::CAtExit *this)
    {
      _BOOL8 v1; // x19
    
      Mutex::lock(&g_trackMutex);
      if ( TrackImpl::instance )
        v1 = *(unsigned __int8 *)(TrackImpl::instance + 176) != 0;
      else
        v1 = 0;
      Mutex::unlock(&g_trackMutex);
      return v1;
    }

    void Track::addDeviceIdentificationParams()
    {
      __int64 v0; // x21
      Application *v1; // x0
      Application *UDID; // x0
      Application *PrimaryMAC; // x0
      __uint64_t *OpenUDID; // x0
      #1285 *DeviceType; // x0
      __int64 v6; // x19
      Application *PreferredLanguage; // x0
      Application *IMEI; // x0
      String v9; // [xsp+8h] [xbp-188h] BYREF
      String v10; // [xsp+20h] [xbp-170h] BYREF
      String v11; // [xsp+38h] [xbp-158h] BYREF
      String v12; // [xsp+50h] [xbp-140h] BYREF
      String v13; // [xsp+68h] [xbp-128h] BYREF
      String v14; // [xsp+80h] [xbp-110h] BYREF
      String v15; // [xsp+98h] [xbp-F8h] BYREF
      String v16; // [xsp+B0h] [xbp-E0h] BYREF
      String v17; // [xsp+C8h] [xbp-C8h] BYREF
      String v18; // [xsp+E0h] [xbp-B0h] BYREF
      String v19; // [xsp+F8h] [xbp-98h] BYREF
      String v20; // [xsp+110h] [xbp-80h] BYREF
      String v21; // [xsp+128h] [xbp-68h] BYREF
      String v22; // [xsp+140h] [xbp-50h] BYREF
      String v23; // [xsp+158h] [xbp-38h] BYREF
    
      Mutex::lock(&g_trackMutex);
      v0 = TrackImpl::instance;
      v1 = (Application *)Mutex::unlock(&g_trackMutex);
      if ( v0 )
      {
        UDID = (Application *)Application::getUDID(v1);
        PrimaryMAC = (Application *)Application::getPrimaryMAC(UDID);
        OpenUDID = (__uint64_t *)Application::getOpenUDID(PrimaryMAC);
        DeviceType = (#1285 *)Application::getDeviceType(OpenUDID);
        v6 = TrackImpl::instance;
        PreferredLanguage = (Application *)Application::getPreferredLanguage((__int64 *)&v19.m_length, DeviceType);
        IMEI = (Application *)Application::getIMEI(PreferredLanguage);
        Application::getAndroidID(IMEI);
        String::String(&v16, Track::PARAM_UDID[0]);
        Track::setGlobalParam(&v16, &v23);
        String::~String((__int64)&v16);
        String::String(&v15, Track::PARAM_MAC[0]);
        Track::setGlobalParam(&v15, &v22);
        String::~String((__int64)&v15);
        String::String(&v14, Track::PARAM_OPENUDID[0]);
        Track::setGlobalParam(&v14, &v21);
        String::~String((__int64)&v14);
        String::String(&v13, Track::PARAM_DEVICE[0]);
        Track::setGlobalParam(&v13, &v20);
        String::~String((__int64)&v13);
        String::String(&v12, Track::PARAM_APPLICATION_VERSION[0]);
        Track::setGlobalParam(&v12, (const String *)(v6 + 128));
        String::~String((__int64)&v12);
        String::String(&v11, Track::PARAM_OS_LANGUAGE[0]);
        Track::setGlobalParam(&v11, &v19);
        String::~String((__int64)&v11);
        String::String(&v10, Track::PARAM_IMEI[0]);
        Track::setGlobalParam(&v10, &v18);
        String::~String((__int64)&v10);
        String::String(&v9, Track::PARAM_ANDROID_ID[0]);
        Track::setGlobalParam(&v9, &v17);
        String::~String((__int64)&v9);
        String::~String((__int64)&v17);
        String::~String((__int64)&v18);
        String::~String((__int64)&v19);
        String::~String((__int64)&v20);
        String::~String((__int64)&v21);
        String::~String((__int64)&v22);
        String::~String((__int64)&v23);
      }
    }

    void __fastcall Track::removeDeviceIdentificationParams(CPVRTMemoryFileSystem::CAtExit *this)
    {
      __int64 v1; // x20
      unsigned __int8 v2; // w8
      String v3; // [xsp+0h] [xbp-D0h] BYREF
      String v4; // [xsp+18h] [xbp-B8h] BYREF
      String v5; // [xsp+30h] [xbp-A0h] BYREF
      String v6; // [xsp+48h] [xbp-88h] BYREF
      String v7; // [xsp+60h] [xbp-70h] BYREF
      String v8; // [xsp+78h] [xbp-58h] BYREF
      String v9; // [xsp+90h] [xbp-40h] BYREF
      String v10; // [xsp+A8h] [xbp-28h] BYREF
    
      Mutex::lock(&g_trackMutex);
      v1 = TrackImpl::instance;
      Mutex::unlock(&g_trackMutex);
      if ( v1 )
      {
        v2 = atomic_load((unsigned __int8 *)&`guard variable for'Track::removeDeviceIdentificationParams(void)::EMPTY);
        if ( (v2 & 1) == 0 )
        {
          if ( __cxa_guard_acquire((__guard *)&`guard variable for'Track::removeDeviceIdentificationParams(void)::EMPTY) )
          {
            String::String((__int64)&Track::removeDeviceIdentificationParams(void)::EMPTY);
            __cxa_atexit(
              (void (__fastcall *)(void *))String::~String,
              &Track::removeDeviceIdentificationParams(void)::EMPTY,
              (void *)&_mh_execute_header);
            __cxa_guard_release((__guard *)&`guard variable for'Track::removeDeviceIdentificationParams(void)::EMPTY);
          }
        }
        String::String(&v10, Track::PARAM_UDID[0]);
        Track::setGlobalParam(&v10, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v10);
        String::String(&v9, Track::PARAM_MAC[0]);
        Track::setGlobalParam(&v9, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v9);
        String::String(&v8, Track::PARAM_OPENUDID[0]);
        Track::setGlobalParam(&v8, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v8);
        String::String(&v7, Track::PARAM_DEVICE[0]);
        Track::setGlobalParam(&v7, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v7);
        String::String(&v6, Track::PARAM_APPLICATION_VERSION[0]);
        Track::setGlobalParam(&v6, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v6);
        String::String(&v5, Track::PARAM_OS_LANGUAGE[0]);
        Track::setGlobalParam(&v5, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v5);
        String::String(&v4, Track::PARAM_IMEI[0]);
        Track::setGlobalParam(&v4, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v4);
        String::String(&v3, Track::PARAM_ANDROID_ID[0]);
        Track::setGlobalParam(&v3, &Track::removeDeviceIdentificationParams(void)::EMPTY);
        String::~String((__int64)&v3);
      }
    }

    void __fastcall Track::checkpoint_(Track *this, const char *a2, __int64 a3)
    {
      int IndexOf; // w0
      _QWORD *v6; // x8
      const String *v7; // x2
      String v8; // [xsp+18h] [xbp-58h] BYREF
      __int64 v9; // [xsp+30h] [xbp-40h] BYREF
      _QWORD *v10; // [xsp+38h] [xbp-38h] BYREF
      String v11; // [xsp+48h] [xbp-28h] BYREF
    
      String::String(&v8, (const char *)this);
      IndexOf = String::lastIndexOf(&v8.m_length, 47);
      if ( IndexOf == -1 && (IndexOf = String::lastIndexOf(&v8.m_length, 92), IndexOf == -1) )
        String::String((__int64)&v9, &v8);
      else
        String::substring((unsigned int *)&v8, (unsigned int)(IndexOf + 1), &v9);
      if ( HIDWORD(v9) + 1 > 8 )
        v6 = v10;
      else
        v6 = &v10;
      String::format((String *)"%s:%d: %s\n", (__int64)&v11, v6, a2, a3);
      String::~String((__int64)&v9);
      String::~String((__int64)&v8);
      Application::storeKeyValue((Application *)&CHECKPOINT_KEY, &v11, v7);
      String::~String((__int64)&v11);
    }

    __int64 __fastcall Track::clearCheckpoint(__int64 a1, const String *a2)
    {
      return Application::removeKeyValue((Application *)&CHECKPOINT_KEY, a2);
    }

    void __fastcall Track::checkCheckpoint(__int64 a1, const String *a2)
    {
      const String *v2; // x1
      const String *v3; // x2
      const String *v4; // x1
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      if ( (unsigned int)Application::existsKeyValue((Application *)&CHECKPOINT_KEY, a2) )
      {
        Application::getKeyValue((Application *)&CHECKPOINT_KEY, v2);
        Application::storeKeyValue((Application *)&CHECKPOINT_SEND_KEY, &v5, v3);
        Application::removeKeyValue((Application *)&CHECKPOINT_KEY, v4);
        String::~String((__int64)&v5);
      }
    }

}; // end class Track
