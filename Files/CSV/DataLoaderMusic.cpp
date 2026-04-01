class DataLoaderMusic
{
public:

    unsigned int *__fastcall DataLoaderMusic::~DataLoaderMusic(unsigned int *a1)
    {
      SoundSystem *Instance; // x0
    
      *(_QWORD *)a1 = off_100475570;
      if ( a1[2] )
      {
        Instance = (SoundSystem *)SoundSystem::getInstance((SoundSystem *)a1);
        if ( Instance )
          SoundSystem::unloadMusic(Instance, a1[2]);
      }
      a1[2] = 0;
      return a1;
    }

    unsigned int *__fastcall DataLoaderMusic::~DataLoaderMusic(unsigned int *a1)
    {
      DataLoaderMusic::~DataLoaderMusic(a1);
      return a1;
    }

    void __fastcall DataLoaderMusic::~DataLoaderMusic(unsigned int *a1)
    {
      DataLoaderMusic::~DataLoaderMusic(a1);
      operator delete(a1);
    }

    __int64 __fastcall DataLoaderMusic::load(SoundSystem *a1, const char *a2)
    {
      SoundSystem *Instance; // x0
      const char *v5; // x1
      __int64 result; // x0
      const char *v7; // x1
      const String *v8; // x1
      _BYTE v9[24]; // [xsp+8h] [xbp-28h] BYREF
    
      Instance = (SoundSystem *)SoundSystem::getInstance(a1);
      if ( !Instance )
        Debugger::error((__siginfo *)"DataLoaderMusic::load SoundSystem singleton = NULL", v5);
      result = SoundSystem::loadMusic(Instance, a2);
      *((_DWORD *)a1 + 2) = result;
      if ( !(_DWORD)result )
      {
        String::format((String *)"Can't load music: %s", v7, a2);
        Debugger::error((Debugger *)v9, v8);
      }
      return result;
    }

    __int64 __fastcall DataLoaderMusic::getType(DeviceLinkCodeInput *this)
    {
      return 8;
    }

}; // end class DataLoaderMusic
