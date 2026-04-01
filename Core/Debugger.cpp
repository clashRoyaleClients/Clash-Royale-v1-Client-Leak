class Debugger
{
public:

    void __fastcall Debugger::print(const String *a1)
    {
      const char *v2; // x1
      internal_t *pHeap; // x0
      String v4; // [xsp+8h] [xbp-58h] BYREF
      String v5; // [xsp+20h] [xbp-40h] BYREF
      String v6; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v5, "%");
      String::String(&v4, "");
      String::replace(a1, &v5, &v4, &v6);
      if ( v6.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v6.internal.pHeap;
      else
        pHeap = &v6.internal;
      Debugger::print((Debugger *)pHeap, v2);
      String::~String((__int64)&v6);
      String::~String((__int64)&v4);
      String::~String((__int64)&v5);
    }

    void __fastcall Debugger::print(__int64 a1)
    {
      const char *v1; // x8
      _BYTE v2[4]; // [xsp+8h] [xbp-28h] BYREF
      int v3; // [xsp+Ch] [xbp-24h]
      const char *v4; // [xsp+10h] [xbp-20h] BYREF
    
      if ( Debugger::m_enablePrints )
      {
        String::format((String *)"%s\n", (__int64)v2, a1);
        if ( v3 + 1 > 8 )
          v1 = v4;
        else
          v1 = (const char *)&v4;
        printf("%s", v1);
        String::~String((__int64)v2);
      }
    }

    void __fastcall Debugger::warning(const String *a1)
    {
      const char *v2; // x1
      internal_t *pHeap; // x0
      String v4; // [xsp+8h] [xbp-58h] BYREF
      String v5; // [xsp+20h] [xbp-40h] BYREF
      String v6; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v5, "%");
      String::String(&v4, "");
      String::replace(a1, &v5, &v4, &v6);
      if ( v6.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v6.internal.pHeap;
      else
        pHeap = &v6.internal;
      Debugger::warning((__siginfo *)pHeap, v2);
      String::~String((__int64)&v6);
      String::~String((__int64)&v4);
      String::~String((__int64)&v5);
    }

    void __fastcall Debugger::warning(char *a1)
    {
      __uint64_t *v2; // x0
      Application *v3; // x0
      const String *v4; // x7
      __int64 v5; // x20
      void (__fastcall *v6)(__int64, String *, __int64); // x21
      const char *v7; // x8
      _BYTE v8[4]; // [xsp+8h] [xbp-F8h] BYREF
      int v9; // [xsp+Ch] [xbp-F4h]
      const char *v10; // [xsp+10h] [xbp-F0h] BYREF
      String v11; // [xsp+20h] [xbp-E0h] BYREF
      String v12; // [xsp+38h] [xbp-C8h] BYREF
      String v13; // [xsp+50h] [xbp-B0h] BYREF
      String v14; // [xsp+68h] [xbp-98h] BYREF
      String v15; // [xsp+80h] [xbp-80h] BYREF
      String v16; // [xsp+98h] [xbp-68h] BYREF
      String v17; // [xsp+B0h] [xbp-50h] BYREF
      String v18; // [xsp+C8h] [xbp-38h] BYREF
    
      if ( Debugger::sm_enableWarningEventTracking
        && (unsigned int)Track::hasActiveSession((CPVRTMemoryFileSystem::CAtExit *)a1) )
      {
        String::String(&v18, "Debugger.Warning");
        String::String(&v17, "warnstr");
        String::String(&v16, a1);
        String::String(&v15, "device");
        Application::getDeviceType(v2);
        String::String(&v13, "osver");
        Application::getSystemVersion(v3);
        Track::event((CPVRTMemoryFileSystem::CAtExit *)&v18, &v17, &v16, &v15, &v14, &v13, &v12, v4);
        String::~String((__int64)&v12);
        String::~String((__int64)&v13);
        String::~String((__int64)&v14);
        String::~String((__int64)&v15);
        String::~String((__int64)&v16);
        String::~String((__int64)&v17);
        String::~String((__int64)&v18);
      }
      ++Debugger::warningCount;
      v5 = Debugger::debugHud;
      if ( Debugger::debugHud )
      {
        v6 = *(void (__fastcall **)(__int64, String *, __int64))(*(_QWORD *)Debugger::debugHud + 16LL);
        String::String(&v11, a1);
        v6(v5, &v11, 4294967040LL);
        String::~String((__int64)&v11);
      }
      String::format((String *)"[warning] %s\n", (__int64)v8, a1);
      if ( v9 + 1 > 8 )
        v7 = v10;
      else
        v7 = (const char *)&v10;
      printf("%s", v7);
      String::~String((__int64)v8);
    }

    void __fastcall __noreturn Debugger::error(const String *a1)
    {
      const char *v2; // x1
      internal_t *pHeap; // x0
      String v4; // [xsp+8h] [xbp-58h] BYREF
      String v5; // [xsp+20h] [xbp-40h] BYREF
      String v6; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v5, "%");
      String::String(&v4, "");
      String::replace(a1, &v5, &v4, &v6);
      if ( v6.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v6.internal.pHeap;
      else
        pHeap = &v6.internal;
      Debugger::error((__siginfo *)pHeap, v2);
    }

    void __fastcall __noreturn Debugger::error(char *a1)
    {
      __uint64_t *v2; // x0
      Application *v3; // x0
      const String *v4; // x7
      const char *v5; // x8
      __int64 v6; // x20
      void (__fastcall *v7)(__int64, String *, __int64); // x21
      String v8; // [xsp+8h] [xbp-F8h] BYREF
      _BYTE v9[4]; // [xsp+20h] [xbp-E0h] BYREF
      int v10; // [xsp+24h] [xbp-DCh]
      const char *v11; // [xsp+28h] [xbp-D8h] BYREF
      String v12; // [xsp+38h] [xbp-C8h] BYREF
      String v13; // [xsp+50h] [xbp-B0h] BYREF
      String v14; // [xsp+68h] [xbp-98h] BYREF
      String v15; // [xsp+80h] [xbp-80h] BYREF
      String v16; // [xsp+98h] [xbp-68h] BYREF
      String v17; // [xsp+B0h] [xbp-50h] BYREF
      String v18; // [xsp+C8h] [xbp-38h] BYREF
    
      ++Debugger::errorCount;
      if ( Debugger::sm_enableErrorEventTracking
        && (unsigned int)Track::hasActiveSession((CPVRTMemoryFileSystem::CAtExit *)a1) )
      {
        String::String(&v18, "Debugger.Error");
        String::String(&v17, "errstr");
        String::String(&v16, a1);
        String::String(&v15, "device");
        Application::getDeviceType(v2);
        String::String(&v13, "osver");
        Application::getSystemVersion(v3);
        Track::event((CPVRTMemoryFileSystem::CAtExit *)&v18, &v17, &v16, &v15, &v14, &v13, &v12, v4);
        String::~String((__int64)&v12);
        String::~String((__int64)&v13);
        String::~String((__int64)&v14);
        String::~String((__int64)&v15);
        String::~String((__int64)&v16);
        String::~String((__int64)&v17);
        String::~String((__int64)&v18);
      }
      String::format((String *)"[ERROR] %s\n", (__int64)v9, a1);
      if ( v10 + 1 > 8 )
        v5 = v11;
      else
        v5 = (const char *)&v11;
      printf("%s", v5);
      String::~String((__int64)v9);
      v6 = Debugger::debugHud;
      if ( Debugger::debugHud )
      {
        v7 = *(void (__fastcall **)(__int64, String *, __int64))(*(_QWORD *)Debugger::debugHud + 16LL);
        String::String(&v8, a1);
        v7(v6, &v8, 4294901760LL);
        String::~String((__int64)&v8);
      }
      logBacktrace();
      __assert_rtn(
        "error",
        "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/debug/Debugger.cpp",
        275,
        "0");
    }

    __int64 __fastcall Debugger::doAssert(__int64 result, __int64 a2)
    {
      char *v2; // x8
    
      v2 = (char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v2 = *(char **)v2;
      if ( (result & 1) == 0 )
        Debugger::error(v2);
      return result;
    }

    __int64 __fastcall Debugger::doAssert(__int64 result, char *a2)
    {
      if ( (result & 1) == 0 )
        Debugger::error(a2);
      return result;
    }

    void __fastcall Debugger::hudPrint(const String *a1, const char *a2)
    {
      internal_t *pHeap; // x0
      String v5; // [xsp+8h] [xbp-68h] BYREF
      String v6; // [xsp+20h] [xbp-50h] BYREF
      String v7; // [xsp+38h] [xbp-38h] BYREF
    
      String::String(&v6, "%");
      String::String(&v5, "");
      String::replace(a1, &v6, &v5, &v7);
      if ( v7.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v7.internal.pHeap;
      else
        pHeap = &v7.internal;
      Debugger::hudPrint((__siginfo *)pHeap, a2);
      String::~String((__int64)&v7);
      String::~String((__int64)&v5);
      String::~String((__int64)&v6);
    }

    void __fastcall Debugger::hudPrint(__siginfo *this, const char *a2)
    {
      __int64 v4; // x21
      void (__fastcall *v5)(__int64, String *, const char *); // x22
      const char *v6; // x8
      _BYTE v7[4]; // [xsp+10h] [xbp-50h] BYREF
      int v8; // [xsp+14h] [xbp-4Ch]
      const char *v9; // [xsp+18h] [xbp-48h] BYREF
      String v10; // [xsp+28h] [xbp-38h] BYREF
    
      if ( Debugger::m_enableHudPrints )
      {
        v4 = Debugger::debugHud;
        if ( Debugger::debugHud )
        {
          v5 = *(void (__fastcall **)(__int64, String *, const char *))(*(_QWORD *)Debugger::debugHud + 16LL);
          String::String(&v10, (const char *)this);
          v5(v4, &v10, a2);
          String::~String((__int64)&v10);
        }
        String::format((String *)"[hud] %s\n", (__int64)v7, this);
        if ( v8 + 1 > 8 )
          v6 = v9;
        else
          v6 = (const char *)&v9;
        printf("%s", v6);
        String::~String((__int64)v7);
      }
    }

    __int64 Debugger::isContentValidationMode()
    {
      return (unsigned __int8)Debugger::s_contentValidationMode;
    }

}; // end class Debugger
