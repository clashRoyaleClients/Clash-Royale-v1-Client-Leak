class CPVRTMemoryFileSystem::CAtExit
{
public:

    CPVRTMemoryFileSystem::CAtExit *__fastcall CPVRTMemoryFileSystem::CAtExit::~CAtExit(CPVRTMemoryFileSystem::CAtExit *a1)
    {
      CPVRTMemoryFileSystem::CAtExit::~CAtExit(a1);
      return a1;
    }

    __int64 __fastcall CPVRTMemoryFileSystem::CAtExit::~CAtExit(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x8
      __int64 v5; // x0
      __int64 v6; // x0
    
      if ( CPVRTMemoryFileSystem::s_i32NumFiles >= 1 )
      {
        v2 = 0;
        v3 = 0;
        do
        {
          v4 = CPVRTMemoryFileSystem::s_pFileInfo;
          if ( *(_BYTE *)(CPVRTMemoryFileSystem::s_pFileInfo + v2 + 24) )
          {
            v5 = *(_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + v2);
            if ( v5 )
            {
              operator delete[](v5);
              v4 = CPVRTMemoryFileSystem::s_pFileInfo;
            }
            v6 = *(_QWORD *)(v4 + v2 + 8);
            if ( v6 )
              operator delete[](v6);
          }
          ++v3;
          v2 += 32;
        }
        while ( v3 < CPVRTMemoryFileSystem::s_i32NumFiles );
      }
      if ( CPVRTMemoryFileSystem::s_pFileInfo )
        operator delete[](CPVRTMemoryFileSystem::s_pFileInfo);
      return a1;
    }

}; // end class CPVRTMemoryFileSystem::CAtExit
