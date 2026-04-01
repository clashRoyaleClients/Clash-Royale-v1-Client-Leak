class NativeFontCache
{
public:

    void __fastcall NativeFontCache::findOrAdd(__int64 a1, __int64 a2, const void *a3, __int64 a4, _DWORD *a5, float a6)
    {
      unsigned int v10; // w8
      unsigned int v11; // w9
      bool v12; // zf
      unsigned int v13; // w9
      int v14; // w11
      unsigned int v15; // w9
      bool v16; // zf
      unsigned int v17; // w9
      int v18; // w12
      unsigned int v19; // w9
      bool v20; // zf
      unsigned int v21; // w9
      int v22; // w13
      unsigned int v23; // w25
      unsigned int v24; // w9
      unsigned int v25; // w9
      int v26; // w23
      _WORD *v27; // x0
      __int64 v28; // x24
      int v29; // w28
      int v30; // w24
      __int16 v31; // w23
      int v32; // w8
      _DWORD *v33; // x0
      float v34; // s10
      float v35; // s11
      float v36; // s13
      float v37; // s14
      float v38; // s8
      float v39; // s9
      int *v40; // x8
      int v41; // s12
      int v42; // s15
      const void *v43; // x21
      const void *v44; // x26
      __int64 v45; // x21
      __int64 v46; // x26
      int v47; // w8
      int v48; // w8
      __int16 v49; // w8
      const void *cf; // [xsp+20h] [xbp-160h]
      __int16 v51; // [xsp+28h] [xbp-158h]
      __int16 v52; // [xsp+2Ch] [xbp-154h]
      __int16 v53; // [xsp+30h] [xbp-150h]
      __int16 v54; // [xsp+34h] [xbp-14Ch]
      __int16 v55; // [xsp+38h] [xbp-148h]
      int v56; // [xsp+3Ch] [xbp-144h]
      int v57; // [xsp+40h] [xbp-140h]
      int v58; // [xsp+44h] [xbp-13Ch]
      int v59; // [xsp+48h] [xbp-138h]
      int v60; // [xsp+4Ch] [xbp-134h]
      int v61; // [xsp+50h] [xbp-130h]
      int v62; // [xsp+54h] [xbp-12Ch]
      int v63; // [xsp+58h] [xbp-128h]
      int v64; // [xsp+58h] [xbp-128h]
      unsigned int v66; // [xsp+6Ch] [xbp-114h]
      unsigned int v67; // [xsp+70h] [xbp-110h]
      unsigned int v68; // [xsp+74h] [xbp-10Ch]
      CFTypeRef v69; // [xsp+78h] [xbp-108h]
      _DWORD v70[2]; // [xsp+80h] [xbp-100h] BYREF
      const void *v71; // [xsp+88h] [xbp-F8h]
      __int16 v72; // [xsp+90h] [xbp-F0h]
      __int16 v73; // [xsp+92h] [xbp-EEh]
      __int16 v74; // [xsp+94h] [xbp-ECh]
      __int16 v75; // [xsp+96h] [xbp-EAh]
      __int16 v76; // [xsp+98h] [xbp-E8h]
      __int16 v77; // [xsp+9Ah] [xbp-E6h]
      __int16 v78; // [xsp+9Ch] [xbp-E4h]
      __int16 v79; // [xsp+9Eh] [xbp-E2h]
      __int16 v80; // [xsp+A0h] [xbp-E0h]
      __int16 v81; // [xsp+A2h] [xbp-DEh]
      __int16 v82; // [xsp+A4h] [xbp-DCh]
      __int16 v83; // [xsp+A6h] [xbp-DAh]
      __int16 v84; // [xsp+A8h] [xbp-D8h]
      __int16 v85; // [xsp+AAh] [xbp-D6h]
      __int16 v86; // [xsp+ACh] [xbp-D4h]
      __int16 v87; // [xsp+AEh] [xbp-D2h]
      _BYTE v88[4]; // [xsp+B0h] [xbp-D0h] BYREF
      float v89; // [xsp+B4h] [xbp-CCh]
      float v90; // [xsp+B8h] [xbp-C8h]
      float v91; // [xsp+BCh] [xbp-C4h]
      float v92; // [xsp+C0h] [xbp-C0h]
      float v93; // [xsp+C4h] [xbp-BCh]
      float v94; // [xsp+C8h] [xbp-B8h]
      _DWORD v95[2]; // [xsp+E0h] [xbp-A0h] BYREF
      CFTypeRef v96; // [xsp+E8h] [xbp-98h]
    
      v10 = a5[23];
      v11 = a5[19];
      if ( v10 )
        v12 = v11 == 0;
      else
        v12 = 1;
      if ( v12 )
      {
        v14 = 0;
      }
      else
      {
        v13 = (unsigned int)ceilf((float)((float)v11 * a6) / (float)v10);
        if ( v13 )
          v14 = v13;
        else
          v14 = 1;
      }
      v15 = a5[20];
      if ( v10 )
        v16 = v15 == 0;
      else
        v16 = 1;
      if ( v16 )
      {
        v18 = 0;
      }
      else
      {
        v17 = (unsigned int)ceilf((float)((float)v15 * a6) / (float)v10);
        if ( v17 )
          v18 = v17;
        else
          v18 = 1;
      }
      v19 = a5[21];
      if ( v10 )
        v20 = v19 == 0;
      else
        v20 = 1;
      if ( v20 )
      {
        v22 = 0;
      }
      else
      {
        v21 = (unsigned int)ceilf((float)((float)v19 * a6) / (float)v10);
        if ( v21 )
          v22 = v21;
        else
          v22 = 1;
      }
      v23 = 0;
      if ( v10 )
      {
        v24 = a5[22];
        if ( v24 )
        {
          v25 = (unsigned int)ceilf((float)((float)v24 * a6) / (float)v10);
          if ( v25 )
            v23 = v25;
          else
            v23 = 1;
        }
      }
      v67 = v18;
      v68 = v14;
      v66 = v22;
      v26 = (v10 << 16) | v14 & 0xF | (unsigned __int8)(16 * (v18 & 0xF)) | ((v22 & 0xF) << 8) & 0xFFF | ((v23 & 0xF) << 12);
      v95[0] = a2;
      v95[1] = v26;
      v69 = nti_font_copy(a3);
      v96 = v69;
      v27 = (_WORD *)std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::find(
                       a1 + 48,
                       v95);
      v28 = a1 + 56;
      if ( v27 == (_WORD *)(a1 + 56) )
      {
        if ( *(_BYTE *)a1 )
          v32 = 2;
        else
          v32 = 4;
        v64 = v32;
        if ( !(unsigned int)nti_cache_insert_glyph(
                              *(_QWORD *)(a1 + 96),
                              (__int64)a3,
                              a2,
                              (__int64)v88,
                              v68,
                              v67 + 1,
                              v66 + 1,
                              v23,
                              0.0,
                              0.0) )
        {
          Debugger::print((__int64)"Clearing font cache");
          std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
            a1 + 48,
            *(_QWORD *)(a1 + 64));
          *(_QWORD *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = v28;
          *(_QWORD *)(a1 + 80) = v28;
          *(_QWORD *)(a1 + 88) = 0;
          bzero(
            *(void **)(*(_QWORD *)(a1 + 96) + 8LL),
            **(int **)(a1 + 96) * (__int64)v64 * *(int *)(*(_QWORD *)(a1 + 96) + 4LL));
          v33 = *(_DWORD **)(a1 + 96);
          v33[7] = 0;
          v33[8] = 0;
          v33[6] = 0;
          *(_DWORD *)(a1 + 108) = v33[1];
          *(_DWORD *)(a1 + 112) = 0;
          ++NativeFont::s_cacheSerial;
          if ( !(unsigned int)nti_cache_insert_glyph(
                                (__int64)v33,
                                (__int64)a3,
                                a2,
                                (__int64)v88,
                                v68,
                                v67 + 1,
                                v66 + 1,
                                v23,
                                0.0,
                                0.0) )
          {
            *(_QWORD *)(a4 + 14) = 0;
            *(_QWORD *)a4 = 0;
            *(_QWORD *)(a4 + 8) = 0;
            goto LABEL_53;
          }
        }
        v35 = v91;
        v34 = v92;
        v37 = v93;
        v36 = v94;
        v39 = v89;
        v38 = v90;
        v40 = *(int **)(a1 + 96);
        v42 = *v40;
        v41 = v40[1];
        cf = nti_font_copy(v69);
        v43 = nti_font_copy(cf);
        v70[0] = a2;
        v70[1] = v26;
        v44 = nti_font_copy(v43);
        v29 = (int)floorf(v37);
        v30 = (int)floorf(v36);
        v62 = (int)(float)((float)(v38 / (float)v41) * 65535.0);
        v63 = (int)(float)((float)(v39 / (float)v42) * 65535.0);
        v60 = (int)(float)((float)((float)(v34 + v38) / (float)v41) * 65535.0);
        v61 = (int)(float)((float)((float)(v35 + v39) / (float)v42) * 65535.0);
        v59 = (int)(float)((float)((float)((float)v23 + v39) / (float)v42) * 65535.0);
        v58 = (int)(float)((float)((float)((float)(v35 + v39) - (float)v67) / (float)v42) * 65535.0);
        v57 = (int)(float)((float)((float)((float)v68 + v38) / (float)v41) * 65535.0);
        v56 = (int)(float)((float)((float)((float)(v34 + v38) - (float)v66) / (float)v41) * 65535.0);
        v71 = v44;
        v72 = v63;
        v73 = v61;
        v74 = v62;
        v75 = v60;
        v76 = v29;
        v55 = v29 + (int)floorf(v35);
        v77 = v30;
        v78 = v55;
        v31 = v30 + (int)floorf(v34);
        v79 = v31;
        v80 = v59;
        v52 = v31 - v66;
        v53 = v55 - v67;
        v54 = v23 + v29;
        v81 = v58;
        v82 = v57;
        v83 = v56;
        v84 = v23 + v29;
        v51 = v68 + v30;
        v85 = v68 + v30;
        v86 = v55 - v67;
        v87 = v31 - v66;
        std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_insert_unique(
          a1 + 48,
          v70);
        nti_free_font(v44);
        nti_free_font(v43);
        nti_free_font(cf);
        v45 = (unsigned int)(int)v90;
        v46 = (unsigned int)(int)v92;
        if ( NativeFont::filterCallBack && (nti_font_get_style((const __CTFont *)a3) & 0x80) == 0 )
          NativeFont::filterCallBack(
            (unsigned int)(int)v89,
            v45,
            (unsigned int)(int)v91,
            v46,
            **(unsigned int **)(a1 + 96),
            *(unsigned int *)(*(_QWORD *)(a1 + 96) + 4LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL),
            v68,
            __PAIR64__(v66, v67),
            v23);
        if ( (int)v45 <= *(_DWORD *)(a1 + 108) )
        {
          v47 = v45 - 1;
          if ( (int)v45 < 1 )
            v47 = 0;
          *(_DWORD *)(a1 + 108) = v47;
        }
        v48 = v45 + v46 + 1;
        if ( v48 > *(_DWORD *)(a1 + 112) )
        {
          if ( v48 > *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL) )
            v48 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL);
          *(_DWORD *)(a1 + 112) = v48;
        }
        *(_BYTE *)(a1 + 104) = 1;
      }
      else
      {
        LOWORD(v63) = v27[24];
        LOWORD(v61) = v27[25];
        LOWORD(v62) = v27[26];
        LOWORD(v60) = v27[27];
        LOWORD(v29) = v27[28];
        LOWORD(v30) = v27[29];
        v55 = v27[30];
        v31 = v27[31];
        LOWORD(v59) = v27[32];
        LOWORD(v58) = v27[33];
        LOWORD(v57) = v27[34];
        LOWORD(v56) = v27[35];
        v54 = v27[36];
        v51 = v27[37];
        v53 = v27[38];
        v52 = v27[39];
      }
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a5 + 72LL))(a5) )
      {
        *(_WORD *)(a4 + 8) = v29;
        *(_WORD *)(a4 + 10) = v30;
        *(_WORD *)(a4 + 12) = v55;
        *(_WORD *)(a4 + 14) = v31;
        *(_WORD *)a4 = v63;
        *(_WORD *)(a4 + 4) = v61;
        *(_WORD *)(a4 + 2) = v62;
        v49 = v60;
      }
      else
      {
        *(_WORD *)(a4 + 8) = v54;
        *(_WORD *)(a4 + 10) = v51;
        *(_WORD *)(a4 + 12) = v53;
        *(_WORD *)(a4 + 14) = v52;
        *(_WORD *)a4 = v59;
        *(_WORD *)(a4 + 4) = v58;
        *(_WORD *)(a4 + 2) = v57;
        v49 = v56;
      }
      *(_WORD *)(a4 + 6) = v49;
    LABEL_53:
      nti_free_font(v69);
    }

    __int64 __fastcall NativeFontCache::update(__int64 a1)
    {
      GLenum v2; // w6
      int v3; // w8
      __int64 v4; // x20
    
      if ( !*(_BYTE *)(a1 + 104) )
        return 0;
      if ( *(_BYTE *)a1 )
        v2 = 33635;
      else
        v2 = 5121;
      if ( *(_BYTE *)a1 )
        v3 = 2;
      else
        v3 = 4;
      v4 = 1;
      GLImage::updateSubImage(
        (AvatarRankingEntry *)a1,
        (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) + v3 * *(_DWORD *)(a1 + 108) * **(_DWORD **)(a1 + 96)),
        0,
        *(_DWORD *)(a1 + 108),
        **(_DWORD **)(a1 + 96),
        *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 108),
        v2,
        1,
        0);
      *(_BYTE *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 108) = *(unsigned int *)(*(_QWORD *)(a1 + 96) + 4LL);
      return v4;
    }

    __int64 __fastcall NativeFontCache::NativeFontCache(__int64 a1, __int64 a2, __int64 a3)
    {
      _DWORD *v6; // x0
      String v8; // [xsp+8h] [xbp-48h] BYREF
    
      GLImage::GLImage(a1);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 72) = a1 + 56;
      *(_QWORD *)(a1 + 80) = a1 + 56;
      *(_QWORD *)(a1 + 108) = 10000;
      std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
        a1 + 48,
        0);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = a1 + 56;
      *(_QWORD *)(a1 + 80) = a1 + 56;
      *(_BYTE *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      if ( Font::sm_convertTo16Bit )
        Debugger::error("16bit NativeFonts currently not supported on iOS/OSX. Set Font::sm_convertTo16Bit = false");
      v6 = nti_cache_create(a2, a3, 0);
      *(_QWORD *)(a1 + 96) = v6;
      GLImage::createWithFormat(a1, (unsigned int)*v6, (unsigned int)v6[1], 6408, 5121, 0, 1, 1);
      String::String(&v8, "NativeFont");
      GLImage::setFileName((String *)a1, &v8);
      String::~String((__int64)&v8);
      *(_BYTE *)a1 = Font::sm_convertTo16Bit;
      *(_BYTE *)(a1 + 1) = 1;
      return a1;
    }

    __int64 __fastcall NativeFontCache::~NativeFontCache(__int64 a1)
    {
      __int64 v2; // x0
    
      v2 = *(_QWORD *)(a1 + 96);
      if ( v2 )
        nti_cache_free(v2);
      *(_QWORD *)(a1 + 108) = 10000;
      std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
        a1 + 48,
        *(_QWORD *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = a1 + 56;
      *(_QWORD *)(a1 + 80) = a1 + 56;
      *(_BYTE *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
        a1 + 48,
        0);
      GLImage::~GLImage(a1);
      return a1;
    }

}; // end class NativeFontCache
