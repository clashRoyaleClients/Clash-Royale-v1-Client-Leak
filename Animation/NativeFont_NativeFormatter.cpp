class NativeFont::NativeFormatter
{
public:

    __int64 __fastcall NativeFont::NativeFormatter::nextGlyph(__int64 a1, __int64 a2)
    {
      float v4; // s0
      _BOOL4 line; // w0
      int v6; // w0
      __int64 glyph; // x22
      const void *v8; // x21
      float line_width; // s8
      float line_ascent; // s0
      float v11; // s0
      int character_index; // w0
      __int64 v13; // x8
      int *v14; // x10
      int v15; // w10
      int v16; // w8
      float v17; // s0
      float v19; // [xsp+8h] [xbp-38h] BYREF
      int v20; // [xsp+Ch] [xbp-34h] BYREF
    
      if ( (unsigned int)nti_iterator_next_glyph(*(_QWORD *)(a1 + 48)) )
      {
    LABEL_6:
        glyph = nti_iterator_get_glyph(*(_QWORD *)(a1 + 48));
        v19 = 0.0;
        v20 = 0;
        nti_iterator_get_glyph_position(*(_QWORD *)(a1 + 48), (float *)&v20, &v19);
        v8 = (const void *)nti_iterator_copy_font(*(_QWORD *)(a1 + 48));
        NativeFontCache::findOrAdd(
          NativeFontCache::s_nativeFontCache,
          glyph,
          v8,
          a2,
          *(_QWORD *)(a1 + 80),
          *(float *)(a1 + 56));
        line_width = nti_iterator_get_line_width(*(_QWORD *)(a1 + 48));
        line_ascent = nti_iterator_get_line_ascent(*(_QWORD *)(a1 + 48));
        *(_DWORD *)(a1 + 8) = v20;
        v11 = floorf(line_ascent) + v19;
        *(_WORD *)(a2 + 10) += (int)v11;
        *(_WORD *)(a2 + 14) += (int)v11;
        character_index = nti_iterator_get_character_index(*(_QWORD *)(a1 + 48));
        *(_DWORD *)(a1 + 20) = character_index;
        *(_BYTE *)(a2 + 16) = 0;
        v13 = *(_QWORD *)(a1 + 32);
        if ( !v13 )
        {
    LABEL_13:
          v16 = *(_DWORD *)(a1 + 60);
          if ( v16 == 2 )
          {
            v17 = ceilf((float)(*(float *)(a1 + 64) - line_width) * 0.5);
          }
          else if ( v16 == 1 )
          {
            v17 = *(float *)(a1 + 64) - line_width;
          }
          else
          {
            v17 = 0.0;
          }
          *(float *)(a1 + 8) = floorf(v17 + *(float *)(a1 + 8));
          *(float *)(a1 + 68) = ceilf(nti_iterator_get_glyph_advance(*(_QWORD *)(a1 + 48)));
          *(_BYTE *)(a1 + 24) = (unsigned int)nti_iterator_is_glyph_rtl(*(_QWORD *)(a1 + 48)) != 0;
          nti_free_font(v8);
          return 1;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v14 = (int *)v13;
            v13 = *(_QWORD *)(v13 + 8);
            if ( character_index >= v14[1] )
              break;
    LABEL_12:
            if ( !v13 )
              goto LABEL_13;
          }
          if ( !v13 || character_index < *(_DWORD *)(v13 + 4) )
          {
            v15 = *v14;
            if ( v15 != -1 )
            {
              *(_BYTE *)(a2 + 20) = v15;
              *(_BYTE *)(a2 + 17) = HIBYTE(v15);
              *(_BYTE *)(a2 + 18) = BYTE2(v15);
              *(_BYTE *)(a2 + 19) = BYTE1(v15);
              *(_BYTE *)(a2 + 16) = 1;
            }
            goto LABEL_12;
          }
        }
      }
      while ( 1 )
      {
        *(float *)(a1 + 12) = ceilf((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1)) + *(float *)(a1 + 12);
        v4 = *(float *)(a1 + 64);
        if ( !*(_BYTE *)(a1 + 74) )
          v4 = 100000.0;
        line = nti_iterator_next_line(*(_QWORD *)(a1 + 48), v4);
        *(_BYTE *)(a1 + 72) = !line;
        if ( !line )
          return 0;
        v6 = nti_iterator_next_glyph(*(_QWORD *)(a1 + 48));
        ++*(_DWORD *)(a1 + 16);
        if ( v6 )
          goto LABEL_6;
      }
    }

    long double __fastcall NativeFont::NativeFormatter::getTextHeight(__int64 **this)
    {
      float v2; // s8
      float v3; // s0
      long double v4; // q1
      long double v6; // [xsp+0h] [xbp-30h]
    
      nti_iterator_reset(*(this + 6));
      if ( *((_BYTE *)this + 74) )
        v2 = *((float *)this + 16);
      else
        v2 = 100000.0;
      if ( nti_iterator_next_line((__int64)*(this + 6), v2) )
      {
        *(_OWORD *)&v6 = 0u;
        do
        {
          v3 = ((float (__fastcall *)(__int64 **))(*this)[6])(this);
          v4 = v6;
          *(float *)&v4 = *(float *)&v6 + ceilf(v3);
          v6 = v4;
        }
        while ( nti_iterator_next_line((__int64)*(this + 6), v2) );
      }
      else
      {
        *(_OWORD *)&v6 = 0u;
      }
      return v6;
    }

    float __fastcall NativeFont::NativeFormatter::getLineWidth(SelectableButtonList *this)
    {
      return nti_iterator_get_line_width(*((_QWORD *)this + 6));
    }

    float __fastcall NativeFont::NativeFormatter::getLineHeight(SelectableButtonList *this)
    {
      float line_ascent; // s0
      float v3; // s8
    
      line_ascent = nti_iterator_get_line_ascent(*((_QWORD *)this + 6));
      v3 = line_ascent + nti_iterator_get_line_descent(*((_QWORD *)this + 6));
      return v3 + nti_iterator_get_line_leading(*((_QWORD *)this + 6));
    }

    float __fastcall NativeFont::NativeFormatter::getLineAscent(SelectableButtonList *this)
    {
      return nti_iterator_get_line_ascent(*((_QWORD *)this + 6));
    }

    float __fastcall NativeFont::NativeFormatter::getGlyphAdvance(SelectableButtonList *this)
    {
      return *((float *)this + 17);
    }

    __int64 __fastcall NativeFont::NativeFormatter::getLineBegin(SelectableButtonList *this)
    {
      unsigned int v2; // [xsp+Ch] [xbp-4h] BYREF
    
      nti_iterator_get_line_range(*((_QWORD **)this + 6), &v2, 0);
      return v2;
    }

    __int64 __fastcall NativeFont::NativeFormatter::getLineLength(SelectableButtonList *this)
    {
      unsigned int v2; // [xsp+Ch] [xbp-4h] BYREF
    
      nti_iterator_get_line_range(*((_QWORD **)this + 6), 0, &v2);
      return v2;
    }

    __int64 __fastcall NativeFont::NativeFormatter::isColor(SelectableButtonList *this)
    {
      const __CTFont *v1; // x19
      unsigned int style; // w20
    
      v1 = (const __CTFont *)nti_iterator_copy_font(*((_QWORD *)this + 6));
      style = nti_font_get_style(v1);
      nti_free_font(v1);
      return (style >> 7) & 1;
    }

    __int64 __fastcall NativeFont::NativeFormatter::isBaseDirRTL(SelectableButtonList *this)
    {
      return (unsigned int)nti_formatter_get_base_direction(*((_QWORD *)this + 5)) >> 31;
    }

    bool __fastcall NativeFont::NativeFormatter::reset(__int64 **this)
    {
      float v2; // s0
      _BOOL8 result; // x0
    
      nti_iterator_reset(*(this + 6));
      v2 = *((float *)this + 16);
      if ( !*((_BYTE *)this + 74) )
        v2 = 100000.0;
      result = nti_iterator_next_line((__int64)*(this + 6), v2);
      *((_BYTE *)this + 72) = !result;
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 4) = 0;
      return result;
    }

    float __fastcall NativeFont::NativeFormatter::getLineCharacterOffset(SelectableButtonList *this, int a2)
    {
      float line_width; // s0
      int v5; // w8
      float v6; // s0
    
      line_width = nti_iterator_get_line_width(*((_QWORD *)this + 6));
      v5 = *((_DWORD *)this + 15);
      if ( v5 == 2 )
      {
        v6 = ceilf((float)(*((float *)this + 16) - line_width) * 0.5);
      }
      else if ( v5 == 1 )
      {
        v6 = *((float *)this + 16) - line_width;
      }
      else
      {
        v6 = 0.0;
      }
      return v6 + nti_iterator_get_line_char_offset(*((CTLineRef **)this + 6), a2);
    }

    void __fastcall NativeFont::NativeFormatter::~NativeFormatter(SelectableButtonList *this)
    {
      *(_QWORD *)this = &off_100477190;
      nti_free_formatter(*((_QWORD *)this + 5));
      FontFormatter::~FontFormatter(this);
    }

    void __fastcall NativeFont::NativeFormatter::~NativeFormatter(SelectableButtonList *this)
    {
      NativeFont::NativeFormatter::~NativeFormatter(this);
    }

    void __fastcall NativeFont::NativeFormatter::~NativeFormatter(SelectableButtonList *this)
    {
      NativeFont::NativeFormatter::~NativeFormatter(this);
      operator delete(this);
    }

}; // end class NativeFont::NativeFormatter
