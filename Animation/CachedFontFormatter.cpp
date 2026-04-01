class CachedFontFormatter
{
public:

    __int64 __fastcall CachedFontFormatter::CachedFontFormatter(__int64 a1, __int64 a2, int a3)
    {
      __int64 v4; // x20
      float v6; // w27
      float v7; // w28
      char v8; // w23
      float *v9; // x8
      float *v10; // x8
      __int128 v11; // q0
      float v12; // s8
      float v13; // s9
      __int64 v14; // x22
      __int64 v15; // x21
      __int64 i; // x22
      __int64 v17; // x0
      __int128 v19; // [xsp+10h] [xbp-120h]
      float v20; // [xsp+20h] [xbp-110h]
      float v21; // [xsp+30h] [xbp-100h]
      __int128 v22; // [xsp+40h] [xbp-F0h]
      float v23; // [xsp+5Ch] [xbp-D4h] BYREF
      _OWORD __src[5]; // [xsp+60h] [xbp-D0h] BYREF
      int v25; // [xsp+B0h] [xbp-80h] BYREF
      int v26; // [xsp+B4h] [xbp-7Ch] BYREF
      _BYTE v27[22]; // [xsp+B8h] [xbp-78h] BYREF
    
      *(_QWORD *)a1 = &off_1004752A0;
      *(_QWORD *)(a1 + 64) = 0;
      v4 = a1 + 64;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      v25 = 0;
      v26 = 0;
      std::vector<CachedFontFormatter::CachedGlyph>::reserve(a1 + 64, a3);
      v6 = 0.0;
      v7 = 0.0;
      v8 = 0;
      v21 = 0.0;
      v20 = 0.0;
      v22 = 0u;
      while ( (**(unsigned int (__fastcall ***)(__int64, _BYTE *))a2)(a2, v27) )
      {
        *(_QWORD *)((char *)__src + 14) = *(_QWORD *)&v27[14];
        __src[0] = *(_OWORD *)v27;
        LODWORD(v12) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)a2 + 40LL))(a2));
        *((float *)&__src[1] + 2) = v12;
        LODWORD(v13) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)a2 + 48LL))(a2));
        *((float *)&__src[1] + 3) = v13;
        LODWORD(__src[2]) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        DWORD1(__src[2]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        DWORD2(__src[2]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        HIDWORD(__src[2]) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
        LOBYTE(__src[4]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
        v19 = *(_OWORD *)(a2 + 8);
        __src[3] = v19;
        BYTE1(__src[4]) = *(_BYTE *)(a2 + 24);
        if ( *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
        {
          std::vector<CachedFontFormatter::CachedGlyph>::_M_insert_aux(v4, *(_QWORD *)(a1 + 72), __src);
        }
        else
        {
          memcpy(*(void **)(a1 + 72), __src, 0x44u);
          *(_QWORD *)(a1 + 72) += 68LL;
        }
        v23 = *((float *)&v19 + 1) + v13;
        if ( v20 >= (float)(*((float *)&v19 + 1) + v13) )
          v9 = (float *)&v26;
        else
          v9 = &v23;
        v6 = *v9;
        v26 = *(_DWORD *)v9;
        if ( v21 >= v12 )
          v10 = (float *)&v25;
        else
          v10 = (float *)&__src[1] + 2;
        v7 = *v10;
        v25 = *(_DWORD *)v10;
        v11 = v22;
        if ( (v8 & 1) == 0 )
          *(float *)&v11 = *(float *)&v19;
        v22 = v11;
        v20 = v6;
        v21 = v7;
        v8 = 1;
      }
      *(_DWORD *)(a1 + 44) = v22;
      *(float *)(a1 + 48) = v7;
      *(float *)(a1 + 52) = v6;
      *(_BYTE *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
      *(_QWORD *)(a1 + 32) = 0;
      v14 = *(_QWORD *)(a2 + 32);
      if ( v14 )
      {
        v15 = operator new(16);
        *(_QWORD *)(a1 + 32) = v15;
        *(_DWORD *)v15 = *(_DWORD *)v14;
        *(_DWORD *)(v15 + 4) = *(_DWORD *)(v14 + 4);
        *(_QWORD *)(v15 + 8) = 0;
        for ( i = *(_QWORD *)(v14 + 8); i; v15 = v17 )
        {
          v17 = operator new(16);
          *(_QWORD *)(v15 + 8) = v17;
          *(_DWORD *)v17 = *(_DWORD *)i;
          *(_DWORD *)(v17 + 4) = *(_DWORD *)(i + 4);
          *(_QWORD *)(v17 + 8) = 0;
          i = *(_QWORD *)(i + 8);
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return a1;
    }

    __int64 __fastcall CachedFontFormatter::CachedFontFormatter(__int64 a1, __int64 a2, int a3)
    {
      CachedFontFormatter::CachedFontFormatter(a1, a2, a3);
      return a1;
    }

    bool __fastcall CachedFontFormatter::nextGlyph(__int64 a1, __int64 a2)
    {
      __int64 v2; // x9
      __int64 v3; // x10
      int v4; // w8
      __int64 v5; // x9
      int8x16_t v6; // q0
    
      v2 = *(int *)(a1 + 40) + 1LL;
      *(_DWORD *)(a1 + 40) = v2;
      v3 = *(_QWORD *)(a1 + 64);
      v4 = -252645135 * ((unsigned __int64)(*(_QWORD *)(a1 + 72) - v3) >> 2);
      if ( (int)v2 >= v4 )
        return 0;
      v5 = v3 + 68 * v2;
      *(_QWORD *)(a2 + 14) = *(_QWORD *)(v5 + 14);
      *(_OWORD *)a2 = *(_OWORD *)v5;
      v6 = *(int8x16_t *)(v5 + 48);
      *(_QWORD *)(a1 + 8) = v6.i64[0];
      *(_QWORD *)(a1 + 16) = vextq_s8(v6, v6, 8u).u64[0];
      *(_BYTE *)(a1 + 24) = *(_BYTE *)(v5 + 65);
      return *(_DWORD *)(a1 + 40) < v4;
    }

    float __fastcall CachedFontFormatter::getTextHeight(__int64 a1)
    {
      return *(float *)(a1 + 52);
    }

    float __fastcall CachedFontFormatter::getTextWidth(__int64 a1)
    {
      return *(float *)(a1 + 48);
    }

    float __fastcall CachedFontFormatter::getLineWidth(__int64 a1)
    {
      return *(float *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 24);
    }

    float __fastcall CachedFontFormatter::getLineHeight(__int64 a1)
    {
      return *(float *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 28);
    }

    float __fastcall CachedFontFormatter::getLineAscent(__int64 a1)
    {
      return *(float *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 32);
    }

    float __fastcall CachedFontFormatter::getGlyphAdvance(__int64 a1)
    {
      return *(float *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 44);
    }

    __int64 __fastcall CachedFontFormatter::getLineBegin(__int64 a1)
    {
      return *(unsigned int *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 36);
    }

    __int64 __fastcall CachedFontFormatter::getLineLength(__int64 a1)
    {
      return *(unsigned int *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 40);
    }

    __int64 __fastcall CachedFontFormatter::isColor(__int64 a1)
    {
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 68LL * *(int *)(a1 + 40) + 64);
    }

    __int64 __fastcall CachedFontFormatter::isBaseDirRTL(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 56);
    }

    float __fastcall CachedFontFormatter::getTextLeft(__int64 a1)
    {
      return *(float *)(a1 + 44);
    }

    __int64 __fastcall CachedFontFormatter::reset(__int64 result)
    {
      *(_DWORD *)(result + 40) = -1;
      return result;
    }

    CachedFontFormatter *__fastcall CachedFontFormatter::~CachedFontFormatter(CachedFontFormatter *a1)
    {
      CachedFontFormatter::~CachedFontFormatter(a1);
      return a1;
    }

    void __fastcall CachedFontFormatter::~CachedFontFormatter(CachedFontFormatter *a1)
    {
      CachedFontFormatter::~CachedFontFormatter(a1);
      operator delete(a1);
    }

    long double CachedFontFormatter::getLineCharacterOffset()
    {
      long double result; // q0
    
      *(_OWORD *)&result = 0u;
      return result;
    }

    _QWORD *__fastcall CachedFontFormatter::~CachedFontFormatter(_QWORD *a1)
    {
      void *v2; // x0
      _QWORD *v3; // x0
      _QWORD *v4; // x20
    
      *a1 = &off_1004752A0;
      v2 = (void *)a1[8];
      if ( v2 )
        operator delete(v2);
      *a1 = &off_100475320;
      v3 = (_QWORD *)a1[4];
      if ( v3 )
      {
        do
        {
          v4 = (_QWORD *)v3[1];
          operator delete(v3);
          v3 = v4;
        }
        while ( v4 );
      }
      return a1;
    }

}; // end class CachedFontFormatter
