class lzham
{
public:

    __int64 __fastcall lzham::lzham_malloc(__int64 a1, unsigned __int64 *a2)
    {
      unsigned __int64 v3; // x21
      const char *v4; // x0
      __int64 v5; // x0
      __int64 v6; // x20
      unsigned __int64 v7; // x8
      bool v8; // cf
      unsigned __int64 v10; // [xsp+8h] [xbp-28h] BYREF
    
      if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        v3 = (a1 + 3) & 0xFFFFFFFFFFFFFFFCLL;
      else
        v3 = 4;
      if ( v3 >= 0x400000001LL )
      {
        v4 = "lzham_malloc: size too big";
    LABEL_15:
        lzham_assert(
          v4,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
          219);
        return 0;
      }
      v10 = v3;
      v5 = lzham::g_pRealloc(0, v3, &v10, 1, lzham::g_pUser_data);
      v6 = v5;
      v7 = v10;
      if ( a2 )
        *a2 = v10;
      if ( v5 )
        v8 = v7 >= v3;
      else
        v8 = 0;
      if ( !v8 )
      {
        v4 = "lzham_malloc: out of memory";
        goto LABEL_15;
      }
      if ( (v5 & 0xF) != 0 )
        lzham_assert(
          "(reinterpret_cast<ptr_bits_t>(p_new) & (LZHAM_MIN_ALLOC_ALIGNMENT - 1)) == 0",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
          246);
      return v6;
    }

    __int64 __fastcall lzham::lzham_realloc(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
    {
      const char *v5; // x0
      __int64 v6; // x20
      __int64 v8; // x0
      unsigned __int64 v9; // [xsp+8h] [xbp-18h] BYREF
    
      if ( (a1 & 0xF) != 0 )
      {
        v5 = "lzham_realloc: bad ptr";
    LABEL_5:
        lzham_assert(
          v5,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
          219);
        return 0;
      }
      if ( a2 >= 0x400000001LL )
      {
        v5 = "lzham_malloc: size too big";
        goto LABEL_5;
      }
      v9 = a2;
      v8 = lzham::g_pRealloc(a1, a2, &v9, a4, lzham::g_pUser_data);
      v6 = v8;
      if ( a3 )
        *a3 = v9;
      if ( (v8 & 0xF) != 0 )
        lzham_assert(
          "(reinterpret_cast<ptr_bits_t>(p_new) & (LZHAM_MIN_ALLOC_ALIGNMENT - 1)) == 0",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
          279);
      return v6;
    }

    __int64 __fastcall lzham::lzham_free(__int64 result)
    {
      if ( result )
      {
        if ( (result & 0xF) != 0 )
          return lzham_assert(
                   "lzham_free: bad ptr",
                   "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
                   219);
        else
          return lzham::g_pRealloc(result, 0, 0, 1, lzham::g_pUser_data);
      }
      return result;
    }

    void *__fastcall lzham::lzham_default_realloc(void *a1, size_t a2, size_t *a3, int a4)
    {
      const void *v5; // x21
      void *v6; // x0
      void *v7; // x20
      const void *v8; // x0
      size_t v9; // x0
    
      v5 = a1;
      if ( a1 )
      {
        if ( a2 )
        {
          if ( a4 && (v6 = realloc(a1, a2), (v7 = v6) != 0) )
          {
            if ( ((unsigned __int8)v6 & 0xF) != 0 )
              lzham_assert(
                "(reinterpret_cast<ptr_bits_t>(p_new) & (LZHAM_MIN_ALLOC_ALIGNMENT - 1)) == 0",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
                195);
            v5 = v7;
          }
          else
          {
            v7 = 0;
          }
          if ( a3 )
          {
            v8 = v5;
            goto LABEL_18;
          }
        }
        else
        {
          free(a1);
          v7 = 0;
          if ( a3 )
            *a3 = 0;
        }
      }
      else
      {
        v7 = malloc(a2);
        if ( ((unsigned __int8)v7 & 0xF) != 0 )
          lzham_assert(
            "(reinterpret_cast<ptr_bits_t>(p_new) & (LZHAM_MIN_ALLOC_ALIGNMENT - 1)) == 0",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.cpp",
            161);
        if ( a3 )
        {
          if ( !v7 )
          {
            v9 = 0;
            goto LABEL_20;
          }
          v8 = v7;
    LABEL_18:
          v9 = malloc_size(v8);
    LABEL_20:
          *a3 = v9;
        }
      }
      return v7;
    }

    __int64 __fastcall lzham::adler32(unsigned __int8 *a1, unsigned __int64 a2, unsigned int a3)
    {
      unsigned __int64 v3; // x11
      unsigned __int64 v4; // x12
      unsigned __int64 v5; // x10
      __int64 v6; // x14
      __int64 v7; // x11
      __int64 v8; // x12
      __int64 v9; // x11
      __int64 v10; // x12
      __int64 v11; // x11
      __int64 v12; // x12
      __int64 v13; // x11
      __int64 v14; // x12
      __int64 v15; // x11
      __int64 v16; // x12
      __int64 v17; // x11
      __int64 v18; // x12
      __int64 v19; // x11
      __int64 v20; // x12
      unsigned __int64 v21; // x15
      unsigned __int64 v22; // x13
      bool v23; // cf
      unsigned __int64 v24; // x13
      unsigned __int64 v25; // x14
      unsigned __int8 *v26; // x15
      unsigned int v27; // t1
    
      if ( !a1 )
        return 1;
      v3 = (unsigned __int16)a3;
      v4 = HIWORD(a3);
      if ( a2 )
      {
        v5 = a2 % 0x15B0;
        do
        {
          if ( v5 < 8 )
          {
            v22 = 0;
          }
          else
          {
            v6 = 0;
            do
            {
              v7 = a1[v6] + v3;
              v8 = v7 + v4;
              v9 = v7 + a1[v6 + 1];
              v10 = v8 + v9;
              v11 = v9 + a1[v6 + 2];
              v12 = v10 + v11;
              v13 = v11 + a1[v6 + 3];
              v14 = v12 + v13;
              v15 = v13 + a1[v6 + 4];
              v16 = v14 + v15;
              v17 = v15 + a1[v6 + 5];
              v18 = v16 + v17;
              v19 = v17 + a1[v6 + 6];
              v20 = v18 + v19;
              v3 = v19 + a1[v6 + 7];
              v4 = v20 + v3;
              v21 = v6 + 15;
              v6 += 8;
            }
            while ( v21 < v5 );
            v22 = ((v5 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 8;
            a1 += v22;
          }
          v23 = v5 >= v22;
          v24 = v5 - v22;
          if ( v24 != 0 && v23 )
          {
            v25 = v24;
            v26 = a1;
            do
            {
              v27 = *v26++;
              v3 += v27;
              v4 += v3;
              --v25;
            }
            while ( v25 );
            a1 += v24;
          }
          v3 %= 0xFFF1u;
          v4 %= 0xFFF1u;
          a2 -= v5;
          v5 = 5552;
        }
        while ( a2 );
      }
      return (unsigned int)(((_DWORD)v4 << 16) + v3);
    }

    __int64 __fastcall lzham::get_generate_huffman_codes_table_size(LogicEgg *this)
    {
      return 34832;
    }

    __int64 __fastcall lzham::generate_huffman_codes(
            LogicEgg *this,
            void *a2,
            __int64 a3,
            const unsigned __int16 *a4,
            unsigned __int8 *a5,
            unsigned int *a6,
            unsigned int *a7)
    {
      LogicEgg *v9; // x21
      __int64 v11; // x9
      unsigned int v12; // w8
      int v13; // w24
      int v14; // w12
      char *v15; // x13
      LogicEgg *v16; // x22
      __int64 v17; // x8
      LogicEgg *v18; // x10
      LogicEgg *v19; // x11
      int v20; // w12
      int v21; // w13
      int v22; // w25
      int v23; // w10
      unsigned __int64 v24; // x10
      unsigned __int64 v25; // x12
      int *v26; // x13
      unsigned __int64 v27; // x15
      int v28; // w17
      unsigned __int16 *v29; // x26
      int *v30; // x16
      _DWORD *v31; // x0
      int v32; // w17
      int v33; // t1
      LogicEgg *v34; // x15
      _DWORD *v35; // x16
      int v36; // w0
      _DWORD *v37; // x17
      unsigned __int8 v38; // w2
      __int64 v39; // x1
      __int64 v40; // x0
      int v41; // w1
      __int64 v42; // x2
      __int64 v43; // x17
      unsigned int v44; // w8
      unsigned __int16 *v45; // x27
      int v46; // w28
      unsigned int v47; // w9
      __int64 v48; // x8
      unsigned __int16 *v49; // x11
      int v50; // t1
      int v51; // w8
      int v52; // w14
      int v53; // w9
      __int64 v54; // x10
      int v55; // w11
      int v56; // w12
      int v57; // w15
      __int64 v58; // x15
      int *v59; // x14
      int v60; // w15
      int v61; // w16
      __int64 v62; // x12
      int v63; // w11
      int v65; // w10
      __int64 v66; // x12
      int v67; // w12
      _DWORD *v68; // x13
      int v69; // w14
      unsigned int v70; // w8
      unsigned __int16 *v71; // x9
      unsigned int *v72; // x10
      unsigned int v73; // w11
      unsigned int v74; // t1
      unsigned int v75; // t1
      int v76; // [xsp+8h] [xbp-1458h] BYREF
      _DWORD v77[1279]; // [xsp+Ch] [xbp-1454h] BYREF
    
      v9 = this;
      if ( (unsigned int)((_DWORD)a2 - 1) > 0x3FF )
        return 0;
      if ( (_DWORD)a2 )
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = *(unsigned __int16 *)(a3 + 2 * v11);
          if ( *(_WORD *)(a3 + 2 * v11) )
          {
            v12 += v14;
            v15 = (char *)this + 8 * (unsigned int)v13;
            *((_WORD *)v15 + 2) = v11;
            *((_WORD *)v15 + 3) = -1;
            *(_DWORD *)v15 = v14;
            ++v13;
          }
          else
          {
            *((_BYTE *)a4 + v11) = 0;
          }
          ++v11;
        }
        while ( (_DWORD)a2 != (_DWORD)v11 );
        *a6 = v12;
        if ( v13 == 1 )
        {
          *((_BYTE *)a4 + *((unsigned __int16 *)this + 2)) = 1;
          return 1;
        }
      }
      else
      {
        v13 = 0;
        *a6 = 0;
      }
      v16 = (LogicEgg *)((char *)this + 16392);
      bzero(&v76, 0x800u);
      v17 = v13 & 0xFFFFFFFE;
      v18 = v9;
      if ( (_DWORD)v17 )
      {
        v19 = v9;
        do
        {
          v20 = *(_DWORD *)v19;
          v21 = *((_DWORD *)v19 + 2);
          ++v77[(unsigned __int8)*(_DWORD *)v19 - 1];
          ++v77[(BYTE1(v20) | 0x100) - 1];
          ++v77[(unsigned __int8)v21 - 1];
          ++v77[(BYTE1(v21) | 0x100) - 1];
          v19 = (LogicEgg *)((char *)v19 + 16);
        }
        while ( v19 != (LogicEgg *)((char *)v9 + 8 * (unsigned int)v17) );
        v18 = (LogicEgg *)((char *)v9 + 8 * ((unsigned __int64)(8 * v17 - 16) >> 3) + 16);
      }
      v22 = v13;
      if ( (v13 & 1) != 0 )
      {
        v23 = *(_DWORD *)v18;
        ++v77[(unsigned __int8)v23 - 1];
        ++v77[(BYTE1(v23) | 0x100) - 1];
      }
      v24 = 0;
      v25 = 1;
      if ( v77[255] != v13 )
        v25 = 2;
      v26 = v77;
      do
      {
        v27 = 0;
        v28 = 0;
        v29 = (unsigned __int16 *)v16;
        v16 = v9;
        v30 = v26;
        do
        {
          v31 = &v77[v27 + 1023];
          *v31 = v28;
          v32 = *(v30 - 1) + v28;
          v31[1] = v32;
          v33 = *v30;
          v30 += 2;
          v28 = v32 + v33;
          v27 += 2LL;
        }
        while ( v27 < 0x100 );
        v34 = v9;
        if ( (_DWORD)v17 )
        {
          v35 = (_DWORD *)((char *)v9 + 8);
          do
          {
            v37 = v35 - 2;
            v36 = *(v35 - 2);
            if ( v24 )
            {
              LOBYTE(v36) = BYTE1(*(v35 - 2));
              v38 = BYTE1(*v35);
            }
            else
            {
              v38 = *v35;
            }
            v39 = (unsigned __int8)v36;
            v40 = (unsigned int)v77[(unsigned __int8)v36 + 1023];
            if ( (_DWORD)v39 == v38 )
            {
              v77[v39 + 1023] = v40 + 2;
              *(_QWORD *)&v29[4 * v40] = *((_QWORD *)v35 - 1);
              *(_QWORD *)&v29[4 * (unsigned int)(v40 + 1)] = *(_QWORD *)v35;
            }
            else
            {
              v77[v39 + 1023] = v40 + 1;
              v41 = v38;
              v42 = (unsigned int)v77[v38 + 1023];
              v77[v41 + 1023] = v42 + 1;
              *(_QWORD *)&v29[4 * v40] = *((_QWORD *)v35 - 1);
              *(_QWORD *)&v29[4 * v42] = *(_QWORD *)v35;
            }
            v35 += 4;
          }
          while ( v37 + 4 != (_DWORD *)((char *)v9 + 8 * v17) );
          v34 = (LogicEgg *)((char *)v9 + 8 * ((unsigned __int64)(8 * v17 - 16) >> 3) + 16);
        }
        if ( (v13 & 1) != 0 )
        {
          v43 = (unsigned int)v77[(unsigned __int8)(*(_DWORD *)v34 >> (8 * v24)) + 1023];
          v77[(unsigned __int8)(*(_DWORD *)v34 >> (8 * v24)) + 1023] = v43 + 1;
          *(_QWORD *)&v29[4 * v43] = *(_QWORD *)v34;
        }
        ++v24;
        v26 += 256;
        v9 = (LogicEgg *)v29;
      }
      while ( v24 < v25 );
      if ( v13 )
      {
        v44 = 0;
        v45 = v29;
        v46 = v13;
        do
        {
          v47 = *(_DWORD *)v45;
          if ( *(_DWORD *)v45 < v44 )
          {
            lzham_assert(
              "!(pCur_syms[i].m_freq < prev_freq)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_huffman_codes.cpp",
              130);
            v47 = *(_DWORD *)v45;
          }
          --v46;
          v45 += 4;
          v44 = v47;
        }
        while ( v46 );
        v48 = 0;
        v49 = v29;
        do
        {
          v50 = *(_DWORD *)v49;
          v49 += 4;
          v77[v48++ - 1] = v50;
        }
        while ( v13 != (_DWORD)v48 );
        v51 = v13 - 1;
        v52 = v76 + v77[0];
        v76 += v77[0];
        v53 = v13 - 2;
        v54 = 1;
        if ( v13 - 1 >= 2 )
        {
          v55 = 0;
          v56 = 2;
          while ( 1 )
          {
            if ( v56 < v13 && (v57 = v77[v56 - 1], v52 >= v57) )
            {
              ++v56;
              v77[v54 - 1] = v57;
            }
            else
            {
              v58 = v55;
              v77[v54 - 1] = v52;
              ++v55;
              v77[v58 - 1] = v54;
            }
            if ( v56 >= v13 )
              break;
            if ( v55 >= v54 )
            {
              v61 = v77[v56 - 1];
            }
            else
            {
              v59 = &v77[v55 - 1];
              v60 = *v59;
              v61 = v77[v56 - 1];
              if ( *v59 < v61 )
                goto LABEL_55;
            }
            ++v56;
            v77[v54 - 1] += v61;
    LABEL_58:
            if ( (_DWORD)v54 == v53 )
              goto LABEL_59;
            ++v54;
            v52 = v77[v55 - 1];
          }
          v59 = &v77[v55 - 1];
          v60 = *v59;
    LABEL_55:
          v77[v54 - 1] += v60;
          ++v55;
          *v59 = v54;
          goto LABEL_58;
        }
    LABEL_59:
        v77[v53 - 1] = 0;
        if ( v13 - 3 < 0 )
        {
          v65 = 0;
          v63 = 1;
        }
        else
        {
          v62 = v13 - 3;
          do
          {
            v77[v62 - 1] = v77[v77[v62 - 1] - 1] + 1;
            v63 = 1;
          }
          while ( v62-- > 0 );
          v65 = 0;
        }
        do
        {
          if ( v53 < 0 )
          {
            v67 = 0;
          }
          else
          {
            v66 = 0;
            do
            {
              if ( v77[v53 - 1 + v66] != v65 )
                break;
              --v66;
            }
            while ( v53 + 1LL + v66 > 0 );
            v53 += v66;
            v67 = -(int)v66;
          }
          if ( v63 > v67 )
          {
            v68 = &v77[v51 - 1];
            v69 = v63;
            do
            {
              *v68-- = v65;
              --v69;
            }
            while ( v69 > v67 );
            v51 = v51 - v63 + v67;
          }
          v63 = 2 * v67;
          ++v65;
        }
        while ( v67 > 0 );
        v70 = 0;
        v71 = v29 + 2;
        v72 = (unsigned int *)&v76;
        do
        {
          v74 = *v72++;
          v73 = v74;
          if ( v74 > v70 )
            v70 = v73;
          v75 = *v71;
          v71 += 4;
          *((_BYTE *)a4 + v75) = v73;
          --v22;
        }
        while ( v22 );
      }
      else
      {
        v70 = 0;
      }
      *(_DWORD *)a5 = v70;
      return 1;
    }

    __int64 __fastcall lzham::lzham_lib_decompress_init(__int64 a1)
    {
      __int64 v2; // x19
      __int64 result; // x0
      int v4; // w20
      __int64 v5; // x0
    
      if ( (unsigned int)lzham::check_params() )
      {
        v2 = lzham::lzham_malloc(1656, 0);
        result = 0;
        if ( !v2 )
          return result;
        lzham::lzham_decompressor::lzham_decompressor((std::string *)v2);
        *(_QWORD *)(v2 + 304) = *(_QWORD *)(a1 + 32);
        *(_OWORD *)(v2 + 288) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v2 + 272) = *(_OWORD *)a1;
        if ( (*(_BYTE *)(v2 + 284) & 1) != 0 )
        {
          *(_DWORD *)(v2 + 184) = 0;
          *(_QWORD *)(v2 + 192) = 0;
          *(_QWORD *)(v2 + 200) = 0;
          goto LABEL_7;
        }
        v4 = 1 << *(_DWORD *)(v2 + 276);
        v5 = lzham::lzham_malloc((unsigned int)(v4 + 15), 0);
        *(_QWORD *)(v2 + 192) = v5;
        if ( v5 )
        {
          *(_DWORD *)(v2 + 184) = v4;
          *(_QWORD *)(v2 + 200) = (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    LABEL_7:
          lzham::lzham_decompressor::init((std::string *)v2);
          return v2;
        }
        lzham::lzham_decompressor::~lzham_decompressor((std::string *)v2);
        lzham::lzham_free(v2);
      }
      return 0;
    }

    __int64 __fastcall lzham::check_params(__int64 a1)
    {
      int v1; // w9
      unsigned int v2; // w10
      __int64 v3; // x8
    
      if ( !a1 )
        return 0;
      if ( *(_DWORD *)a1 != 40 )
        return 0;
      v1 = *(_DWORD *)(a1 + 4);
      if ( (unsigned int)(v1 - 15) > 0xE )
        return 0;
      v2 = *(_DWORD *)(a1 + 16);
      if ( !v2 )
        return 1;
      if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
        return 0;
      v3 = 0;
      if ( v2 <= 1 << v1 && *(_QWORD *)(a1 + 24) )
        return 1;
      return v3;
    }

    __int64 __fastcall lzham::lzham_lib_decompress_deinit(LogicEgg *this, void *a2)
    {
      __int64 v3; // x19
    
      if ( !this )
        return 0;
      v3 = *((unsigned int *)this + 52);
      lzham::lzham_free(*((_QWORD *)this + 24));
      lzham::lzham_decompressor::~lzham_decompressor(this);
      lzham::lzham_free((__int64)this);
      return v3;
    }

    __int64 __fastcall lzham::lzham_lib_decompress(
            LogicEgg *this,
            void *a2,
            const unsigned __int8 *a3,
            unsigned __int64 *a4,
            unsigned __int8 *a5,
            unsigned __int64 *a6)
    {
      __int64 v6; // x8
      unsigned __int64 *v8; // x9
    
      if ( this && a5 && a3 && *((_DWORD *)this + 69) && (a2 || !*(_QWORD *)a3) )
      {
        v6 = *(_QWORD *)a5;
        if ( a4 || !v6 )
        {
          *((_QWORD *)this + 27) = a2;
          *((_QWORD *)this + 28) = a3;
          *((_QWORD *)this + 29) = a4;
          *((_QWORD *)this + 30) = a5;
          *((_BYTE *)this + 248) = (_DWORD)a6 != 0;
          if ( (*((_BYTE *)this + 284) & 1) == 0 )
            return lzham::lzham_decompressor::decompress<false>();
          v8 = (unsigned __int64 *)*((_QWORD *)this + 32);
          if ( !v8 )
          {
            *((_QWORD *)this + 32) = a4;
            *((_QWORD *)this + 33) = v6;
            return lzham::lzham_decompressor::decompress<true>();
          }
          if ( v8 == a4 && *((_QWORD *)this + 33) == v6 )
            return lzham::lzham_decompressor::decompress<true>();
        }
      }
      return 15;
    }

}; // end class lzham
