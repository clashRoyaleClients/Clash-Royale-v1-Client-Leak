class NativeFont
{
public:

    _QWORD *__fastcall NativeFont::NativeFont(_QWORD *a1)
    {
      Font::Font(a1);
      *a1 = off_100477100;
      String::String((__int64)(a1 + 3));
      String::String((__int64)(a1 + 6));
      (*(void (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
      return a1;
    }

    CFTypeRef *__fastcall NativeFont::~NativeFont(CFTypeRef *a1)
    {
      *a1 = off_100477100;
      nti_free_font(a1[2]);
      (*((void (__fastcall **)(CFTypeRef *))*a1 + 15))(a1);
      String::~String((__int64)(a1 + 6));
      String::~String((__int64)(a1 + 3));
      Font::~Font((AllianceInfo *)a1);
      return a1;
    }

    CFTypeRef *__fastcall NativeFont::~NativeFont(CFTypeRef *a1)
    {
      NativeFont::~NativeFont(a1);
      return a1;
    }

    void __fastcall NativeFont::~NativeFont(CFTypeRef *a1)
    {
      NativeFont::~NativeFont(a1);
      operator delete(a1);
    }

    __int64 __fastcall NativeFont::loadSystemFont(const char *a1, __int64 a2, float a3)
    {
      char v3; // w20
      __int64 v6; // x19
      const __CTFont *system_font; // x0
      void (__fastcall *v8)(__int64, String *); // x23
      String v10; // [xsp+18h] [xbp-1B8h] BYREF
      String v11; // [xsp+30h] [xbp-1A0h] BYREF
      String v12; // [xsp+48h] [xbp-188h] BYREF
      __int64 v13; // [xsp+60h] [xbp-170h] BYREF
      int v14; // [xsp+68h] [xbp-168h]
      String v15; // [xsp+70h] [xbp-160h] BYREF
      char v16[255]; // [xsp+89h] [xbp-147h] BYREF
    
      v3 = a2;
      String::format(
        (String *)"[NativeFont::loadSystemFont] pFontName: %s, size: %.2f, outline: %d",
        (__int64)&v15,
        a1,
        a3,
        a2);
      Debugger::print(&v15);
      String::~String((__int64)&v15);
      v6 = operator new(96);
      NativeFont::NativeFont((_QWORD *)v6);
      v13 = 0;
      v14 = 0;
      if ( NativeFont::s_fallbackFonts != qword_1004F7458 )
      {
        v13 = NativeFont::s_fallbackFonts;
        v14 = (unsigned __int64)(qword_1004F7458 - NativeFont::s_fallbackFonts) >> 3;
      }
      system_font = nti_load_system_font(a1, (__int64)&v13, a3);
      *(_QWORD *)(v6 + 16) = system_font;
      if ( system_font )
      {
        nti_font_get_family_name(system_font, (__int64)v16, 255);
        v8 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v6 + 96LL);
        String::String(&v11, v16);
        v8(v6, &v11);
        String::~String((__int64)&v11);
        String::String(&v10, a1);
        String::operator=((String *)(v6 + 48), &v10);
        String::~String((__int64)&v10);
        *(float *)(v6 + 8) = a3;
        *(_BYTE *)(v6 + 72) = v3;
        *(_BYTE *)(v6 + 73) = nti_font_get_style(*(const __CTFont **)(v6 + 16)) & 1;
        *(_BYTE *)(v6 + 74) = (nti_font_get_style(*(const __CTFont **)(v6 + 16)) & 2) != 0;
      }
      else
      {
        String::format((String *)"NativeFont::loadSystemFont fail %s", (__int64)&v12, a1);
        Debugger::warning(&v12);
        String::~String((__int64)&v12);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        return 0;
      }
      return v6;
    }

    __int64 __fastcall NativeFont::loadFile(const char *a1, char a2, int a3, char a4, float a5)
    {
      const String *v9; // x1
      _DWORD *v10; // x21
      void *v11; // x23
      int v12; // w24
      void (__cdecl *v13)(void *, void *); // x25
      __int64 v14; // x0
      __int64 v15; // x22
      const __CTFont *font_mem_nocopy; // x0
      void (__fastcall *v17)(__int64, String *); // x21
      String v19; // [xsp+10h] [xbp-1E0h] BYREF
      String v20; // [xsp+28h] [xbp-1C8h] BYREF
      String v21; // [xsp+40h] [xbp-1B0h] BYREF
      FILE *v22; // [xsp+58h] [xbp-198h] BYREF
      String v23; // [xsp+60h] [xbp-190h] BYREF
      __int64 v24; // [xsp+78h] [xbp-178h] BYREF
      int v25; // [xsp+80h] [xbp-170h]
      char v26[255]; // [xsp+89h] [xbp-167h] BYREF
    
      v24 = 0;
      v25 = 0;
      if ( (a4 & 1) == 0 && NativeFont::s_fallbackFonts != qword_1004F7458 )
      {
        v24 = NativeFont::s_fallbackFonts;
        v25 = (unsigned __int64)(qword_1004F7458 - NativeFont::s_fallbackFonts) >> 3;
      }
      String::String(&v23, a1);
      v10 = (_DWORD *)MappedFile::map((MappedFile *)&v23, v9);
      String::~String((__int64)&v23);
      if ( v10 )
      {
        v11 = *(void **)v10;
        v12 = v10[2];
        v13 = (void (__cdecl *)(void *, void *))mapped_file_free_func;
      }
      else
      {
        TitanInputFile::TitanInputFile((TitanInputFile *)&v22, a1, "rb");
        if ( !TitanInputFile::isOpen((LogicBuyResourcesCommand *)&v22) )
        {
          String::format((String *)"NativeFont::loadFile unable to load %s", (__int64)&v21, a1);
          if ( a3 )
            Debugger::error(&v21);
          Debugger::warning(&v21);
          String::~String((__int64)&v21);
          TitanInputFile::~TitanInputFile(&v22);
          return 0;
        }
        LODWORD(v14) = TitanInputFile::getSize(&v22);
        v12 = v14;
        if ( (int)v14 < 0LL )
          v14 = -1;
        else
          v14 = (int)v14;
        v11 = (void *)operator new[](v14);
        TitanInputFile::read(&v22, v11, 1, v12);
        TitanInputFile::close(&v22);
        TitanInputFile::~TitanInputFile(&v22);
        v13 = (void (__cdecl *)(void *, void *))malloc_free_func;
      }
      v15 = operator new(96);
      NativeFont::NativeFont((_QWORD *)v15);
      font_mem_nocopy = nti_load_font_mem_nocopy((const UInt8 *)v11, v12, v10, v13, (__int64)&v24, a5);
      *(_QWORD *)(v15 + 16) = font_mem_nocopy;
      if ( !font_mem_nocopy )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        if ( !v10 && v11 )
          operator delete[](v11);
        if ( v10 )
        {
          MappedFile::~MappedFile((MappedFile *)v10);
          operator delete(v10);
        }
        return 0;
      }
      nti_font_get_family_name(font_mem_nocopy, (__int64)v26, 255);
      v17 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v15 + 96LL);
      String::String(&v20, v26);
      v17(v15, &v20);
      String::~String((__int64)&v20);
      *(float *)(v15 + 8) = a5;
      *(_BYTE *)(v15 + 72) = a2;
      String::String(&v19, a1);
      if ( (unsigned int)String::contains(&v19, "Bold") )
        *(_BYTE *)(v15 + 73) = 1;
      if ( (unsigned int)String::contains(&v19, "Italic") )
        *(_BYTE *)(v15 + 74) = 1;
      String::~String((__int64)&v19);
      return v15;
    }

    __int64 __fastcall NativeFont::isBold(SelectableButton *this)
    {
      return *((unsigned __int8 *)this + 73);
    }

    __int64 __fastcall NativeFont::isItalic(SelectableButton *this)
    {
      return *((unsigned __int8 *)this + 74);
    }

    __int64 __fastcall NativeFont::getFamilyName(SelectableButton *this)
    {
      int v1; // w8
      __int64 result; // x0
    
      v1 = *((_DWORD *)this + 7) + 1;
      result = (__int64)this + 32;
      if ( v1 > 8 )
        return *(_QWORD *)result;
      return result;
    }

    __int64 __fastcall NativeFont::getName(SelectableButton *this)
    {
      int v1; // w8
      __int64 result; // x0
    
      v1 = *((_DWORD *)this + 13) + 1;
      result = (__int64)this + 56;
      if ( v1 > 8 )
        return *(_QWORD *)result;
      return result;
    }

    __int64 __fastcall NativeFont::getSize(SelectableButton *this)
    {
      return (unsigned int)(int)*((float *)this + 2);
    }

    __int64 __fastcall NativeFont::isOutline(SelectableButton *this)
    {
      return *((unsigned __int8 *)this + 72);
    }

    String *__fastcall NativeFont::setFamilyName(String *this, String *a2)
    {
      return String::operator=(this + 1, a2);
    }

    __int64 __fastcall NativeFont::hasGlyphsFor(SelectableButton *this, const String *a2)
    {
      return 1;
    }

    __int64 __fastcall NativeFont::getTexture(SelectableButton *this)
    {
      return NativeFontCache::s_nativeFontCache;
    }

    __int64 __fastcall NativeFont::formatString(
            SelectableButton *this,
            const String *a2,
            float a3,
            int a4,
            float a5,
            int a6,
            int a7)
    {
      __int64 v14; // x19
      const char *v15; // x24
      const char *v16; // x28
      __int64 v17; // x20
      const char *v18; // x26
      bool v19; // w22
      __int64 v20; // x0
      int v21; // w25
      const char *v22; // x27
      const char *v23; // x0
      char v24; // w26
      int v25; // w21
      internal_t *p_internal; // x8
      const char *v27; // x0
      __int64 v28; // x0
      internal_t *pHeap; // x8
      __int64 v30; // x25
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x21
      float v34; // s0
      CTFontRef v35; // x0
      CTFontRef v36; // x21
      internal_t *v37; // x1
      _QWORD *formatter; // x23
      __int64 iterator; // x0
      float v40; // s0
      int v42; // [xsp+10h] [xbp-370h]
      int v43; // [xsp+14h] [xbp-36Ch]
      SelectableButton *v44; // [xsp+18h] [xbp-368h]
      String v45; // [xsp+30h] [xbp-350h] BYREF
      String v46; // [xsp+48h] [xbp-338h] BYREF
      String v47; // [xsp+60h] [xbp-320h] BYREF
      String v48; // [xsp+78h] [xbp-308h] BYREF
      String v49; // [xsp+90h] [xbp-2F0h] BYREF
      String v50; // [xsp+A8h] [xbp-2D8h] BYREF
      String v51; // [xsp+C0h] [xbp-2C0h] BYREF
      String v52; // [xsp+D8h] [xbp-2A8h] BYREF
      String v53; // [xsp+F0h] [xbp-290h] BYREF
      String v54; // [xsp+108h] [xbp-278h] BYREF
      String v55; // [xsp+120h] [xbp-260h] BYREF
      String v56; // [xsp+138h] [xbp-248h] BYREF
      String v57; // [xsp+150h] [xbp-230h] BYREF
      String v58; // [xsp+168h] [xbp-218h] BYREF
      String v59; // [xsp+180h] [xbp-200h] BYREF
      String v60; // [xsp+198h] [xbp-1E8h] BYREF
      String v61; // [xsp+1B0h] [xbp-1D0h] BYREF
      String v62; // [xsp+1C8h] [xbp-1B8h] BYREF
      String v63; // [xsp+1E0h] [xbp-1A0h] BYREF
      String v64; // [xsp+1F8h] [xbp-188h] BYREF
      String v65; // [xsp+210h] [xbp-170h] BYREF
      String v66; // [xsp+228h] [xbp-158h] BYREF
      unsigned __int8 v67; // [xsp+245h] [xbp-13Bh] BYREF
      unsigned __int8 v68; // [xsp+246h] [xbp-13Ah] BYREF
      unsigned __int8 v69; // [xsp+247h] [xbp-139h] BYREF
      String v70; // [xsp+248h] [xbp-138h] BYREF
      String v71; // [xsp+260h] [xbp-120h] BYREF
      String v72; // [xsp+278h] [xbp-108h] BYREF
      String v73; // [xsp+290h] [xbp-F0h] BYREF
      String v74; // [xsp+2A8h] [xbp-D8h] BYREF
      String v75; // [xsp+2C0h] [xbp-C0h] BYREF
      String v76; // [xsp+2D8h] [xbp-A8h] BYREF
      String v77; // [xsp+2F0h] [xbp-90h] BYREF
      String v78; // [xsp+308h] [xbp-78h] BYREF
    
      v14 = operator new(88);
      memset((void *)v14, 0, 0x50u);
      *(_QWORD *)v14 = &off_100477190;
      *(_QWORD *)(v14 + 80) = this;
      *(_QWORD *)(v14 + 32) = 0;
      String::String(&v77, "\n");
      String::String(&v76, "\r");
      String::replace(a2, &v77, &v76, &v78);
      String::~String((__int64)&v76);
      String::~String((__int64)&v77);
      String::String((__int64)&v75, &v78);
      if ( a7 )
      {
        String::String((__int64)&v74, &v75);
        while ( String::startsWith(&v74, "\n") )
        {
          String::substring((unsigned int *)&v74, (const char *)1, (unsigned int)v74.m_length, (__int64)&v73);
          String::operator=(&v74, &v73);
          String::~String((__int64)&v73);
        }
        v42 = a4;
        v43 = a6;
        v44 = this;
        String::String(&v72, "<c");
        v15 = (const char *)String::indexOf((__int64)&v74, (__int64)&v72);
        String::~String((__int64)&v72);
        String::String(&v71, "</c>");
        v16 = (const char *)String::indexOf((__int64)&v74, (__int64)&v71);
        String::~String((__int64)&v71);
        v17 = 0;
        v18 = "<c";
        while ( ((unsigned int)v15 & (unsigned int)v16) != 0xFFFFFFFF )
        {
          if ( (_DWORD)v16 == -1 )
            v19 = (_DWORD)v15 != -1;
          else
            v19 = (_DWORD)v15 != -1 && (int)v15 < (int)v16;
          if ( !v19 )
            goto LABEL_39;
          v20 = String::indexOf((__int64)&v74, 62, (int)v15);
          v21 = v20;
          if ( (_DWORD)v20 == -1 || (int)v20 >= (int)v16 )
          {
            p_internal = &v75.internal;
            if ( v75.m_bytes + 1 >= 9 )
              p_internal = (internal_t *)v75.internal.pHeap;
            String::format((String *)"missing end of color code in text field %s", (__int64)&v59, p_internal);
            Debugger::warning(&v59);
            String::~String((__int64)&v59);
            String::substring((unsigned int *)&v74, v15, (unsigned int)((_DWORD)v15 + 2), (__int64)&v57);
            String::String(&v56, "");
            String::replace(&v75, &v57, &v56, &v58);
            String::operator=(&v75, &v58);
            String::~String((__int64)&v58);
            String::~String((__int64)&v56);
            String::~String((__int64)&v57);
            String::substring((unsigned int *)&v74, 0, (__int64)v15, (__int64)&v55);
            String::substring(
              (unsigned int *)&v74,
              (const char *)(unsigned int)((_DWORD)v15 + 2),
              (unsigned int)v74.m_length,
              (__int64)&v54);
            operator+((__int64 *)&v53.m_length, &v55, &v54);
            String::operator=(&v74, &v53);
            String::~String((__int64)&v53);
            String::~String((__int64)&v54);
            String::~String((__int64)&v55);
          }
          else
          {
            String::substring((unsigned int *)&v74, (const char *)(unsigned int)((_DWORD)v15 + 2), v20, (__int64)&v70);
            v22 = v18;
            if ( v70.m_length == 8 )
            {
              v27 = v70.m_bytes + 1 >= 9 ? v70.internal.pHeap : (const char *)&v70.internal;
              v25 = strtoul(v27, 0, 16);
              v24 = 0;
            }
            else if ( v70.m_length == 6 )
            {
              v23 = v70.m_bytes + 1 >= 9 ? v70.internal.pHeap : (const char *)&v70.internal;
              v24 = 0;
              v25 = strtoul(v23, 0, 16) | 0xFF000000;
            }
            else if ( v70.m_length == 1 && (v28 = (unsigned int)String::charAt(&v70, 0) - 48, (unsigned int)v28 <= 9) )
            {
              Font::getFontModifier(v28, &v69, &v68, (char *)&v67);
              v24 = 0;
              v25 = (unsigned __int16)(v68 << 8) | (v69 << 16) | v67 | 0xFF000000;
            }
            else
            {
              pHeap = &v75.internal;
              if ( v75.m_bytes + 1 >= 9 )
                pHeap = (internal_t *)v75.internal.pHeap;
              String::format((String *)"invalid formatting in text field %s", (__int64)&v66, pHeap);
              Debugger::warning(&v66);
              String::~String((__int64)&v66);
              v24 = 1;
              v25 = -1;
            }
            v30 = (unsigned int)(v21 + 1);
            String::substring((unsigned int *)&v74, v15, v30, (__int64)&v64);
            String::String(&v63, "");
            String::replace(&v75, &v64, &v63, &v65);
            String::operator=(&v75, &v65);
            String::~String((__int64)&v65);
            String::~String((__int64)&v63);
            String::~String((__int64)&v64);
            String::substring((unsigned int *)&v74, 0, (__int64)v15, (__int64)&v62);
            String::substring((unsigned int *)&v74, (const char *)v30, (unsigned int)v74.m_length, (__int64)&v61);
            operator+((__int64 *)&v60.m_length, &v62, &v61);
            String::operator=(&v74, &v60);
            String::~String((__int64)&v60);
            String::~String((__int64)&v61);
            if ( (v24 & 1) == 0 )
            {
              v31 = operator new(16);
              *(_QWORD *)(v31 + 8) = 0;
              if ( v17 )
                *(_QWORD *)(v17 + 8) = v31;
              else
                *(_QWORD *)(v14 + 32) = v31;
              *(_DWORD *)v31 = v25;
              *(_DWORD *)(v31 + 4) = (_DWORD)v15;
              v17 = v31;
            }
            String::~String((__int64)&v62);
            String::~String((__int64)&v70);
            v18 = v22;
          }
          if ( !v19 )
          {
    LABEL_39:
            String::substring((unsigned int *)&v74, v16, (unsigned int)((_DWORD)v16 + 4), (__int64)&v51);
            String::String(&v50, "");
            String::replace(&v75, &v51, &v50, &v52);
            String::operator=(&v75, &v52);
            String::~String((__int64)&v52);
            String::~String((__int64)&v50);
            String::~String((__int64)&v51);
            String::substring((unsigned int *)&v74, 0, (__int64)v16, (__int64)&v49);
            String::substring(
              (unsigned int *)&v74,
              (const char *)(unsigned int)((_DWORD)v16 + 4),
              (unsigned int)v74.m_length,
              (__int64)&v48);
            operator+((__int64 *)&v47.m_length, &v49, &v48);
            String::operator=(&v74, &v47);
            String::~String((__int64)&v47);
            v32 = operator new(16);
            v33 = v32;
            *(_QWORD *)(v32 + 8) = 0;
            if ( v17 )
              *(_QWORD *)(v17 + 8) = v32;
            else
              *(_QWORD *)(v14 + 32) = v32;
            *(_DWORD *)v32 = -1;
            *(_DWORD *)(v32 + 4) = (_DWORD)v16;
            String::~String((__int64)&v48);
            String::~String((__int64)&v49);
            v17 = v33;
          }
          String::String(&v46, v18);
          v15 = (const char *)String::indexOf((__int64)&v74, (__int64)&v46);
          String::~String((__int64)&v46);
          String::String(&v45, "</c>");
          v16 = (const char *)String::indexOf((__int64)&v74, (__int64)&v45);
          String::~String((__int64)&v45);
        }
        String::~String((__int64)&v74);
        this = v44;
        a4 = v42;
        a6 = v43;
      }
      v34 = *((float *)this + 2) * a5;
      *(float *)(v14 + 56) = v34;
      v35 = nti_font_copy_with_size(*((const __CTFont **)this + 2), v34);
      v36 = v35;
      if ( v75.m_bytes + 1 > 8 )
        v37 = (internal_t *)v75.internal.pHeap;
      else
        v37 = &v75.internal;
      formatter = nti_create_formatter(v35, (const char *)v37);
      *(_QWORD *)(v14 + 40) = formatter;
      nti_free_font(v36);
      if ( (a4 & 0x23) == 0x20 )
      {
        a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14) | a4 & 0x1C;
        formatter = *(_QWORD **)(v14 + 40);
      }
      *(_DWORD *)(v14 + 60) = a4;
      *(float *)(v14 + 64) = a3;
      iterator = nti_get_iterator((__int64)formatter);
      *(_QWORD *)(v14 + 48) = iterator;
      *(_BYTE *)(v14 + 72) = 0;
      *(_BYTE *)(v14 + 74) = a6;
      v40 = *(float *)(v14 + 64);
      if ( !a6 )
        v40 = 100000.0;
      *(_BYTE *)(v14 + 72) = !nti_iterator_next_line(iterator, v40);
      *(_QWORD *)(v14 + 8) = 0;
      *(_BYTE *)(v14 + 73) = (*(__int64 (__fastcall **)(SelectableButton *))(*(_QWORD *)this + 72LL))(this);
      *(_DWORD *)(v14 + 68) = 0;
      *(_QWORD *)(v14 + 16) = 0xFFFFFFFF00000000LL;
      String::~String((__int64)&v75);
      String::~String((__int64)&v78);
      return v14;
    }

    __int64 __fastcall NativeFont::lineHeight(const __CTFont **this)
    {
      float ascent; // s0
      float v3; // s8
    
      ascent = nti_font_get_ascent(*(this + 2));
      v3 = ascent + nti_font_get_descent(*(this + 2));
      return (unsigned int)(int)(float)(v3 + nti_font_get_leading(*(this + 2)));
    }

    NativeFontCache *__fastcall NativeFont::constructCache(SelectableButton *this, int a2)
    {
      int v3; // w21
      NativeFontCache *v4; // x19
      NativeFontCache *result; // x0
    
      v3 = (int)this;
      ++NativeFont::s_cacheSerial;
      v4 = (NativeFontCache *)operator new(120);
      result = NativeFontCache::NativeFontCache(v4, v3, a2);
      NativeFontCache::s_nativeFontCache = (__int64)v4;
      return result;
    }

    __int64 __fastcall NativeFont::setGlyphMargin(
            _DWORD *a1,
            unsigned int a2,
            unsigned int a3,
            unsigned int a4,
            unsigned int a5,
            int a6)
    {
      __int64 result; // x0
    
      result = Debugger::doAssert((a2 < 0x11 && a3 < 0x11 && a4 < 0x11) & (unsigned __int8)(a5 < 0x11), "");
      a1[19] = a2;
      a1[20] = a3;
      a1[21] = a4;
      a1[22] = a5;
      a1[23] = a6;
      return result;
    }

    void NativeFont::deconstructCache()
    {
      void *v0; // x19
    
      ++NativeFont::s_cacheSerial;
      v0 = (void *)NativeFontCache::s_nativeFontCache;
      if ( NativeFontCache::s_nativeFontCache )
      {
        NativeFontCache::~NativeFontCache((NativeFontCache *)NativeFontCache::s_nativeFontCache);
        operator delete(v0);
      }
      NativeFontCache::s_nativeFontCache = 0;
    }

    __int64 NativeFont::getFontCacheWidth()
    {
      unsigned int *v0; // x8
    
      if ( NativeFontCache::s_nativeFontCache && (v0 = *(unsigned int **)(NativeFontCache::s_nativeFontCache + 96)) != 0 )
        return *v0;
      else
        return 0;
    }

    __int64 NativeFont::getFontCacheHeight()
    {
      __int64 v0; // x8
    
      if ( NativeFontCache::s_nativeFontCache && (v0 = *(_QWORD *)(NativeFontCache::s_nativeFontCache + 96)) != 0 )
        return *(unsigned int *)(v0 + 4);
      else
        return 0;
    }

    __int64 NativeFont::updateCache()
    {
      if ( NativeFontCache::s_nativeFontCache )
        return NativeFontCache::update((NativeFontCache *)NativeFontCache::s_nativeFontCache);
      else
        return 0;
    }

    void NativeFont::freeFallbackFonts()
    {
      __int64 v0; // x8
      unsigned __int64 v1; // x20
    
      v0 = NativeFont::s_fallbackFonts;
      if ( qword_1004F7458 != NativeFont::s_fallbackFonts )
      {
        v1 = 0;
        do
        {
          nti_free_font(*(CFTypeRef *)(v0 + 8 * v1++));
          v0 = NativeFont::s_fallbackFonts;
        }
        while ( v1 < (qword_1004F7458 - NativeFont::s_fallbackFonts) >> 3 );
      }
      qword_1004F7458 = v0;
    }

    void __fastcall NativeFont::loadDefaultFallbackFonts(int a1)
    {
      __int64 i; // x22
      String v3; // [xsp+0h] [xbp-40h] BYREF
    
      String::String(&v3, "");
      if ( a1 )
        NativeFont::freeFallbackFonts();
      for ( i = 0; i != -24; i -= 24 )
        String::~String((__int64)&v3 + i);
    }

    unsigned __int64 NativeFont::getFallbackFontCount()
    {
      return (unsigned __int64)(qword_1004F7458 - NativeFont::s_fallbackFonts) >> 3;
    }

    __int64 NativeFont::getFontType()
    {
      return 1;
    }

    __int64 __fastcall NativeFont::setOutline(__int64 result, char a2)
    {
      *(_BYTE *)(result + 72) = a2;
      return result;
    }

    _DWORD *__fastcall NativeFont::initializeMembers(__int64 a1)
    {
      _DWORD *result; // x0
    
      *(_QWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 92) = 1;
      *(_QWORD *)(a1 + 16) = 0;
      *(_WORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 74) = 0;
      result = String::operator=((_DWORD *)(a1 + 24), "");
      *(_DWORD *)(a1 + 8) = 0;
      return result;
    }

}; // end class NativeFont
