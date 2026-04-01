class PepperEncrypter
{
public:

    long double __fastcall PepperEncrypter::PepperEncrypter(_QWORD *a1, _OWORD *a2, __int64 a3)
    {
      long double result; // q0
    
      *a1 = off_1004765E0;
      a1[6] = 0;
      a1[7] = 0;
      a1[4] = 0;
      a1[5] = 0;
      a1[2] = 0;
      a1[3] = 0;
      a1[1] = 0;
      *(_OWORD *)(a1 + 3) = a2[1];
      *(_OWORD *)(a1 + 1) = *a2;
      a1[7] = *(_QWORD *)(a3 + 16);
      result = *(long double *)a3;
      *(_OWORD *)(a1 + 5) = *(_OWORD *)a3;
      return result;
    }

    _QWORD *__fastcall PepperEncrypter::~PepperEncrypter(_QWORD *result)
    {
      result[6] = 0;
      result[7] = 0;
      *result = off_1004765E0;
      result[4] = 0;
      result[5] = 0;
      result[2] = 0;
      result[3] = 0;
      result[1] = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall PepperEncrypter::~PepperEncrypter(void *a1)
    {
      operator delete(a1);
    }

    bool __fastcall PepperEncrypter::decrypt(__int64 a1, const void *a2, void *a3, int a4)
    {
      int v7; // w9
      __int64 i; // x8
      int v9; // w9
      __int64 v10; // x22
      __int64 v11; // x24
      unsigned __int64 v12; // x3
    
      v7 = 2;
      for ( i = 40; i != 64; ++i )
      {
        v9 = *(unsigned __int8 *)(a1 + i) + v7;
        *(_BYTE *)(a1 + i) = v9;
        v7 = v9 / 256;
      }
      v10 = a1 + 40;
      v11 = a1 + 8;
      v12 = (int)(a4 - (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1));
      return PepperCrypto::secretbox_open(a2, a4, a3, v12, v10, v11);
    }

    bool __fastcall PepperEncrypter::encrypt(__int64 a1, const void *a2, void *a3, int a4)
    {
      int v7; // w9
      __int64 i; // x8
      int v9; // w9
      __int64 v10; // x22
      __int64 v11; // x24
      size_t v12; // x3
    
      v7 = 2;
      for ( i = 40; i != 64; ++i )
      {
        v9 = *(unsigned __int8 *)(a1 + i) + v7;
        *(_BYTE *)(a1 + i) = v9;
        v7 = v9 / 256;
      }
      v10 = a1 + 40;
      v11 = a1 + 8;
      v12 = (int)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + a4);
      return PepperCrypto::secretbox(a2, a4, a3, v12, v10, v11);
    }

    __int64 PepperEncrypter::getEncryptionOverhead()
    {
      return 16;
    }

}; // end class PepperEncrypter
