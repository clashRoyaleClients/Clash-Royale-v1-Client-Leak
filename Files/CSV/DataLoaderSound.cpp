class DataLoaderSound
{
public:

    unsigned int *__fastcall DataLoaderSound::~DataLoaderSound(unsigned int *a1)
    {
      ScrollResolutionOptions *Instance; // x0
    
      *(_QWORD *)a1 = off_100475530;
      if ( a1[2] )
      {
        Instance = (ScrollResolutionOptions *)SoundSystem::getInstance((SoundSystem *)a1);
        if ( Instance )
          SoundSystem::unloadSound(Instance, a1[2]);
      }
      a1[2] = 0;
      return a1;
    }

    unsigned int *__fastcall DataLoaderSound::~DataLoaderSound(unsigned int *a1)
    {
      DataLoaderSound::~DataLoaderSound(a1);
      return a1;
    }

    void __fastcall DataLoaderSound::~DataLoaderSound(unsigned int *a1)
    {
      DataLoaderSound::~DataLoaderSound(a1);
      operator delete(a1);
    }

    void __fastcall DataLoaderSound::load(__int64 a1, const char *a2)
    {
      const String *v4; // x1
      char v5; // w21
      SoundSystem *v6; // x0
      const char *v7; // x1
      __int64 Instance; // x0
      const char *v9; // x1
      int Sound; // w0
      const char *v11; // x1
      const String *v12; // x1
      const String *v13; // x1
      _BYTE v14[24]; // [xsp+8h] [xbp-68h] BYREF
      char v15; // [xsp+20h] [xbp-50h] BYREF
      String v16; // [xsp+38h] [xbp-38h] BYREF
    
      String::String(&v16, a2);
      v5 = Path::exists((LogicTileMap *)&v16, v4);
      String::~String();
      if ( (v5 & 1) != 0 )
      {
        Instance = SoundSystem::getInstance(v6);
        if ( !Instance )
          Debugger::error((__siginfo *)"DataLoaderSound::load SoundSystem singleton = NULL", v9);
        Sound = SoundSystem::loadSound(Instance, a2);
        *(_DWORD *)(a1 + 8) = Sound;
        if ( !Sound )
        {
          String::format((String *)"Can't load sound: %s", v11, a2);
          Debugger::error((Debugger *)v14, v12);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 8) = 0;
        String::format((String *)"DataLoaderSound::load %s does not exist", v7, a2);
        Debugger::warning((__siginfo *)&v15, v13);
        String::~String();
      }
    }

    __int64 __fastcall DataLoaderSound::getType(Highlighter *this)
    {
      return 7;
    }

}; // end class DataLoaderSound
