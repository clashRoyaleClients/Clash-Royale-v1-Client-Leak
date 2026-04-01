class std::vector<CachedFontFormatter::CachedGlyph,std::allocator<CachedFontFormatter::CachedGlyph>>
{
public:

    void __fastcall std::vector<CachedFontFormatter::CachedGlyph>::reserve(__int64 a1, unsigned __int64 a2)
    {
      unsigned __int64 v4; // x22
      __int64 v5; // x21
    
      if ( a2 >= 0x3C3C3C3C3C3C3C4LL )
        std::__throw_length_error("vector::reserve");
      if ( 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2) < a2 )
      {
        v4 = 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
        v5 = std::vector<CachedFontFormatter::CachedGlyph>::_M_allocate_and_copy<CachedFontFormatter::CachedGlyph*>(a1, a2);
        if ( *(_QWORD *)a1 )
          operator delete(*(void **)a1);
        *(_QWORD *)a1 = v5;
        *(_QWORD *)(a1 + 8) = v5 + 68 * v4;
        *(_QWORD *)(a1 + 16) = v5 + 68 * a2;
      }
    }

    __int64 __fastcall std::vector<CachedFontFormatter::CachedGlyph>::_M_allocate_and_copy<CachedFontFormatter::CachedGlyph*>(
            __int64 a1,
            unsigned __int64 a2,
            char *a3,
            char *a4)
    {
      __int64 v6; // x0
      __int64 v7; // x21
      char *v8; // x22
    
      if ( a2 >= 0x3C3C3C3C3C3C3C4LL )
        std::__throw_bad_alloc();
      v6 = operator new(68 * a2);
      v7 = v6;
      if ( a3 != a4 )
      {
        v8 = (char *)v6;
        do
        {
          memcpy(v8, a3, 0x44u);
          a3 += 68;
          v8 += 68;
        }
        while ( a4 != a3 );
      }
      return v7;
    }

    void __fastcall std::vector<CachedFontFormatter::CachedGlyph>::_M_insert_aux(__int64 *a1, char *a2, const void *a3)
    {
      char *v6; // x0
      __int64 v7; // x22
      __int64 v8; // x24
      __int64 v9; // x23
      __int64 v10; // x8
      signed __int64 v11; // x25
      __int64 v12; // x8
      __int64 v13; // x20
      __int64 v14; // x21
      unsigned __int64 v15; // x8
      __int64 v16; // x25
      unsigned __int64 v17; // x9
      __int64 v18; // x22
      char *v19; // x24
      char *v20; // x23
      char *v21; // x26
      char *v22; // x21
      char *v23; // x26
      char *v24; // x28
      char *v25; // x24
      char *v26; // x8
      _BYTE __dst[68]; // [xsp+8h] [xbp-98h] BYREF
    
      v6 = (char *)a1[1];
      if ( v6 == (char *)a1[2] )
      {
        v15 = 0xF0F0F0F0F0F0F0F1LL * ((__int64)&v6[-*a1] >> 2);
        v16 = 0x3C3C3C3C3C3C3C3LL;
        v17 = 1;
        if ( v15 )
        {
          if ( v15 == 0x3C3C3C3C3C3C3C3LL )
            std::__throw_length_error("vector::_M_insert_aux");
          v17 = 0xE1E1E1E1E1E1E1E2LL * ((__int64)&v6[-*a1] >> 2);
        }
        if ( v17 >= v15 )
        {
          v16 = v17;
          if ( v17 > 0x3C3C3C3C3C3C3C3LL )
            std::__throw_bad_alloc();
        }
        v18 = operator new(68 * v16);
        v19 = (char *)*a1;
        v20 = (char *)v18;
        if ( (char *)*a1 != a2 )
        {
          v21 = 0;
          do
          {
            memcpy(&v21[v18], &v21[(_QWORD)v19], 0x44u);
            v21 += 68;
          }
          while ( (char *)(a2 - v19) != v21 );
          v20 = (char *)(v18 + 68 * ((a2 - 68 - v19) / 0x44uLL) + 68);
        }
        memcpy(v20, a3, 0x44u);
        v22 = v20 + 68;
        v23 = (char *)a1[1];
        if ( a2 != v23 )
        {
          v24 = v20;
          v25 = a2;
          do
          {
            memcpy(v22, v25, 0x44u);
            v25 += 68;
            v26 = v24 + 136;
            v24 = v22;
            v22 = v26;
          }
          while ( v23 != v25 );
          v22 = &v20[68 * ((v23 - 68 - a2) / 0x44uLL) + 136];
        }
        if ( *a1 )
          operator delete((void *)*a1);
        *a1 = v18;
        a1[1] = (__int64)v22;
        a1[2] = v18 + 68 * v16;
      }
      else
      {
        memcpy(v6, v6 - 68, 0x44u);
        v7 = a1[1];
        v8 = v7 + 68;
        a1[1] = v7 + 68;
        memcpy(__dst, a3, sizeof(__dst));
        v9 = v7 - 68;
        v10 = v7 - 68 - (_QWORD)a2;
        if ( v10 >= 1 )
        {
          v11 = 0xF0F0F0F0F0F0F0F1LL * (v10 >> 2) + 1;
          v12 = v7;
          do
          {
            v13 = v8 - 136;
            v14 = v12 - 136;
            memcpy((void *)(v8 - 136), (const void *)(v12 - 136), 0x44u);
            --v11;
            v8 = v7;
            v7 = v13;
            v12 = v9;
            v9 = v14;
          }
          while ( v11 > 1 );
        }
        memcpy(a2, __dst, 0x44u);
      }
    }

}; // end class std::vector<CachedFontFormatter::CachedGlyph,std::allocator<CachedFontFormatter::CachedGlyph>>
