class LogicMersenneTwisterRandom
{
public:

    int *__fastcall LogicMersenneTwisterRandom::initialize(int *this, int a2)
    {
      __int64 i; // x9
    
      *(this + 624) = 0;
      *this = a2;
      for ( i = 4; i != 2496; i += 4 )
      {
        a2 = 1812433253 * (a2 ^ (a2 >> 30)) + 1812433253;
        *(int *)((char *)this + i) = a2;
      }
      return this;
    }

    void __fastcall LogicMersenneTwisterRandom::LogicMersenneTwisterRandom(LogicMersenneTwisterRandom *this)
    {
      int v2; // w20
      __int64 i; // x9
    
      v2 = 324876476;
      bzero(this, 0x9C4u);
      *(_DWORD *)this = 324876476;
      for ( i = 4; i != 2496; i += 4 )
      {
        v2 = 1812433253 * (v2 ^ (v2 >> 30)) + 1812433253;
        *(_DWORD *)((char *)this + i) = v2;
      }
    }

    void __fastcall LogicMersenneTwisterRandom::LogicMersenneTwisterRandom(LogicMersenneTwisterRandom *this, int a2)
    {
      __int64 i; // x9
    
      bzero(this, 0x9C4u);
      *(_DWORD *)this = a2;
      for ( i = 4; i != 2496; i += 4 )
      {
        a2 = 1812433253 * (a2 ^ (a2 >> 30)) + 1812433253;
        *(_DWORD *)((char *)this + i) = a2;
      }
    }

    void __fastcall LogicMersenneTwisterRandom::destruct(LogicDeviceLinkEnterCodeMessage *this)
    {
      bzero(this, 0x9C4u);
    }

    __int64 __fastcall LogicMersenneTwisterRandom::generate(__int64 this)
    {
      __int64 i; // x11
      __int64 v2; // x13
      int v3; // w13
      int v4; // w12
    
      for ( i = 0; i != 624; ++i )
      {
        if ( (_DWORD)i == 623 )
          v2 = 0;
        else
          v2 = i + 1;
        v3 = *(_DWORD *)(this + 4 * v2);
        v4 = *(_DWORD *)(this + 4LL * (((int)i + 397) % 624))
           ^ ((int)(v3 & 0x7FFFFFFE | *(_DWORD *)(this + 4 * i) & 0x80000000) >> 1);
        if ( (v3 & 1) != 0 )
          v4 ^= 0x9908B0DF;
        *(_DWORD *)(this + 4 * i) = v4;
      }
      return this;
    }

    __int64 __fastcall LogicMersenneTwisterRandom::nextInt(LogicDeviceLinkEnterCodeMessage *this)
    {
      int v2; // w8
      int v3; // w9
      signed int v4; // w9
    
      v2 = *((_DWORD *)this + 624);
      if ( !v2 )
      {
        LogicMersenneTwisterRandom::generate((__int64)this);
        v2 = *((_DWORD *)this + 624);
      }
      v3 = *((_DWORD *)this + v2) ^ (*((int *)this + v2) >> 11);
      v4 = (((v3 << 7) & 0x9D2C5680 ^ v3) << 15) & 0xEFC60000 ^ (v3 << 7) & 0x9D2C5680 ^ v3;
      *((_DWORD *)this + 624) = (v2 + 1) % 624;
      return v4 ^ (unsigned int)(v4 >> 18);
    }

    __int64 __fastcall LogicMersenneTwisterRandom::rand(LogicDeviceLinkEnterCodeMessage *this, int a2)
    {
      int Int; // w0
    
      if ( a2 < 1 )
        return 0;
      Int = LogicMersenneTwisterRandom::nextInt(this);
      if ( Int < 0 )
        return (unsigned int)(-Int % a2);
      else
        return (unsigned int)(Int % a2);
    }

}; // end class LogicMersenneTwisterRandom
