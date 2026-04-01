class ResourceManager
{
public:

    __int64 *__fastcall ResourceManager::removeListener(__int64 *result)
    {
      __int64 *v1; // x19
      __int64 v2; // x22
      __int64 v3; // x23
      __int64 v4; // x8
      unsigned int v5; // w25
      __int64 v6; // x8
      __int64 v7; // x9
      __int64 v8; // x10
      unsigned int v9; // w12
      __int64 **v10; // x11
    
      v1 = result;
      v2 = result[1];
      v3 = result[2];
      if ( v3 != v2 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          result = (__int64 *)std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
                                &s_resourceData,
                                v2 + 24 * v4);
          if ( result != &qword_1004F9780 )
          {
            v6 = result[5];
            v7 = *(_QWORD *)(v6 + 8);
            v8 = (*(_QWORD *)(v6 + 16) - v7) >> 3;
            if ( (_DWORD)v8 )
            {
              v9 = 0;
              v10 = *(__int64 ***)(v6 + 8);
              while ( *v10 != v1 )
              {
                ++v9;
                ++v10;
                if ( v9 >= (unsigned int)v8 )
                  goto LABEL_10;
              }
              *v10 = *(__int64 **)(v7 + 8LL * (unsigned int)(v8 - 1));
              *(_QWORD *)(v6 + 16) -= 8LL;
              v2 = v1[1];
              v3 = v1[2];
            }
          }
    LABEL_10:
          v4 = ++v5;
        }
        while ( v5 < 0xAAAAAAAAAAAAAAABLL * ((v3 - v2) >> 3) );
      }
      return result;
    }

    __int64 __fastcall ResourceManager::load(__int64 a1, const ResourceListener *a2)
    {
      __int64 v3; // x23
      __int64 v4; // x24
      __int64 v5; // x25
      unsigned __int64 v6; // x26
      __int64 v7; // x22
      #1368 *v8; // x23
      __int64 v9; // x0
      __int64 result; // x0
      __int64 v11; // [xsp+8h] [xbp-58h] BYREF
    
      v3 = *(_QWORD *)(a1 + 8);
      if ( -1431655765 * (unsigned int)((*(_QWORD *)(a1 + 16) - v3) >> 3) )
      {
        v4 = 0;
        v5 = 0;
        v6 = -1431655765 * (unsigned int)((*(_QWORD *)(a1 + 16) - v3) >> 3);
        while ( 1 )
        {
          v7 = v3 + v4;
          if ( (__int64 *)std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
                            &s_resourceData,
                            v3 + v4) == &qword_1004F9780 )
          {
            LOG("Start loading: %s\n", *(const char **)(v3 + v4));
            v8 = (#1368 *)operator new(32);
            ResourceData::ResourceData(v8);
            *(_QWORD *)std::map<std::string,ResourceData *>::operator[](&s_resourceData, v7) = v8;
            std::vector<ResourceListenerFile>::push_back(sp_filesToload, v7);
          }
          v9 = *(_QWORD *)std::map<std::string,ResourceData *>::operator[](&s_resourceData, v7) + 8LL;
          v11 = a1;
          std::vector<ResourceListener *>::push_back(v9, &v11);
          if ( ++v5 >= v6 )
            break;
          v4 += 24;
          v3 = *(_QWORD *)(a1 + 8);
        }
      }
      result = ResourceManager::isReady((ResourceManager *)a1, a2);
      if ( (_DWORD)result )
      {
        *(_DWORD *)(a1 + 32) = 3;
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
      return result;
    }

    void __fastcall ResourceManager::loadResource(ResourceManager *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      __int64 v7; // x0
      int v8; // w4
      int v9; // w21
      int v10; // w4
      __int64 *v11; // x21
      const char *v12; // x1
      __int64 v13; // x22
      _QWORD *v14; // x1
      const String *v15; // x1
      const ResourceListener *v16; // x1
      __int64 v17; // x20
      __int64 v18; // x8
      unsigned __int64 v19; // x9
      __int64 v20; // x21
      unsigned __int64 v21; // x22
      ResourceManager *v22; // x19
      unsigned int *v23; // x8
      int v24; // w9
      unsigned int *v25; // x8
      int v26; // w9
      int v27; // [xsp+Ch] [xbp-94h]
      _QWORD *v28; // [xsp+10h] [xbp-90h] BYREF
      __siginfo v29; // [xsp+20h] [xbp-80h] BYREF
    
      do
      {
        if ( !a1
          && (unsigned int)Assert::report(
                             (Assert *)"pResource",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
                             (const char *)0xC9,
                             a5) )
        {
          goto LABEL_36;
        }
      }
      while ( Assert::g_false );
      std::string::string(v29.__pad, a1, &v29.si_band);
      v7 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
             &s_resourceData,
             v29.__pad);
      if ( (__int64 *)v7 == &qword_1004F9780 || **(_QWORD **)(v7 + 40) )
        v9 = Assert::report(
               (Assert *)"isLoading(pResource)",
               0,
               "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
               (const char *)0xCA,
               v8);
      else
        v9 = 0;
      if ( (_UNKNOWN *)(v29.__pad[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v23 = (unsigned int *)(v29.__pad[0] - 8);
        do
          v24 = __ldaxr(v23);
        while ( __stlxr(v24 - 1, v23) );
        if ( v24 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( v9 )
        abort();
      if ( !sp_factory
        && (unsigned int)Assert::report(
                           (Assert *)"sp_factory",
                           0,
                           "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
                           (const char *)0xCB,
                           v8) )
      {
    LABEL_36:
        abort();
      }
      std::string::string(&v29.si_value, a1, &v29.si_addr);
      v11 = (__int64 *)std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
                         &s_resourceData,
                         &v29.si_value);
      if ( (char *)v29.si_value.sival_ptr - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      {
        v25 = (unsigned int *)((char *)v29.si_value.sival_ptr - 8);
        do
          v26 = __ldaxr(v25);
        while ( __stlxr(v26 - 1, v25) );
        if ( v26 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( v11 == &qword_1004F9780
        && (unsigned int)Assert::report(
                           (Assert *)"rit!=s_resourceData.end()",
                           0,
                           "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
                           (const char *)0xCE,
                           v10) )
      {
        abort();
      }
      v13 = (*(__int64 (__fastcall **)(__int64, ResourceManager *, __int64))(*(_QWORD *)sp_factory + 16LL))(
              sp_factory,
              a1,
              a2);
      if ( v13 )
      {
        ResourceManager::getAbsoluteLoadPath(a1, v12);
        if ( v27 + 1 > 8 )
          v14 = v28;
        else
          v14 = &v28;
        (*(void (__fastcall **)(__int64, _QWORD *, ResourceManager *, __int64))(*(_QWORD *)v13 + 16LL))(v13, v14, a1, a2);
        std::auto_ptr<ResourceDataLoader>::operator=(v11[5], v13);
        v17 = v11[5];
        v18 = *(_QWORD *)(v17 + 8);
        v19 = *(_QWORD *)(v17 + 16) - v18;
        if ( (unsigned int)(v19 >> 3) )
        {
          v20 = 0;
          v21 = (unsigned int)(v19 >> 3);
          while ( 1 )
          {
            v22 = *(ResourceManager **)(v18 + 8 * v20);
            if ( (unsigned int)ResourceManager::isReady(v22, v16) && *((_DWORD *)v22 + 8) == 1 )
            {
              *((_DWORD *)v22 + 8) = 3;
              (*(void (__fastcall **)(ResourceManager *))(*(_QWORD *)v22 + 16LL))(v22);
            }
            if ( ++v20 >= v21 )
              break;
            v18 = *(_QWORD *)(v17 + 8);
          }
        }
      }
      else
      {
        String::format((String *)"NO loader for : %s", v12, a1);
        Debugger::warning(&v29, v15);
      }
      String::~String();
    }

    void __usercall ResourceManager::getAbsoluteLoadPath(Path *a1@<X0>, String *a2@<X8>)
    {
      const char *v4; // x1
      unsigned __int64 *v5; // x8
      const char *v6; // x1
      Path *v7; // x0
      const char *v8; // x1
      sigval *sival_ptr; // x8
      _UNKNOWN **v10; // x9
      const String *v11; // x1
      const char *v12; // x1
      const String *v13; // x1
      __siginfo v14; // [xsp+18h] [xbp-98h] BYREF
    
      Path::updatePath(a1);
      if ( HIDWORD(v14.__pad[3]) + 1 > 8 )
        v5 = (unsigned __int64 *)v14.__pad[4];
      else
        v5 = &v14.__pad[4];
      String::format((String *)"%s/%s", v4, v5, a1);
      String::~String();
      if ( ResourceManager::sm_updatedResourcesEnabled
        && (v7 = (Path *)Path::exists((LogicTileMap *)&v14.__pad[6], (const String *)v6), (_DWORD)v7) )
      {
        Path::updatePath(v7);
        if ( HIDWORD(v14.si_addr) + 1 > 8 )
          sival_ptr = (sigval *)v14.si_value.sival_ptr;
        else
          sival_ptr = &v14.si_value;
        v10 = &off_1004F7160;
        if ( dword_1004F715C + 1 >= 9 )
          v10 = (_UNKNOWN **)off_1004F7160;
        String::format((String *)"%s/%s", v8, sival_ptr, v10);
        String::~String();
        if ( (Path::exists((LogicTileMap *)v14.__pad, v11) & 1) == 0 )
        {
          String::format((String *)"Updated file exists without updated fingerprint: %s", v12, a1);
          Debugger::warning(&v14, v13);
          String::~String();
        }
        String::String(a2, (const String *)&v14.__pad[6]);
        String::~String();
      }
      else
      {
        ResourceManager::getAbsolutePath(a1, v6);
      }
      String::~String();
    }

    __int64 __fastcall ResourceManager::isReady(__int64 a1)
    {
      __int64 v1; // x8
      __int64 v2; // x21
      __int64 v3; // x19
      __int64 v4; // x9
      unsigned __int64 v5; // x8
      unsigned __int64 v6; // x23
      __int64 v7; // x0
    
      v2 = *(_QWORD *)(a1 + 8);
      v1 = *(_QWORD *)(a1 + 16);
      v3 = 1;
      v4 = v1 - v2;
      if ( v1 != v2 )
      {
        v5 = 0;
        v6 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
        while ( 1 )
        {
          v7 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
                 &s_resourceData,
                 v2 + 24 * v5);
          if ( (__int64 *)v7 == &qword_1004F9780 || !**(_QWORD **)(v7 + 40) )
            break;
          v5 = (unsigned int)v3;
          LODWORD(v3) = v3 + 1;
          if ( v5 >= v6 )
            return 1;
        }
        return 0;
      }
      return v3;
    }

    __int64 __fastcall ResourceManager::destroy(__int64 a1, const char *a2)
    {
      __int64 *i; // x20
      _QWORD *v3; // x21
      void *v4; // x0
      void *v5; // x19
    
      Debugger::print((Debugger *)"ResourceManager::destroy", a2);
      for ( i = (__int64 *)xmmword_1004F9790; i != &qword_1004F9780; i = (__int64 *)std::_Rb_tree_increment(i) )
      {
        v3 = (_QWORD *)i[5];
        if ( v3 )
        {
          v4 = (void *)v3[1];
          if ( v4 )
            operator delete(v4);
          if ( *v3 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
          operator delete(v3);
        }
      }
      std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_erase(
        &s_resourceData,
        qword_1004F9788);
      qword_1004F9788 = 0;
      xmmword_1004F9790 = (__int128)vdupq_n_s64((unsigned __int64)&qword_1004F9780);
      qword_1004F97A0 = 0;
      v5 = (void *)sp_filesToload;
      if ( sp_filesToload )
      {
        std::vector<ResourceListenerFile>::~vector(sp_filesToload);
        operator delete(v5);
      }
      sp_filesToload = 0;
      if ( sp_factory )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)sp_factory + 8LL))(sp_factory);
      sp_factory = 0;
      return String::operator=(&s_shaderConfiguration, "");
    }

    __int64 __fastcall ResourceManager::getMovieClip(ResourceManager *a1, const char *a2, const char *a3)
    {
      __int64 SupercellSWF; // x0
    
      SupercellSWF = ResourceManager::getSupercellSWF(a1, a2, a3);
      return SupercellSWF::createMovieClip(SupercellSWF, a2);
    }

    __int64 __fastcall ResourceManager::getSupercellSWF(char *a1, const char *a2)
    {
      const String *v4; // x1
      const char *v5; // x1
      ResourceManager *v6; // x21
      ResourceManager *v7; // x0
      const char *v8; // x1
      __int64 DataLoader; // x0
      __int64 v10; // x19
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      const String *v14; // x1
      _BYTE v16[24]; // [xsp+10h] [xbp-80h] BYREF
      _BYTE v17[24]; // [xsp+28h] [xbp-68h] BYREF
      String v18; // [xsp+40h] [xbp-50h] BYREF
      int v19; // [xsp+5Ch] [xbp-34h]
      _QWORD v20[2]; // [xsp+60h] [xbp-30h] BYREF
    
      if ( ResourceManager::sm_tryLowresSWF )
      {
        String::String(&v18, a1);
        ResourceManager::getLowResSCFileName((ResourceManager *)&v18, v4);
        String::~String();
        v6 = (ResourceManager *)v20;
        if ( v19 + 1 > 8 )
          v7 = (ResourceManager *)v20[0];
        else
          v7 = (ResourceManager *)v20;
        if ( (unsigned int)ResourceManager::tryLazyLoadResource(v7, v5) )
        {
          if ( v19 + 1 > 8 )
            v6 = (ResourceManager *)v20[0];
          DataLoader = ResourceManager::getDataLoader(v6, v8);
          if ( DataLoader )
          {
            v10 = *(_QWORD *)(DataLoader + 8);
            String::~String();
            return v10;
          }
        }
        String::~String();
      }
      if ( ResourceManager::sm_lazyLoadingEnabled )
        ResourceManager::tryLazyLoadResource((ResourceManager *)a1, a2);
      v11 = ResourceManager::getDataLoader((ResourceManager *)a1, a2);
      if ( !v11 )
      {
        if ( a2 )
        {
          String::format(
            (String *)"Trying to load export name '%s' from resource which is not yet loaded: '%s'",
            v12,
            a2,
            a1);
          Debugger::error((Debugger *)v17, v13);
        }
        String::format((String *)"Trying to load MovieClip from resource which is not yet loaded: '%s'", v12, a1);
        Debugger::error((Debugger *)v16, v14);
      }
      return *(_QWORD *)(v11 + 8);
    }

    __int64 __fastcall ResourceManager::getSupercellSWF(__int64 a1, const char *a2)
    {
      int v2; // w8
      char *v3; // x0
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(char **)v3;
      return ResourceManager::getSupercellSWF(v3, a2);
    }

    void __usercall ResourceManager::getLowResSCFileName(_DWORD *a1@<X0>, __int64 *a2@<X8>)
    {
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      String::substring(&v3, a1, 0, (unsigned int)(*a1 - 3));
      operator+(a2, &v3, &ResourceManager::sm_lowresPostFix);
      String::~String();
    }

    __int64 __fastcall ResourceManager::tryLazyLoadResource(ResourceManager *a1)
    {
      __int64 v2; // x0
      const char *v3; // x1
      bool v4; // w22
      _BOOL8 v5; // x19
      const char *v6; // x1
      const String *v7; // x1
      ResourceListener *v8; // x1
      __int64 v9; // x2
      __int64 v10; // x3
      int v11; // w4
      unsigned int *v12; // x8
      int v13; // w9
      LogicGlobalData *v14; // x0
      __int64 v15; // x0
      _BOOL4 v16; // w24
      __int64 v17; // x0
      ResourceListener *v18; // x1
      unsigned int *v19; // x8
      int v20; // w9
      unsigned int *v22; // x8
      int v23; // w9
      _BYTE v24[8]; // [xsp+8h] [xbp-A8h] BYREF
      __int64 v25; // [xsp+10h] [xbp-A0h] BYREF
      _BYTE v26[8]; // [xsp+18h] [xbp-98h] BYREF
      __int64 v27; // [xsp+20h] [xbp-90h] BYREF
      void (__fastcall **v28)(ResourceListener *__hidden); // [xsp+28h] [xbp-88h] BYREF
      _QWORD v29[3]; // [xsp+30h] [xbp-80h] BYREF
      int v30; // [xsp+48h] [xbp-68h]
      _BYTE v31[24]; // [xsp+50h] [xbp-60h] BYREF
      _BYTE v32[8]; // [xsp+68h] [xbp-48h] BYREF
      __int64 v33; // [xsp+70h] [xbp-40h] BYREF
    
      std::string::string(&v33, a1, v32);
      v2 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
             &s_resourceData,
             &v33);
      v4 = (__int64 *)v2 != &qword_1004F9780 && **(_QWORD **)(v2 + 40) != 0;
      if ( (_UNKNOWN *)(v33 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v19 = (unsigned int *)(v33 - 8);
        do
          v20 = __ldaxr(v19);
        while ( __stlxr(v20 - 1, v19) );
        if ( v20 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( v4 )
        return 1;
      if ( !ResourceManager::sm_lazyLoadingEnabled || !(unsigned int)ResourceManager::doesFileExist(a1, v3) )
        return 0;
      String::format((String *)"Resource %s not loaded. Lazy-loading resource.", v6, a1);
      Debugger::print((Debugger *)v31, v7);
      String::~String();
      v28 = off_1004753A0;
      v30 = 0;
      memset(v29, 0, sizeof(v29));
      std::vector<ResourceListenerFile>::_M_erase_at_end(v29, 0);
      ResourceListener::addFile((__int64)&v28, (const char *)a1, -1, -1, -1, -1);
      ResourceListener::startLoading((ResourceManager *)&v28, v8, v9, v10, v11);
      while ( 1 )
      {
        std::string::string(&v27, a1, v26);
        v15 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
                &s_resourceData,
                &v27);
        v16 = ((__int64 *)v15 == &qword_1004F9780 || !**(_QWORD **)(v15 + 40))
           && -1431655765 * (unsigned int)((*(_QWORD *)(sp_filesToload + 8) - *(_QWORD *)sp_filesToload) >> 3) != 0;
        v14 = (LogicGlobalData *)(v27 - 24);
        if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v12 = (unsigned int *)(v27 - 8);
          do
            v13 = __ldaxr(v12);
          while ( __stlxr(v13 - 1, v12) );
          if ( v13 <= 0 )
            v14 = (LogicGlobalData *)std::string::_Rep::_M_destroy();
        }
        if ( !v16 )
          break;
        ResourceManager::loadNextResource(v14);
      }
      std::string::string(&v25, a1, v24);
      v17 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
              &s_resourceData,
              &v25);
      v5 = (__int64 *)v17 != &qword_1004F9780 && **(_QWORD **)(v17 + 40) != 0;
      if ( (_UNKNOWN *)(v25 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v22 = (unsigned int *)(v25 - 8);
        do
          v23 = __ldaxr(v22);
        while ( __stlxr(v23 - 1, v22) );
        if ( v23 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      ResourceListener::~ResourceListener((__int64)&v28, v18);
      return v5;
    }

    __int64 __fastcall ResourceManager::getDataLoader(__int64 a1)
    {
      const char *v2; // x1
      __int64 v3; // x21
      const String *v5; // x1
      unsigned int *v6; // x8
      int v7; // w9
      char v8; // [xsp+10h] [xbp-50h] BYREF
      _BYTE v9[8]; // [xsp+28h] [xbp-38h] BYREF
      __int64 v10; // [xsp+30h] [xbp-30h] BYREF
    
      std::string::string(&v10, a1, v9);
      v3 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
             &s_resourceData,
             &v10);
      if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v6 = (unsigned int *)(v10 - 8);
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
        if ( v7 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( (__int64 *)v3 != &qword_1004F9780 )
        return **(_QWORD **)(v3 + 40);
      String::format((String *)"Can't find resource: %s", v2, a1);
      Debugger::warning((__siginfo *)&v8, v5);
      String::~String();
      return 0;
    }

    __int64 __fastcall ResourceManager::getMovieClip(__int64 a1, __int64 a2)
    {
      int v2; // w8
      char *v3; // x0
      const char *v4; // x19
      __int64 SupercellSWF; // x0
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(char **)v3;
      v4 = (const char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v4 = *(const char **)v4;
      SupercellSWF = ResourceManager::getSupercellSWF(v3, v4);
      return SupercellSWF::createMovieClip(SupercellSWF, v4);
    }

    __int64 __fastcall ResourceManager::getMovieClip(__int64 a1, const char *a2)
    {
      int v3; // w8
      char *v4; // x0
      __int64 SupercellSWF; // x0
    
      v3 = *(_DWORD *)(a1 + 4) + 1;
      v4 = (char *)(a1 + 8);
      if ( v3 > 8 )
        v4 = *(char **)v4;
      SupercellSWF = ResourceManager::getSupercellSWF(v4, a2);
      return SupercellSWF::createMovieClip(SupercellSWF, a2);
    }

    __int64 __fastcall ResourceManager::getMovieClip(char *a1, __int64 a2)
    {
      const char *v2; // x19
      __int64 SupercellSWF; // x0
    
      v2 = (const char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v2 = *(const char **)v2;
      SupercellSWF = ResourceManager::getSupercellSWF(a1, v2);
      return SupercellSWF::createMovieClip(SupercellSWF, v2);
    }

    __int64 __fastcall ResourceManager::init(__int64 a1, const char *a2)
    {
      unsigned int *v4; // x8
      int v5; // w9
      _QWORD *v6; // x0
      size_t v7; // x0
      LogicGlobalData *v8; // x0
      const char *v9; // x1
      int v10; // w24
      ResourceManager *v11; // x0
      __int64 result; // x0
      ResourceListener *v13; // x1
      __int64 v14; // x2
      __int64 v15; // x3
      int v16; // w4
      LogicGlobalData *started; // x0
      Path *v18; // x0
      Path *v19; // x0
      const char *v20; // x1
      ResourceManager *v21; // x0
      LogicGlobalData *JSONObject; // x19
      _UNKNOWN **v23; // x0
      const String *v24; // x1
      ResourceListener *v25; // x1
      __int64 v26; // x2
      __int64 v27; // x3
      int v28; // w4
      LogicGlobalData *v29; // x0
      __int64 v30; // x2
      __int64 v31; // x3
      char *v32; // x1
      __int64 JSONString; // x22
      ResourceManager *v34; // x0
      LogicGlobalData *v35; // x21
      int *StringReference; // x22
      const String *v37; // x1
      const String *v38; // x4
      int v39; // w25
      int v40; // w27
      int v41; // w26
      __int64 v42; // x2
      __int64 v43; // x3
      __int64 v44; // x0
      int v45; // w2
      int v46; // w8
      int v47; // w10
      int v48; // w9
      int *v49; // x22
      const String *v50; // x1
      const String *v51; // x4
      const RoyalTVContentMessage *v52; // x1
      const RoyalTVContentMessage *v53; // x1
      const char *v54; // x1
      LogicGlobalData *v55; // x0
      int v56; // w20
      ResourceListener *v57; // x1
      _QWORD v58[3]; // [xsp+8h] [xbp-138h] BYREF
      int v59; // [xsp+20h] [xbp-120h] BYREF
      int v60; // [xsp+24h] [xbp-11Ch] BYREF
      int v61; // [xsp+28h] [xbp-118h] BYREF
      int v62; // [xsp+2Ch] [xbp-114h] BYREF
      int v63; // [xsp+30h] [xbp-110h] BYREF
      int v64; // [xsp+34h] [xbp-10Ch] BYREF
      _QWORD v65[3]; // [xsp+38h] [xbp-108h] BYREF
      void (__fastcall **v66)(ResourceListener *__hidden); // [xsp+50h] [xbp-F0h] BYREF
      _QWORD v67[3]; // [xsp+58h] [xbp-E8h] BYREF
      int v68; // [xsp+70h] [xbp-D0h]
      String v69; // [xsp+78h] [xbp-C8h] BYREF
      String v70; // [xsp+90h] [xbp-B0h] BYREF
      void (__fastcall **v71)(ResourceListener *__hidden); // [xsp+A8h] [xbp-98h] BYREF
      _QWORD v72[3]; // [xsp+B0h] [xbp-90h] BYREF
      int v73; // [xsp+C8h] [xbp-78h]
      _QWORD v74[3]; // [xsp+D0h] [xbp-70h] BYREF
    
      if ( sp_filesToload )
      {
        v74[1] = 0;
        v74[2] = 0;
        v74[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        std::vector<ResourceListenerFile>::resize(sp_filesToload, 0, (#1301 *)v74);
        if ( (_UNKNOWN *)(v74[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v4 = (unsigned int *)(v74[0] - 8LL);
          do
            v5 = __ldaxr(v4);
          while ( __stlxr(v5 - 1, v4) );
          if ( v5 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      else
      {
        v6 = (_QWORD *)operator new(24);
        v6[1] = 0;
        v6[2] = 0;
        *v6 = 0;
        sp_filesToload = (__int64)v6;
      }
      if ( sp_factory != a1 )
      {
        if ( sp_factory )
          (*(void (**)(void))(*(_QWORD *)sp_factory + 8LL))();
        sp_factory = 0;
      }
      sp_factory = a1;
      if ( a2 )
      {
        v7 = strlen(a2);
        v8 = (LogicGlobalData *)std::string::assign((std::string *)&s_resourcePath, a2, v7);
      }
      else
      {
        v8 = (LogicGlobalData *)std::string::_M_mutate(
                                  (std::string *)&s_resourcePath,
                                  0,
                                  *(_QWORD *)(s_resourcePath - 24),
                                  0);
      }
      ResourceManager::clearTmpFolder(v8);
      v10 = (unsigned __int8)ResourceManager::sm_updatedResourcesEnabled;
      ResourceManager::sm_updatedResourcesEnabled = 0;
      if ( dword_1004F715C + 1 >= 9 )
        v11 = (ResourceManager *)off_1004F7160;
      else
        v11 = (ResourceManager *)&off_1004F7160;
      result = ResourceManager::doesFileExist(v11, v9);
      if ( (_DWORD)result )
      {
        v71 = off_1004753A0;
        v73 = 0;
        memset(v72, 0, sizeof(v72));
        std::vector<ResourceListenerFile>::_M_erase_at_end(v72, 0);
        ResourceListener::addFile((ResourceListener *)&v71, (__int64)&ResourceManager::FINGERPRINT, -1, -1, -1, -1);
        started = (LogicGlobalData *)ResourceListener::startLoading((ResourceManager *)&v71, v13, v14, v15, v16);
        ResourceManager::loadNextResource(started);
        if ( dword_1004F715C + 1 >= 9 )
          v18 = (Path *)off_1004F7160;
        else
          v18 = (Path *)&off_1004F7160;
        ResourceManager::getAbsoluteLoadPath(v18, &v70);
        ResourceManager::sm_updatedResourcesEnabled = 1;
        if ( dword_1004F715C + 1 >= 9 )
          v19 = (Path *)off_1004F7160;
        else
          v19 = (Path *)&off_1004F7160;
        ResourceManager::getAbsoluteLoadPath(v19, &v69);
        if ( (unsigned int)String::equals(&v70, &v69) )
        {
          Debugger::print((Debugger *)"ResourceManager::init NO UPDATE", v20);
        }
        else
        {
          if ( dword_1004F715C + 1 >= 9 )
            v21 = (ResourceManager *)off_1004F7160;
          else
            v21 = (ResourceManager *)&off_1004F7160;
          JSONObject = (LogicGlobalData *)ResourceManager::getJSONObject(v21, v20);
          if ( dword_1004F715C + 1 >= 9 )
            v23 = (_UNKNOWN **)off_1004F7160;
          else
            v23 = &off_1004F7160;
          *(_QWORD *)(ResourceManager::getDataLoader((__int64)v23) + 8) = 0;
          ResourceManager::freeResource((LogicGlobalData *)&ResourceManager::FINGERPRINT, v24);
          v66 = off_1004753A0;
          v68 = 0;
          memset(v67, 0, sizeof(v67));
          std::vector<ResourceListenerFile>::_M_erase_at_end(v67, 0);
          ResourceListener::addFile((ResourceListener *)&v66, (__int64)&ResourceManager::FINGERPRINT, -1, -1, -1, -1);
          v29 = (LogicGlobalData *)ResourceListener::startLoading((ResourceManager *)&v66, v25, v26, v27, v28);
          ResourceManager::loadNextResource(v29);
          JSONString = LogicJSONObject::getJSONString(JSONObject, &FINGERPRINT_ATTRIBUTE_VERSION, v30, v31);
          if ( !JSONString )
            goto LABEL_44;
          if ( dword_1004F715C + 1 >= 9 )
            v34 = (ResourceManager *)off_1004F7160;
          else
            v34 = (ResourceManager *)&off_1004F7160;
          v35 = (LogicGlobalData *)ResourceManager::getJSONObject(v34, v32);
          StringReference = (int *)LogicJSONString::getStringReference(JSONString);
          operator+(v65, "ResourceManager::init build version: ", StringReference);
          Debugger::print((Debugger *)v65, v37);
          String::~String();
          v63 = 0;
          v64 = 0;
          v62 = 0;
          ResourceManager::parseVersion((LogicGlobalData *)&v64, &v63, &v62, StringReference, v38);
          v40 = v63;
          v39 = v64;
          v41 = v62;
          v44 = LogicJSONObject::getJSONString(v35, &FINGERPRINT_ATTRIBUTE_VERSION, v42, v43);
          v46 = 0;
          v47 = 0;
          v48 = 0;
          v60 = 0;
          v61 = 0;
          v59 = 0;
          if ( v44 )
          {
            v49 = (int *)LogicJSONString::getStringReference(v44);
            operator+(v58, "ResourceManager::init updated version: ", v49);
            Debugger::print((Debugger *)v58, v50);
            String::~String();
            ResourceManager::parseVersion((LogicGlobalData *)&v61, &v60, &v59, v49, v51);
            v46 = v59;
            v48 = v61 << 20;
            v47 = v60 << 10;
          }
          if ( ((v40 << 10) | (v39 << 20) | v41) > (v47 | v48 | v46) )
          {
            Debugger::hudPrint((__siginfo *)"Deleting old updated assets", (const char *)0xFFFFFFFFLL, v45);
            ResourceManager::removeUpdatedFiles(v35, v52);
            ResourceManager::removeUpdatedFiles(JSONObject, v53);
            if ( dword_1004F715C + 1 >= 9 )
              v55 = (LogicGlobalData *)off_1004F7160;
            else
              v55 = (LogicGlobalData *)&off_1004F7160;
            ResourceManager::removeUpdatedFile(v55, v54);
            v56 = 1;
          }
          else
          {
    LABEL_44:
            v56 = 0;
          }
          if ( JSONObject )
          {
            (*(void (__fastcall **)(LogicGlobalData *))(*(_QWORD *)JSONObject + 16LL))(JSONObject);
            (*(void (__fastcall **)(LogicGlobalData *))(*(_QWORD *)JSONObject + 8LL))(JSONObject);
          }
          if ( v56 || !v10 )
            ResourceManager::freeResource((LogicGlobalData *)&ResourceManager::FINGERPRINT, (const String *)v32);
          ResourceListener::~ResourceListener((__int64)&v66, (ResourceListener *)v32);
        }
        String::~String();
        String::~String();
        result = ResourceListener::~ResourceListener((__int64)&v71, v57);
      }
      ResourceManager::sm_updatedResourcesEnabled = v10;
      return result;
    }

    void __fastcall ResourceManager::clearTmpFolder(LogicGlobalData *this)
    {
      const String *v1; // x1
      String v2; // [xsp+8h] [xbp-28h] BYREF
    
      Path::tempPath(this);
      ResourceManager::removeFolder((ResourceManager *)&v2, v1);
      String::~String();
    }

    __int64 __fastcall ResourceManager::enableUpdatedResources(__int64 this)
    {
      ResourceManager::sm_updatedResourcesEnabled = this;
      return this;
    }

    void __fastcall ResourceManager::loadNextResource(LogicGlobalData *this)
    {
      __int64 v1; // x22
      unsigned __int64 v2; // x8
      signed __int64 v3; // x9
      __int64 v4; // x23
      ResourceManager *v5; // x19
      __int64 v6; // x0
      __int64 v7; // x2
      __int64 v8; // x3
      int v9; // w4
      bool v10; // w20
      unsigned int *v11; // x8
      int v12; // w9
      _BYTE v13[8]; // [xsp+8h] [xbp-48h] BYREF
      __int64 v14; // [xsp+10h] [xbp-40h] BYREF
    
      v1 = *(_QWORD *)sp_filesToload;
      v2 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(sp_filesToload + 8) - *(_QWORD *)sp_filesToload) >> 3);
      if ( (int)v2 >= 1 )
      {
        v3 = 0xAAAAAAAB00000000LL * ((__int64)(*(_QWORD *)(sp_filesToload + 8) - *(_QWORD *)sp_filesToload) >> 3)
           - 0x100000000LL;
        if ( v2 <= v3 >> 32 )
          std::__throw_out_of_range("vector::_M_range_check");
        v4 = v3 >> 32;
        v5 = *(ResourceManager **)(v1 + 24 * (v3 >> 32));
        std::string::string(&v14, v5, v13);
        v6 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
               &s_resourceData,
               &v14);
        v10 = (__int64 *)v6 != &qword_1004F9780 && **(_QWORD **)(v6 + 40) != 0;
        if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v11 = (unsigned int *)(v14 - 8);
          do
            v12 = __ldaxr(v11);
          while ( __stlxr(v12 - 1, v11) );
          if ( v12 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( !v10 )
          ResourceManager::loadResource(v5, v1 + 24 * v4 + 8, v7, v8, v9);
        std::vector<ResourceListenerFile>::pop_back(sp_filesToload);
      }
    }

    void __fastcall ResourceManager::freeResource(String *this, const String *a2)
    {
      ResourceManager *p_internal; // x20
      ResourceManager *v4; // x0
      const char *v5; // x1
      const char *v6; // x1
      internal_t *v7; // x19
      internal_t *pHeap; // x0
      const char *v9; // x1
      String v10; // [xsp+8h] [xbp-28h] BYREF
    
      p_internal = (ResourceManager *)&this->internal;
      if ( this->m_bytes + 1 > 8 )
        v4 = *(ResourceManager **)p_internal;
      else
        v4 = (ResourceManager *)&this->internal;
      if ( (unsigned int)ResourceManager::isResourceLoaded(v4, (const char *)a2) )
      {
        if ( this->m_bytes + 1 > 8 )
          p_internal = *(ResourceManager **)p_internal;
        ResourceManager::eraseResource(p_internal, v5);
      }
      if ( (unsigned int)String::endsWith(this, ".sc") )
      {
        ResourceManager::getLowResSCFileName(this, (__int64 *)&v10.m_length);
        v7 = &v10.internal;
        if ( v10.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v10.internal.pHeap;
        else
          pHeap = &v10.internal;
        if ( (unsigned int)ResourceManager::isResourceLoaded((ResourceManager *)pHeap, v6) )
        {
          if ( v10.m_bytes + 1 > 8 )
            v7 = (internal_t *)v10.internal.pHeap;
          ResourceManager::eraseResource((ResourceManager *)v7, v9);
        }
        String::~String();
      }
    }

    void __fastcall ResourceManager::parseVersion(
            LogicGlobalData *this,
            int *a2,
            int *a3,
            LogicStringUtil *a4,
            const String *a5)
    {
      const String *v9; // x2
      __int64 v10; // x20
      const String *v11; // x1
      int v12; // w23
      const char *v13; // x1
      const String *v14; // x1
      const char *v15; // x1
      const String *v16; // x1
      String v17; // [xsp+18h] [xbp-78h] BYREF
      String v18; // [xsp+30h] [xbp-60h] BYREF
      String v19; // [xsp+48h] [xbp-48h] BYREF
    
      *(_DWORD *)this = 0;
      *a2 = 0;
      *a3 = 0;
      String::String(&v17, ".");
      v10 = LogicStringUtil::split(a4, &v17, v9);
      String::~String();
      v12 = *(_DWORD *)(v10 + 12);
      if ( v12 >= 1 )
      {
        *(_DWORD *)this = LogicStringUtil::convertToInt(*(LogicStringUtil **)v10, v11);
        if ( v12 >= 2 )
        {
          if ( *(int *)(v10 + 12) < 2 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", v13, 1, *(unsigned int *)(v10 + 12));
            Debugger::error((Debugger *)&v18, v14);
          }
          *a2 = LogicStringUtil::convertToInt((LogicStringUtil *)(*(_QWORD *)v10 + 24LL), (const String *)v13);
          if ( v12 > 2 )
          {
            if ( *(int *)(v10 + 12) <= 2 )
            {
              String::format((String *)"LogicArrayList.get out of bounds %d/%d", v15, 2, *(unsigned int *)(v10 + 12));
              Debugger::error((Debugger *)&v19, v16);
            }
            *a3 = LogicStringUtil::convertToInt((LogicStringUtil *)(*(_QWORD *)v10 + 48LL), (const String *)v15);
          }
        }
      }
      LogicArrayList<String>::~LogicArrayList((__int64 *)v10);
      operator delete((void *)v10);
    }

    __int64 __fastcall ResourceManager::removeUpdatedFiles(LogicGlobalData *this, const RoyalTVContentMessage *a2)
    {
      __int64 result; // x0
      __int64 v3; // x19
      int v4; // w20
      __int64 v5; // x21
      __int64 v6; // x2
      __int64 v7; // x3
      __int64 StringReference; // x0
      const char *v9; // x1
      int v10; // w8
      LogicGlobalData *v11; // x0
    
      result = LogicJSONObject::getJSONArray(this, &FINGERPRINT_ATTRIBUTE_FILES);
      v3 = result;
      if ( result )
      {
        result = LogicJSONArray::size(result);
        v4 = result;
        if ( (int)result >= 1 )
        {
          v5 = 0;
          do
          {
            result = LogicJSONArray::getJSONObject(v3, v5);
            if ( result )
            {
              result = LogicJSONObject::getJSONString(result, &FINGERPRINT_ATTRIBUTE_FILE, v6, v7);
              if ( result )
              {
                StringReference = LogicJSONString::getStringReference(result);
                v10 = *(_DWORD *)(StringReference + 4) + 1;
                v11 = (LogicGlobalData *)(StringReference + 8);
                if ( v10 > 8 )
                  v11 = *(LogicGlobalData **)v11;
                result = ResourceManager::removeUpdatedFile(v11, v9);
              }
            }
            v5 = (unsigned int)(v5 + 1);
          }
          while ( v4 != (_DWORD)v5 );
        }
      }
      return result;
    }

    void __fastcall ResourceManager::removeUpdatedFile(LogicGlobalData *this, const char *a2)
    {
      const char *v3; // x1
      internal_t *pHeap; // x8
      const String *v5; // x1
      const String *v6; // x1
      internal_t *p_internal; // x0
      __int64 v8; // x0
      const char *v9; // x1
      const String *v10; // x1
      String v11; // [xsp+10h] [xbp-70h] BYREF
      String v12; // [xsp+28h] [xbp-58h] BYREF
      String v13; // [xsp+40h] [xbp-40h] BYREF
      String v14; // [xsp+58h] [xbp-28h] BYREF
    
      Path::updatePath(this);
      if ( v13.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v13.internal.pHeap;
      else
        pHeap = &v13.internal;
      String::format((String *)"%s/%s", v3, pHeap, this);
      String::~String();
      if ( (unsigned int)Path::exists((LogicTileMap *)&v14, v5) )
      {
        operator+(&v12, "ResourceManager::removeUpdatedFile: Deleting ", &v14);
        Debugger::print((Debugger *)&v12, v6);
        String::~String();
        if ( v14.m_bytes + 1 > 8 )
          p_internal = (internal_t *)v14.internal.pHeap;
        else
          p_internal = &v14.internal;
        v8 = remove((const char *)p_internal);
        if ( (_DWORD)v8 )
        {
          String::format((String *)"ResourceManager::removeUpdatedFiles %s, ret %d ", v9, this, v8);
          Debugger::error((Debugger *)&v11, v10);
        }
      }
      String::~String();
    }

    __int64 __fastcall ResourceManager::resourceToLoad(LogicGlobalData *this)
    {
      return -1431655765 * (unsigned int)((*(_QWORD *)(sp_filesToload + 8) - *(_QWORD *)sp_filesToload) >> 3);
    }

    __int64 __fastcall ResourceManager::getCSV(__int64 a1)
    {
      int v1; // w8
      _QWORD *v2; // x0
    
      v1 = *(_DWORD *)(a1 + 4) + 1;
      v2 = (_QWORD *)(a1 + 8);
      if ( v1 > 8 )
        v2 = (_QWORD *)*v2;
      return *(_QWORD *)(ResourceManager::getDataLoader((__int64)v2) + 8);
    }

    __int64 __fastcall ResourceManager::getJSONObject(__int64 a1)
    {
      __int64 DataLoader; // x0
      __int64 v2; // x19
    
      DataLoader = ResourceManager::getDataLoader(a1);
      v2 = DataLoader;
      if ( DataLoader
        && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(DataLoader + 8) + 24LL))(*(_QWORD *)(DataLoader + 8)) == 2 )
      {
        return *(_QWORD *)(v2 + 8);
      }
      else
      {
        return 0;
      }
    }

    void __fastcall ResourceManager::eraseResource(__int64 a1)
    {
      __int64 v2; // x19
      _QWORD *v3; // x19
      const char *v4; // x1
      const String *v5; // x1
      void *v6; // x0
      unsigned int *v7; // x8
      int v8; // w9
      unsigned int *v9; // x8
      int v10; // w9
      String v11; // [xsp+10h] [xbp-60h] BYREF
      _BYTE v12[8]; // [xsp+28h] [xbp-48h] BYREF
      __int64 v13; // [xsp+30h] [xbp-40h] BYREF
      _BYTE v14[8]; // [xsp+38h] [xbp-38h] BYREF
      __int64 v15; // [xsp+40h] [xbp-30h] BYREF
    
      std::string::string(&v15, a1, v14);
      v2 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
             &s_resourceData,
             &v15);
      if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v7 = (unsigned int *)(v15 - 8);
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
        if ( v8 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      v3 = *(_QWORD **)(v2 + 40);
      if ( v3 )
      {
        std::string::string(&v13, a1, v12);
        std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::erase(
          &s_resourceData,
          &v13);
        if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v9 = (unsigned int *)(v13 - 8);
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
          if ( v10 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        String::getFormatted(
          (__int64 *)&v11.m_length,
          (String *)"freed resource: %s. resources left: %d",
          v4,
          a1,
          qword_1004F97A0);
        Debugger::print((Debugger *)&v11, v5);
        String::~String();
        v6 = (void *)v3[1];
        if ( v6 )
          operator delete(v6);
        if ( *v3 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
        operator delete(v3);
      }
    }

    __int64 __fastcall ResourceManager::isResourceLoaded(__int64 a1, const char *a2)
    {
      int v2; // w8
      ResourceManager *v3; // x0
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (ResourceManager *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(ResourceManager **)v3;
      return ResourceManager::isResourceLoaded(v3, a2);
    }

    bool __fastcall ResourceManager::isResourceLoaded(__int64 a1)
    {
      __int64 v1; // x0
      _BOOL8 v2; // x19
      unsigned int *v4; // x8
      int v5; // w9
      _BYTE v6[8]; // [xsp+8h] [xbp-28h] BYREF
      __int64 v7; // [xsp+10h] [xbp-20h] BYREF
    
      std::string::string(&v7, a1, v6);
      v1 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
             &s_resourceData,
             &v7);
      v2 = (__int64 *)v1 != &qword_1004F9780 && **(_QWORD **)(v1 + 40) != 0;
      if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v4 = (unsigned int *)(v7 - 8);
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
        if ( v5 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      return v2;
    }

    __darwin_time_t __fastcall ResourceManager::getTimestamp(ResourceManager *a1, const char *a2)
    {
      const char *v2; // x0
      __darwin_time_t tv_sec; // x19
      int v5; // [xsp+Ch] [xbp-B4h]
      char *v6; // [xsp+10h] [xbp-B0h] BYREF
      stat v7; // [xsp+20h] [xbp-A0h] BYREF
    
      ResourceManager::getAbsolutePath(a1, a2);
      if ( v5 + 1 > 8 )
        v2 = v6;
      else
        v2 = (const char *)&v6;
      stat(v2, &v7);
      tv_sec = v7.st_mtimespec.tv_sec;
      String::~String();
      return tv_sec;
    }

    void __usercall ResourceManager::getAbsolutePath(const char *a1@<X0>, __int64 *a2@<X8>)
    {
      String v4; // [xsp+8h] [xbp-58h] BYREF
      String v5; // [xsp+20h] [xbp-40h] BYREF
      String v6; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v5, (const char *)s_resourcePath);
      String::String(&v4, a1);
      if ( (String::endsWith(&v5, "/") & 1) != 0 || (unsigned int)String::startsWith(&v4, "/") )
      {
        operator+(a2, &v5, &v4);
      }
      else if ( v5.m_length )
      {
        operator+(&v5, "/");
        operator+(a2, &v6, &v4);
        String::~String();
      }
      else
      {
        String::String((String *)a2, &v4);
      }
      String::~String();
      String::~String();
    }

    __int64 __fastcall ResourceManager::getCurrentResourceDescriptorHash(LogicGlobalData *this)
    {
      _UNKNOWN **v1; // x0
      __int64 JSONObject; // x0
      const char *v3; // x1
      __int64 v4; // x2
      __int64 v5; // x3
      __int64 JSONString; // x0
      const char *v7; // x1
      _UNKNOWN **v9; // x8
      const String *v10; // x1
      String v11; // [xsp+8h] [xbp-28h] BYREF
    
      if ( dword_1004F715C + 1 >= 9 )
        v1 = (_UNKNOWN **)off_1004F7160;
      else
        v1 = &off_1004F7160;
      JSONObject = ResourceManager::getJSONObject((__int64)v1);
      if ( !JSONObject )
      {
        v9 = (_UNKNOWN **)off_1004F7160;
        if ( dword_1004F715C + 1 < 9 )
          v9 = &off_1004F7160;
        String::format((String *)"Resource %s not loaded yet", v3, v9);
        Debugger::error((Debugger *)&v11, v10);
      }
      JSONString = LogicJSONObject::getJSONString(JSONObject, &FINGERPRINT_ATTRIBUTE_SHA, v4, v5);
      if ( !JSONString )
        Debugger::error((__siginfo *)"No master hash found in resource fingerprint file", v7);
      return LogicJSONString::getStringReference(JSONString);
    }

    __int64 *__usercall ResourceManager::checkForUpdates@<X0>(__int64 *__return_ptr a1@<X8>, __int64 *this@<X0>)
    {
      __int64 *v3; // x20
      _UNKNOWN **v5; // x0
      __int64 JSONObject; // x0
      const char *v7; // x1
      __int64 v8; // x2
      __int64 v9; // x3
      __int64 v10; // x21
      const char *v11; // x1
      __int64 v12; // x2
      __int64 v13; // x3
      __int64 JSONString; // x22
      __int64 v15; // x0
      const char *v16; // x1
      __int64 StringReference; // x23
      _QWORD *v18; // x8
      int v19; // w2
      __int64 v20; // x0
      const char *v21; // x1
      _QWORD *v22; // x8
      int v23; // w2
      __int64 v24; // x0
      __int64 JSONArray; // x21
      int v26; // w22
      __int64 v27; // x23
      __int64 v28; // x27
      __int64 v29; // x2
      __int64 v30; // x3
      __int64 v31; // x26
      __int64 v32; // x2
      __int64 v33; // x3
      __int64 v34; // x0
      __int64 v35; // x0
      String *v36; // x27
      __int64 v37; // x20
      int v38; // w21
      __int64 v39; // x22
      __int64 v40; // x26
      __int64 v41; // x2
      __int64 v42; // x3
      __int64 v43; // x0
      String *v44; // x25
      __int64 v45; // x2
      __int64 v46; // x3
      __int64 *v47; // x27
      __int64 v48; // x0
      __int64 v49; // x0
      _UNKNOWN **v50; // x8
      const String *v51; // x1
      char *v52; // x0
      String v53; // [xsp+10h] [xbp-E0h] BYREF
      String *v54[3]; // [xsp+28h] [xbp-C8h] BYREF
      _BYTE v55[8]; // [xsp+40h] [xbp-B0h] BYREF
      __int64 v56; // [xsp+48h] [xbp-A8h] BYREF
      __int64 v57; // [xsp+50h] [xbp-A0h]
      __int64 *v58; // [xsp+58h] [xbp-98h]
      __int64 *v59; // [xsp+60h] [xbp-90h]
      __int64 v60; // [xsp+68h] [xbp-88h]
      __siginfo v61; // [xsp+70h] [xbp-80h] BYREF
    
      v3 = this;
      if ( !ResourceManager::sm_updatedResourcesEnabled )
      {
    LABEL_29:
        a1[2] = 0;
        a1[1] = 0;
        *a1 = 0;
        return this;
      }
      if ( dword_1004F715C + 1 >= 9 )
        v5 = (_UNKNOWN **)off_1004F7160;
      else
        v5 = &off_1004F7160;
      JSONObject = ResourceManager::getJSONObject((__int64)v5);
      v10 = JSONObject;
      if ( !JSONObject )
      {
        v50 = (_UNKNOWN **)off_1004F7160;
        if ( dword_1004F715C + 1 < 9 )
          v50 = &off_1004F7160;
        String::format((String *)"Resource %s not loaded yet", v7, v50);
        Debugger::error((Debugger *)&v53, v51);
      }
      JSONString = LogicJSONObject::getJSONString(JSONObject, &FINGERPRINT_ATTRIBUTE_SHA, v8, v9);
      if ( !JSONString )
      {
        v52 = "No master hash found in resource fingerprint file";
        goto LABEL_28;
      }
      v15 = LogicJSONObject::getJSONString(v3, &FINGERPRINT_ATTRIBUTE_SHA, v12, v13);
      if ( !v15 )
      {
        v52 = "No master hash found in server's resource fingerprint file";
    LABEL_28:
        Debugger::error((__siginfo *)v52, v11);
      }
      StringReference = LogicJSONString::getStringReference(v15);
      v18 = (_QWORD *)(StringReference + 8);
      if ( *(_DWORD *)(StringReference + 4) + 1 > 8 )
        v18 = (_QWORD *)*v18;
      String::format((String *)"NETWORK: Remote hash %s", v16, v18);
      Debugger::hudPrint((__siginfo *)&v61.si_addr, (const String *)0xFFFFFFFFLL, v19);
      String::~String();
      v20 = LogicJSONString::getStringReference(JSONString);
      v22 = (_QWORD *)(v20 + 8);
      if ( *(_DWORD *)(v20 + 4) + 1 > 8 )
        v22 = (_QWORD *)*v22;
      String::format((String *)"NETWORK: Local hash %s", v21, v22);
      Debugger::hudPrint(&v61, (const String *)0xFFFFFFFFLL, v23);
      String::~String();
      v24 = LogicJSONString::getStringReference(JSONString);
      this = (__int64 *)String::equals(v24, StringReference);
      if ( (_DWORD)this )
        goto LABEL_29;
      JSONArray = LogicJSONObject::getJSONArray(v10, &FINGERPRINT_ATTRIBUTE_FILES);
      v60 = 0;
      v57 = 0;
      v56 = 0;
      v58 = &v56;
      v59 = &v56;
      v26 = LogicJSONArray::size(JSONArray);
      if ( v26 >= 1 )
      {
        v27 = 0;
        do
        {
          v28 = LogicJSONArray::getJSONObject(JSONArray, v27);
          v31 = LogicJSONObject::getJSONString(v28, &FINGERPRINT_ATTRIBUTE_SHA, v29, v30);
          v34 = LogicJSONObject::getJSONString(v28, &FINGERPRINT_ATTRIBUTE_FILE, v32, v33);
          v35 = LogicJSONString::getStringReference(v34);
          v36 = (String *)std::map<String,String>::operator[]((__int64)v55, v35);
          LogicJSONString::getStringReference(v31);
          String::operator=(v36);
          v27 = (unsigned int)(v27 + 1);
        }
        while ( (int)v27 < v26 );
      }
      memset(v54, 0, sizeof(v54));
      v37 = LogicJSONObject::getJSONArray(v3, &FINGERPRINT_ATTRIBUTE_FILES);
      v38 = LogicJSONArray::size(v37);
      if ( v38 >= 1 )
      {
        v39 = 0;
        do
        {
          v40 = LogicJSONArray::getJSONObject(v37, v39);
          v43 = LogicJSONObject::getJSONString(v40, &FINGERPRINT_ATTRIBUTE_FILE, v41, v42);
          v44 = (String *)LogicJSONString::getStringReference(v43);
          v47 = (__int64 *)std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::find(
                             v55,
                             v44);
          if ( v47 == &v56
            || (v48 = LogicJSONObject::getJSONString(v40, &FINGERPRINT_ATTRIBUTE_SHA, v45, v46),
                v49 = LogicJSONString::getStringReference(v48),
                (String::equals(v47 + 7, v49) & 1) == 0) )
          {
            std::vector<String>::push_back((__int64)v54, v44);
          }
          v39 = (unsigned int)(v39 + 1);
        }
        while ( (int)v39 < v38 );
      }
      std::vector<String>::vector(a1, v54);
      std::vector<String>::~vector(v54);
      return (__int64 *)std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_erase(
                          (__int64)v55,
                          v57);
    }

    __int64 __fastcall ResourceManager::doesFileExist(const char *a1)
    {
      const String *v1; // x1
      __int64 v2; // x19
      __int64 v4[3]; // [xsp+8h] [xbp-28h] BYREF
    
      ResourceManager::getAbsolutePath(a1, v4);
      v2 = Path::exists((LogicTileMap *)v4, v1);
      String::~String();
      return v2;
    }

    __int64 __fastcall ResourceManager::getMovieClipFromPool(ResourceManager *a1, const char *a2, __int64 a3, bool *a4)
    {
      char v5; // [xsp+Fh] [xbp-1h] BYREF
    
      v5 = 0;
      return ResourceManager::getMovieClipFromPool(a1, a2, &v5, a4);
    }

    __int64 __fastcall ResourceManager::getMovieClipFromPool(char *a1, const char *a2, bool *a3)
    {
      SupercellSWF *SupercellSWF; // x0
    
      SupercellSWF = (SupercellSWF *)ResourceManager::getSupercellSWF(a1, "getMovieClipFromPool");
      if ( SupercellSWF )
        return SupercellSWF::getMovieClipFromPool(SupercellSWF, a2, a3);
      else
        return 0;
    }

    __int64 __fastcall ResourceManager::getMovieClipFromPool(__int64 a1, __int64 a2)
    {
      int v2; // w8
      char *v3; // x0
      int v4; // w8
      const char *v5; // x1
      bool v7; // [xsp+Fh] [xbp-1h] BYREF
    
      v2 = *(_DWORD *)(a1 + 4) + 1;
      v3 = (char *)(a1 + 8);
      if ( v2 > 8 )
        v3 = *(char **)v3;
      v4 = *(_DWORD *)(a2 + 4) + 1;
      v5 = (const char *)(a2 + 8);
      if ( v4 > 8 )
        v5 = *(const char **)v5;
      v7 = 0;
      return ResourceManager::getMovieClipFromPool(v3, v5, &v7);
    }

    SupercellSWF *__fastcall ResourceManager::putMovieClipToPool(char *a1, const char *a2, MovieClip *a3)
    {
      SupercellSWF *result; // x0
    
      result = (SupercellSWF *)ResourceManager::getSupercellSWF(a1, "putMovieClipToPool");
      if ( result )
        return (SupercellSWF *)SupercellSWF::putToMovieClipPool(result, a2, a3);
      return result;
    }

    SupercellSWF *__fastcall ResourceManager::putMovieClipToPool(MovieClip *a1)
    {
      __int64 SupercellSWF; // x0
      __int64 ResourceManagerFileName; // x0
      char *v4; // x20
      const char *ExportName; // x1
    
      SupercellSWF = MovieClip::getSupercellSWF();
      ResourceManagerFileName = SupercellSWF::getResourceManagerFileName(SupercellSWF);
      v4 = (char *)(ResourceManagerFileName + 8);
      if ( *(_DWORD *)(ResourceManagerFileName + 4) + 1 > 8 )
        v4 = *(char **)v4;
      ExportName = (const char *)MovieClip::getExportName(a1);
      return ResourceManager::putMovieClipToPool(v4, ExportName, a1);
    }

    __int64 __fastcall ResourceManager::getSound(__int64 a1)
    {
      __int64 DataLoader; // x0
      const char *v3; // x1
      const String *v5; // x1
      _BYTE v6[24]; // [xsp+8h] [xbp-28h] BYREF
    
      DataLoader = ResourceManager::getDataLoader(a1);
      if ( !DataLoader )
      {
        String::format((String *)"Trying to get a sound which is not yet loaded: %s", v3, a1);
        Debugger::error((Debugger *)v6, v5);
      }
      return *(unsigned int *)(DataLoader + 8);
    }

    __int64 __fastcall ResourceManager::getMusic(const char *a1)
    {
      __int64 DataLoader; // x0
      const String *v4; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      _QWORD v6[3]; // [xsp+18h] [xbp-28h] BYREF
    
      DataLoader = ResourceManager::getDataLoader((__int64)a1);
      if ( !DataLoader )
      {
        String::String(&v5, a1);
        operator+(v6, "Trying to get a music which is not yet loaded: ", &v5);
        Debugger::error((Debugger *)v6, v4);
      }
      return *(unsigned int *)(DataLoader + 8);
    }

    DIR *__fastcall ResourceManager::removeFolder(__int64 a1)
    {
      const char *v1; // x19
      DIR *result; // x0
      DIR *v3; // x20
      dirent *i; // x0
      char v5[512]; // [xsp+18h] [xbp-238h] BYREF
    
      v1 = (const char *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) + 1 > 8 )
        v1 = *(const char **)v1;
      result = opendir(v1);
      v3 = result;
      if ( result )
      {
        for ( i = readdir(result); i; i = readdir(v3) )
        {
          sprintf(v5, "%s/%s", v1, i->d_name);
          remove(v5);
        }
        return (DIR *)closedir(v3);
      }
      return result;
    }

}; // end class ResourceManager
