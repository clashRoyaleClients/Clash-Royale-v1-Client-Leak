class StageDrawBucket
{
public:

    __int64 __fastcall StageDrawBucket::StageDrawBucket(__int64 a1)
    {
      bzero((void *)(a1 + 56), 0x180u);
      *(_QWORD *)(a1 + 14) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    }

    __int64 __fastcall StageDrawBucket::~StageDrawBucket(__int64 a1)
    {
      bzero((void *)(a1 + 56), 0x180u);
      *(_QWORD *)(a1 + 14) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    }

    __int64 __fastcall StageDrawBucket::initForUse(__int64 result, __int64 a2, int a3, int a4, int a5)
    {
      *(_QWORD *)(result + 40) = a2;
      *(_DWORD *)(result + 48) = a3;
      *(_BYTE *)(result + 20) = 0;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)result = a4;
      *(_DWORD *)(result + 4) = a4;
      *(_DWORD *)(result + 12) = a5;
      return result;
    }

    __int64 __fastcall StageDrawBucket::getTexture(__int64 a1)
    {
      return *(_QWORD *)(a1 + 40);
    }

    __int64 __fastcall StageDrawBucket::getRenderConfig(__int64 a1)
    {
      return *(unsigned int *)(a1 + 48);
    }

    __int64 __fastcall StageDrawBucket::fixLastRect(__int64 this, const GameConfig *a2)
    {
      __int64 v3; // x20
      __int64 i; // x22
      __int64 v5; // x21
      __int64 Instance; // x0
    
      v3 = this;
      for ( i = 56; i != 440; i += 8 )
      {
        v5 = *(_QWORD *)(v3 + i);
        if ( v5 )
        {
          Instance = Stage::getInstance();
          this = Stage::getRectIndex(Instance, v5);
          *(_QWORD *)(v3 + i) = (char *)a2 + 24 * (int)this;
        }
      }
      return this;
    }

    void __fastcall StageDrawBucket::reset(SoundSystem::Impl *this)
    {
      bzero((char *)this + 56, 0x180u);
    }

}; // end class StageDrawBucket
