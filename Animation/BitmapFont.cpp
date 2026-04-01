class BitmapFont
{
public:

    _QWORD *__fastcall BitmapFont::BitmapFont(_QWORD *a1)
    {
      Font::Font(a1);
      *a1 = off_100476FC8;
      String::String((__int64)(a1 + 1));
      GLImage::GLImage((__int64)(a1 + 6));
      String::String((__int64)(a1 + 12));
      (*(void (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
      return a1;
    }

    AllianceInfo *__fastcall BitmapFont::~BitmapFont(AllianceInfo *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_100476FC8;
      v2 = *((_QWORD *)a1 + 16);
      if ( v2 )
        operator delete[](v2);
      v3 = *((_QWORD *)a1 + 18);
      if ( v3 )
        operator delete[](v3);
      (*(void (__fastcall **)(AllianceInfo *))(*(_QWORD *)a1 + 120LL))(a1);
      String::~String((__int64)a1 + 96);
      GLImage::~GLImage((__int64)a1 + 48);
      String::~String((__int64)a1 + 8);
      Font::~Font(a1);
      return a1;
    }

    AllianceInfo *__fastcall BitmapFont::~BitmapFont(AllianceInfo *a1)
    {
      BitmapFont::~BitmapFont(a1);
      return a1;
    }

    void __fastcall BitmapFont::~BitmapFont(AllianceInfo *a1)
    {
      BitmapFont::~BitmapFont(a1);
      operator delete(a1);
    }

    __int64 __fastcall BitmapFont::load(const char *a1)
    {
      __int64 v2; // x19
      int v3; // w8
      bool v4; // zf
      int v5; // w9
      char v6; // w8
      int i; // w24
      const char *v8; // x1
      unsigned __int64 v10; // x8
      __int64 v11; // x0
      __int64 v12; // x21
      __int64 v13; // x22
      int v14; // w24
      int v15; // w25
      float v16; // s8
      float v17; // s9
      __int64 v18; // x9
      int v19; // w10
      int v20; // w11
      int v21; // w20
      __int64 v22; // x0
      __int64 v23; // x21
      __int64 v24; // x22
      _DWORD *v25; // x9
      int v26; // [xsp+90h] [xbp-4F0h] BYREF
      int v27; // [xsp+94h] [xbp-4ECh] BYREF
      int v28; // [xsp+98h] [xbp-4E8h] BYREF
      int v29; // [xsp+9Ch] [xbp-4E4h] BYREF
      int v30; // [xsp+A0h] [xbp-4E0h] BYREF
      int v31; // [xsp+A4h] [xbp-4DCh] BYREF
      int v32; // [xsp+A8h] [xbp-4D8h] BYREF
      int v33; // [xsp+ACh] [xbp-4D4h] BYREF
      int v34; // [xsp+B0h] [xbp-4D0h] BYREF
      int v35; // [xsp+B4h] [xbp-4CCh] BYREF
      int v36; // [xsp+B8h] [xbp-4C8h] BYREF
      int v37; // [xsp+BCh] [xbp-4C4h] BYREF
      int v38; // [xsp+C0h] [xbp-4C0h] BYREF
      int v39; // [xsp+C4h] [xbp-4BCh] BYREF
      String v40; // [xsp+C8h] [xbp-4B8h] BYREF
      String v41; // [xsp+E0h] [xbp-4A0h] BYREF
      int v42[2]; // [xsp+F8h] [xbp-488h] BYREF
      const char *v43; // [xsp+100h] [xbp-480h] BYREF
      int v44; // [xsp+110h] [xbp-470h] BYREF
      char v45; // [xsp+114h] [xbp-46Ch] BYREF
      int v46; // [xsp+118h] [xbp-468h] BYREF
      int v47; // [xsp+11Ch] [xbp-464h] BYREF
      int v48; // [xsp+120h] [xbp-460h] BYREF
      int v49; // [xsp+124h] [xbp-45Ch] BYREF
      int v50; // [xsp+128h] [xbp-458h] BYREF
      int v51; // [xsp+12Ch] [xbp-454h] BYREF
      int v52; // [xsp+130h] [xbp-450h] BYREF
      int v53; // [xsp+134h] [xbp-44Ch] BYREF
      int v54; // [xsp+138h] [xbp-448h] BYREF
      int v55; // [xsp+13Ch] [xbp-444h] BYREF
      int v56; // [xsp+140h] [xbp-440h] BYREF
      int v57; // [xsp+144h] [xbp-43Ch] BYREF
      int v58; // [xsp+148h] [xbp-438h] BYREF
      int v59; // [xsp+14Ch] [xbp-434h] BYREF
      int v60; // [xsp+150h] [xbp-430h] BYREF
      int v61; // [xsp+154h] [xbp-42Ch] BYREF
      int v62; // [xsp+158h] [xbp-428h] BYREF
      int v63; // [xsp+15Ch] [xbp-424h] BYREF
      String v64; // [xsp+160h] [xbp-420h] BYREF
      FILE *v65; // [xsp+178h] [xbp-408h] BYREF
      char v66[343]; // [xsp+181h] [xbp-3FFh] BYREF
      char v67; // [xsp+2D8h] [xbp-2A8h] BYREF
      char v68[512]; // [xsp+318h] [xbp-268h] BYREF
    
      TitanInputFile::TitanInputFile((TitanInputFile *)&v65, a1, "r");
      if ( TitanInputFile::isOpen((LogicBuyResourcesCommand *)&v65) )
      {
        v2 = operator new(152);
        BitmapFont::BitmapFont((_QWORD *)v2);
        v63 = 0;
        v62 = 0;
        v61 = 0;
        v60 = 0;
        v59 = 0;
        v58 = 0;
        v57 = 0;
        v56 = 0;
        TitanInputFile::gets(&v65, v68, 512);
        if ( sscanf(
               v68,
               "info face=\"%63[^\"]\" size=%d bold=%d italic=%d charset=\"%63s unicode=%d stretchH=%d smooth=%d aa=%d paddin"
               "g=%d,%d,%d,%d spacing=%d,%d outline=%d%*[\n"
               "\r]",
               &v67,
               &v63,
               &v59,
               &v58,
               &v66[279],
               &v57,
               &v62,
               &v56,
               &v60,
               &v66[263],
               &v66[267],
               &v66[271],
               &v66[275],
               &v66[255],
               &v66[259],
               &v61) == 16 )
        {
          v3 = v63;
          if ( v63 < 0 )
          {
            v3 = -v63;
            v63 = -v63;
          }
          *(_DWORD *)(v2 + 44) = v3;
          String::operator=((_DWORD *)(v2 + 8), &v67);
          v4 = v58 == 1;
          v5 = v61;
          *(_BYTE *)(v2 + 32) = v59 == 1;
          v6 = v4;
          v55 = 0;
          v54 = 0;
          v53 = 0;
          v52 = 0;
          *(_BYTE *)(v2 + 33) = v6;
          *(_BYTE *)(v2 + 34) = v5 == 1;
          v51 = 0;
          v50 = 0;
          v49 = 0;
          v48 = 0;
          v47 = 0;
          v46 = 0;
          TitanInputFile::gets(&v65, v68, 512);
          if ( sscanf(
                 v68,
                 "common lineHeight=%d base=%d scaleW=%d scaleH=%d pages=%d packed=%d alphaChnl=%d redChnl=%d greenChnl=%d bl"
                 "ueChnl=%d%*[\n"
                 "\r]",
                 &v55,
                 &v54,
                 &v53,
                 &v52,
                 &v51,
                 &v50,
                 &v49,
                 &v48,
                 &v47,
                 &v46) == 10 )
          {
            *(_DWORD *)(v2 + 36) = v54;
            *(_DWORD *)(v2 + 40) = v55;
            if ( v51 != 1 )
              __assert_rtn(
                "load",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/BitmapFont.cpp",
                123,
                "pages == 1 && \"Only single page fonts supported currently\"");
            for ( i = 0; i < v51; ++i )
            {
              TitanInputFile::gets(&v65, v68, 512);
              if ( sscanf(v68, "page id=%d file=\"%127[^\"]\"%*[\n\r]", &v45, v66) != 2 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
                TitanInputFile::close(&v65);
                goto LABEL_22;
              }
              String::operator=((_DWORD *)(v2 + 96), v66);
            }
            v44 = 0;
            TitanInputFile::gets(&v65, v68, 512);
            if ( sscanf(v68, "chars count=%d\n", &v44) == 1 )
            {
              *(_DWORD *)(v2 + 120) = v44;
              String::String(&v41, a1);
              String::getContainingDirectoryPath(&v41.m_length, (__int64)v42);
              String::~String((__int64)&v41);
              String::String(&v40, "/");
              String::operator+=(v42, &v40);
              String::~String((__int64)&v40);
              String::operator+=(v42, (_DWORD *)(v2 + 96));
              *(_BYTE *)(v2 + 49) = Font::sm_premultiplyAlpha;
              *(_BYTE *)(v2 + 48) = Font::sm_convertTo16Bit;
              if ( v42[1] + 1 > 8 )
                v8 = v43;
              else
                v8 = (const char *)&v43;
              GLImage::create(v2 + 48, v8, 1, 1);
              v10 = *(int *)(v2 + 120);
              if ( is_mul_ok(v10, 0x28u) )
                v11 = 40 * v10;
              else
                v11 = -1;
              *(_QWORD *)(v2 + 128) = operator new[](v11);
              v12 = 20;
              if ( v44 < 1 )
              {
    LABEL_36:
                v29 = 0;
                TitanInputFile::gets(&v65, v68, 512);
                if ( sscanf(v68, "kernings count=%d%*[\n\r]", &v29) == 1 )
                {
                  v21 = v29;
                }
                else
                {
                  v21 = 0;
                  v29 = 0;
                }
                *(_DWORD *)(v2 + 136) = v21;
                if ( is_mul_ok(v21, 0xCu) )
                  v22 = 12LL * v21;
                else
                  v22 = -1;
                *(_QWORD *)(v2 + 144) = operator new[](v22);
                if ( v21 < 1 )
                {
    LABEL_46:
                  TitanInputFile::close(&v65);
                  qsort(
                    *(void **)(v2 + 144),
                    *(int *)(v2 + 136),
                    0xCu,
                    (int (__cdecl *)(const void *, const void *))kernCompare);
    LABEL_50:
                  String::~String((__int64)v42);
                  goto LABEL_23;
                }
                v23 = 0;
                v24 = 0;
                while ( 1 )
                {
                  v27 = 0;
                  v28 = 0;
                  v26 = 0;
                  TitanInputFile::gets(&v65, v68, 512);
                  if ( sscanf(v68, "kerning first=%d%*[ ]second=%d%*[ ]amount=%d%*[ \n\r]", &v27, &v26, &v28) != 3 )
                    break;
                  v25 = (_DWORD *)(*(_QWORD *)(v2 + 144) + v23);
                  *v25 = v27;
                  v25[1] = v26;
                  v25[2] = v28;
                  ++v24;
                  v23 += 12;
                  if ( v24 >= v29 )
                    goto LABEL_46;
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
                TitanInputFile::close(&v65);
              }
              else
              {
                v13 = 0;
                v14 = *(_DWORD *)(v2 + 52);
                v15 = *(_DWORD *)(v2 + 56);
                v16 = (float)v14;
                v17 = (float)v15;
                while ( 1 )
                {
                  v38 = 0;
                  v39 = 0;
                  v36 = 0;
                  v37 = 0;
                  v34 = 0;
                  v35 = 0;
                  v32 = 0;
                  v33 = 0;
                  v30 = 0;
                  v31 = 0;
                  TitanInputFile::gets(&v65, v68, 512);
                  if ( sscanf(
                         v68,
                         "char%*[ ]id=%d%*[ ]x=%d%*[ ]y=%d%*[ ]width=%d%*[ ]height=%d%*[ ]xoffset=%d%*[ ]yoffset=%d%*[ ]xadva"
                         "nce=%d%*[ ]page=%d%*[ ]chnl=%d%*[\n"
                         "\r]",
                         &v39,
                         &v38,
                         &v37,
                         &v36,
                         &v35,
                         &v34,
                         &v33,
                         &v32,
                         &v31,
                         &v30) != 10 )
                    break;
                  v18 = *(_QWORD *)(v2 + 128) + v12;
                  *(_DWORD *)(v18 - 20) = v39;
                  v19 = v36 + v38;
                  if ( v36 + v38 > v14 )
                    v19 = v14;
                  v20 = v35 + v37;
                  if ( v35 + v37 > v15 )
                    v20 = v15;
                  *(_DWORD *)(v18 - 16) = v19 - v38;
                  *(_DWORD *)(v18 - 12) = v20 - v37;
                  *(float *)(v18 - 8) = (float)v38 / v16;
                  *(float *)v18 = (float)v37 / v17;
                  *(float *)(v18 - 4) = (float)v19 / v16;
                  *(float *)(v18 + 4) = (float)v20 / v17;
                  *(_DWORD *)(v18 + 8) = v34;
                  *(_DWORD *)(v18 + 12) = v33;
                  *(_DWORD *)(v18 + 16) = v32;
                  ++v13;
                  v12 += 40;
                  if ( v13 >= v44 )
                    goto LABEL_36;
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
                TitanInputFile::close(&v65);
              }
              v2 = 0;
              goto LABEL_50;
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
            TitanInputFile::close(&v65);
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
            TitanInputFile::close(&v65);
          }
        }
        else
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
          TitanInputFile::close(&v65);
        }
      }
      else
      {
        String::format((String *)"BitmapFont::load invalid file %s", (__int64)&v64, a1);
        Debugger::warning(&v64);
        String::~String((__int64)&v64);
      }
    LABEL_22:
      v2 = 0;
    LABEL_23:
      TitanInputFile::~TitanInputFile(&v65);
      return v2;
    }

    _DWORD *__fastcall BitmapFont::findGlyph(lzham::raw_quasi_adaptive_huffman_data_model *this, int a2)
    {
      int v2; // w8
      bool v3; // vf
      int v4; // w8
      int v5; // w10
      __int64 v6; // x9
      int v7; // w12
      __int64 v8; // x8
      _DWORD *result; // x0
    
      v2 = *((_DWORD *)this + 30);
      v3 = __OFSUB__(v2, 1);
      v4 = v2 - 1;
      if ( v4 < 0 != v3 )
        return 0;
      if ( (v4 < 0) ^ v3 | (v4 == 0) )
      {
        v8 = 0;
        v6 = *((_QWORD *)this + 16);
      }
      else
      {
        v5 = 0;
        v6 = *((_QWORD *)this + 16);
        do
        {
          v7 = (v5 + v4) >> 1;
          if ( *(_DWORD *)(v6 + 40LL * v7) < a2 )
            v5 = v7 + 1;
          else
            v4 = (v5 + v4) >> 1;
        }
        while ( v4 > v5 );
        v8 = v5;
      }
      result = (_DWORD *)(v6 + 40 * v8);
      if ( *result != a2 )
        return 0;
      return result;
    }

    int *__fastcall BitmapFont::findKernPair(lzham::raw_quasi_adaptive_huffman_data_model *this, int a2, int a3)
    {
      int v3; // w8
      bool v4; // vf
      int v5; // w8
      _DWORD *v6; // x9
      int v7; // w12
      int *v8; // x11
      int *result; // x0
      int v10; // w11
      int v11; // w12
      int v13; // w13
      int v14; // w14
      bool v15; // cc
      _BOOL4 v16; // w13
      int v17; // w15
      int v18; // w16
      bool v19; // zf
      bool v20; // cc
      _BOOL4 v21; // w14
    
      v3 = *((_DWORD *)this + 34);
      v4 = __OFSUB__(v3, 1);
      v5 = v3 - 1;
      if ( v5 < 0 != v4 )
        return 0;
      v6 = (_DWORD *)*((_QWORD *)this + 18);
      if ( *v6 > a2 )
        return 0;
      v7 = v6[3 * v5];
      if ( v7 < a2 )
        return 0;
      if ( *v6 == a2 )
      {
        if ( v6[1] == a3 )
          v8 = (int *)*((_QWORD *)this + 18);
        else
          v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      if ( v7 != a2 || (result = (int *)*((_QWORD *)this + 18), v6[3 * v5 + 1] != a3) )
      {
        result = v8;
        if ( !v8 )
        {
          v10 = 0;
          while ( 1 )
          {
            v11 = (v10 + v5) >> 1;
            if ( v11 == v10 || v11 == v5 )
              break;
            result = &v6[3 * v11];
            v14 = *result;
            v13 = result[1];
            v15 = v13 < a3;
            v16 = v13 != a3;
            if ( v15 )
              v17 = (v10 + v5) >> 1;
            else
              v17 = v10;
            if ( v15 )
              v18 = v5;
            else
              v18 = (v10 + v5) >> 1;
            v19 = v14 == a2;
            v20 = v14 < a2;
            v21 = v14 != a2;
            if ( v19 )
              v10 = v17;
            if ( v20 )
              v10 = v11;
            if ( v19 )
              v5 = v18;
            if ( !v20 )
              v5 = v11;
            if ( result && !v21 && !v16 )
              return result;
          }
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall BitmapFont::stringWidth(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            String *Codepoint,
            int *a3)
    {
      int v3; // w19
      int v6; // w23
      __int64 v7; // x22
      int v8; // w24
      _DWORD *Glyph; // x25
      int *KernPair; // x0
      char v12[4]; // [xsp+Ch] [xbp-44h] BYREF
    
      v3 = (int)a3;
      v6 = 0;
      v7 = 0;
      while ( LOBYTE(Codepoint->m_length) )
      {
        Codepoint = (String *)String::getCodepoint(Codepoint, v12, a3);
        v8 = *(_DWORD *)v12;
        Glyph = BitmapFont::findGlyph(this, *(int *)v12);
        if ( Glyph )
        {
          KernPair = BitmapFont::findKernPair(this, v6, v8);
          if ( KernPair )
            LODWORD(v7) = KernPair[2] + v7;
          v7 = (unsigned int)(v7 + v3 + Glyph[9]);
          v6 = v8;
        }
      }
      return v7;
    }

    long double __fastcall BitmapFont::stringWidth(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            String *Codepoint,
            float a3,
            float a4,
            int *a5)
    {
      int v9; // w22
      long double v10; // q1
      int v11; // w21
      _DWORD *Glyph; // x23
      int *KernPair; // x0
      float v14; // s0
      long double v16; // [xsp+0h] [xbp-60h]
      char v17[4]; // [xsp+1Ch] [xbp-44h] BYREF
    
      v9 = 0;
      *(_OWORD *)&v16 = 0u;
      while ( LOBYTE(Codepoint->m_length) )
      {
        Codepoint = (String *)String::getCodepoint(Codepoint, v17, a5);
        v11 = *(_DWORD *)v17;
        Glyph = BitmapFont::findGlyph(this, *(int *)v17);
        if ( Glyph )
        {
          KernPair = BitmapFont::findKernPair(this, v9, v11);
          if ( KernPair )
            v14 = (float)KernPair[2];
          else
            v14 = 0.0;
          v10 = v16;
          *(float *)&v10 = *(float *)&v16 + ceilf((float)((float)(v14 + a3) + (float)(int)Glyph[9]) * a4);
          v16 = v10;
          v9 = v11;
        }
      }
      return v16;
    }

    __int64 __fastcall BitmapFont::fitLine(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            const char *a2,
            int a3,
            __int64 a4,
            int *a5,
            const char *a6,
            long double a7)
    {
      __int64 result; // x0
      float v9; // [xsp+Ch] [xbp-14h] BYREF
    
      if ( !a5 )
        return (*(__int64 (__fastcall **)(lzham::raw_quasi_adaptive_huffman_data_model *, const char *, __int64, _QWORD, const char *, float, long double))(*(_QWORD *)this + 160LL))(
                 this,
                 a2,
                 a4,
                 0,
                 a6,
                 (float)a3,
                 a7);
      v9 = 0.0;
      result = (*(__int64 (__fastcall **)(lzham::raw_quasi_adaptive_huffman_data_model *, const char *, __int64, float *, const char *, float, long double))(*(_QWORD *)this + 160LL))(
                 this,
                 a2,
                 a4,
                 &v9,
                 a6,
                 (float)a3,
                 a7);
      *a5 = (int)v9;
      return result;
    }

    __int64 __fastcall BitmapFont::fitLineFloatAccuracy(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            String *Codepoint,
            float a3,
            int *a4,
            float *a5,
            const char *a6,
            float a7)
    {
      const char *v8; // x20
      int v12; // w0
      unsigned int v13; // w27
      unsigned int v14; // w28
      char v15; // w21
      char v16; // w24
      __int64 v17; // x19
      __int128 v18; // q0
      int v19; // w25
      __int64 v20; // x8
      __int128 v21; // q0
      _DWORD *Glyph; // x26
      int *KernPair; // x0
      int v24; // w8
      __int128 v25; // q1
      int v26; // w8
      __int64 result; // x0
      float v28; // s0
      int v29; // [xsp+0h] [xbp-A0h]
      int v30; // [xsp+4h] [xbp-9Ch]
      __int128 v32; // [xsp+10h] [xbp-90h]
      __int128 v33; // [xsp+20h] [xbp-80h]
      char v34[4]; // [xsp+3Ch] [xbp-64h] BYREF
    
      v8 = a6;
      v29 = (int)a4;
      if ( a6 )
      {
        v12 = strlen(a6);
      }
      else
      {
        v8 = " \n\t";
        v12 = 3;
      }
      v30 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v33 = 0u;
      v32 = 0u;
      v17 = v12;
      while ( 1 )
      {
        if ( !LOBYTE(Codepoint->m_length) )
        {
          v26 = 1;
          goto LABEL_29;
        }
        *(_DWORD *)v34 = 0;
        Codepoint = (String *)String::getCodepoint(Codepoint, v34, a4);
        ++v13;
        v19 = *(_DWORD *)v34;
        if ( (int)v17 <= 0 )
        {
    LABEL_15:
          v16 = 0;
        }
        else
        {
          v20 = 0;
          while ( v8[v20] != *(_DWORD *)v34 )
          {
            if ( ++v20 >= v17 )
              goto LABEL_15;
          }
          if ( (v16 & 1) == 0 )
            v14 = v13;
          v21 = v33;
          if ( (v16 & 1) == 0 )
            *(float *)&v21 = *(float *)&v32;
          v33 = v21;
          v15 |= v16 ^ 1;
          v16 = 1;
        }
        if ( *(_DWORD *)v34 == 10 )
          break;
        Glyph = BitmapFont::findGlyph(this, *(int *)v34);
        if ( Glyph )
        {
          KernPair = BitmapFont::findKernPair(this, v30, v19);
          v24 = Glyph[9] + v29;
          if ( KernPair )
            v24 += KernPair[2];
          v25 = v32;
          *(float *)&v25 = *(float *)&v32 + ceilf((float)v24 * a7);
          if ( *(float *)&v25 > a3 )
          {
            LODWORD(v32) = v25;
            v26 = 0;
            goto LABEL_29;
          }
          if ( (v15 & 1) == 0 )
            v14 = v13;
          v32 = v25;
          v18 = v33;
          if ( (v15 & 1) == 0 )
            *(float *)&v18 = *(float *)&v25;
          v33 = v18;
          v30 = v19;
        }
      }
      v26 = 1;
      v14 = v13;
    LABEL_29:
      if ( v26 )
        result = v13;
      else
        result = v14;
      if ( a5 )
      {
        v28 = *(float *)&v33;
        if ( v26 )
          v28 = *(float *)&v32;
        *a5 = v28;
      }
      return result;
    }

    __int64 __fastcall BitmapFont::isBold(lzham::raw_quasi_adaptive_huffman_data_model *this)
    {
      return *((unsigned __int8 *)this + 32);
    }

    __int64 __fastcall BitmapFont::isItalic(lzham::raw_quasi_adaptive_huffman_data_model *this)
    {
      return *((unsigned __int8 *)this + 33);
    }

    __int64 __fastcall BitmapFont::getFamilyName(lzham::raw_quasi_adaptive_huffman_data_model *this)
    {
      int v1; // w8
      __int64 result; // x0
    
      v1 = *((_DWORD *)this + 3) + 1;
      result = (__int64)this + 16;
      if ( v1 > 8 )
        return *(_QWORD *)result;
      return result;
    }

    __int64 __fastcall BitmapFont::getSize(lzham::raw_quasi_adaptive_huffman_data_model *this)
    {
      return *((unsigned int *)this + 11);
    }

    __int64 __fastcall BitmapFont::isOutline(lzham::raw_quasi_adaptive_huffman_data_model *this)
    {
      return *((unsigned __int8 *)this + 34);
    }

    String *__fastcall BitmapFont::setFamilyName(lzham::raw_quasi_adaptive_huffman_data_model *this, String *a2)
    {
      return String::operator=((String *)((char *)this + 8), a2);
    }

    __int64 __fastcall BitmapFont::hasGlyphsFor(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            const String *a2,
            int *a3)
    {
      String *p_internal; // x20
      _DWORD *Glyph; // x8
      __int64 result; // x0
      char v7[4]; // [xsp+Ch] [xbp-14h] BYREF
    
      p_internal = (String *)&a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = *(String **)&p_internal->m_length;
      while ( LOBYTE(p_internal->m_length) )
      {
        *(_DWORD *)v7 = 0;
        p_internal = (String *)String::getCodepoint(p_internal, v7, a3);
        Glyph = BitmapFont::findGlyph(this, *(int *)v7);
        result = 0;
        if ( !Glyph )
          return result;
      }
      return 1;
    }

    __int64 __fastcall BitmapFont::formatString(
            lzham::raw_quasi_adaptive_huffman_data_model *this,
            String *a2,
            float a3,
            int a4,
            float a5,
            char a6)
    {
      __int64 v12; // x19
      _QWORD *v13; // x8
    
      v12 = operator new(128);
      *(_QWORD *)v12 = off_100477080;
      String::String(v12 + 48);
      *(_QWORD *)(v12 + 32) = 0;
      String::operator=((String *)(v12 + 48), a2);
      v13 = (_QWORD *)(v12 + 56);
      if ( *(_DWORD *)(v12 + 52) + 1 >= 9 )
        v13 = (_QWORD *)*v13;
      *(_QWORD *)(v12 + 72) = v13;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 112) = 0;
      *(_BYTE *)(v12 + 120) = a6;
      *(_DWORD *)(v12 + 40) = 0;
      *(float *)(v12 + 44) = a3;
      *(_DWORD *)(v12 + 80) = 0;
      *(_QWORD *)(v12 + 88) = this;
      *(_QWORD *)(v12 + 96) = 0;
      *(_DWORD *)(v12 + 84) = 0;
      *(_DWORD *)(v12 + 104) = a4;
      *(float *)(v12 + 108) = a5;
      BitmapFont::BitmapFormatter::nextLine((lzham::symbol_codec *)v12);
      *(_DWORD *)(v12 + 12) = 0;
      *(_QWORD *)(v12 + 16) = 0xFFFFFFFF00000000LL;
      return v12;
    }

    __int64 BitmapFont::getFontType()
    {
      return 0;
    }

    __int64 __fastcall BitmapFont::getTexture(__int64 a1)
    {
      return a1 + 48;
    }

    __int64 __fastcall BitmapFont::setOutline(__int64 result, char a2)
    {
      *(_BYTE *)(result + 34) = a2;
      return result;
    }

    __int64 __fastcall BitmapFont::lineHeight(__int64 a1)
    {
      return *(unsigned int *)(a1 + 40);
    }

    _DWORD *__fastcall BitmapFont::initializeMembers(__int64 a1)
    {
      _DWORD *result; // x0
    
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = 0;
      *(_BYTE *)(a1 + 34) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      String::operator=((_DWORD *)(a1 + 96), "");
      result = String::operator=((_DWORD *)(a1 + 8), "");
      *(_DWORD *)(a1 + 44) = 0;
      return result;
    }

    __int64 __fastcall BitmapFont::baselineFromTop(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

}; // end class BitmapFont
