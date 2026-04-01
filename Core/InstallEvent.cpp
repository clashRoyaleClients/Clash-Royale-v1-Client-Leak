class InstallEvent
{
public:

    __int64 __fastcall InstallEvent::send(const String *a1)
    {
      InstallEvent *v2; // x20
    
      v2 = (InstallEvent *)operator new(24);
      *(_QWORD *)v2 = off_1004F2D10;
      HTTPClient::HTTPClient((_QWORD *)v2 + 1);
      InstallEvent::s_installEvent = (__int64)v2;
      return InstallEvent::start(v2, a1);
    }

    void __fastcall InstallEvent::start(__int64 a1, __int64 a2)
    {
      _BOOL8 AdvertiserTrackingEnabled; // x20
      internal_t *pHeap; // x9
      _QWORD *v6; // x8
      internal_t *p_internal; // x10
      _QWORD *v8; // x11
      _QWORD *v9; // x12
      internal_t *v10; // x13
      internal_t *v11; // x14
      int v12; // w20
      _QWORD *v13; // x2
      String v14; // [xsp+40h] [xbp-E0h] BYREF
      _DWORD v15[2]; // [xsp+58h] [xbp-C8h] BYREF
      _QWORD *v16; // [xsp+60h] [xbp-C0h] BYREF
      String v17; // [xsp+70h] [xbp-B0h] BYREF
      String v18; // [xsp+88h] [xbp-98h] BYREF
      _BYTE v19[4]; // [xsp+A0h] [xbp-80h] BYREF
      int v20; // [xsp+A4h] [xbp-7Ch]
      _QWORD *v21; // [xsp+A8h] [xbp-78h] BYREF
      _BYTE v22[4]; // [xsp+B8h] [xbp-68h] BYREF
      int v23; // [xsp+BCh] [xbp-64h]
      _QWORD *v24; // [xsp+C0h] [xbp-60h] BYREF
      String v25; // [xsp+D0h] [xbp-50h] BYREF
      String v26; // [xsp+E8h] [xbp-38h] BYREF
    
      Application::getOpenUDID(&v26);
      LogicDefines::getPlatformName(&v25);
      Application::getUDID((__int64)v22);
      Application::getPrimaryMAC((__int64)v19);
      Application::getAdvertiserID(&v18);
      AdvertiserTrackingEnabled = Application::getAdvertiserTrackingEnabled();
      FacebookConnection::getAttributionID(&v17);
      if ( v26.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v26.internal.pHeap;
      else
        pHeap = &v26.internal;
      v6 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v6 = (_QWORD *)*v6;
      if ( v25.m_bytes + 1 > 8 )
        p_internal = (internal_t *)v25.internal.pHeap;
      else
        p_internal = &v25.internal;
      if ( v23 + 1 > 8 )
        v8 = v24;
      else
        v8 = &v24;
      if ( v20 + 1 > 8 )
        v9 = v21;
      else
        v9 = &v21;
      if ( v18.m_bytes + 1 > 8 )
        v10 = (internal_t *)v18.internal.pHeap;
      else
        v10 = &v18.internal;
      if ( v17.m_bytes + 1 > 8 )
        v11 = (internal_t *)v17.internal.pHeap;
      else
        v11 = &v17.internal;
      String::format(
        (String *)"open_udid=%s&appid=%s&platform=%s&udid=%s&mac_address=%s&adid=%s&ate=%d&fbattr=%s",
        (__int64)v15,
        pHeap,
        v6,
        p_internal,
        v8,
        v9,
        v10,
        AdvertiserTrackingEnabled,
        v11);
      v12 = v15[0];
      String::String(&v14, "https://service.supercell.net/tracking/login");
      if ( v15[1] + 1 > 8 )
        v13 = v16;
      else
        v13 = &v16;
      HTTPClient::postData(a1 + 8, (__int64)&v14, (__int64)v13, v12, a1);
      String::~String((__int64)&v14);
      String::~String((__int64)v15);
      String::~String((__int64)&v17);
      String::~String((__int64)&v18);
      String::~String((__int64)v19);
      String::~String((__int64)v22);
      String::~String((__int64)&v25);
      String::~String((__int64)&v26);
    }

    __int64 __fastcall InstallEvent::httpRequestSucceeded(__int64 a1)
    {
      __int64 result; // x0
      String v2; // [xsp+8h] [xbp-28h] BYREF
    
      *(_QWORD *)(a1 + 8) = 0;
      String::String(&v2, "true");
      Application::storeKeyValue((__int64)&INSTALL_EVENT_KEY, (__int64)&v2);
      String::~String((__int64)&v2);
      result = InstallEvent::s_installEvent;
      if ( InstallEvent::s_installEvent )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)InstallEvent::s_installEvent + 40LL))(InstallEvent::s_installEvent);
      InstallEvent::s_installEvent = 0;
      return result;
    }

    __int64 __fastcall InstallEvent::httpRequestFailed(__int64 a1)
    {
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 8) = 0;
      result = InstallEvent::s_installEvent;
      if ( InstallEvent::s_installEvent )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)InstallEvent::s_installEvent + 40LL))(InstallEvent::s_installEvent);
      InstallEvent::s_installEvent = 0;
      return result;
    }

    _QWORD *__fastcall InstallEvent::~InstallEvent(_QWORD *a1)
    {
      *a1 = off_1004F2D10;
      HTTPClient::~HTTPClient((__int64)(a1 + 1));
      return a1;
    }

    void __fastcall InstallEvent::~InstallEvent(_QWORD *a1)
    {
      *a1 = off_1004F2D10;
      HTTPClient::~HTTPClient((__int64)(a1 + 1));
      operator delete(a1);
    }

}; // end class InstallEvent
