class progressive_block_decoder
{
public:

    __int64 __fastcall progressive_block_decoder::decode_block_dc_first(StageBucketRect *a1, int a2, int a3, int a4)
    {
      _WORD *v6; // x20
      __int64 v7; // x8
      unsigned int v8; // w9
      int v9; // w22
      int v10; // w1
      int v11; // w10
      __int64 result; // x0
      _DWORD *v13; // x8
      int v14; // w9
    
      v6 = (_WORD *)jpeg_decoder::coeff_buf_getp(a1, *((_QWORD *)a1 + a2 + 216), a3, a4);
      v7 = *((_QWORD *)a1 + *((int *)a1 + a2 + 127) + 208);
      v8 = *((_DWORD *)a1 + 2604);
      v9 = *(_DWORD *)(v7 + 4LL * HIBYTE(v8) + 4);
      if ( v9 < 0 )
      {
        v11 = -8;
        do
          v9 = *(_DWORD *)(v7 + 4LL * -(v9 + ((v8 >> (v11-- + 31)) & 1)) + 2308);
        while ( v9 < 0 );
        v10 = -v11;
      }
      else
      {
        v10 = *(unsigned __int8 *)(v7 + v9 + 2052);
      }
      jpeg_decoder::get_bits_2(a1, v10);
      if ( v9 )
      {
        result = jpeg_decoder::get_bits_2(a1, v9);
        if ( (int)result < extend_test[v9] )
          result = (unsigned int)(extend_offset[v9] + result);
      }
      else
      {
        result = 0;
      }
      v13 = (_DWORD *)((char *)a1 + 4 * a2);
      v14 = v13[2615] + result;
      v13[2615] = v14;
      *v6 = v14 << *((_DWORD *)a1 + 137);
      return result;
    }

    _WORD *__fastcall progressive_block_decoder::decode_block_dc_refine(jpeg_decoder *a1, int a2, int a3, int a4)
    {
      _WORD *result; // x0
    
      result = (_WORD *)jpeg_decoder::get_bits_2(a1, 1);
      if ( (_DWORD)result )
      {
        result = (_WORD *)jpeg_decoder::coeff_buf_getp(a1, *((_QWORD *)a1 + a2 + 216), a3, a4);
        *result |= 1 << *((_DWORD *)a1 + 137);
      }
      return result;
    }

    __int64 __fastcall progressive_block_decoder::decode_block_ac_first(__int64 this, StageBucketRect *a2, int a3, int a4)
    {
      int v4; // w21
      jpeg_decoder *v5; // x19
      int v6; // w8
      __int64 v7; // x20
      int v8; // w26
      int *v9; // x22
      __int64 v10; // x8
      unsigned int v11; // w9
      int v12; // w21
      int v13; // w1
      int v14; // w10
      int v15; // w1
      __int64 v16; // x21
      int v17; // w27
    
      v4 = (int)a2;
      v5 = (jpeg_decoder *)this;
      v6 = *(_DWORD *)(this + 1792);
      if ( v6 )
        goto LABEL_20;
      this = jpeg_decoder::coeff_buf_getp((StageBucketRect *)this, *(_QWORD *)(this + 8LL * (int)a2 + 1760), a3, a4);
      v7 = this;
      v8 = *((_DWORD *)v5 + 135);
      if ( v8 <= *((_DWORD *)v5 + 136) )
      {
        v9 = (int *)((char *)v5 + 4 * v4 + 524);
        do
        {
          v10 = *((_QWORD *)v5 + *v9 + 208);
          v11 = *((_DWORD *)v5 + 2604);
          v12 = *(_DWORD *)(v10 + 4LL * HIBYTE(v11) + 4);
          if ( v12 < 0 )
          {
            v14 = -8;
            do
              v12 = *(_DWORD *)(v10 + 4LL * -(v12 + ((v11 >> (v14-- + 31)) & 1)) + 2308);
            while ( v12 < 0 );
            v13 = -v14;
          }
          else
          {
            v13 = *(unsigned __int8 *)(v10 + v12 + 2052);
          }
          this = jpeg_decoder::get_bits_2(v5, v13);
          v15 = v12 >> 4;
          v16 = v12 & 0xF;
          if ( (_DWORD)v16 )
          {
            v17 = v15 + v8;
            if ( v15 + v8 >= 64 )
              goto LABEL_22;
            this = jpeg_decoder::get_bits_2(v5, v16);
            if ( (int)this < extend_test[(unsigned int)v16] )
              this = (unsigned int)(extend_offset[v16] + this);
            *(_WORD *)(v7 + 2LL * g_ZAG[v17]) = (_DWORD)this << *((_DWORD *)v5 + 137);
          }
          else
          {
            if ( v15 != 15 )
            {
              v6 = 1 << v15;
              *((_DWORD *)v5 + 448) = 1 << v15;
              if ( v15 )
              {
                this = jpeg_decoder::get_bits_2(v5, v15);
                v6 = *((_DWORD *)v5 + 448) + this;
                *((_DWORD *)v5 + 448) = v6;
              }
    LABEL_20:
              *((_DWORD *)v5 + 448) = v6 - 1;
              return this;
            }
            v17 = v8 + 15;
            if ( v8 + 15 >= 64 )
    LABEL_22:
              jpeg_decoder::terminate(v5, -227);
          }
          v8 = v17 + 1;
        }
        while ( v17 < *((_DWORD *)v5 + 136) );
      }
      return this;
    }

    __int64 __fastcall progressive_block_decoder::decode_block_ac_refine(#1340 *this, StageBucketRect *a2, int a3, int a4)
    {
      int v4; // w21
      char v6; // w8
      int v7; // w22
      int v8; // w23
      __int64 result; // x0
      __int64 v10; // x20
      int v11; // w26
      int v12; // w8
      int *v13; // x24
      __int64 v14; // x8
      unsigned int v15; // w9
      int v16; // w27
      int v17; // w1
      int v18; // w10
      int v19; // w21
      int v20; // w27
      __int64 v21; // x28
      int *v22; // x26
      __int16 v23; // w8
      __int64 v24; // x25
      int v25; // w8
      bool v26; // vf
      int v27; // w8
      __int64 v28; // x21
      int *v29; // x24
      __int64 v30; // x25
      int v31; // w8
      __int16 v32; // w8
    
      v4 = (int)a2;
      v6 = *((_DWORD *)this + 137);
      v7 = 1 << v6;
      v8 = -1 << v6;
      result = jpeg_decoder::coeff_buf_getp(this, *((_QWORD *)this + (int)a2 + 220), a3, a4);
      v10 = result;
      v11 = *((_DWORD *)this + 135);
      v12 = *((_DWORD *)this + 448);
      if ( v12 )
        goto LABEL_33;
      if ( v11 <= *((_DWORD *)this + 136) )
      {
        v13 = (int *)((char *)this + 4 * v4 + 524);
        while ( 1 )
        {
          v14 = *((_QWORD *)this + *v13 + 208);
          v15 = *((_DWORD *)this + 2604);
          v16 = *(_DWORD *)(v14 + 4LL * HIBYTE(v15) + 4);
          if ( v16 < 0 )
          {
            v18 = -8;
            do
              v16 = *(_DWORD *)(v14 + 4LL * -(v16 + ((v15 >> (v18-- + 31)) & 1)) + 2308);
            while ( v16 < 0 );
            v17 = -v18;
          }
          else
          {
            v17 = *(unsigned __int8 *)(v14 + v16 + 2052);
          }
          result = jpeg_decoder::get_bits_2(this, v17);
          v19 = v16 >> 4;
          if ( (v16 & 0xF) != 0 )
          {
            if ( (v16 & 0xF) != 1 )
              jpeg_decoder::terminate(this, -227);
            result = jpeg_decoder::get_bits_2(this, 1);
            if ( (_DWORD)result )
              v20 = v7;
            else
              v20 = v8;
          }
          else
          {
            if ( v19 != 15 )
            {
              v12 = 1 << v19;
              *((_DWORD *)this + 448) = 1 << v19;
              if ( v19 )
              {
                result = jpeg_decoder::get_bits_2(this, v16 >> 4);
                v12 = *((_DWORD *)this + 448) + result;
                *((_DWORD *)this + 448) = v12;
              }
    LABEL_33:
              if ( v12 >= 1 )
              {
                if ( v11 <= *((_DWORD *)this + 136) )
                {
                  v28 = v11 - 1LL;
                  v29 = &g_ZAG[v11];
                  do
                  {
                    v30 = *v29;
                    if ( *(_WORD *)(v10 + 2 * v30) )
                    {
                      result = jpeg_decoder::get_bits_2(this, 1);
                      if ( (_DWORD)result )
                      {
                        v31 = *(__int16 *)(v10 + 2 * v30);
                        if ( (v31 & v7) == 0 )
                        {
                          if ( v31 < 0 )
                            v32 = v31 + v8;
                          else
                            v32 = v31 + v7;
                          *(_WORD *)(v10 + 2 * v30) = v32;
                        }
                      }
                    }
                    ++v28;
                    ++v29;
                  }
                  while ( v28 < *((int *)this + 136) );
                  v12 = *((_DWORD *)this + 448);
                }
                *((_DWORD *)this + 448) = v12 - 1;
              }
              return result;
            }
            v20 = 0;
            v19 = 15;
          }
          v21 = v11 - 1LL;
          v22 = &g_ZAG[v11];
          do
          {
            v24 = *v22;
            if ( *(_WORD *)(v10 + 2 * v24) )
            {
              result = jpeg_decoder::get_bits_2(this, 1);
              if ( (_DWORD)result )
              {
                v25 = *(__int16 *)(v10 + 2 * v24);
                if ( (v25 & v7) == 0 )
                {
                  if ( v25 < 0 )
                    v23 = v25 + v8;
                  else
                    v23 = v25 + v7;
                  *(_WORD *)(v10 + 2 * v24) = v23;
                }
              }
            }
            else
            {
              v26 = __OFSUB__(v19--, 1);
              if ( v19 < 0 != v26 )
                break;
            }
            ++v21;
            ++v22;
          }
          while ( v21 < *((int *)this + 136) );
          v27 = v21 + 1;
          if ( v20 && v27 <= 63 )
            *(_WORD *)(v10 + 2LL * g_ZAG[v27]) = v20;
          v11 = v21 + 2;
          if ( v27 >= *((_DWORD *)this + 136) )
          {
            v12 = *((_DWORD *)this + 448);
            goto LABEL_33;
          }
        }
      }
      return result;
    }

}; // end class progressive_block_decoder
