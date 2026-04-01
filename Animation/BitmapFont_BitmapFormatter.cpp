class BitmapFont::BitmapFormatter
{
public:

    void __fastcall BitmapFont::BitmapFormatter::nextLine(lzham::symbol_codec *this)
    {
      int v2; // w8
      float v3; // s0
    
      *((_QWORD *)this + 12) = 0;
      if ( *((_BYTE *)this + 120) )
      {
        *((_DWORD *)this + 10) = 0;
        *((_DWORD *)this + 21) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, _QWORD, float, float))(**((_QWORD **)this + 11) + 160LL))(
                                   *((_QWORD *)this + 11),
                                   *((_QWORD *)this + 9),
                                   0,
                                   (char *)this + 40,
                                   0,
                                   *((float *)this + 11),
                                   *((float *)this + 27));
        *((_DWORD *)this + 2) = 0;
        *((_DWORD *)this + 28) = 0;
        ++*((_DWORD *)this + 4);
        *((float *)this + 3) = *((float *)this + 3)
                             + (float)((float)(*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 112LL))(*((_QWORD *)this + 11))
                                     * *((float *)this + 27));
      }
      else
      {
        *((_DWORD *)this + 21) = *((_DWORD *)this + 12);
        *((_DWORD *)this + 2) = 0;
        *((_DWORD *)this + 3) = 0;
        *((_DWORD *)this + 4) = 0;
        *((_DWORD *)this + 28) = 0;
        *((float *)this + 10) = (*(float (__fastcall **)(_QWORD, _QWORD, long double, float))(**((_QWORD **)this + 11)
                                                                                            + 136LL))(
                                  *((_QWORD *)this + 11),
                                  *((_QWORD *)this + 9),
                                  COERCE_LONG_DOUBLE((unsigned __int128)0),
                                  *((float *)this + 27));
      }
      v2 = *((_DWORD *)this + 26);
      if ( v2 == 2 )
      {
        v3 = ceilf((float)(*((float *)this + 11) - ceilf(*((float *)this + 10))) * 0.5);
      }
      else if ( v2 == 1 )
      {
        v3 = *((float *)this + 11) - ceilf(*((float *)this + 10));
      }
      else
      {
        v3 = 0.0;
      }
      *((float *)this + 28) = v3;
      *((float *)this + 2) = v3;
    }

    __int64 __fastcall BitmapFont::BitmapFormatter::nextGlyph(lzham::symbol_codec *this, __int64 a2, int *a3)
    {
      __int64 Codepoint; // x8
      __int64 result; // x0
      int v7; // w22
      lzham::raw_quasi_adaptive_huffman_data_model *v8; // x23
      float *Glyph; // x21
      int *v10; // x8
      int *KernPair; // x0
      float v12; // s0
      float v13; // s1
      float v14; // s2
      int v15; // w8
      int v16; // w9
      char v17[4]; // [xsp+Ch] [xbp-34h] BYREF
    
      *((_DWORD *)this + 2) = *((_DWORD *)this + 28);
      if ( *((_DWORD *)this + 20) >= *((_DWORD *)this + 21) )
      {
        BitmapFont::BitmapFormatter::nextLine(this);
        *((_DWORD *)this + 20) = 0;
      }
      *(_DWORD *)v17 = 0;
      Codepoint = String::getCodepoint(*((String **)this + 9), v17, a3);
      result = 0;
      *((_QWORD *)this + 9) = Codepoint;
      ++*((_DWORD *)this + 20);
      *(_QWORD *)(a2 + 14) = 0;
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v7 = *(_DWORD *)v17;
      if ( *(_DWORD *)v17 )
      {
        if ( *((int *)this + 21) >= 1 )
        {
          v8 = (lzham::raw_quasi_adaptive_huffman_data_model *)*((_QWORD *)this + 11);
          Glyph = (float *)BitmapFont::findGlyph(v8, *(int *)v17);
          if ( Glyph )
          {
            v10 = (int *)*((_QWORD *)this + 12);
            if ( v10 && (KernPair = BitmapFont::findKernPair(v8, *v10, v7)) != 0 )
              v12 = (float)KernPair[2];
            else
              v12 = 0.0;
            v13 = (float)*((int *)Glyph + 9);
            v14 = *((float *)this + 27);
            *((float *)this + 29) = ceilf(v13 * v14);
            *(_WORD *)a2 = (int)(float)(Glyph[3] * 65535.0);
            *(_WORD *)(a2 + 2) = (int)(float)(Glyph[5] * 65535.0);
            *(_WORD *)(a2 + 4) = (int)(float)(Glyph[4] * 65535.0);
            *(_WORD *)(a2 + 6) = (int)(float)(Glyph[6] * 65535.0);
            v15 = *((_DWORD *)Glyph + 7);
            *(_WORD *)(a2 + 8) = (int)ceilf((float)v15 * v14);
            v16 = *((_DWORD *)Glyph + 8);
            *(_WORD *)(a2 + 10) = (int)ceilf((float)v16 * v14);
            *(_WORD *)(a2 + 12) = (int)ceilf(v14 * (float)(*((_DWORD *)Glyph + 1) + v15));
            *(_WORD *)(a2 + 14) = (int)ceilf(v14 * (float)(*((_DWORD *)Glyph + 2) + v16));
            *((float *)this + 28) = *((float *)this + 2) + ceilf((float)(v12 + v13) * v14);
            *((_QWORD *)this + 12) = Glyph;
            ++*((_DWORD *)this + 5);
          }
        }
        return 1;
      }
      return result;
    }

    void __fastcall BitmapFont::BitmapFormatter::reset(__int64 a1)
    {
      _QWORD *v2; // x8
    
      v2 = (_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(a1 + 52) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      *(_QWORD *)(a1 + 72) = v2;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      BitmapFont::BitmapFormatter::nextLine((lzham::symbol_codec *)a1);
      *(_DWORD *)(a1 + 12) = 0;
      *(_QWORD *)(a1 + 16) = 0xFFFFFFFF00000000LL;
    }

    float __fastcall BitmapFont::BitmapFormatter::getLineWidth(__int64 a1)
    {
      return *(float *)(a1 + 40);
    }

    float __fastcall BitmapFont::BitmapFormatter::getLineHeight(__int64 a1)
    {
      return ceilf(
               (float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 112LL))(*(_QWORD *)(a1 + 88))
             * *(float *)(a1 + 108));
    }

    float __fastcall BitmapFont::BitmapFormatter::getTextHeight(__int64 a1)
    {
      long double v1; // q8
      String *Codepoint; // x20
      int v4; // w22
      _QWORD *v5; // x24
      float *v6; // x23
      int *v7; // x2
      int v8; // w21
      String *v9; // x0
      char v11[4]; // [xsp+4h] [xbp-4Ch] BYREF
      char v12[4]; // [xsp+8h] [xbp-48h] BYREF
      int v13; // [xsp+Ch] [xbp-44h] BYREF
    
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      Codepoint = (String *)(a1 + 56);
      if ( *(_DWORD *)(a1 + 52) + 1 > 8 )
        Codepoint = *(String **)&Codepoint->m_length;
      if ( *(_BYTE *)(a1 + 120) )
        LODWORD(v1) = *(_DWORD *)(a1 + 44);
      else
        *(float *)&v1 = 100000.0;
      if ( LOBYTE(Codepoint->m_length) )
      {
        v4 = 0;
        v5 = (_QWORD *)(a1 + 88);
        v6 = (float *)(a1 + 108);
        do
        {
          while ( 1 )
          {
            v13 = 0;
            v8 = (*(__int64 (__fastcall **)(_QWORD, String *, _QWORD, int *, _QWORD, long double, float))(*(_QWORD *)*v5 + 160LL))(
                   *v5,
                   Codepoint,
                   0,
                   &v13,
                   0,
                   v1,
                   *v6);
            if ( v8 > 0 )
              break;
            *(_DWORD *)v12 = 0;
            Codepoint = (String *)String::getCodepoint(Codepoint, v12, v7);
            if ( !LOBYTE(Codepoint->m_length) )
              return (float)v4 * ceilf((float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 112LL))(*v5) * *v6);
          }
          do
          {
            *(_DWORD *)v11 = 0;
            v9 = (String *)String::getCodepoint(Codepoint, v11, v7);
            Codepoint = v9;
            --v8;
          }
          while ( v8 );
          ++v4;
        }
        while ( LOBYTE(v9->m_length) );
      }
      else
      {
        v4 = 0;
      }
      v5 = (_QWORD *)(a1 + 88);
      v6 = (float *)(a1 + 108);
      return (float)v4 * ceilf((float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 112LL))(*v5) * *v6);
    }

    float __fastcall BitmapFont::BitmapFormatter::getLineAscent(__int64 a1)
    {
      return (float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 144LL))(*(_QWORD *)(a1 + 88))
           * *(float *)(a1 + 108);
    }

    float __fastcall BitmapFont::BitmapFormatter::getGlyphAdvance(__int64 a1)
    {
      return *(float *)(a1 + 116);
    }

    __int64 BitmapFont::BitmapFormatter::getLineBegin()
    {
      return 0;
    }

    __int64 BitmapFont::BitmapFormatter::getLineLength()
    {
      return 0;
    }

    _QWORD *__fastcall BitmapFont::BitmapFormatter::~BitmapFormatter(_QWORD *a1)
    {
      *a1 = off_100477080;
      String::~String((__int64)(a1 + 6));
      FontFormatter::~FontFormatter(a1);
      return a1;
    }

    void __fastcall BitmapFont::BitmapFormatter::~BitmapFormatter(_QWORD *a1)
    {
      *a1 = off_100477080;
      String::~String((__int64)(a1 + 6));
      FontFormatter::~FontFormatter(a1);
      operator delete(a1);
    }

    __int64 BitmapFont::BitmapFormatter::isColor()
    {
      return 0;
    }

    __int64 BitmapFont::BitmapFormatter::isBaseDirRTL()
    {
      return 0;
    }

    long double BitmapFont::BitmapFormatter::getLineCharacterOffset()
    {
      long double result; // q0
    
      *(_OWORD *)&result = 0u;
      return result;
    }

}; // end class BitmapFont::BitmapFormatter
