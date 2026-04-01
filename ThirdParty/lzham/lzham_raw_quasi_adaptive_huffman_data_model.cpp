class lzham::raw_quasi_adaptive_huffman_data_model
{
public:

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model(
            __int64 a1,
            bool a2,
            unsigned int a3,
            unsigned int a4,
            unsigned int a5)
    {
      memset((void *)a1, 0, 0x5Du);
      *(_WORD *)(a1 + 94) = a4;
      *(_WORD *)(a1 + 96) = a5;
      *(_BYTE *)(a1 + 98) = a2;
      if ( a3 )
        lzham::raw_quasi_adaptive_huffman_data_model::init2(
          (lzham::raw_quasi_adaptive_huffman_data_model *)a1,
          a2,
          a3,
          a4,
          a5,
          0);
      return a1;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::init2(
            __int64 a1,
            char a2,
            unsigned int a3,
            unsigned int a4,
            unsigned int a5,
            const void *a6)
    {
      __int16 v8; // w23
      unsigned int v12; // w8
      unsigned int v13; // w8
      unsigned int v14; // w8
      unsigned int v15; // w8
      int v16; // w8
      unsigned int v17; // w9
      bool v18; // cc
      __int64 v19; // x21
      __int64 v20; // x22
      int v21; // w23
      int v22; // w24
      bool v23; // zf
      __int64 v24; // x22
      int v25; // w23
      int v26; // w24
      bool v27; // zf
      unsigned int v28; // w8
      __int64 v29; // x0
      unsigned int v30; // w8
      int v31; // w8
      int v32; // w9
      unsigned int v33; // w8
    
      v8 = a4;
      if ( a4 >= 0x10000 )
        lzham_assert(
          "max_update_interval <= 0xFFFF",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
          355);
      if ( a5 >= 0x10000 )
        lzham_assert(
          "adapt_rate <= 0xFFFF",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
          356);
      *(_BYTE *)(a1 + 98) = a2;
      *(_WORD *)(a1 + 94) = v8;
      *(_WORD *)(a1 + 96) = a5;
      *(_DWORD *)(a1 + 84) = 0;
      v12 = *(_DWORD *)(a1 + 24);
      if ( v12 != a3 )
      {
        if ( v12 <= a3 )
        {
          if ( *(_DWORD *)(a1 + 28) < a3 )
          {
            if ( !(unsigned int)lzham::elemental_vector::increase_capacity(
                                  a1 + 16,
                                  a3,
                                  (unsigned __int64 *)(v12 + 1 == a3),
                                  2u,
                                  0,
                                  1) )
              goto LABEL_73;
            v12 = *(_DWORD *)(a1 + 24);
          }
          bzero((void *)(*(_QWORD *)(a1 + 16) + 2LL * v12), 2LL * (a3 - v12));
        }
        *(_DWORD *)(a1 + 24) = a3;
      }
      if ( a6 )
      {
        v13 = *(_DWORD *)(a1 + 8);
        if ( v13 != a3 )
        {
          if ( v13 <= a3 )
          {
            if ( *(_DWORD *)(a1 + 12) < a3 )
            {
              if ( !(unsigned int)lzham::elemental_vector::increase_capacity(
                                    a1,
                                    a3,
                                    (unsigned __int64 *)(v13 + 1 == a3),
                                    2u,
                                    0,
                                    1) )
                goto LABEL_73;
              v13 = *(_DWORD *)(a1 + 8);
            }
            bzero((void *)(*(_QWORD *)a1 + 2LL * v13), 2LL * (a3 - v13));
          }
          *(_DWORD *)(a1 + 8) = a3;
        }
        memcpy(*(void **)a1, a6, 2 * a3 * a3);
      }
      v14 = *(_DWORD *)(a1 + 56);
      if ( v14 != a3 )
      {
        if ( v14 <= a3 )
        {
          if ( *(_DWORD *)(a1 + 60) < a3 )
          {
            if ( !(unsigned int)lzham::elemental_vector::increase_capacity(
                                  a1 + 48,
                                  a3,
                                  (unsigned __int64 *)(v14 + 1 == a3),
                                  1u,
                                  0,
                                  1) )
              goto LABEL_73;
            v14 = *(_DWORD *)(a1 + 56);
          }
          bzero((void *)(*(_QWORD *)(a1 + 48) + v14), a3 - v14);
        }
        *(_DWORD *)(a1 + 56) = a3;
      }
      *(_DWORD *)(a1 + 72) = a3;
      if ( a3 >= 9 )
      {
        v16 = 0;
        v17 = a3;
        do
        {
          --v16;
          v18 = v17 > 3;
          v17 >>= 1;
        }
        while ( v18 );
        v15 = (v16 != -32 && 1 << -(char)v16 < a3) - v16 + 1;
      }
      else
      {
        v15 = 4;
      }
      if ( v15 >= 0xB )
        LOBYTE(v15) = 11;
      *(_BYTE *)(a1 + 92) = v15;
      v19 = *(_QWORD *)(a1 + 64);
      if ( !*(_BYTE *)(a1 + 98) )
      {
        if ( v19 )
          goto LABEL_64;
        v29 = lzham::lzham_malloc(192, 0);
        if ( v29 )
        {
          *(_DWORD *)(v29 + 12) = 0;
          *(_DWORD *)(v29 + 16) = 0;
          *(_DWORD *)(v29 + 20) = 0;
          *(_QWORD *)(v29 + 184) = 0;
          *(_QWORD *)(v29 + 172) = 0;
          *(_QWORD *)(v29 + 164) = 0;
          *(_QWORD *)(a1 + 64) = v29;
          goto LABEL_64;
        }
        *(_QWORD *)(a1 + 64) = 0;
        goto LABEL_73;
      }
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 168);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 - 4);
          v22 = ~*(_DWORD *)(v20 - 8);
          if ( v21 )
            v23 = v21 == v22;
          else
            v23 = 0;
          if ( !v23 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v21 == v22 )
            lzham::lzham_free(v20 - 16);
        }
        v24 = *(_QWORD *)(v19 + 184);
        if ( v24 )
        {
          v25 = *(_DWORD *)(v24 - 4);
          v26 = ~*(_DWORD *)(v24 - 8);
          if ( v25 )
            v27 = v25 == v26;
          else
            v27 = 0;
          if ( !v27 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v25 == v26 )
            lzham::lzham_free(v24 - 16);
        }
        lzham::lzham_free(v19);
      }
      *(_QWORD *)(a1 + 64) = 0;
      v28 = *(_DWORD *)(a1 + 40);
      if ( v28 == a3 )
        goto LABEL_64;
      if ( v28 > a3 )
        goto LABEL_60;
      if ( *(_DWORD *)(a1 + 44) < a3 )
      {
        if ( (unsigned int)lzham::elemental_vector::increase_capacity(
                             a1 + 32,
                             a3,
                             (unsigned __int64 *)(v28 + 1 == a3),
                             2u,
                             0,
                             1) )
        {
          v28 = *(_DWORD *)(a1 + 40);
          goto LABEL_59;
        }
    LABEL_73:
        lzham::raw_quasi_adaptive_huffman_data_model::clear((lzham::raw_quasi_adaptive_huffman_data_model *)a1);
        return 0;
      }
    LABEL_59:
      bzero((void *)(*(_QWORD *)(a1 + 32) + 2LL * v28), 2LL * (a3 - v28));
    LABEL_60:
      *(_DWORD *)(a1 + 40) = a3;
    LABEL_64:
      v30 = *(_DWORD *)(a1 + 72);
      if ( v30 <= 0x18 )
        v31 = 30;
      else
        v31 = v30 + 6;
      v32 = *(unsigned __int16 *)(a1 + 94);
      if ( !*(_WORD *)(a1 + 94) )
        v32 = 64;
      v33 = v32 * v31;
      if ( v33 >= 0x7FFF )
        v33 = 0x7FFF;
      *(_DWORD *)(a1 + 76) = v33;
      lzham::raw_quasi_adaptive_huffman_data_model::reset((lzham::raw_quasi_adaptive_huffman_data_model *)a1);
      return 1;
    }

    __int64 *__fastcall lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model(__int64 *a1)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      int v4; // w22
      int v5; // w23
      bool v6; // zf
      __int64 v7; // x21
      int v8; // w22
      int v9; // w23
      bool v10; // zf
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x0
    
      v2 = a1[8];
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 168);
        if ( v3 )
        {
          v4 = *(_DWORD *)(v3 - 4);
          v5 = ~*(_DWORD *)(v3 - 8);
          if ( v4 )
            v6 = v4 == v5;
          else
            v6 = 0;
          if ( !v6 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v4 == v5 )
            lzham::lzham_free(v3 - 16);
        }
        v7 = *(_QWORD *)(v2 + 184);
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 - 4);
          v9 = ~*(_DWORD *)(v7 - 8);
          if ( v8 )
            v10 = v8 == v9;
          else
            v10 = 0;
          if ( !v10 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v8 == v9 )
            lzham::lzham_free(v7 - 16);
        }
        lzham::lzham_free(v2);
      }
      v11 = a1[6];
      if ( v11 )
        lzham::lzham_free(v11);
      v12 = a1[4];
      if ( v12 )
        lzham::lzham_free(v12);
      v13 = a1[2];
      if ( v13 )
        lzham::lzham_free(v13);
      if ( *a1 )
        lzham::lzham_free(*a1);
      return a1;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::assign(__int64 a1, __int64 a2)
    {
      int8x16_t v4; // q0
      __int64 *v5; // x21
      unsigned int v6; // w1
      _DWORD *v7; // x22
      unsigned int v8; // w1
      _DWORD *v9; // x21
      __int64 *v10; // x21
      unsigned int v11; // w1
      _DWORD *v12; // x22
      __int64 *v13; // x21
      unsigned int v14; // w1
      _DWORD *v15; // x22
      __int64 v16; // x22
      __int64 v17; // x21
      __int64 v18; // x22
      int v19; // w23
      int v20; // w24
      __int64 v21; // x22
      int v22; // w23
      int v23; // w24
      __int64 v24; // x0
      __int64 v25; // x21
    
      if ( a1 == a2 )
        return 1;
      v4 = *(int8x16_t *)(a2 + 72);
      *(_QWORD *)(a1 + 72) = v4.i64[0];
      *(_QWORD *)(a1 + 80) = vextq_s8(v4, v4, 8u).u64[0];
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
      v5 = (__int64 *)(a1 + 16);
      v6 = *(_DWORD *)(a2 + 24);
      if ( *(_DWORD *)(a1 + 28) >= v6 )
      {
        v7 = (_DWORD *)(a1 + 24);
        if ( *(_DWORD *)(a1 + 24) )
          *v7 = 0;
      }
      else
      {
        if ( *v5 )
        {
          lzham::lzham_free(*v5);
          *v5 = 0;
          *(_QWORD *)(a1 + 24) = 0;
          v6 = *(_DWORD *)(a2 + 24);
        }
        if ( !(unsigned int)lzham::elemental_vector::increase_capacity(a1 + 16, v6, 0, 2u, 0, 0) )
          lzham_fail(
            "\"lzham::vector operator=: Out of memory!\"",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
            98);
        v7 = (_DWORD *)(a1 + 24);
      }
      memcpy((void *)*v5, *(const void **)(a2 + 16), 2LL * *(unsigned int *)(a2 + 24));
      *v7 = *(_DWORD *)(a2 + 24);
      v8 = *(_DWORD *)(a2 + 8);
      if ( *(_DWORD *)(a1 + 12) >= v8 )
      {
        v9 = (_DWORD *)(a1 + 8);
        if ( *(_DWORD *)(a1 + 8) )
          *v9 = 0;
      }
      else
      {
        if ( *(_QWORD *)a1 )
        {
          lzham::lzham_free(*(_QWORD *)a1);
          *(_QWORD *)a1 = 0;
          *(_QWORD *)(a1 + 8) = 0;
          v8 = *(_DWORD *)(a2 + 8);
        }
        if ( !(unsigned int)lzham::elemental_vector::increase_capacity(a1, v8, 0, 2u, 0, 0) )
          lzham_fail(
            "\"lzham::vector operator=: Out of memory!\"",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
            98);
        v9 = (_DWORD *)(a1 + 8);
      }
      memcpy(*(void **)a1, *(const void **)a2, 2LL * *(unsigned int *)(a2 + 8));
      *v9 = *(_DWORD *)(a2 + 8);
      v10 = (__int64 *)(a1 + 32);
      v11 = *(_DWORD *)(a2 + 40);
      if ( *(_DWORD *)(a1 + 44) >= v11 )
      {
        v12 = (_DWORD *)(a1 + 40);
        if ( *(_DWORD *)(a1 + 40) )
          *v12 = 0;
      }
      else
      {
        if ( *v10 )
        {
          lzham::lzham_free(*v10);
          *v10 = 0;
          *(_QWORD *)(a1 + 40) = 0;
          v11 = *(_DWORD *)(a2 + 40);
        }
        if ( !(unsigned int)lzham::elemental_vector::increase_capacity(a1 + 32, v11, 0, 2u, 0, 0) )
          lzham_fail(
            "\"lzham::vector operator=: Out of memory!\"",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
            98);
        v12 = (_DWORD *)(a1 + 40);
      }
      memcpy((void *)*v10, *(const void **)(a2 + 32), 2LL * *(unsigned int *)(a2 + 40));
      *v12 = *(_DWORD *)(a2 + 40);
      v13 = (__int64 *)(a1 + 48);
      v14 = *(_DWORD *)(a2 + 56);
      if ( *(_DWORD *)(a1 + 60) >= v14 )
      {
        v15 = (_DWORD *)(a1 + 56);
        if ( *(_DWORD *)(a1 + 56) )
          *v15 = 0;
      }
      else
      {
        if ( *v13 )
        {
          lzham::lzham_free(*v13);
          *v13 = 0;
          *(_QWORD *)(a1 + 56) = 0;
          v14 = *(_DWORD *)(a2 + 56);
        }
        if ( !(unsigned int)lzham::elemental_vector::increase_capacity(a1 + 48, v14, 0, 1u, 0, 0) )
          lzham_fail(
            "\"lzham::vector operator=: Out of memory!\"",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
            98);
        v15 = (_DWORD *)(a1 + 56);
      }
      memcpy((void *)*v13, *(const void **)(a2 + 48), *(unsigned int *)(a2 + 56));
      *v15 = *(_DWORD *)(a2 + 56);
      v16 = *(_QWORD *)(a2 + 64);
      v17 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
      {
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 168);
          if ( v18 )
          {
            v19 = *(_DWORD *)(v18 - 4);
            v20 = ~*(_DWORD *)(v18 - 8);
            if ( !v19 || v19 != v20 )
              lzham_assert(
                "num && (num == ~num_check)",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
                98);
            if ( v19 == v20 )
              lzham::lzham_free(v18 - 16);
          }
          v21 = *(_QWORD *)(v17 + 184);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v21 - 4);
            v23 = ~*(_DWORD *)(v21 - 8);
            if ( !v22 || v22 != v23 )
              lzham_assert(
                "num && (num == ~num_check)",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
                98);
            if ( v22 == v23 )
              lzham::lzham_free(v21 - 16);
          }
          lzham::lzham_free(v17);
          *(_QWORD *)(a1 + 64) = 0;
        }
        goto LABEL_58;
      }
      if ( v17 )
      {
        if ( (lzham::prefix_coding::decoder_tables::assign(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64)) & 1) == 0 )
          goto LABEL_61;
        goto LABEL_58;
      }
      v24 = lzham::lzham_malloc(192, 0);
      v25 = v24;
      if ( v24 )
      {
        *(_DWORD *)(v24 + 12) = 0;
        *(_DWORD *)(v24 + 16) = 0;
        *(_DWORD *)(v24 + 20) = 0;
        *(_QWORD *)(v24 + 184) = 0;
        *(_QWORD *)(v24 + 172) = 0;
        *(_QWORD *)(v24 + 164) = 0;
        lzham::prefix_coding::decoder_tables::assign(v24, v16);
        *(_QWORD *)(a1 + 64) = v25;
    LABEL_58:
        *(_BYTE *)(a1 + 92) = *(_BYTE *)(a2 + 92);
        *(_BYTE *)(a1 + 98) = *(_BYTE *)(a2 + 98);
        *(_WORD *)(a1 + 94) = *(_WORD *)(a2 + 94);
        *(_WORD *)(a1 + 96) = *(_WORD *)(a2 + 96);
        return 1;
      }
      *(_QWORD *)(a1 + 64) = 0;
    LABEL_61:
      lzham::raw_quasi_adaptive_huffman_data_model::clear((lzham::raw_quasi_adaptive_huffman_data_model *)a1);
      return 0;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::clear(__int64 a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
      __int64 result; // x0
      __int64 v6; // x20
      __int64 v7; // x21
      int v8; // w22
      int v9; // w23
      bool v10; // zf
      __int64 v11; // x21
      int v12; // w22
      int v13; // w23
      bool v14; // zf
    
      v3 = (_QWORD *)(a1 + 16);
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        lzham::lzham_free(v2);
        *v3 = 0;
        v3[1] = 0;
      }
      if ( *(_QWORD *)a1 )
      {
        lzham::lzham_free(*(_QWORD *)a1);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
      }
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
      {
        lzham::lzham_free(v4);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 40) = 0;
      }
      result = *(_QWORD *)(a1 + 48);
      if ( result )
      {
        result = lzham::lzham_free(result);
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 56) = 0;
      }
      *(_QWORD *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 168);
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 - 4);
          v9 = ~*(_DWORD *)(v7 - 8);
          if ( v8 )
            v10 = v8 == v9;
          else
            v10 = 0;
          if ( !v10 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v8 == v9 )
            lzham::lzham_free(v7 - 16);
        }
        v11 = *(_QWORD *)(v6 + 184);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 - 4);
          v13 = ~*(_DWORD *)(v11 - 8);
          if ( v12 )
            v14 = v12 == v13;
          else
            v14 = 0;
          if ( !v14 )
            lzham_assert(
              "num && (num == ~num_check)",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
              98);
          if ( v12 == v13 )
            lzham::lzham_free(v11 - 16);
        }
        result = lzham::lzham_free(v6);
        *(_QWORD *)(a1 + 64) = 0;
      }
      *(_DWORD *)(a1 + 94) = 0;
      return result;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::reset(__int64 a1)
    {
      unsigned int v2; // w8
      unsigned int v3; // w9
      __int64 v4; // x22
      int v5; // w23
      bool v6; // w2
      __int64 v8; // x22
      int v9; // w1
    
      v2 = *(_DWORD *)(a1 + 72);
      if ( !v2 )
        return 1;
      v3 = *(_DWORD *)(a1 + 8);
      if ( v3 )
      {
        v4 = 0;
        *(_DWORD *)(a1 + 80) = 0;
        while ( 1 )
        {
          if ( v3 <= (unsigned int)v4 )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 2 * v4);
          if ( *(_DWORD *)(a1 + 24) <= (unsigned int)v4 )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v4) = v5;
          *(_DWORD *)(a1 + 80) += v5;
          if ( (unsigned int)(v4 + 1) >= *(_DWORD *)(a1 + 72) )
            break;
          v3 = *(_DWORD *)(a1 + 8);
          ++v4;
        }
        v6 = 0;
      }
      else
      {
        v8 = 0;
        do
        {
          if ( *(_DWORD *)(a1 + 24) <= (unsigned int)v8 )
          {
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
            v2 = *(_DWORD *)(a1 + 72);
          }
          *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v8++) = 1;
        }
        while ( (unsigned int)v8 < v2 );
        *(_DWORD *)(a1 + 80) = v2;
        v6 = 1;
      }
      *(_QWORD *)(a1 + 84) = 0;
      if ( *(_DWORD *)(a1 + 76) >= 0x10u )
        v9 = 16;
      else
        v9 = *(_DWORD *)(a1 + 76);
      return lzham::raw_quasi_adaptive_huffman_data_model::update_tables(
               (lzham::raw_quasi_adaptive_huffman_data_model *)a1,
               v9,
               v6);
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::update_tables(LogicEgg *i, unsigned int a2, int a3)
    {
      LogicEgg *v5; // x19
      unsigned int v6; // w8
      unsigned int v7; // w8
      int v8; // w23
      unsigned int v9; // w9
      bool v10; // cc
      unsigned int v11; // w25
      unsigned __int16 *v12; // x3
      unsigned int *v13; // x6
      LogicEgg *v14; // x21
      void *v15; // x22
      __int64 v16; // x23
      int v17; // w21
      #1330 *v18; // x21
      int v19; // w8
      unsigned int v20; // w9
      unsigned int v21; // w11
      unsigned int v22; // w8
      #1330 *v23; // x20
      unsigned __int8 *v24; // x21
      int v25; // w9
      unsigned int v26; // w21
      unsigned int v27; // w11
      unsigned int v28; // w20
      int v30; // w2
      unsigned int v31; // [xsp+0h] [xbp-50h] BYREF
      unsigned __int8 v32[4]; // [xsp+4h] [xbp-4Ch] BYREF
    
      v5 = i;
      if ( *((_DWORD *)i + 21) )
        i = (LogicEgg *)lzham_assert(
                          "!m_symbols_until_update",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
                          498);
      v6 = *((_DWORD *)v5 + 22) + *((_DWORD *)v5 + 20);
      *((_DWORD *)v5 + 22) = v6;
      if ( v6 < 0x10000 )
        goto LABEL_6;
      for ( i = (LogicEgg *)lzham_assert(
                              "m_total_count <= 65535",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzh"
                              "am_symbol_codec.cpp",
                              500); ; i = (LogicEgg *)lzham::raw_quasi_adaptive_huffman_data_model::rescale(v5) )
      {
        v6 = *((_DWORD *)v5 + 22);
    LABEL_6:
        if ( v6 < 0x8000 )
          break;
      }
      *(_DWORD *)v32 = 0;
      if ( a3 )
      {
        v7 = *((_DWORD *)v5 + 18);
        if ( v7 >= 2 )
        {
          v8 = 0;
          v9 = *((_DWORD *)v5 + 18);
          do
          {
            --v8;
            v10 = v9 > 3;
            v9 >>= 1;
          }
          while ( v10 );
          if ( 2 * (v7 - (1 << -(char)v8)) <= v7 )
            v11 = 2 * (v7 - (1 << -(char)v8));
          else
            v11 = *((_DWORD *)v5 + 18);
          if ( !*((_DWORD *)v5 + 14) )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          memset(*((void **)v5 + 6), 1 - v8, v11);
          if ( *((_DWORD *)v5 + 14) <= v11 )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          i = (LogicEgg *)memset((void *)(*((_QWORD *)v5 + 6) + v11), -v8, *((_DWORD *)v5 + 18) - v11);
          *(_DWORD *)v32 = (v11 != 0) - v8;
          if ( *(_DWORD *)v32 )
            goto LABEL_34;
        }
      }
      v14 = (LogicEgg *)&v32[-(((unsigned int)lzham::get_generate_huffman_codes_table_size(i) + 15LL) & 0xFFFFFFFFFFFFFFF0LL)
                           - 4];
      v31 = 0;
      v15 = (void *)*((unsigned int *)v5 + 18);
      if ( !*((_DWORD *)v5 + 6) )
        lzham_assert(
          "i < m_size",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
          131);
      v16 = *((_QWORD *)v5 + 2);
      if ( !*((_DWORD *)v5 + 14) )
        lzham_assert(
          "i < m_size",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
          131);
      v17 = lzham::generate_huffman_codes(v14, v15, v16, *((const unsigned __int16 **)v5 + 6), v32, &v31, v13);
      if ( (v17 & 1) == 0 )
        lzham_assert(
          "status",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
          530);
      if ( v31 != *((_DWORD *)v5 + 22) )
        lzham_assert(
          "total_freq == m_total_count",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
          531);
      if ( !v17 || v31 != *((_DWORD *)v5 + 22) )
        return 0;
      if ( *(_DWORD *)v32 < 0x11u )
        goto LABEL_34;
      v18 = (#1330 *)*((unsigned int *)v5 + 18);
      if ( !*((_DWORD *)v5 + 14) )
        lzham_assert(
          "i < m_size",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
          131);
      if ( (lzham::prefix_coding::limit_max_code_size(v18, *((unsigned __int8 **)v5 + 6), (unsigned __int8 *)0x10) & 1) != 0 )
      {
    LABEL_34:
        if ( (a2 & 0x80000000) != 0 )
        {
          v19 = *((unsigned __int16 *)v5 + 48);
          v20 = *((_DWORD *)v5 + 19);
          v21 = v19 - 1;
          if ( !*((_WORD *)v5 + 48) )
            v19 = 64;
          if ( v21 < 0x20 )
            v19 = 32;
          v22 = (unsigned int)(v19 * *((_DWORD *)v5 + 20) + 31) >> 5;
          *((_DWORD *)v5 + 20) = v22;
          if ( v22 <= v20 )
            a2 = v22;
          else
            a2 = v20;
        }
        *((_DWORD *)v5 + 20) = a2;
        *((_DWORD *)v5 + 21) = a2;
        if ( *((_BYTE *)v5 + 98) )
        {
          v23 = (#1330 *)*((unsigned int *)v5 + 18);
          if ( !*((_DWORD *)v5 + 14) )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          v24 = (unsigned __int8 *)*((_QWORD *)v5 + 6);
          if ( !*((_DWORD *)v5 + 10) )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          if ( (lzham::prefix_coding::generate_codes(v23, v24, *((const unsigned __int8 **)v5 + 4), v12) & 1) != 0 )
            return 1;
        }
        else
        {
          v25 = 0;
          v26 = *((_DWORD *)v5 + 18);
          if ( v26 >= 2 )
          {
            v27 = *((_DWORD *)v5 + 18);
            do
            {
              ++v25;
              v10 = v27 > 3;
              v27 >>= 1;
            }
            while ( v10 );
          }
          if ( v25 * a2 <= (1 << *((_BYTE *)v5 + 92)) + 64 )
            v28 = 0;
          else
            v28 = *((unsigned __int8 *)v5 + 92);
          if ( !*((_DWORD *)v5 + 14) )
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
          if ( (lzham::prefix_coding::generate_decoder_tables(v26, *((_QWORD *)v5 + 6), *((_QWORD *)v5 + 8), v28) & 1) != 0 )
            return 1;
        }
        v30 = 571;
      }
      else
      {
        v30 = 538;
      }
      lzham_assert(
        "status",
        "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
        v30);
      return 0;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::rescale(__int64 result)
    {
      __int64 v1; // x19
      __int64 v2; // x23
      int v3; // w22
      unsigned int v4; // w8
      __int64 v5; // x9
      unsigned int v6; // w24
    
      v1 = result;
      if ( *(_DWORD *)(result + 72) )
      {
        v2 = 0;
        v3 = 0;
        do
        {
          v4 = *(_DWORD *)(v1 + 24);
          if ( v4 <= (unsigned int)v2 )
          {
            result = lzham_assert(
                       "i < m_size",
                       "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                       131);
            v4 = *(_DWORD *)(v1 + 24);
          }
          v5 = *(_QWORD *)(v1 + 16);
          v6 = *(unsigned __int16 *)(v5 + 2 * v2) + 1;
          v3 += v6 >> 1;
          if ( v4 <= (unsigned int)v2 )
          {
            result = lzham_assert(
                       "i < m_size",
                       "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                       131);
            v5 = *(_QWORD *)(v1 + 16);
          }
          *(_WORD *)(v5 + 2 * v2++) = v6 >> 1;
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v1 + 72) );
      }
      else
      {
        v3 = 0;
      }
      *(_DWORD *)(v1 + 88) = v3;
      return result;
    }

    __int64 __fastcall lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate(__int64 result)
    {
      _DWORD *v1; // x19
      unsigned int v2; // w8
      unsigned __int64 v3; // x9
      unsigned __int64 v4; // x11
      int v5; // w10
      unsigned int v6; // w8
    
      v1 = (_DWORD *)result;
      v2 = *(_DWORD *)(result + 80) - *(_DWORD *)(result + 84) + *(_DWORD *)(result + 88);
      *(_DWORD *)(result + 88) = v2;
      v3 = *(unsigned int *)(result + 24);
      if ( (_DWORD)v3 )
      {
        v4 = 0;
        v5 = 0;
        do
          v5 += *(unsigned __int16 *)(*(_QWORD *)(result + 16) + 2 * v4++);
        while ( v4 < v3 );
      }
      else
      {
        v5 = 0;
      }
      if ( v5 != v2 )
      {
        result = lzham_assert(
                   "actual_total == m_total_count",
                   "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
                   487);
        v2 = v1[22];
      }
      if ( v2 > v1[18] )
        result = lzham::raw_quasi_adaptive_huffman_data_model::rescale((__int64)v1);
      v6 = v1[20];
      if ( v6 > 8 )
        v6 = 8;
      v1[20] = v6;
      v1[21] = v6;
      return result;
    }

}; // end class lzham::raw_quasi_adaptive_huffman_data_model
