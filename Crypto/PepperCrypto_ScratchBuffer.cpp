class PepperCrypto::ScratchBuffer
{
public:

    __int64 *__fastcall PepperCrypto::ScratchBuffer::~ScratchBuffer(__int64 *a1)
    {
      __int64 v2; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete[](v2);
      return a1;
    }

    _QWORD *__fastcall PepperCrypto::ScratchBuffer::ensureCapacity(_QWORD *result, unsigned __int64 a2)
    {
      _QWORD *v2; // x19
      unsigned __int64 v3; // x20
      __int64 v4; // x0
    
      v2 = result;
      if ( a2 >= 0x400 )
        v3 = a2;
      else
        v3 = 1024;
      if ( result[1] < v3 )
      {
        v4 = *result;
        if ( *v2 )
          operator delete[](v4);
        result = (_QWORD *)operator new[](v3);
        *v2 = result;
        v2[1] = v3;
      }
      return result;
    }

}; // end class PepperCrypto::ScratchBuffer
