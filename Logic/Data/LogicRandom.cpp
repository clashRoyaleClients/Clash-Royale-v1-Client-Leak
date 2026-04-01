class LogicRandom
{
public:

    _DWORD *__fastcall LogicRandom::LogicRandom(_DWORD *result)
    {
      *result = 0;
      return result;
    }

    _DWORD *__fastcall LogicRandom::setIteratedRandomSeed(_DWORD *result, int a2)
    {
      *result = a2;
      return result;
    }

    _DWORD *__fastcall LogicRandom::LogicRandom(_DWORD *result, int a2)
    {
      *result = a2;
      return result;
    }

    _DWORD *__fastcall LogicRandom::destruct(_DWORD *result)
    {
      *result = 0;
      return result;
    }

    __int64 __fastcall LogicRandom::getIteratedRandomSeed(unsigned int *a1)
    {
      return *a1;
    }

    __int64 __fastcall LogicRandom::rand(int *a1, int a2)
    {
      int v2; // w8
      int v3; // w8
      int v4; // w8
    
      if ( a2 < 1 )
        return 0;
      v2 = *a1;
      if ( !*a1 )
        v2 = -1;
      v3 = v2 ^ (v2 << 13) ^ ((v2 ^ (v2 << 13)) >> 17);
      v4 = v3 ^ (32 * v3);
      *a1 = v4;
      if ( v4 < 0 )
        v4 = -v4;
      return (unsigned int)(v4 % a2);
    }

    __int64 __fastcall LogicRandom::encode(unsigned int *a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *a1);
    }

    __int64 __fastcall LogicRandom::decode(_DWORD *a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2);
      *a1 = result;
      return result;
    }

}; // end class LogicRandom
