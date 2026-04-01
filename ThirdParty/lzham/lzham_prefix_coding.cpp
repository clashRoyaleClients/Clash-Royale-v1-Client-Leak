class lzham::prefix_coding
{
public:

    __int64 __fastcall lzham::prefix_coding::limit_max_code_size(#1330 *this, unsigned __int8 *a2, unsigned __int8 *a3)
    {
      unsigned int v3; // w21
      int v5; // w25
      __int64 result; // x0
      int v7; // w22
      char v8; // w28
      int v9; // w20
      unsigned int v10; // w26
      unsigned int v11; // w9
      __int64 i; // x8
      int v13; // w8
      __int64 v14; // x9
      unsigned int v15; // w12
      int v16; // w10
      int v17; // w9
      int *v18; // x11
      int v19; // t1
      int v20; // w10
      int v21; // w13
      int v22; // w14
      unsigned int v23; // w15
      _BYTE *v24; // x22
      unsigned int v25; // w23
      __int64 v26; // x24
      _BYTE *v27; // x13
      __int64 v28; // x10
      __int64 v29; // x11
      _BYTE *v30; // [xsp+8h] [xbp-588h]
      _BYTE v31[1164]; // [xsp+20h] [xbp-570h] BYREF
      unsigned int __b[35]; // [xsp+4ACh] [xbp-E4h] BYREF
    
      v3 = (unsigned int)a3;
      v5 = (int)this;
      result = 0;
      if ( (unsigned int)(v5 - 1) <= 0x3FF )
      {
        v7 = (_DWORD)a3 - 1;
        if ( (unsigned int)((_DWORD)a3 - 1) <= 0x21 )
        {
          memset(__b, 0, sizeof(__b));
          if ( !v5 )
            return 1;
          v8 = 0;
          v30 = a2;
          v9 = v5;
          do
          {
            v10 = *a2;
            if ( v10 >= 0x23 )
              lzham_assert(
                "c <= cMaxEverCodeSize",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                30);
            ++__b[v10];
            v8 |= v10 > v3;
            --v9;
            ++a2;
          }
          while ( v9 );
          if ( (v8 & 1) == 0 )
            return 1;
          v11 = 0;
          for ( i = 1; i != 35; ++i )
          {
            *(_DWORD *)&v31[i * 4 + 1024] = v11;
            v11 += __b[i];
          }
          result = 1;
          if ( v11 - 2 <= 0x3FE )
          {
            v13 = 1 << v3;
            if ( v11 > 1 << v3 )
              return 0;
            if ( v3 + 1 <= 0x22 )
            {
              v14 = 0;
              v15 = __b[v3];
              do
              {
                v15 += __b[v3 + 1 + v14];
                __b[v3] = v15;
                ++v14;
              }
              while ( v3 + (_DWORD)v14 != 34 );
              if ( !v3 )
              {
                v17 = 0;
                v20 = 1;
    LABEL_22:
                --__b[v3];
                v21 = v7;
                while ( v21 )
                {
                  v22 = v21;
                  v23 = __b[v21--];
                  if ( v23 )
                  {
                    __b[v22] = v23 - 1;
                    __b[v21 + 2] += 2;
                    if ( --v17 != v13 )
                      goto LABEL_22;
                    if ( !v20 )
                    {
                      v24 = v31;
                      v25 = 1;
                      do
                      {
                        v26 = __b[v25];
                        if ( (_DWORD)v26 )
                        {
                          memset(v24, v25, __b[v25]);
                          v24 += v26;
                        }
                        ++v25;
                      }
                      while ( v25 <= v3 );
                    }
                    v27 = v30;
                    do
                    {
                      v28 = (unsigned __int8)*v27;
                      if ( *v27 )
                      {
                        v29 = *(unsigned int *)&v31[4 * v28 + 1024];
                        *(_DWORD *)&v31[4 * v28 + 1024] = v29 + 1;
                        *v27 = v31[v29];
                      }
                      --v5;
                      ++v27;
                    }
                    while ( v5 );
                    return 1;
                  }
                }
                return 0;
              }
            }
            v16 = 0;
            v17 = 0;
            v18 = (int *)&__b[v3];
            do
            {
              v19 = *v18--;
              v17 += v19 << v16++;
            }
            while ( v3 != v16 );
            if ( v17 != v13 )
            {
              v20 = 0;
              goto LABEL_22;
            }
            return 1;
          }
        }
      }
      return result;
    }

    __int64 __fastcall lzham::prefix_coding::generate_codes(
            #1330 *this,
            unsigned __int8 *a2,
            const unsigned __int8 *a3,
            unsigned __int16 *a4)
    {
      int v6; // w21
      unsigned __int8 *v7; // x26
      int v8; // w27
      unsigned __int64 v9; // x24
      __int64 v10; // x8
      int v11; // w9
      __int64 v12; // x8
      unsigned int v13; // w9
      __int64 v14; // x26
      __int64 v15; // x28
      unsigned int v16; // w24
      unsigned int v17; // w8
      unsigned int v18; // w9
      __int16 v19; // w8
      _DWORD v22[17]; // [xsp+0h] [xbp-E0h]
      _DWORD __b[17]; // [xsp+44h] [xbp-9Ch] BYREF
    
      v6 = (int)this;
      memset(__b, 0, sizeof(__b));
      if ( v6 )
      {
        v7 = a2;
        v8 = v6;
        do
        {
          v9 = *v7;
          if ( v9 >= 0x11 )
            lzham_assert(
              "c <= cMaxExpectedCodeSize",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
              121);
          ++__b[v9];
          --v8;
          ++v7;
        }
        while ( v8 );
      }
      v10 = 0;
      v11 = 0;
      v22[0] = 0;
      do
      {
        v22[v10 + 1] = v11;
        v11 = 2 * (__b[++v10] + v11);
      }
      while ( v10 != 16 );
      v12 = 1;
      if ( v11 == 0x20000 )
      {
    LABEL_12:
        if ( v6 )
        {
          v14 = 0;
          do
          {
            v15 = a2[v14];
            if ( a2[v14] )
            {
              v16 = v22[v15];
              if ( v16 >= 0x10000 )
                lzham_assert(
                  "!c || (next_code[c] <= UINT16_MAX)",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                  152);
              v22[v15] = v16 + 1;
              *(_WORD *)&a3[2 * v14] = v16;
              v17 = (unsigned __int16)v16;
              if ( (_WORD)v16 )
              {
                v18 = 0;
                do
                {
                  v17 >>= 1;
                  ++v18;
                }
                while ( v17 );
                if ( v18 > a2[v14] )
                  lzham_assert(
                    "!c || (math::total_bits(pCodes[i]) <= pCodesizes[i])",
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                    156);
              }
            }
            else
            {
              v19 = v22[0];
              ++v22[0];
              *(_WORD *)&a3[2 * v14] = v19;
            }
          }
          while ( (_DWORD)v14++ != v6 - 1 );
          return 1;
        }
        else
        {
          return 1;
        }
      }
      else
      {
        v13 = 0;
        while ( 1 )
        {
          v13 += __b[v12];
          if ( v13 > 1 )
            return 0;
          if ( (unsigned int)++v12 >= 0x11 )
            goto LABEL_12;
        }
      }
    }

    __int64 __fastcall lzham::prefix_coding::generate_decoder_tables(
            unsigned int a1,
            __int64 a2,
            __int64 a3,
            unsigned int a4)
    {
      __int64 result; // x0
      __int64 v9; // x8
      __int64 v10; // x8
      int v11; // w9
      unsigned int v12; // w25
      unsigned int v13; // w21
      unsigned int *v14; // x12
      unsigned int v15; // w19
      char v16; // w13
      int v17; // w16
      unsigned int v18; // w9
      unsigned int v19; // w8
      unsigned int v20; // w8
      unsigned int v21; // w8
      int v22; // w8
      __int64 v23; // x20
      int v24; // w21
      int v25; // w23
      __int64 v26; // x20
      __int64 v27; // x0
      __int64 v28; // x20
      unsigned int v29; // w19
      __int64 v30; // x27
      __int64 v31; // x24
      __int64 v32; // x28
      __int64 v33; // x25
      unsigned int v34; // w8
      unsigned int v35; // w27
      __int64 *v36; // x19
      __int64 v37; // x20
      int v38; // w21
      int v39; // w22
      __int64 v40; // x0
      __int64 v41; // x8
      void *v42; // x0
      unsigned int v43; // w22
      __int64 v44; // x20
      unsigned int v45; // w28
      __int64 v46; // x8
      int v47; // w9
      unsigned int v48; // w9
      unsigned __int64 v49; // x21
      __int64 v50; // x20
      unsigned __int64 v51; // x25
      unsigned int v52; // w26
      int v53; // w20
      __int64 v54; // x8
      __int64 v55; // x8
      __int64 v56; // x9
      _QWORD *v57; // x11
      int8x16_t v58; // q0
      unsigned int v59; // w10
      unsigned int v61; // w8
      unsigned int v62; // [xsp+10h] [xbp-160h]
      unsigned int v63; // [xsp+10h] [xbp-160h]
      unsigned int v64; // [xsp+1Ch] [xbp-154h]
      unsigned int v65; // [xsp+20h] [xbp-150h]
      __int64 v66; // [xsp+28h] [xbp-148h]
      __int64 v67; // [xsp+30h] [xbp-140h]
      unsigned int v68; // [xsp+3Ch] [xbp-134h]
      unsigned int v69; // [xsp+40h] [xbp-130h]
      char v70; // [xsp+44h] [xbp-12Ch]
      unsigned int v71; // [xsp+48h] [xbp-128h]
      unsigned int v72; // [xsp+4Ch] [xbp-124h]
      unsigned int v73[17]; // [xsp+50h] [xbp-120h]
      _DWORD __b[33]; // [xsp+94h] [xbp-DCh] BYREF
    
      result = 0;
      if ( !a1 || a4 > 0xB )
        return result;
      *(_DWORD *)a3 = a1;
      memset(__b, 0, 0x44u);
      v9 = 0;
      do
        ++__b[*(unsigned __int8 *)(a2 + v9++)];
      while ( a1 != (_DWORD)v9 );
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = (unsigned int *)(a3 + 96);
      v15 = -1;
      v16 = 15;
      do
      {
        v17 = __b[v10 + 1];
        if ( v17 )
        {
          if ( v15 >= (unsigned __int64)(v10 + 1) )
            v15 = v10 + 1;
          if ( v13 <= (unsigned __int64)(v10 + 1) )
            v13 = v10 + 1;
          __b[v10 + 17] = v11;
          v11 += v17;
          *(v14 - 17) = (((v11 - 1) << v16) | ((1 << v16) - 1)) + 1;
          *v14 = v12;
          v73[v10 + 1] = v12;
          v12 += v17;
        }
        else
        {
          *(v14 - 17) = 0;
        }
        v11 *= 2;
        ++v10;
        --v16;
        ++v14;
      }
      while ( v10 != 16 );
      *(_DWORD *)(a3 + 4) = v12;
      if ( v12 > *(_DWORD *)(a3 + 176) )
      {
        *(_DWORD *)(a3 + 176) = v12;
        if ( v12 )
        {
          v18 = v12 - 1;
          v19 = v12;
          if ( ((v12 - 1) & v12) == 0 )
          {
    LABEL_23:
            v23 = *(_QWORD *)(a3 + 184);
            if ( v23 )
            {
              v62 = v13;
              v24 = *(_DWORD *)(v23 - 4);
              v25 = ~*(_DWORD *)(v23 - 8);
              if ( !v24 || v24 != v25 )
                lzham_assert(
                  "num && (num == ~num_check)",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
                  98);
              if ( v24 == v25 )
                lzham::lzham_free(v23 - 16);
              *(_QWORD *)(a3 + 184) = 0;
              v19 = *(_DWORD *)(a3 + 176);
              v13 = v62;
            }
            if ( v19 )
              v26 = v19;
            else
              v26 = 1;
            v27 = lzham::lzham_malloc(2 * v26 + 16, 0);
            if ( !v27 )
            {
              *(_QWORD *)(a3 + 184) = 0;
              return 0;
            }
            *(_DWORD *)(v27 + 12) = v26;
            *(_DWORD *)(v27 + 8) = ~(_DWORD)v26;
            *(_QWORD *)(a3 + 184) = v27 + 16;
            goto LABEL_35;
          }
        }
        else
        {
          v18 = -1;
        }
        v20 = v18 | HIWORD(v18) | ((v18 | HIWORD(v18)) >> 8);
        v21 = v20 | (v20 >> 4) | ((v20 | (v20 >> 4)) >> 2);
        v22 = v21 | (v21 >> 1);
        if ( v22 + 1 <= a1 )
          v19 = v22 + 1;
        else
          v19 = a1;
        *(_DWORD *)(a3 + 176) = v19;
        goto LABEL_23;
      }
    LABEL_35:
      v63 = v13;
      v64 = a4;
      v28 = 0;
      *(_BYTE *)(a3 + 24) = v15;
      *(_BYTE *)(a3 + 25) = v13;
      v29 = a1;
      do
      {
        v30 = *(unsigned __int8 *)(a2 + v28);
        if ( *(_BYTE *)(a2 + v28) )
        {
          v31 = a2;
          if ( !__b[v30] )
            lzham_assert(
              "num_codes[c]",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
              242);
          v32 = v73[v30];
          v73[v30] = v32 + 1;
          if ( (unsigned int)v32 >= v12 )
            lzham_assert(
              "sorted_pos < total_used_syms",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
              246);
          *(_WORD *)(*(_QWORD *)(a3 + 184) + 2 * v32) = v28;
          a2 = v31;
        }
        ++v28;
      }
      while ( v29 != (_DWORD)v28 );
      v33 = a3;
      v66 = a2;
      v67 = a3;
      if ( *(unsigned __int8 *)(a3 + 24) >= a4 )
        v34 = 0;
      else
        v34 = a4;
      *(_DWORD *)(a3 + 8) = v34;
      v65 = v34;
      if ( v34 )
      {
        v35 = 1 << v34;
        if ( (unsigned int)(1 << v34) <= *(_DWORD *)(a3 + 164) )
        {
          v36 = (__int64 *)(a3 + 168);
          v42 = *(void **)(a3 + 168);
        }
        else
        {
          *(_DWORD *)(a3 + 164) = v35;
          v36 = (__int64 *)(a3 + 168);
          v37 = *(_QWORD *)(a3 + 168);
          if ( v37 )
          {
            v38 = *(_DWORD *)(v37 - 4);
            v39 = ~*(_DWORD *)(v37 - 8);
            if ( !v38 || v38 != v39 )
              lzham_assert(
                "num && (num == ~num_check)",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
                98);
            if ( v38 == v39 )
              lzham::lzham_free(v37 - 16);
            *v36 = 0;
          }
          v40 = lzham::lzham_malloc(4LL * v35 + 16, 0);
          v41 = v40;
          if ( !v40 )
          {
            *v36 = 0;
            return 0;
          }
          v42 = (void *)(v40 + 16);
          *(_DWORD *)(v41 + 12) = v35;
          *(_DWORD *)(v41 + 8) = ~v35;
          *v36 = v41 + 16;
        }
        memset(v42, 255, 4LL << v65);
        v43 = 1;
        do
        {
          v72 = v43;
          if ( __b[v43] )
          {
            v44 = v43 - 1;
            v45 = __b[(unsigned int)v44 + 17];
            if ( (unsigned int)v44 >= 0x10 )
              lzham_assert(
                "(len >= 1) && (len <= cMaxExpectedCodeSize)",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.h",
                134);
            v46 = v33 + 4 * v44;
            v47 = *(_DWORD *)(v46 + 28);
            if ( v47 )
              v48 = (unsigned int)(v47 - 1) >> (16 - v43);
            else
              v48 = -1;
            v71 = v48;
            if ( v45 <= v48 )
            {
              v70 = v65 - v43;
              v69 = *(_DWORD *)(v46 + 96) - v45;
              v68 = v43 << 16;
              v49 = (unsigned int)(1 << (v65 - v43));
              do
              {
                v50 = *(unsigned __int16 *)(*(_QWORD *)(v33 + 184) + 2LL * (v69 + v45));
                if ( *(unsigned __int8 *)(v66 + v50) != v43 )
                  lzham_assert(
                    "pCodesizes[sym_index] == codesize",
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                    291);
                v51 = 0;
                v52 = v45 << v70;
                v53 = v50 | v68;
                do
                {
                  if ( v52 + (unsigned int)v51 >= v35 )
                    lzham_assert(
                      "t < (1U << table_bits)",
                      "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                      297);
                  v54 = *v36;
                  if ( *(_DWORD *)(*v36 + 4LL * (v52 + (unsigned int)v51)) != -1 )
                  {
                    lzham_assert(
                      "pTables->m_lookup[t] == UINT32_MAX",
                      "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_prefix_coding.cpp",
                      299);
                    v54 = *v36;
                  }
                  *(_DWORD *)(v54 + 4LL * (v52 + (unsigned int)v51++)) = v53;
                }
                while ( v51 < v49 );
                ++v45;
                v43 = v72;
                v33 = v67;
              }
              while ( v45 <= v71 );
            }
          }
          ++v43;
        }
        while ( v65 >= v43 );
      }
      v55 = 0;
      v56 = v33 + 96;
      do
      {
        v57 = (_QWORD *)(v56 + v55 * 4);
        v58 = (int8x16_t)vsubq_s32(*(int32x4_t *)(v56 + v55 * 4), *(int32x4_t *)&__b[v55 + 17]);
        *v57 = v58.i64[0];
        v57[1] = vextq_s8(v58, v58, 8u).u64[0];
        v55 += 4;
      }
      while ( v55 != 16 );
      *(_DWORD *)(v33 + 16) = 0;
      *(_DWORD *)(v33 + 20) = *(unsigned __int8 *)(v33 + 24);
      v59 = v64;
      if ( v65 )
      {
        while ( v59 )
        {
          if ( __b[v59--] )
          {
            *(_DWORD *)(v33 + 16) = *(_DWORD *)(v33 + 4LL * v59 + 28);
            v61 = v65 + 1;
            *(_DWORD *)(v33 + 20) = v65 + 1;
            if ( v65 + 1 <= v63 )
            {
              while ( !__b[v61] )
              {
                if ( ++v61 > v63 )
                  goto LABEL_89;
              }
              *(_DWORD *)(v33 + 20) = v61;
            }
            break;
          }
        }
      }
    LABEL_89:
      *(_DWORD *)(v33 + 92) = -1;
      *(_DWORD *)(v33 + 160) = 0xFFFFF;
      *(_DWORD *)(v33 + 12) = 32 - *(_DWORD *)(v33 + 8);
      return 1;
    }

}; // end class lzham::prefix_coding
