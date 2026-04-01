class RC4Encrypter
{
public:

    RC4Encrypter *__fastcall RC4Encrypter::RC4Encrypter(RC4Encrypter *a1, int *a2, int *a3)
    {
      const char *v4; // x8
      const char *v5; // x3
    
      *(_QWORD *)a1 = off_100476E10;
      v4 = (const char *)(a2 + 2);
      if ( a2[1] + 1 > 8 )
        v4 = *(const char **)v4;
      v5 = (const char *)(a3 + 2);
      if ( a3[1] + 1 > 8 )
        v5 = *(const char **)v5;
      *((_QWORD *)a1 + 1) = 0;
      RC4Encrypter::initState(a1, v4, *a2, v5, *a3);
      return a1;
    }

    __n128 __fastcall RC4Encrypter::initState(__int64 a1, const void *a2, int a3, const void *a4, int a5)
    {
      int v10; // w25
      __int64 v11; // x0
      char *v12; // x20
      __int64 i; // x8
      int v14; // w9
      int v15; // w8
      unsigned int v16; // w9
      char v17; // w10
      unsigned int v18; // w8
      unsigned int v19; // w10
      int v20; // w9
      char v21; // w12
    
      v10 = a5 + a3;
      if ( a5 + a3 < 0LL )
        v11 = -1;
      else
        v11 = v10;
      v12 = (char *)operator new[](v11);
      memcpy(v12, a2, a3);
      memcpy(&v12[a3], a4, a5);
      for ( i = 0; i != 256; i += 16 )
        *(int8x16_t *)(a1 + 16 + i) = vaddq_s8(vdupq_n_s8(i), (int8x16_t)xmmword_1003EEF20);
      LOBYTE(v14) = 0;
      v15 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      while ( 1 )
      {
        v16 = (unsigned __int8)(v12[v15 % v10] + v14 + *(_BYTE *)(a1 + 16 + v15));
        *(_DWORD *)(a1 + 12) = v16;
        v17 = *(_BYTE *)(a1 + 16 + v15);
        *(_BYTE *)(a1 + 16 + v15) = *(_BYTE *)(a1 + 16 + v16);
        *(_BYTE *)(a1 + 16 + *(int *)(a1 + 12)) = v17;
        v15 = *(_DWORD *)(a1 + 8) + 1;
        *(_DWORD *)(a1 + 8) = v15;
        if ( v15 > 255 )
          break;
        v14 = *(_DWORD *)(a1 + 12);
      }
      *(_QWORD *)(a1 + 8) = 0;
      if ( v10 >= 1 )
      {
        LOBYTE(v18) = 0;
        LOBYTE(v19) = 0;
        v20 = a5 + a3;
        do
        {
          v19 = (unsigned __int8)(v19 + 1);
          *(_DWORD *)(a1 + 8) = v19;
          v18 = (unsigned __int8)(*(_BYTE *)(a1 + 16 + v19) + v18);
          *(_DWORD *)(a1 + 12) = v18;
          v21 = *(_BYTE *)(a1 + 16 + v19);
          *(_BYTE *)(a1 + 16 + v19) = *(_BYTE *)(a1 + 16 + v18);
          *(_BYTE *)(a1 + 16 + v18) = v21;
          --v20;
        }
        while ( v20 );
      }
      return operator delete[](v12);
    }

    RC4Encrypter *__fastcall RC4Encrypter::RC4Encrypter(RC4Encrypter *a1, int *a2, int *a3)
    {
      RC4Encrypter::RC4Encrypter(a1, a2, a3);
      return a1;
    }

    __int64 __fastcall RC4Encrypter::decrypt(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    }

    __int64 __fastcall RC4Encrypter::encrypt(__int64 a1, char *a2, _BYTE *a3, int a4)
    {
      int v4; // w9
      unsigned int v5; // w8
      unsigned int v6; // w9
      char v7; // w12
      char v8; // t1
    
      if ( a4 >= 1 )
      {
        do
        {
          v4 = *(_DWORD *)(a1 + 12);
          v5 = (unsigned __int8)(*(_DWORD *)(a1 + 8) + 1);
          *(_DWORD *)(a1 + 8) = v5;
          v6 = (unsigned __int8)(*(_BYTE *)(a1 + 16 + v5) + v4);
          *(_DWORD *)(a1 + 12) = v6;
          v7 = *(_BYTE *)(a1 + 16 + v5);
          *(_BYTE *)(a1 + 16 + v5) = *(_BYTE *)(a1 + 16 + v6);
          *(_BYTE *)(a1 + 16 + v6) = v7;
          v8 = *a2++;
          --a4;
          *a3++ = *(_BYTE *)(a1 + 16 + (unsigned __int8)(v7 + *(_BYTE *)(a1 + 16 + v5))) ^ v8;
        }
        while ( a4 );
      }
      return 0;
    }

    _QWORD *__fastcall RC4Encrypter::~RC4Encrypter(_QWORD *result)
    {
      *result = off_100476E10;
      result[1] = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall RC4Encrypter::~RC4Encrypter(void *a1)
    {
      operator delete(a1);
    }

}; // end class RC4Encrypter
