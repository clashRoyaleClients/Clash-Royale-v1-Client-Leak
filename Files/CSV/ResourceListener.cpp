class ResourceListener
{
public:

    __int64 __fastcall ResourceListener::ResourceListener(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004753A0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      std::vector<ResourceListenerFile>::_M_erase_at_end(a1 + 8, 0);
      return a1;
    }

    __int64 __fastcall ResourceListener::~ResourceListener(__int64 a1, ResourceListener *a2)
    {
      *(_QWORD *)a1 = off_1004753A0;
      if ( *(_DWORD *)(a1 + 32) )
        ResourceManager::removeListener((ResourceManager *)a1, a2);
      *(_DWORD *)(a1 + 32) = 0;
      std::vector<ResourceListenerFile>::_M_erase_at_end(a1 + 8, *(_QWORD *)(a1 + 8));
      std::vector<ResourceListenerFile>::~vector(a1 + 8);
      return a1;
    }

    __int64 __fastcall ResourceListener::~ResourceListener(__int64 a1, ResourceListener *a2)
    {
      ResourceListener::~ResourceListener(a1, a2);
      return a1;
    }

    void __fastcall ResourceListener::~ResourceListener(void *a1, ResourceListener *a2)
    {
      ResourceListener::~ResourceListener((__int64)a1, a2);
      operator delete(a1);
    }

    __int64 __fastcall ResourceListener::addFile(ResourceListener *a1, __int64 a2, int a3, int a4, int a5, int a6)
    {
      int v6; // w8
      const char *v7; // x1
    
      if ( !*(_DWORD *)a2 )
        return Debugger::warning((__siginfo *)"ResourceListener.addFile: empty String", (const char *)a2);
      v6 = *(_DWORD *)(a2 + 4) + 1;
      v7 = (const char *)(a2 + 8);
      if ( v6 > 8 )
        v7 = *(const char **)v7;
      return ResourceListener::addFile(a1, v7, a3, a4, a5, a6);
    }

    __int64 __fastcall ResourceListener::addFile(__int64 a1, const char *a2, int a3, int a4, int a5, int a6)
    {
      size_t v12; // x0
      __int64 result; // x0
      unsigned int *v14; // x8
      int v15; // w9
      char *v16; // [xsp+0h] [xbp-70h] BYREF
      int v17; // [xsp+8h] [xbp-68h]
      int v18; // [xsp+Ch] [xbp-64h]
      int v19; // [xsp+10h] [xbp-60h]
      int v20; // [xsp+14h] [xbp-5Ch]
    
      do
      {
        if ( *(_DWORD *)(a1 + 32)
          && (unsigned int)Assert::report(
                             (Assert *)"m_state == eWaiting",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
                             (const char *)0x6E,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      v16 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      v12 = strlen(a2);
      std::string::assign((std::string *)&v16, a2, v12);
      v17 = a3;
      v18 = a4;
      v19 = a5;
      v20 = a6;
      std::vector<ResourceListenerFile>::push_back(a1 + 8, &v16);
      result = (__int64)(v16 - 24);
      if ( v16 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      {
        v14 = (unsigned int *)(v16 - 8);
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
        if ( v15 <= 0 )
          return std::string::_Rep::_M_destroy();
      }
      return result;
    }

    __int64 __fastcall ResourceListener::addMusicFile(ResourceListener *a1, __int64 a2)
    {
      return ResourceListener::addFile(a1, a2, 101, -1, -1, -1);
    }

    __int64 __fastcall ResourceListener::addImageFile(ResourceListener *a1, __int64 a2, int a3, int a4, int a5, int a6)
    {
      int v6; // w4
      int v7; // w5
    
      if ( a5 )
        v6 = 1;
      else
        v6 = -1;
      if ( a6 )
        v7 = 1;
      else
        v7 = -1;
      return ResourceListener::addFile(a1, a2, a3, a4, v6, v7);
    }

    __int64 __fastcall ResourceListener::startLoading(
            ResourceManager *a1,
            ResourceListener *a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      do
      {
        if ( *((_DWORD *)a1 + 8)
          && (unsigned int)Assert::report(
                             (Assert *)"m_state==eWaiting",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/ResourceManager.cpp",
                             (const char *)0x86,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      *((_DWORD *)a1 + 8) = 1;
      return ResourceManager::load(a1, a2);
    }

    void ResourceListener::loaded()
    {
      ;
    }

    bool __fastcall ResourceListener::isLoaded(__int64 a1)
    {
      return *(_DWORD *)(a1 + 32) == 3;
    }

}; // end class ResourceListener
