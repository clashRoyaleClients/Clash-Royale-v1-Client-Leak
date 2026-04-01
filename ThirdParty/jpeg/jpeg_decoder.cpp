class jpeg_decoder
{
public:

    void __fastcall jpeg_decoder::free_all_blocks(StageBucketRect *this)
    {
      __int64 v2; // x0
      __int64 v3; // x20
      char *v4; // x19
    
      v2 = *((_QWORD *)this + 25);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
        *((_QWORD *)this + 25) = 0;
      }
      v3 = 0;
      v4 = (char *)this + 640;
      do
      {
        free(*(void **)&v4[v3]);
        *(_QWORD *)&v4[v3] = 0;
        v3 += 8;
      }
      while ( v3 != 1024 );
    }

    void __fastcall __noreturn jpeg_decoder::terminate(StageBucketRect *this, int a2)
    {
      *((_DWORD *)this + 3664) = a2;
      jpeg_decoder::free_all_blocks(this);
      longjmp((int *)this, a2);
    }

    void *__fastcall jpeg_decoder::alloc(StageBucketRect *this, int a2)
    {
      __int64 v3; // x22
      size_t v4; // x21
      void *v5; // x0
      void *v6; // x20
    
      v3 = 0;
      while ( *((_QWORD *)this + v3 + 80) )
      {
        if ( ++v3 >= 128 )
        {
          if ( (_DWORD)v3 == 128 )
            jpeg_decoder::terminate(this, -221);
          break;
        }
      }
      v4 = a2 + 8;
      v5 = malloc(v4);
      v6 = v5;
      if ( !v5 )
        jpeg_decoder::terminate(this, -233);
      bzero(v5, v4);
      *((_QWORD *)this + (int)v3 + 80) = v6;
      return v6;
    }

    void __fastcall jpeg_decoder::prep_in_buffer(StageBucketRect *this)
    {
      __int64 v2; // x8
      _BYTE *v3; // x20
      int v4; // w0
    
      *((_DWORD *)this + 456) = 0;
      *((_QWORD *)this + 227) = (char *)this + 1961;
      if ( !*((_BYTE *)this + 1832) )
      {
        LODWORD(v2) = 0;
        v3 = (char *)this + 1832;
        do
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *))(**((_QWORD **)this + 25) + 16LL))(
                 *((_QWORD *)this + 25),
                 (char *)this + (int)v2 + 1961,
                 (unsigned int)(0x2000 - v2),
                 (char *)this + 1832);
          if ( v4 == -1 )
            jpeg_decoder::terminate(this, -232);
          v2 = *((int *)this + 456) + (__int64)v4;
          *((_DWORD *)this + 456) = v2;
        }
        while ( (int)v2 < 0x2000 && !*v3 );
        *((_DWORD *)this + 3666) += v2;
        memset_pattern16((void *)(*((_QWORD *)this + 227) + v2), &memset_pattern_0, 0x80u);
      }
    }

    void __fastcall jpeg_decoder::read_dht_marker(StageBucketRect *this)
    {
      unsigned int v2; // w20
      int v3; // w8
      int v4; // w9
      unsigned int v5; // w27
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w21
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      int v14; // w10
      int v15; // w21
      int v16; // w8
      unsigned int v17; // w21
      int v18; // w8
      unsigned __int8 *v19; // x10
      unsigned __int8 *v20; // x9
      unsigned __int8 v21; // w20
      int v22; // w8
      int v23; // w8
      int v24; // w9
      int v25; // w8
      unsigned int v26; // w8
      int v27; // w9
      int v28; // w28
      __int64 i; // x26
      unsigned int v30; // w20
      int v31; // w8
      unsigned __int8 *v32; // x10
      unsigned __int8 *v33; // x9
      unsigned __int8 v34; // w20
      int v35; // w8
      int v36; // w8
      int v37; // w9
      int v38; // w8
      unsigned int v39; // w8
      int v40; // w9
      __int64 v41; // x21
      unsigned int v42; // w9
      int v43; // w8
      unsigned __int8 *v44; // x10
      unsigned __int8 *v45; // x9
      unsigned __int8 v46; // w22
      int v47; // w8
      int v48; // w8
      int v49; // w9
      int v50; // w8
      int v51; // w10
      __int64 v52; // x22
      char *v53; // x26
      void **v54; // x26
      __int64 v55; // t1
      void **v56; // x27
      _BYTE *v57; // x8
      unsigned int v58; // [xsp+24h] [xbp-17Ch]
      _BYTE __src[256]; // [xsp+37h] [xbp-169h] BYREF
      __int128 v60; // [xsp+137h] [xbp-69h]
      char v61; // [xsp+147h] [xbp-59h]
    
      v2 = *((_DWORD *)this + 2604);
      v3 = *((_DWORD *)this + 2603);
      v4 = v3 - 16;
      *((_DWORD *)this + 2603) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *((_DWORD *)this + 2604) = v2 << 16;
        goto LABEL_17;
      }
      *((_DWORD *)this + 2604) = v2 << v3;
      v6 = *((_DWORD *)this + 456);
      if ( v6 || (jpeg_decoder::prep_in_buffer(this), (v6 = *((_DWORD *)this + 456)) != 0) )
      {
        v7 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v8 = v7 + 1;
        *((_QWORD *)this + 227) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *((_DWORD *)this + 456) = v10;
        if ( v10 )
        {
    LABEL_12:
          *((_QWORD *)this + 227) = v8 + 1;
          v12 = *v8;
          *((_DWORD *)this + 456) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v10 = *((_DWORD *)this + 456);
      if ( v10 )
      {
        v8 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_12;
      }
      v13 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = *((_DWORD *)this + 2603);
      v5 = (v12 & 0xFFFF00FF | (v9 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v14;
      *((_DWORD *)this + 2604) = v5;
      v4 = v14 + 16;
      *((_DWORD *)this + 2603) = v14 + 16;
      if ( v14 <= -17 )
    LABEL_83:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_17:
      if ( !(v2 >> 17) )
        goto LABEL_84;
      v15 = HIWORD(v2) - 2;
      if ( HIWORD(v2) == 2 )
        return;
      while ( 2 )
      {
        v16 = v4 - 8;
        *((_DWORD *)this + 2603) = v4 - 8;
        if ( v4 - 8 <= 0 )
        {
          *((_DWORD *)this + 2604) = v5 << v4;
          v18 = *((_DWORD *)this + 456);
          if ( v18 || (jpeg_decoder::prep_in_buffer(this), (v18 = *((_DWORD *)this + 456)) != 0) )
          {
            v19 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v20 = v19 + 1;
            *((_QWORD *)this + 227) = v19 + 1;
            v21 = *v19;
            v22 = v18 - 1;
            *((_DWORD *)this + 456) = v22;
            if ( v22 )
              goto LABEL_32;
          }
          else
          {
            v23 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v23 ^ 1;
            if ( v23 )
              v21 = -39;
            else
              v21 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v22 = *((_DWORD *)this + 456);
          if ( !v22 )
          {
            v58 = v15;
            v25 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v25 ^ 1;
            if ( v25 )
              v24 = 217;
            else
              v24 = 255;
    LABEL_36:
            v26 = v24 & 0xFFFF00FF | (v21 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
            v27 = *((_DWORD *)this + 2603);
            v17 = v26 << -(char)v27;
            *((_DWORD *)this + 2604) = v17;
            v16 = v27 + 16;
            *((_DWORD *)this + 2603) = v27 + 16;
            if ( v27 <= -17 )
              goto LABEL_83;
            goto LABEL_37;
          }
          v20 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_32:
          v58 = v15;
          *((_QWORD *)this + 227) = v20 + 1;
          v24 = *v20;
          *((_DWORD *)this + 456) = v22 - 1;
          goto LABEL_36;
        }
        v58 = v15;
        v17 = v5 << 8;
        *((_DWORD *)this + 2604) = v5 << 8;
    LABEL_37:
        v28 = 0;
        LOBYTE(v60) = 0;
        for ( i = 1; i < 17; ++i )
        {
          *((_DWORD *)this + 2603) = v16 - 8;
          if ( v16 - 8 > 0 )
          {
            v30 = v17 << 8;
            *((_DWORD *)this + 2604) = v17 << 8;
            v16 -= 8;
            goto LABEL_54;
          }
          *((_DWORD *)this + 2604) = v17 << v16;
          v31 = *((_DWORD *)this + 456);
          if ( v31 || (jpeg_decoder::prep_in_buffer(this), (v31 = *((_DWORD *)this + 456)) != 0) )
          {
            v32 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v33 = v32 + 1;
            *((_QWORD *)this + 227) = v32 + 1;
            v34 = *v32;
            v35 = v31 - 1;
            *((_DWORD *)this + 456) = v35;
            if ( v35 )
              goto LABEL_49;
          }
          else
          {
            v36 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v36 ^ 1;
            if ( v36 )
              v34 = -39;
            else
              v34 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v35 = *((_DWORD *)this + 456);
          if ( v35 )
          {
            v33 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_49:
            *((_QWORD *)this + 227) = v33 + 1;
            v37 = *v33;
            *((_DWORD *)this + 456) = v35 - 1;
            goto LABEL_53;
          }
          v38 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v38 ^ 1;
          if ( v38 )
            v37 = 217;
          else
            v37 = 255;
    LABEL_53:
          v39 = v37 & 0xFFFF00FF | (v34 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v40 = *((_DWORD *)this + 2603);
          v30 = v39 << -(char)v40;
          *((_DWORD *)this + 2604) = v30;
          v16 = v40 + 16;
          *((_DWORD *)this + 2603) = v40 + 16;
          if ( v40 <= -17 )
            goto LABEL_83;
    LABEL_54:
          *((_BYTE *)&v60 + i) = HIBYTE(v17);
          v28 += HIBYTE(v17);
          v17 = v30;
        }
        if ( v28 > 255 )
          jpeg_decoder::terminate(this, -200);
        if ( v28 >= 1 )
        {
          v41 = 0;
          while ( 1 )
          {
            *((_DWORD *)this + 2603) = v16 - 8;
            if ( v16 - 8 <= 0 )
              break;
            v42 = v30 << 8;
            *((_DWORD *)this + 2604) = v30 << 8;
            v16 -= 8;
    LABEL_74:
            __src[v41++] = HIBYTE(v30);
            v30 = v42;
            if ( v41 >= v28 )
              goto LABEL_75;
          }
          *((_DWORD *)this + 2604) = v30 << v16;
          v43 = *((_DWORD *)this + 456);
          if ( v43 || (jpeg_decoder::prep_in_buffer(this), (v43 = *((_DWORD *)this + 456)) != 0) )
          {
            v44 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v45 = v44 + 1;
            *((_QWORD *)this + 227) = v44 + 1;
            v46 = *v44;
            v47 = v43 - 1;
            *((_DWORD *)this + 456) = v47;
            if ( !v47 )
              goto LABEL_67;
    LABEL_69:
            *((_QWORD *)this + 227) = v45 + 1;
            v49 = *v45;
            *((_DWORD *)this + 456) = v47 - 1;
          }
          else
          {
            v48 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v48 ^ 1;
            if ( v48 )
              v46 = -39;
            else
              v46 = -1;
    LABEL_67:
            jpeg_decoder::prep_in_buffer(this);
            v47 = *((_DWORD *)this + 456);
            if ( v47 )
            {
              v45 = (unsigned __int8 *)*((_QWORD *)this + 227);
              goto LABEL_69;
            }
            v50 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v50 ^ 1;
            if ( v50 )
              v49 = 217;
            else
              v49 = 255;
          }
          v51 = *((_DWORD *)this + 2603);
          v42 = (v49 & 0xFFFF00FF | (v46 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v51;
          *((_DWORD *)this + 2604) = v42;
          v16 = v51 + 16;
          *((_DWORD *)this + 2603) = v51 + 16;
          if ( v51 <= -17 )
            goto LABEL_83;
          goto LABEL_74;
        }
    LABEL_75:
        if ( v58 < v28 + 17 )
    LABEL_84:
          jpeg_decoder::terminate(this, -202);
        v52 = (HIBYTE(v5) & 0xF) + ((v5 >> 26) & 4);
        if ( (unsigned int)v52 >= 8 )
          jpeg_decoder::terminate(this, -201);
        v53 = (char *)this + 8 * (unsigned int)v52;
        v55 = *((_QWORD *)v53 + 28);
        v54 = (void **)(v53 + 224);
        if ( !v55 )
          *v54 = jpeg_decoder::alloc(this, 17);
        v56 = (void **)((char *)this + 8 * v52 + 288);
        if ( !*v56 )
          *v56 = jpeg_decoder::alloc(this, 256);
        *((_BYTE *)this + v52 + 212) = (unsigned int)v52 >> 4;
        v57 = *v54;
        v57[16] = v61;
        *(_OWORD *)v57 = v60;
        memcpy(*v56, __src, 0x100u);
        if ( v58 != v28 + 17 )
        {
          v5 = *((_DWORD *)this + 2604);
          v4 = *((_DWORD *)this + 2603);
          v15 = v58 - (v28 + 17);
          continue;
        }
        break;
      }
    }

    void __fastcall jpeg_decoder::read_dqt_marker(__int64 a1)
    {
      unsigned int v2; // w21
      int v3; // w9
      int v4; // w8
      unsigned int v5; // w20
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w20
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      unsigned int v14; // w8
      int v15; // w9
      unsigned int v16; // w9
      unsigned int v17; // w21
      unsigned int v18; // w25
      int v19; // w8
      unsigned __int8 *v20; // x10
      unsigned __int8 *v21; // x9
      unsigned __int8 v22; // w22
      int v23; // w8
      int v24; // w8
      int v25; // w9
      int v26; // w8
      unsigned int v27; // w8
      int v28; // w9
      unsigned int v29; // w9
      void **v30; // x26
      __int64 i; // x27
      unsigned int v32; // w28
      int v33; // w8
      unsigned __int8 *v34; // x10
      unsigned __int8 *v35; // x9
      unsigned __int8 v36; // w22
      int v37; // w8
      int v38; // w8
      int v39; // w9
      int v40; // w8
      unsigned int v41; // w8
      int v42; // w9
      unsigned int v43; // w22
      int v44; // w8
      unsigned __int8 *v45; // x10
      unsigned __int8 *v46; // x9
      unsigned __int8 v47; // w25
      int v48; // w8
      int v49; // w8
      int v50; // w9
      int v51; // w8
      unsigned int v52; // w8
      int v53; // w9
      unsigned int v54; // w9
      bool v55; // cf
    
      v2 = *(_DWORD *)(a1 + 10416);
      v3 = *(_DWORD *)(a1 + 10412);
      v4 = v3 - 16;
      *(_DWORD *)(a1 + 10412) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *(_DWORD *)(a1 + 10416) = v2 << 16;
        goto LABEL_17;
      }
      *(_DWORD *)(a1 + 10416) = v2 << v3;
      v6 = *(_DWORD *)(a1 + 1824);
      if ( v6 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v6 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v7 = *(unsigned __int8 **)(a1 + 1816);
        v8 = v7 + 1;
        *(_QWORD *)(a1 + 1816) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *(_DWORD *)(a1 + 1824) = v10;
        if ( v10 )
        {
    LABEL_12:
          *(_QWORD *)(a1 + 1816) = v8 + 1;
          v12 = *v8;
          *(_DWORD *)(a1 + 1824) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
      v10 = *(_DWORD *)(a1 + 1824);
      if ( v10 )
      {
        v8 = *(unsigned __int8 **)(a1 + 1816);
        goto LABEL_12;
      }
      v13 = *(_DWORD *)(a1 + 1828);
      *(_DWORD *)(a1 + 1828) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = v12 & 0xFFFF00FF | (v9 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
      v15 = *(_DWORD *)(a1 + 10412);
      v5 = v14 << -(char)v15;
      *(_DWORD *)(a1 + 10416) = v5;
      v4 = v15 + 16;
      *(_DWORD *)(a1 + 10412) = v15 + 16;
      if ( v15 <= -17 )
    LABEL_82:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_17:
      if ( !(v2 >> 17) )
        jpeg_decoder::terminate((StageBucketRect *)a1, -203);
      v16 = HIWORD(v2);
      v17 = HIWORD(v2) - 2;
      if ( v16 != 2 )
      {
        while ( 1 )
        {
          *(_DWORD *)(a1 + 10412) = v4 - 8;
          if ( v4 - 8 <= 0 )
            break;
          v18 = v5 << 8;
          *(_DWORD *)(a1 + 10416) = v5 << 8;
          v4 -= 8;
    LABEL_35:
          v29 = HIBYTE(v5) & 0xF;
          if ( v29 >= 4 )
            jpeg_decoder::terminate((StageBucketRect *)a1, -204);
          v30 = (void **)(a1 + 8LL * v29 + 352);
          if ( !*v30 )
          {
            *v30 = jpeg_decoder::alloc((StageBucketRect *)a1, 128);
            v18 = *(_DWORD *)(a1 + 10416);
            v4 = *(_DWORD *)(a1 + 10412);
          }
          for ( i = 0; i < 64; ++i )
          {
            *(_DWORD *)(a1 + 10412) = v4 - 8;
            if ( v4 - 8 > 0 )
            {
              v32 = v18 << 8;
              *(_DWORD *)(a1 + 10416) = v18 << 8;
              v4 -= 8;
              goto LABEL_55;
            }
            *(_DWORD *)(a1 + 10416) = v18 << v4;
            v33 = *(_DWORD *)(a1 + 1824);
            if ( v33 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v33 = *(_DWORD *)(a1 + 1824)) != 0) )
            {
              v34 = *(unsigned __int8 **)(a1 + 1816);
              v35 = v34 + 1;
              *(_QWORD *)(a1 + 1816) = v34 + 1;
              v36 = *v34;
              v37 = v33 - 1;
              *(_DWORD *)(a1 + 1824) = v37;
              if ( v37 )
                goto LABEL_50;
            }
            else
            {
              v38 = *(_DWORD *)(a1 + 1828);
              *(_DWORD *)(a1 + 1828) = v38 ^ 1;
              if ( v38 )
                v36 = -39;
              else
                v36 = -1;
            }
            jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
            v37 = *(_DWORD *)(a1 + 1824);
            if ( v37 )
            {
              v35 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_50:
              *(_QWORD *)(a1 + 1816) = v35 + 1;
              v39 = *v35;
              *(_DWORD *)(a1 + 1824) = v37 - 1;
              goto LABEL_54;
            }
            v40 = *(_DWORD *)(a1 + 1828);
            *(_DWORD *)(a1 + 1828) = v40 ^ 1;
            if ( v40 )
              v39 = 217;
            else
              v39 = 255;
    LABEL_54:
            v41 = v39 & 0xFFFF00FF | (v36 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
            v42 = *(_DWORD *)(a1 + 10412);
            v32 = v41 << -(char)v42;
            *(_DWORD *)(a1 + 10416) = v32;
            v4 = v42 + 16;
            *(_DWORD *)(a1 + 10412) = v42 + 16;
            if ( v42 <= -17 )
              goto LABEL_82;
    LABEL_55:
            v43 = HIBYTE(v18);
            if ( !(v5 >> 28) )
            {
              v18 = v32;
              goto LABEL_74;
            }
            *(_DWORD *)(a1 + 10412) = v4 - 8;
            if ( v4 - 8 <= 0 )
            {
              *(_DWORD *)(a1 + 10416) = v32 << v4;
              v44 = *(_DWORD *)(a1 + 1824);
              if ( v44 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v44 = *(_DWORD *)(a1 + 1824)) != 0) )
              {
                v45 = *(unsigned __int8 **)(a1 + 1816);
                v46 = v45 + 1;
                *(_QWORD *)(a1 + 1816) = v45 + 1;
                v47 = *v45;
                v48 = v44 - 1;
                *(_DWORD *)(a1 + 1824) = v48;
                if ( !v48 )
                  goto LABEL_66;
    LABEL_68:
                *(_QWORD *)(a1 + 1816) = v46 + 1;
                v50 = *v46;
                *(_DWORD *)(a1 + 1824) = v48 - 1;
              }
              else
              {
                v49 = *(_DWORD *)(a1 + 1828);
                *(_DWORD *)(a1 + 1828) = v49 ^ 1;
                if ( v49 )
                  v47 = -39;
                else
                  v47 = -1;
    LABEL_66:
                jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
                v48 = *(_DWORD *)(a1 + 1824);
                if ( v48 )
                {
                  v46 = *(unsigned __int8 **)(a1 + 1816);
                  goto LABEL_68;
                }
                v51 = *(_DWORD *)(a1 + 1828);
                *(_DWORD *)(a1 + 1828) = v51 ^ 1;
                if ( v51 )
                  v50 = 217;
                else
                  v50 = 255;
              }
              v52 = v50 & 0xFFFF00FF | (v47 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
              v53 = *(_DWORD *)(a1 + 10412);
              v18 = v52 << -(char)v53;
              *(_DWORD *)(a1 + 10416) = v18;
              v4 = v53 + 16;
              *(_DWORD *)(a1 + 10412) = v53 + 16;
              if ( v53 <= -17 )
                goto LABEL_82;
              goto LABEL_73;
            }
            v18 = v32 << 8;
            *(_DWORD *)(a1 + 10416) = v32 << 8;
            v4 -= 8;
    LABEL_73:
            v43 = HIBYTE(v32) | (v43 << 8);
    LABEL_74:
            *((_WORD *)*v30 + i) = v43;
          }
          if ( v5 >> 28 )
            v54 = 129;
          else
            v54 = 65;
          v55 = v17 >= v54;
          v17 -= v54;
          if ( !v55 )
            jpeg_decoder::terminate((StageBucketRect *)a1, -219);
          v5 = v18;
          if ( !v17 )
            return;
        }
        *(_DWORD *)(a1 + 10416) = v5 << v4;
        v19 = *(_DWORD *)(a1 + 1824);
        if ( v19 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v19 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v20 = *(unsigned __int8 **)(a1 + 1816);
          v21 = v20 + 1;
          *(_QWORD *)(a1 + 1816) = v20 + 1;
          v22 = *v20;
          v23 = v19 - 1;
          *(_DWORD *)(a1 + 1824) = v23;
          if ( v23 )
            goto LABEL_30;
        }
        else
        {
          v24 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v24 ^ 1;
          if ( v24 )
            v22 = -39;
          else
            v22 = -1;
        }
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v23 = *(_DWORD *)(a1 + 1824);
        if ( !v23 )
        {
          v26 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v26 ^ 1;
          if ( v26 )
            v25 = 217;
          else
            v25 = 255;
    LABEL_34:
          v27 = v25 & 0xFFFF00FF | (v22 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
          v28 = *(_DWORD *)(a1 + 10412);
          v18 = v27 << -(char)v28;
          *(_DWORD *)(a1 + 10416) = v18;
          v4 = v28 + 16;
          *(_DWORD *)(a1 + 10412) = v28 + 16;
          if ( v28 <= -17 )
            goto LABEL_82;
          goto LABEL_35;
        }
        v21 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_30:
        *(_QWORD *)(a1 + 1816) = v21 + 1;
        v25 = *v21;
        *(_DWORD *)(a1 + 1824) = v23 - 1;
        goto LABEL_34;
      }
    }

    void __fastcall jpeg_decoder::read_sof_marker(StageBucketRect *this)
    {
      unsigned int v2; // w20
      int v3; // w9
      int v4; // w8
      unsigned int v5; // w21
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w21
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      unsigned int v14; // w8
      int v15; // w9
      int v16; // w9
      unsigned int v17; // w22
      int v18; // w8
      unsigned __int8 *v19; // x10
      unsigned __int8 *v20; // x9
      unsigned __int8 v21; // w22
      int v22; // w8
      int v23; // w8
      int v24; // w9
      int v25; // w8
      int v26; // w10
      int v27; // w8
      unsigned int v28; // w21
      int v29; // w8
      unsigned __int8 *v30; // x10
      unsigned __int8 *v31; // x9
      unsigned __int8 v32; // w21
      int v33; // w8
      int v34; // w8
      int v35; // w9
      int v36; // w8
      unsigned int v37; // w8
      int v38; // w9
      int v40; // w9
      unsigned int v41; // w22
      int v42; // w8
      unsigned __int8 *v43; // x10
      unsigned __int8 *v44; // x9
      unsigned __int8 v45; // w22
      int v46; // w8
      int v47; // w8
      int v48; // w9
      int v49; // w8
      int v50; // w10
      int v51; // w8
      unsigned int v52; // w23
      int v53; // w8
      unsigned __int8 *v54; // x10
      unsigned __int8 *v55; // x9
      unsigned __int8 v56; // w21
      int v57; // w8
      int v58; // w8
      int v59; // w9
      int v60; // w8
      unsigned int v61; // w8
      int v62; // w9
      unsigned int v63; // w9
      __int64 v64; // x20
      int v65; // w8
      unsigned __int8 *v66; // x10
      unsigned __int8 *v67; // x9
      unsigned __int8 v68; // w24
      int v69; // w8
      int v70; // w8
      int v71; // w9
      int v72; // w8
      unsigned int v73; // w8
      int v74; // w9
      unsigned int v75; // w23
      int v76; // w8
      int v77; // w8
      unsigned __int8 *v78; // x10
      unsigned __int8 *v79; // x9
      unsigned __int8 v80; // w24
      int v81; // w8
      int v82; // w8
      int v83; // w9
      int v84; // w8
      unsigned int v85; // w8
      int v86; // w9
      unsigned int v87; // w23
      int v88; // w8
      int v89; // w8
      unsigned __int8 *v90; // x10
      unsigned __int8 *v91; // x9
      unsigned __int8 v92; // w24
      int v93; // w8
      int v94; // w8
      int v95; // w9
      int v96; // w8
      unsigned int v97; // w8
      int v98; // w9
      unsigned int v99; // w23
      int v100; // w8
      int v101; // w8
      unsigned __int8 *v102; // x10
      unsigned __int8 *v103; // x9
      unsigned __int8 v104; // w24
      int v105; // w8
      int v106; // w8
      int v107; // w9
      int v108; // w8
      unsigned int v109; // w8
      int v110; // w9
    
      v2 = *((_DWORD *)this + 2604);
      v3 = *((_DWORD *)this + 2603);
      v4 = v3 - 16;
      *((_DWORD *)this + 2603) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *((_DWORD *)this + 2604) = v2 << 16;
        goto LABEL_17;
      }
      *((_DWORD *)this + 2604) = v2 << v3;
      v6 = *((_DWORD *)this + 456);
      if ( v6 || (jpeg_decoder::prep_in_buffer(this), (v6 = *((_DWORD *)this + 456)) != 0) )
      {
        v7 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v8 = v7 + 1;
        *((_QWORD *)this + 227) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *((_DWORD *)this + 456) = v10;
        if ( v10 )
        {
    LABEL_12:
          *((_QWORD *)this + 227) = v8 + 1;
          v12 = *v8;
          *((_DWORD *)this + 456) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v10 = *((_DWORD *)this + 456);
      if ( v10 )
      {
        v8 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_12;
      }
      v13 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = v12 & 0xFFFF00FF | (v9 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
      v15 = *((_DWORD *)this + 2603);
      v5 = v14 << -(char)v15;
      *((_DWORD *)this + 2604) = v5;
      v4 = v15 + 16;
      *((_DWORD *)this + 2603) = v15 + 16;
      if ( v15 <= -17 )
        goto LABEL_159;
    LABEL_17:
      v16 = v4 - 8;
      *((_DWORD *)this + 2603) = v4 - 8;
      if ( v4 - 8 > 0 )
      {
        v17 = v5 << 8;
        *((_DWORD *)this + 2604) = v5 << 8;
        goto LABEL_33;
      }
      *((_DWORD *)this + 2604) = v5 << v4;
      v18 = *((_DWORD *)this + 456);
      if ( v18 || (jpeg_decoder::prep_in_buffer(this), (v18 = *((_DWORD *)this + 456)) != 0) )
      {
        v19 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v20 = v19 + 1;
        *((_QWORD *)this + 227) = v19 + 1;
        v21 = *v19;
        v22 = v18 - 1;
        *((_DWORD *)this + 456) = v22;
        if ( v22 )
        {
    LABEL_28:
          *((_QWORD *)this + 227) = v20 + 1;
          v24 = *v20;
          *((_DWORD *)this + 456) = v22 - 1;
          goto LABEL_32;
        }
      }
      else
      {
        v23 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v23 ^ 1;
        if ( v23 )
          v21 = -39;
        else
          v21 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v22 = *((_DWORD *)this + 456);
      if ( v22 )
      {
        v20 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_28;
      }
      v25 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v25 ^ 1;
      if ( v25 )
        v24 = 217;
      else
        v24 = 255;
    LABEL_32:
      v26 = *((_DWORD *)this + 2603);
      v17 = (v24 & 0xFFFF00FF | (v21 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v26;
      *((_DWORD *)this + 2604) = v17;
      v16 = v26 + 16;
      *((_DWORD *)this + 2603) = v26 + 16;
      if ( v26 <= -17 )
        goto LABEL_159;
    LABEL_33:
      if ( HIBYTE(v5) != 8 )
        jpeg_decoder::terminate(this, -205);
      v27 = v16 - 16;
      *((_DWORD *)this + 2603) = v16 - 16;
      if ( v16 - 16 > 0 )
      {
        v28 = v17 << 16;
        *((_DWORD *)this + 2604) = v17 << 16;
        goto LABEL_50;
      }
      *((_DWORD *)this + 2604) = v17 << v16;
      v29 = *((_DWORD *)this + 456);
      if ( v29 || (jpeg_decoder::prep_in_buffer(this), (v29 = *((_DWORD *)this + 456)) != 0) )
      {
        v30 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v31 = v30 + 1;
        *((_QWORD *)this + 227) = v30 + 1;
        v32 = *v30;
        v33 = v29 - 1;
        *((_DWORD *)this + 456) = v33;
        if ( v33 )
        {
    LABEL_45:
          *((_QWORD *)this + 227) = v31 + 1;
          v35 = *v31;
          *((_DWORD *)this + 456) = v33 - 1;
          goto LABEL_49;
        }
      }
      else
      {
        v34 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v34 ^ 1;
        if ( v34 )
          v32 = -39;
        else
          v32 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v33 = *((_DWORD *)this + 456);
      if ( v33 )
      {
        v31 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_45;
      }
      v36 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v36 ^ 1;
      if ( v36 )
        v35 = 217;
      else
        v35 = 255;
    LABEL_49:
      v37 = v35 & 0xFFFF00FF | (v32 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
      v38 = *((_DWORD *)this + 2603);
      v28 = v37 << -(char)v38;
      *((_DWORD *)this + 2604) = v28;
      v27 = v38 + 16;
      *((_DWORD *)this + 2603) = v38 + 16;
      if ( v38 <= -17 )
        goto LABEL_159;
    LABEL_50:
      *((_DWORD *)this + 49) = HIWORD(v17);
      if ( v17 > 0x4000FFFF || HIWORD(v17) == 0 )
        jpeg_decoder::terminate(this, -206);
      v40 = v27 - 16;
      *((_DWORD *)this + 2603) = v27 - 16;
      if ( v27 - 16 > 0 )
      {
        v41 = v28 << 16;
        *((_DWORD *)this + 2604) = v28 << 16;
        goto LABEL_70;
      }
      *((_DWORD *)this + 2604) = v28 << v27;
      v42 = *((_DWORD *)this + 456);
      if ( v42 || (jpeg_decoder::prep_in_buffer(this), (v42 = *((_DWORD *)this + 456)) != 0) )
      {
        v43 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v44 = v43 + 1;
        *((_QWORD *)this + 227) = v43 + 1;
        v45 = *v43;
        v46 = v42 - 1;
        *((_DWORD *)this + 456) = v46;
        if ( v46 )
        {
    LABEL_65:
          *((_QWORD *)this + 227) = v44 + 1;
          v48 = *v44;
          *((_DWORD *)this + 456) = v46 - 1;
          goto LABEL_69;
        }
      }
      else
      {
        v47 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v47 ^ 1;
        if ( v47 )
          v45 = -39;
        else
          v45 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v46 = *((_DWORD *)this + 456);
      if ( v46 )
      {
        v44 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_65;
      }
      v49 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v49 ^ 1;
      if ( v49 )
        v48 = 217;
      else
        v48 = 255;
    LABEL_69:
      v50 = *((_DWORD *)this + 2603);
      v41 = (v48 & 0xFFFF00FF | (v45 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v50;
      *((_DWORD *)this + 2604) = v41;
      v40 = v50 + 16;
      *((_DWORD *)this + 2603) = v50 + 16;
      if ( v50 <= -17 )
        goto LABEL_159;
    LABEL_70:
      *((_DWORD *)this + 48) = HIWORD(v28);
      if ( v28 > 0x4000FFFF || !HIWORD(v28) )
        jpeg_decoder::terminate(this, -207);
      v51 = v40 - 8;
      *((_DWORD *)this + 2603) = v40 - 8;
      if ( v40 - 8 > 0 )
      {
        v52 = v41 << 8;
        *((_DWORD *)this + 2604) = v41 << 8;
        goto LABEL_88;
      }
      *((_DWORD *)this + 2604) = v41 << v40;
      v53 = *((_DWORD *)this + 456);
      if ( v53 || (jpeg_decoder::prep_in_buffer(this), (v53 = *((_DWORD *)this + 456)) != 0) )
      {
        v54 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v55 = v54 + 1;
        *((_QWORD *)this + 227) = v54 + 1;
        v56 = *v54;
        v57 = v53 - 1;
        *((_DWORD *)this + 456) = v57;
        if ( v57 )
        {
    LABEL_83:
          *((_QWORD *)this + 227) = v55 + 1;
          v59 = *v55;
          *((_DWORD *)this + 456) = v57 - 1;
          goto LABEL_87;
        }
      }
      else
      {
        v58 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v58 ^ 1;
        if ( v58 )
          v56 = -39;
        else
          v56 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v57 = *((_DWORD *)this + 456);
      if ( v57 )
      {
        v55 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_83;
      }
      v60 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v60 ^ 1;
      if ( v60 )
        v59 = 217;
      else
        v59 = 255;
    LABEL_87:
      v61 = v59 & 0xFFFF00FF | (v56 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
      v62 = *((_DWORD *)this + 2603);
      v52 = v61 << -(char)v62;
      *((_DWORD *)this + 2604) = v52;
      v51 = v62 + 16;
      *((_DWORD *)this + 2603) = v62 + 16;
      if ( v62 <= -17 )
    LABEL_159:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_88:
      v63 = HIBYTE(v41);
      *((_DWORD *)this + 97) = HIBYTE(v41);
      if ( HIBYTE(v41) >= 5u )
        jpeg_decoder::terminate(this, -208);
      if ( HIWORD(v2) != 3 * v63 + 8 )
        jpeg_decoder::terminate(this, -209);
      if ( v63 )
      {
        v64 = 0;
        while ( 1 )
        {
          *((_DWORD *)this + 2603) = v51 - 8;
          if ( v51 - 8 > 0 )
          {
            *((_DWORD *)this + 2604) = v52 << 8;
            goto LABEL_109;
          }
          *((_DWORD *)this + 2604) = v52 << v51;
          v65 = *((_DWORD *)this + 456);
          if ( v65 || (jpeg_decoder::prep_in_buffer(this), (v65 = *((_DWORD *)this + 456)) != 0) )
          {
            v66 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v67 = v66 + 1;
            *((_QWORD *)this + 227) = v66 + 1;
            v68 = *v66;
            v69 = v65 - 1;
            *((_DWORD *)this + 456) = v69;
            if ( v69 )
              goto LABEL_104;
          }
          else
          {
            v70 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v70 ^ 1;
            if ( v70 )
              v68 = -39;
            else
              v68 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v69 = *((_DWORD *)this + 456);
          if ( v69 )
          {
            v67 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_104:
            *((_QWORD *)this + 227) = v67 + 1;
            v71 = *v67;
            *((_DWORD *)this + 456) = v69 - 1;
            goto LABEL_108;
          }
          v72 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v72 ^ 1;
          if ( v72 )
            v71 = 217;
          else
            v71 = 255;
    LABEL_108:
          v73 = v71 & 0xFFFF00FF | (v68 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v74 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v73 << -(char)v74;
          *((_DWORD *)this + 2603) = v74 + 16;
          if ( v74 <= -17 )
            goto LABEL_159;
    LABEL_109:
          *((_DWORD *)this + v64 + 110) = HIBYTE(v52);
          v75 = *((_DWORD *)this + 2604);
          v76 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2603) = v76 - 4;
          if ( v76 - 4 > 0 )
          {
            *((_DWORD *)this + 2604) = 16 * v75;
            goto LABEL_125;
          }
          *((_DWORD *)this + 2604) = v75 << v76;
          v77 = *((_DWORD *)this + 456);
          if ( v77 || (jpeg_decoder::prep_in_buffer(this), (v77 = *((_DWORD *)this + 456)) != 0) )
          {
            v78 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v79 = v78 + 1;
            *((_QWORD *)this + 227) = v78 + 1;
            v80 = *v78;
            v81 = v77 - 1;
            *((_DWORD *)this + 456) = v81;
            if ( v81 )
              goto LABEL_120;
          }
          else
          {
            v82 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v82 ^ 1;
            if ( v82 )
              v80 = -39;
            else
              v80 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v81 = *((_DWORD *)this + 456);
          if ( v81 )
          {
            v79 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_120:
            *((_QWORD *)this + 227) = v79 + 1;
            v83 = *v79;
            *((_DWORD *)this + 456) = v81 - 1;
            goto LABEL_124;
          }
          v84 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v84 ^ 1;
          if ( v84 )
            v83 = 217;
          else
            v83 = 255;
    LABEL_124:
          v85 = v83 & 0xFFFF00FF | (v80 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v86 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v85 << -(char)v86;
          *((_DWORD *)this + 2603) = v86 + 16;
          if ( v86 <= -17 )
            goto LABEL_159;
    LABEL_125:
          *((_DWORD *)this + v64 + 98) = v75 >> 28;
          v87 = *((_DWORD *)this + 2604);
          v88 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2603) = v88 - 4;
          if ( v88 - 4 > 0 )
          {
            *((_DWORD *)this + 2604) = 16 * v87;
            goto LABEL_141;
          }
          *((_DWORD *)this + 2604) = v87 << v88;
          v89 = *((_DWORD *)this + 456);
          if ( v89 || (jpeg_decoder::prep_in_buffer(this), (v89 = *((_DWORD *)this + 456)) != 0) )
          {
            v90 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v91 = v90 + 1;
            *((_QWORD *)this + 227) = v90 + 1;
            v92 = *v90;
            v93 = v89 - 1;
            *((_DWORD *)this + 456) = v93;
            if ( v93 )
              goto LABEL_136;
          }
          else
          {
            v94 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v94 ^ 1;
            if ( v94 )
              v92 = -39;
            else
              v92 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v93 = *((_DWORD *)this + 456);
          if ( v93 )
          {
            v91 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_136:
            *((_QWORD *)this + 227) = v91 + 1;
            v95 = *v91;
            *((_DWORD *)this + 456) = v93 - 1;
            goto LABEL_140;
          }
          v96 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v96 ^ 1;
          if ( v96 )
            v95 = 217;
          else
            v95 = 255;
    LABEL_140:
          v97 = v95 & 0xFFFF00FF | (v92 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v98 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v97 << -(char)v98;
          *((_DWORD *)this + 2603) = v98 + 16;
          if ( v98 <= -17 )
            goto LABEL_159;
    LABEL_141:
          *((_DWORD *)this + v64 + 102) = v87 >> 28;
          v99 = *((_DWORD *)this + 2604);
          v100 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2603) = v100 - 8;
          if ( v100 - 8 > 0 )
          {
            *((_DWORD *)this + 2604) = v99 << 8;
            goto LABEL_157;
          }
          *((_DWORD *)this + 2604) = v99 << v100;
          v101 = *((_DWORD *)this + 456);
          if ( v101 || (jpeg_decoder::prep_in_buffer(this), (v101 = *((_DWORD *)this + 456)) != 0) )
          {
            v102 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v103 = v102 + 1;
            *((_QWORD *)this + 227) = v102 + 1;
            v104 = *v102;
            v105 = v101 - 1;
            *((_DWORD *)this + 456) = v105;
            if ( v105 )
              goto LABEL_152;
          }
          else
          {
            v106 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v106 ^ 1;
            if ( v106 )
              v104 = -39;
            else
              v104 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v105 = *((_DWORD *)this + 456);
          if ( v105 )
          {
            v103 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_152:
            *((_QWORD *)this + 227) = v103 + 1;
            v107 = *v103;
            *((_DWORD *)this + 456) = v105 - 1;
            goto LABEL_156;
          }
          v108 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v108 ^ 1;
          if ( v108 )
            v107 = 217;
          else
            v107 = 255;
    LABEL_156:
          v109 = v107 & 0xFFFF00FF | (v104 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v110 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v109 << -(char)v110;
          *((_DWORD *)this + 2603) = v110 + 16;
          if ( v110 <= -17 )
            goto LABEL_159;
    LABEL_157:
          *((_DWORD *)this + v64++ + 106) = HIBYTE(v99);
          if ( v64 >= *((int *)this + 97) )
            return;
          v52 = *((_DWORD *)this + 2604);
          v51 = *((_DWORD *)this + 2603);
        }
      }
    }

    void __fastcall jpeg_decoder::skip_variable_marker(StageBucketRect *this)
    {
      unsigned int v2; // w20
      int v3; // w8
      int v4; // w9
      unsigned int v5; // w8
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w21
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      int v14; // w10
      int v15; // w20
      int v16; // w8
      unsigned __int8 *v17; // x10
      unsigned __int8 *v18; // x9
      unsigned __int8 v19; // w23
      int v20; // w8
      int v21; // w8
      int v22; // w9
      int v23; // w8
      int v24; // w10
    
      v2 = *((_DWORD *)this + 2604);
      v3 = *((_DWORD *)this + 2603);
      v4 = v3 - 16;
      *((_DWORD *)this + 2603) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *((_DWORD *)this + 2604) = v2 << 16;
        goto LABEL_17;
      }
      *((_DWORD *)this + 2604) = v2 << v3;
      v6 = *((_DWORD *)this + 456);
      if ( v6 || (jpeg_decoder::prep_in_buffer(this), (v6 = *((_DWORD *)this + 456)) != 0) )
      {
        v7 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v8 = v7 + 1;
        *((_QWORD *)this + 227) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *((_DWORD *)this + 456) = v10;
        if ( v10 )
        {
    LABEL_12:
          *((_QWORD *)this + 227) = v8 + 1;
          v12 = *v8;
          *((_DWORD *)this + 456) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v10 = *((_DWORD *)this + 456);
      if ( v10 )
      {
        v8 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_12;
      }
      v13 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = *((_DWORD *)this + 2603);
      v5 = (v12 & 0xFFFF00FF | (v9 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v14;
      *((_DWORD *)this + 2604) = v5;
      v4 = v14 + 16;
      *((_DWORD *)this + 2603) = v14 + 16;
      if ( v14 <= -17 )
    LABEL_38:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_17:
      if ( !(v2 >> 17) )
        jpeg_decoder::terminate(this, -210);
      if ( HIWORD(v2) != 2 )
      {
        v15 = 2 - HIWORD(v2);
        while ( 1 )
        {
          *((_DWORD *)this + 2603) = v4 - 8;
          if ( v4 - 8 <= 0 )
            break;
          v5 <<= 8;
          *((_DWORD *)this + 2604) = v5;
          v4 -= 8;
    LABEL_36:
          if ( !++v15 )
            return;
        }
        *((_DWORD *)this + 2604) = v5 << v4;
        v16 = *((_DWORD *)this + 456);
        if ( v16 || (jpeg_decoder::prep_in_buffer(this), (v16 = *((_DWORD *)this + 456)) != 0) )
        {
          v17 = (unsigned __int8 *)*((_QWORD *)this + 227);
          v18 = v17 + 1;
          *((_QWORD *)this + 227) = v17 + 1;
          v19 = *v17;
          v20 = v16 - 1;
          *((_DWORD *)this + 456) = v20;
          if ( v20 )
            goto LABEL_31;
        }
        else
        {
          v21 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v21 ^ 1;
          if ( v21 )
            v19 = -39;
          else
            v19 = -1;
        }
        jpeg_decoder::prep_in_buffer(this);
        v20 = *((_DWORD *)this + 456);
        if ( !v20 )
        {
          v23 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v23 ^ 1;
          if ( v23 )
            v22 = 217;
          else
            v22 = 255;
    LABEL_35:
          v24 = *((_DWORD *)this + 2603);
          v5 = (v22 & 0xFFFF00FF | (v19 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v24;
          *((_DWORD *)this + 2604) = v5;
          v4 = v24 + 16;
          *((_DWORD *)this + 2603) = v24 + 16;
          if ( v24 <= -17 )
            goto LABEL_38;
          goto LABEL_36;
        }
        v18 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_31:
        *((_QWORD *)this + 227) = v18 + 1;
        v22 = *v18;
        *((_DWORD *)this + 456) = v20 - 1;
        goto LABEL_35;
      }
    }

    void __fastcall jpeg_decoder::read_dri_marker(__int64 a1)
    {
      int v2; // w21
      int v3; // w9
      int v4; // w8
      unsigned int v5; // w20
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w20
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      unsigned int v14; // w8
      int v15; // w9
      int v16; // w8
      unsigned __int8 *v17; // x10
      unsigned __int8 *v18; // x9
      unsigned __int8 v19; // w21
      int v20; // w8
      int v21; // w8
      int v22; // w9
      int v23; // w8
      unsigned int v24; // w8
      int v25; // w9
    
      v2 = *(_DWORD *)(a1 + 10416);
      v3 = *(_DWORD *)(a1 + 10412);
      v4 = v3 - 16;
      *(_DWORD *)(a1 + 10412) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *(_DWORD *)(a1 + 10416) = v2 << 16;
        goto LABEL_17;
      }
      *(_DWORD *)(a1 + 10416) = v2 << v3;
      v6 = *(_DWORD *)(a1 + 1824);
      if ( v6 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v6 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v7 = *(unsigned __int8 **)(a1 + 1816);
        v8 = v7 + 1;
        *(_QWORD *)(a1 + 1816) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *(_DWORD *)(a1 + 1824) = v10;
        if ( v10 )
        {
    LABEL_12:
          *(_QWORD *)(a1 + 1816) = v8 + 1;
          v12 = *v8;
          *(_DWORD *)(a1 + 1824) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
      v10 = *(_DWORD *)(a1 + 1824);
      if ( v10 )
      {
        v8 = *(unsigned __int8 **)(a1 + 1816);
        goto LABEL_12;
      }
      v13 = *(_DWORD *)(a1 + 1828);
      *(_DWORD *)(a1 + 1828) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = v12 & 0xFFFF00FF | (v9 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
      v15 = *(_DWORD *)(a1 + 10412);
      v5 = v14 << -(char)v15;
      *(_DWORD *)(a1 + 10416) = v5;
      v4 = v15 + 16;
      *(_DWORD *)(a1 + 10412) = v15 + 16;
      if ( v15 <= -17 )
        goto LABEL_36;
    LABEL_17:
      if ( (v2 & 0xFFFF0000) != 0x40000 )
        jpeg_decoder::terminate((StageBucketRect *)a1, -211);
      *(_DWORD *)(a1 + 10412) = v4 - 16;
      if ( v4 - 16 <= 0 )
      {
        *(_DWORD *)(a1 + 10416) = v5 << v4;
        v16 = *(_DWORD *)(a1 + 1824);
        if ( v16 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v16 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v17 = *(unsigned __int8 **)(a1 + 1816);
          v18 = v17 + 1;
          *(_QWORD *)(a1 + 1816) = v17 + 1;
          v19 = *v17;
          v20 = v16 - 1;
          *(_DWORD *)(a1 + 1824) = v20;
          if ( v20 )
            goto LABEL_29;
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v21 ^ 1;
          if ( v21 )
            v19 = -39;
          else
            v19 = -1;
        }
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v20 = *(_DWORD *)(a1 + 1824);
        if ( !v20 )
        {
          v23 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v23 ^ 1;
          if ( v23 )
            v22 = 217;
          else
            v22 = 255;
    LABEL_33:
          v24 = v22 & 0xFFFF00FF | (v19 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
          v25 = *(_DWORD *)(a1 + 10412);
          *(_DWORD *)(a1 + 10416) = v24 << -(char)v25;
          *(_DWORD *)(a1 + 10412) = v25 + 16;
          if ( v25 > -17 )
            goto LABEL_34;
    LABEL_36:
          __assert_rtn(
            "get_bits_1",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
            121,
            "m_bits_left >= 0");
        }
        v18 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_29:
        *(_QWORD *)(a1 + 1816) = v18 + 1;
        v22 = *v18;
        *(_DWORD *)(a1 + 1824) = v20 - 1;
        goto LABEL_33;
      }
      *(_DWORD *)(a1 + 10416) = v5 << 16;
    LABEL_34:
      *(_DWORD *)(a1 + 10420) = HIWORD(v5);
    }

    void __fastcall jpeg_decoder::read_sos_marker(__int64 a1)
    {
      unsigned int v2; // w20
      int v3; // w8
      int v4; // w9
      unsigned int v5; // w21
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w21
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      int v14; // w10
      int v15; // w8
      unsigned int v16; // w28
      int v17; // w8
      unsigned __int8 *v18; // x10
      unsigned __int8 *v19; // x9
      unsigned __int8 v20; // w22
      int v21; // w8
      int v22; // w8
      int v23; // w9
      int v24; // w8
      unsigned int v25; // w8
      int v26; // w9
      __int64 v27; // x22
      int v28; // w21
      __int64 v30; // x23
      int i; // w20
      __int64 v32; // x9
      int v33; // w9
      unsigned int v34; // w26
      int v35; // w8
      unsigned __int8 *v36; // x10
      unsigned __int8 *v37; // x9
      unsigned __int8 v38; // w26
      int v39; // w8
      int v40; // w8
      int v41; // w9
      int v42; // w8
      int v43; // w10
      unsigned int v44; // w28
      int v45; // w8
      unsigned __int8 *v46; // x10
      unsigned __int8 *v47; // x9
      unsigned __int8 v48; // w25
      int v49; // w8
      int v50; // w8
      int v51; // w9
      int v52; // w8
      unsigned int v53; // w8
      int v54; // w9
      __int64 v55; // x8
      __int64 j; // x9
      int v57; // w8
      unsigned int v58; // w22
      int v59; // w8
      unsigned __int8 *v60; // x10
      unsigned __int8 *v61; // x9
      unsigned __int8 v62; // w22
      int v63; // w8
      int v64; // w8
      int v65; // w9
      int v66; // w8
      unsigned int v67; // w8
      int v68; // w9
      int v69; // w10
      unsigned int v70; // w23
      int v71; // w8
      unsigned __int8 *v72; // x10
      unsigned __int8 *v73; // x9
      unsigned __int8 v74; // w23
      int v75; // w8
      int v76; // w8
      int v77; // w9
      int v78; // w8
      unsigned int v79; // w8
      int v80; // w9
      int v81; // w9
      unsigned int v82; // w8
      int v83; // w8
      unsigned __int8 *v84; // x10
      unsigned __int8 *v85; // x9
      unsigned __int8 v86; // w22
      int v87; // w8
      int v88; // w8
      int v89; // w9
      int v90; // w8
      int v91; // w10
      int v92; // w8
      unsigned __int8 *v93; // x10
      unsigned __int8 *v94; // x9
      unsigned __int8 v95; // w23
      int v96; // w8
      int v97; // w8
      int v98; // w9
      int v99; // w8
      int v100; // w10
    
      v2 = *(_DWORD *)(a1 + 10416);
      v3 = *(_DWORD *)(a1 + 10412);
      v4 = v3 - 16;
      *(_DWORD *)(a1 + 10412) = v3 - 16;
      if ( v3 - 16 > 0 )
      {
        v5 = v2 << 16;
        *(_DWORD *)(a1 + 10416) = v2 << 16;
        goto LABEL_17;
      }
      *(_DWORD *)(a1 + 10416) = v2 << v3;
      v6 = *(_DWORD *)(a1 + 1824);
      if ( v6 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v6 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v7 = *(unsigned __int8 **)(a1 + 1816);
        v8 = v7 + 1;
        *(_QWORD *)(a1 + 1816) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *(_DWORD *)(a1 + 1824) = v10;
        if ( v10 )
        {
    LABEL_12:
          *(_QWORD *)(a1 + 1816) = v8 + 1;
          v12 = *v8;
          *(_DWORD *)(a1 + 1824) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
      v10 = *(_DWORD *)(a1 + 1824);
      if ( v10 )
      {
        v8 = *(unsigned __int8 **)(a1 + 1816);
        goto LABEL_12;
      }
      v13 = *(_DWORD *)(a1 + 1828);
      *(_DWORD *)(a1 + 1828) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = *(_DWORD *)(a1 + 10412);
      v5 = (v12 & 0xFFFF00FF | (v9 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000) << -(char)v14;
      *(_DWORD *)(a1 + 10416) = v5;
      v4 = v14 + 16;
      *(_DWORD *)(a1 + 10412) = v14 + 16;
      if ( v14 <= -17 )
        goto LABEL_150;
    LABEL_17:
      v15 = v4 - 8;
      *(_DWORD *)(a1 + 10412) = v4 - 8;
      if ( v4 - 8 <= 0 )
      {
        *(_DWORD *)(a1 + 10416) = v5 << v4;
        v17 = *(_DWORD *)(a1 + 1824);
        if ( v17 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v17 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v18 = *(unsigned __int8 **)(a1 + 1816);
          v19 = v18 + 1;
          *(_QWORD *)(a1 + 1816) = v18 + 1;
          v20 = *v18;
          v21 = v17 - 1;
          *(_DWORD *)(a1 + 1824) = v21;
          if ( v21 )
            goto LABEL_28;
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v22 ^ 1;
          if ( v22 )
            v20 = -39;
          else
            v20 = -1;
        }
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v21 = *(_DWORD *)(a1 + 1824);
        if ( !v21 )
        {
          v24 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v24 ^ 1;
          if ( v24 )
            v23 = 217;
          else
            v23 = 255;
    LABEL_32:
          v25 = v23 & 0xFFFF00FF | (v20 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
          v26 = *(_DWORD *)(a1 + 10412);
          v16 = v25 << -(char)v26;
          *(_DWORD *)(a1 + 10416) = v16;
          v15 = v26 + 16;
          *(_DWORD *)(a1 + 10412) = v26 + 16;
          if ( v26 <= -17 )
            goto LABEL_150;
          goto LABEL_33;
        }
        v19 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_28:
        *(_QWORD *)(a1 + 1816) = v19 + 1;
        v23 = *v19;
        *(_DWORD *)(a1 + 1824) = v21 - 1;
        goto LABEL_32;
      }
      v16 = v5 << 8;
      *(_DWORD *)(a1 + 10416) = v5 << 8;
    LABEL_33:
      v27 = HIBYTE(v5);
      *(_DWORD *)(a1 + 488) = v27;
      v28 = HIWORD(v2) - 3;
      if ( (unsigned int)(v27 - 1) > 3 || v28 != 2 * (_DWORD)v27 + 3 )
        jpeg_decoder::terminate((StageBucketRect *)a1, -212);
      v30 = 0;
      for ( i = 6 - HIWORD(v2); ; i += 2 )
      {
        v33 = v15 - 8;
        *(_DWORD *)(a1 + 10412) = v15 - 8;
        if ( v15 - 8 > 0 )
        {
          v34 = v16 << 8;
          *(_DWORD *)(a1 + 10416) = v16 << 8;
          goto LABEL_56;
        }
        *(_DWORD *)(a1 + 10416) = v16 << v15;
        v35 = *(_DWORD *)(a1 + 1824);
        if ( v35 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v35 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v36 = *(unsigned __int8 **)(a1 + 1816);
          v37 = v36 + 1;
          *(_QWORD *)(a1 + 1816) = v36 + 1;
          v38 = *v36;
          v39 = v35 - 1;
          *(_DWORD *)(a1 + 1824) = v39;
          if ( v39 )
            goto LABEL_51;
        }
        else
        {
          v40 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v40 ^ 1;
          v38 = v40 ? -39 : -1;
        }
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v39 = *(_DWORD *)(a1 + 1824);
        if ( v39 )
        {
          v37 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_51:
          *(_QWORD *)(a1 + 1816) = v37 + 1;
          v41 = *v37;
          *(_DWORD *)(a1 + 1824) = v39 - 1;
          goto LABEL_55;
        }
        v42 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v42 ^ 1;
        v41 = v42 ? 217 : 255;
    LABEL_55:
        v43 = *(_DWORD *)(a1 + 10412);
        v34 = (v41 & 0xFFFF00FF | (v38 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000) << -(char)v43;
        *(_DWORD *)(a1 + 10416) = v34;
        v33 = v43 + 16;
        *(_DWORD *)(a1 + 10412) = v43 + 16;
        if ( v43 <= -17 )
          goto LABEL_150;
    LABEL_56:
        v44 = HIBYTE(v16);
        if ( v30 >= v27 )
          break;
        *(_DWORD *)(a1 + 10412) = v33 - 8;
        if ( v33 - 8 > 0 )
        {
          *(_DWORD *)(a1 + 10416) = v34 << 8;
          goto LABEL_73;
        }
        *(_DWORD *)(a1 + 10416) = v34 << v33;
        v45 = *(_DWORD *)(a1 + 1824);
        if ( v45 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v45 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v46 = *(unsigned __int8 **)(a1 + 1816);
          v47 = v46 + 1;
          *(_QWORD *)(a1 + 1816) = v46 + 1;
          v48 = *v46;
          v49 = v45 - 1;
          *(_DWORD *)(a1 + 1824) = v49;
          if ( v49 )
            goto LABEL_68;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v50 ^ 1;
          if ( v50 )
            v48 = -39;
          else
            v48 = -1;
        }
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v49 = *(_DWORD *)(a1 + 1824);
        if ( v49 )
        {
          v47 = *(unsigned __int8 **)(a1 + 1816);
    LABEL_68:
          *(_QWORD *)(a1 + 1816) = v47 + 1;
          v51 = *v47;
          *(_DWORD *)(a1 + 1824) = v49 - 1;
          goto LABEL_72;
        }
        v52 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v52 ^ 1;
        if ( v52 )
          v51 = 217;
        else
          v51 = 255;
    LABEL_72:
        v53 = v51 & 0xFFFF00FF | (v48 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
        v54 = *(_DWORD *)(a1 + 10412);
        *(_DWORD *)(a1 + 10416) = v53 << -(char)v54;
        *(_DWORD *)(a1 + 10412) = v54 + 16;
        if ( v54 <= -17 )
          goto LABEL_150;
    LABEL_73:
        v55 = *(int *)(a1 + 388);
        if ( (int)v55 < 1 )
        {
          LODWORD(j) = 0;
        }
        else
        {
          for ( j = 0; j < v55; ++j )
          {
            if ( v44 == *(_DWORD *)(a1 + 440 + 4 * j) )
              break;
          }
        }
        if ( (int)j >= (int)v55 )
          jpeg_decoder::terminate((StageBucketRect *)a1, -213);
        v28 -= 2;
        *(_DWORD *)(a1 + 4 * v30 + 492) = j;
        v32 = a1 + 4LL * (int)j;
        *(_DWORD *)(v32 + 508) = v34 >> 28;
        *(_DWORD *)(v32 + 524) = (HIBYTE(v34) & 0xF) + 4;
        ++v30;
        v16 = *(_DWORD *)(a1 + 10416);
        v15 = *(_DWORD *)(a1 + 10412);
      }
      *(_DWORD *)(a1 + 540) = v44;
      v57 = v33 - 8;
      *(_DWORD *)(a1 + 10412) = v33 - 8;
      if ( v33 - 8 > 0 )
      {
        v58 = v34 << 8;
        *(_DWORD *)(a1 + 10416) = v34 << 8;
        goto LABEL_97;
      }
      *(_DWORD *)(a1 + 10416) = v34 << v33;
      v59 = *(_DWORD *)(a1 + 1824);
      if ( v59 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v59 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v60 = *(unsigned __int8 **)(a1 + 1816);
        v61 = v60 + 1;
        *(_QWORD *)(a1 + 1816) = v60 + 1;
        v62 = *v60;
        v63 = v59 - 1;
        *(_DWORD *)(a1 + 1824) = v63;
        if ( !v63 )
          goto LABEL_90;
    LABEL_92:
        *(_QWORD *)(a1 + 1816) = v61 + 1;
        v65 = *v61;
        *(_DWORD *)(a1 + 1824) = v63 - 1;
      }
      else
      {
        v64 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v64 ^ 1;
        if ( v64 )
          v62 = -39;
        else
          v62 = -1;
    LABEL_90:
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v63 = *(_DWORD *)(a1 + 1824);
        if ( v63 )
        {
          v61 = *(unsigned __int8 **)(a1 + 1816);
          goto LABEL_92;
        }
        v66 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v66 ^ 1;
        if ( v66 )
          v65 = 217;
        else
          v65 = 255;
      }
      v67 = v65 & 0xFFFF00FF | (v62 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
      v68 = *(_DWORD *)(a1 + 10412);
      v58 = v67 << -(char)v68;
      *(_DWORD *)(a1 + 10416) = v58;
      v57 = v68 + 16;
      *(_DWORD *)(a1 + 10412) = v68 + 16;
      if ( v68 <= -17 )
        goto LABEL_150;
    LABEL_97:
      *(_DWORD *)(a1 + 544) = HIBYTE(v34);
      v69 = v57 - 4;
      *(_DWORD *)(a1 + 10412) = v57 - 4;
      if ( v57 - 4 > 0 )
      {
        v70 = 16 * v58;
        *(_DWORD *)(a1 + 10416) = 16 * v58;
        goto LABEL_113;
      }
      *(_DWORD *)(a1 + 10416) = v58 << v57;
      v71 = *(_DWORD *)(a1 + 1824);
      if ( v71 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v71 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v72 = *(unsigned __int8 **)(a1 + 1816);
        v73 = v72 + 1;
        *(_QWORD *)(a1 + 1816) = v72 + 1;
        v74 = *v72;
        v75 = v71 - 1;
        *(_DWORD *)(a1 + 1824) = v75;
        if ( !v75 )
          goto LABEL_106;
    LABEL_108:
        *(_QWORD *)(a1 + 1816) = v73 + 1;
        v77 = *v73;
        *(_DWORD *)(a1 + 1824) = v75 - 1;
      }
      else
      {
        v76 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v76 ^ 1;
        if ( v76 )
          v74 = -39;
        else
          v74 = -1;
    LABEL_106:
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v75 = *(_DWORD *)(a1 + 1824);
        if ( v75 )
        {
          v73 = *(unsigned __int8 **)(a1 + 1816);
          goto LABEL_108;
        }
        v78 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v78 ^ 1;
        if ( v78 )
          v77 = 217;
        else
          v77 = 255;
      }
      v79 = v77 & 0xFFFF00FF | (v74 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000;
      v80 = *(_DWORD *)(a1 + 10412);
      v70 = v79 << -(char)v80;
      *(_DWORD *)(a1 + 10416) = v70;
      v69 = v80 + 16;
      *(_DWORD *)(a1 + 10412) = v80 + 16;
      if ( v80 <= -17 )
    LABEL_150:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_113:
      *(_DWORD *)(a1 + 552) = v58 >> 28;
      v81 = v69 - 4;
      *(_DWORD *)(a1 + 10412) = v69 - 4;
      if ( v69 - 4 > 0 )
      {
        v82 = 16 * v70;
        *(_DWORD *)(a1 + 10416) = 16 * v70;
        goto LABEL_129;
      }
      *(_DWORD *)(a1 + 10416) = v70 << v69;
      v83 = *(_DWORD *)(a1 + 1824);
      if ( v83 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v83 = *(_DWORD *)(a1 + 1824)) != 0) )
      {
        v84 = *(unsigned __int8 **)(a1 + 1816);
        v85 = v84 + 1;
        *(_QWORD *)(a1 + 1816) = v84 + 1;
        v86 = *v84;
        v87 = v83 - 1;
        *(_DWORD *)(a1 + 1824) = v87;
        if ( !v87 )
          goto LABEL_122;
    LABEL_124:
        *(_QWORD *)(a1 + 1816) = v85 + 1;
        v89 = *v85;
        *(_DWORD *)(a1 + 1824) = v87 - 1;
      }
      else
      {
        v88 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v88 ^ 1;
        if ( v88 )
          v86 = -39;
        else
          v86 = -1;
    LABEL_122:
        jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
        v87 = *(_DWORD *)(a1 + 1824);
        if ( v87 )
        {
          v85 = *(unsigned __int8 **)(a1 + 1816);
          goto LABEL_124;
        }
        v90 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v90 ^ 1;
        if ( v90 )
          v89 = 217;
        else
          v89 = 255;
      }
      v91 = *(_DWORD *)(a1 + 10412);
      v82 = (v89 & 0xFFFF00FF | (v86 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000) << -(char)v91;
      *(_DWORD *)(a1 + 10416) = v82;
      v81 = v91 + 16;
      *(_DWORD *)(a1 + 10412) = v91 + 16;
      if ( v91 <= -17 )
        goto LABEL_150;
    LABEL_129:
      *(_DWORD *)(a1 + 548) = v70 >> 28;
      if ( !*(_DWORD *)(a1 + 208) )
        *(_QWORD *)(a1 + 540) = 0x3F00000000LL;
      if ( v28 != 3 )
      {
        while ( 1 )
        {
          *(_DWORD *)(a1 + 10412) = v81 - 8;
          if ( v81 - 8 <= 0 )
            break;
          v82 <<= 8;
          *(_DWORD *)(a1 + 10416) = v82;
          v81 -= 8;
    LABEL_148:
          if ( !++i )
            return;
        }
        *(_DWORD *)(a1 + 10416) = v82 << v81;
        v92 = *(_DWORD *)(a1 + 1824);
        if ( v92 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v92 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v93 = *(unsigned __int8 **)(a1 + 1816);
          v94 = v93 + 1;
          *(_QWORD *)(a1 + 1816) = v93 + 1;
          v95 = *v93;
          v96 = v92 - 1;
          *(_DWORD *)(a1 + 1824) = v96;
          if ( !v96 )
            goto LABEL_141;
    LABEL_143:
          *(_QWORD *)(a1 + 1816) = v94 + 1;
          v98 = *v94;
          *(_DWORD *)(a1 + 1824) = v96 - 1;
        }
        else
        {
          v97 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v97 ^ 1;
          if ( v97 )
            v95 = -39;
          else
            v95 = -1;
    LABEL_141:
          jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
          v96 = *(_DWORD *)(a1 + 1824);
          if ( v96 )
          {
            v94 = *(unsigned __int8 **)(a1 + 1816);
            goto LABEL_143;
          }
          v99 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v99 ^ 1;
          if ( v99 )
            v98 = 217;
          else
            v98 = 255;
        }
        v100 = *(_DWORD *)(a1 + 10412);
        v82 = (v98 & 0xFFFF00FF | (v95 << 8) | *(_DWORD *)(a1 + 10416) & 0xFFFF0000) << -(char)v100;
        *(_DWORD *)(a1 + 10416) = v82;
        v81 = v100 + 16;
        *(_DWORD *)(a1 + 10412) = v100 + 16;
        if ( v100 <= -17 )
          goto LABEL_150;
        goto LABEL_148;
      }
    }

    __int64 __fastcall jpeg_decoder::next_marker(StageBucketRect *this)
    {
      unsigned int v2; // w22
      int v3; // w8
      unsigned int v4; // w23
      int v5; // w8
      unsigned __int8 *v6; // x10
      unsigned __int8 *v7; // x9
      unsigned __int8 v8; // w23
      int v9; // w8
      int v10; // w8
      int v11; // w9
      int v12; // w8
      unsigned int v13; // w8
      int v14; // w9
      unsigned int v15; // w9
      int v16; // w8
      unsigned __int8 *v17; // x10
      unsigned __int8 *v18; // x9
      unsigned __int8 v19; // w22
      int v20; // w8
      int v21; // w8
      int v22; // w9
      int v23; // w8
      unsigned int v24; // w8
      int v25; // w9
      __int64 result; // x0
    
      v2 = *((_DWORD *)this + 2604);
      v3 = *((_DWORD *)this + 2603);
      while ( 1 )
      {
        *((_DWORD *)this + 2603) = v3 - 8;
        if ( v3 - 8 <= 0 )
        {
          *((_DWORD *)this + 2604) = v2 << v3;
          v5 = *((_DWORD *)this + 456);
          if ( v5 || (jpeg_decoder::prep_in_buffer(this), (v5 = *((_DWORD *)this + 456)) != 0) )
          {
            v6 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v7 = v6 + 1;
            *((_QWORD *)this + 227) = v6 + 1;
            v8 = *v6;
            v9 = v5 - 1;
            *((_DWORD *)this + 456) = v9;
            if ( v9 )
              goto LABEL_13;
          }
          else
          {
            v10 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v10 ^ 1;
            if ( v10 )
              v8 = -39;
            else
              v8 = -1;
          }
          jpeg_decoder::prep_in_buffer(this);
          v9 = *((_DWORD *)this + 456);
          if ( !v9 )
          {
            v12 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v12 ^ 1;
            if ( v12 )
              v11 = 217;
            else
              v11 = 255;
    LABEL_17:
            v13 = v11 & 0xFFFF00FF | (v8 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
            v14 = *((_DWORD *)this + 2603);
            v4 = v13 << -(char)v14;
            *((_DWORD *)this + 2604) = v4;
            v3 = v14 + 16;
            *((_DWORD *)this + 2603) = v14 + 16;
            if ( v14 <= -17 )
    LABEL_38:
              __assert_rtn(
                "get_bits_1",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
                121,
                "m_bits_left >= 0");
            goto LABEL_18;
          }
          v7 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_13:
          *((_QWORD *)this + 227) = v7 + 1;
          v11 = *v7;
          *((_DWORD *)this + 456) = v9 - 1;
          goto LABEL_17;
        }
        v4 = v2 << 8;
        *((_DWORD *)this + 2604) = v2 << 8;
        v3 -= 8;
    LABEL_18:
        v15 = HIBYTE(v2);
        v2 = v4;
        if ( v15 >= 0xFF )
        {
          do
          {
            *((_DWORD *)this + 2603) = v3 - 8;
            if ( v3 - 8 > 0 )
            {
              v2 = v4 << 8;
              *((_DWORD *)this + 2604) = v4 << 8;
              v3 -= 8;
              goto LABEL_35;
            }
            *((_DWORD *)this + 2604) = v4 << v3;
            v16 = *((_DWORD *)this + 456);
            if ( v16 || (jpeg_decoder::prep_in_buffer(this), (v16 = *((_DWORD *)this + 456)) != 0) )
            {
              v17 = (unsigned __int8 *)*((_QWORD *)this + 227);
              v18 = v17 + 1;
              *((_QWORD *)this + 227) = v17 + 1;
              v19 = *v17;
              v20 = v16 - 1;
              *((_DWORD *)this + 456) = v20;
              if ( v20 )
                goto LABEL_30;
            }
            else
            {
              v21 = *((_DWORD *)this + 457);
              *((_DWORD *)this + 457) = v21 ^ 1;
              if ( v21 )
                v19 = -39;
              else
                v19 = -1;
            }
            jpeg_decoder::prep_in_buffer(this);
            v20 = *((_DWORD *)this + 456);
            if ( v20 )
            {
              v18 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_30:
              *((_QWORD *)this + 227) = v18 + 1;
              v22 = *v18;
              *((_DWORD *)this + 456) = v20 - 1;
              goto LABEL_34;
            }
            v23 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v23 ^ 1;
            if ( v23 )
              v22 = 217;
            else
              v22 = 255;
    LABEL_34:
            v24 = v22 & 0xFFFF00FF | (v19 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
            v25 = *((_DWORD *)this + 2603);
            v2 = v24 << -(char)v25;
            *((_DWORD *)this + 2604) = v2;
            v3 = v25 + 16;
            *((_DWORD *)this + 2603) = v25 + 16;
            if ( v25 <= -17 )
              goto LABEL_38;
    LABEL_35:
            result = HIBYTE(v4);
            v4 = v2;
          }
          while ( (_DWORD)result == 255 );
          if ( (_DWORD)result )
            return result;
        }
      }
    }

    __int64 __fastcall jpeg_decoder::process_markers(StageBucketRect *a1)
    {
      __int64 result; // x0
    
      while ( 2 )
      {
        while ( 1 )
        {
          result = jpeg_decoder::next_marker(a1);
          if ( (int)result > 191 )
            break;
          if ( (_DWORD)result == 1 )
    LABEL_10:
            jpeg_decoder::terminate(a1, -216);
    LABEL_2:
          jpeg_decoder::skip_variable_marker(a1);
        }
        switch ( (int)result )
        {
          case 192:
          case 193:
          case 194:
          case 195:
          case 197:
          case 198:
          case 199:
          case 201:
          case 202:
          case 203:
          case 205:
          case 206:
          case 207:
          case 216:
          case 217:
          case 218:
            return result;
          case 196:
            jpeg_decoder::read_dht_marker(a1);
            continue;
          case 200:
          case 208:
          case 209:
          case 210:
          case 211:
          case 212:
          case 213:
          case 214:
          case 215:
            goto LABEL_10;
          case 204:
            jpeg_decoder::terminate(a1, -215);
          case 219:
            jpeg_decoder::read_dqt_marker((__int64)a1);
            continue;
          case 221:
            jpeg_decoder::read_dri_marker((__int64)a1);
            continue;
          default:
            goto LABEL_2;
        }
      }
    }

    void __fastcall jpeg_decoder::locate_soi_marker(StageBucketRect *this)
    {
      unsigned int v2; // w20
      int v3; // w8
      int v4; // w9
      unsigned int v5; // w22
      int v6; // w8
      unsigned __int8 *v7; // x10
      unsigned __int8 *v8; // x9
      unsigned __int8 v9; // w21
      int v10; // w8
      int v11; // w8
      int v12; // w9
      int v13; // w8
      int v14; // w10
      int v15; // w8
      unsigned int v16; // w21
      int v17; // w8
      unsigned __int8 *v18; // x10
      unsigned __int8 *v19; // x9
      unsigned __int8 v20; // w21
      int v21; // w8
      int v22; // w8
      int v23; // w9
      int v24; // w8
      unsigned int v25; // w8
      int v26; // w9
      unsigned int v27; // w24
      int v28; // w20
      unsigned int v29; // w9
      int v30; // w8
      unsigned __int8 *v31; // x10
      unsigned __int8 *v32; // x9
      unsigned __int8 v33; // w25
      int v34; // w8
      int v35; // w8
      int v36; // w9
      int v37; // w8
      int v38; // w10
      unsigned int v39; // w10
    
      v2 = *((_DWORD *)this + 2604);
      v3 = *((_DWORD *)this + 2603);
      v4 = v3 - 8;
      *((_DWORD *)this + 2603) = v3 - 8;
      if ( v3 - 8 > 0 )
      {
        v5 = v2 << 8;
        *((_DWORD *)this + 2604) = v2 << 8;
        goto LABEL_17;
      }
      *((_DWORD *)this + 2604) = v2 << v3;
      v6 = *((_DWORD *)this + 456);
      if ( v6 || (jpeg_decoder::prep_in_buffer(this), (v6 = *((_DWORD *)this + 456)) != 0) )
      {
        v7 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v8 = v7 + 1;
        *((_QWORD *)this + 227) = v7 + 1;
        v9 = *v7;
        v10 = v6 - 1;
        *((_DWORD *)this + 456) = v10;
        if ( v10 )
        {
    LABEL_12:
          *((_QWORD *)this + 227) = v8 + 1;
          v12 = *v8;
          *((_DWORD *)this + 456) = v10 - 1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v11 ^ 1;
        if ( v11 )
          v9 = -39;
        else
          v9 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v10 = *((_DWORD *)this + 456);
      if ( v10 )
      {
        v8 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_12;
      }
      v13 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v13 ^ 1;
      if ( v13 )
        v12 = 217;
      else
        v12 = 255;
    LABEL_16:
      v14 = *((_DWORD *)this + 2603);
      v5 = (v12 & 0xFFFF00FF | (v9 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v14;
      *((_DWORD *)this + 2604) = v5;
      v4 = v14 + 16;
      *((_DWORD *)this + 2603) = v14 + 16;
      if ( v14 <= -17 )
        goto LABEL_59;
    LABEL_17:
      v15 = v4 - 8;
      *((_DWORD *)this + 2603) = v4 - 8;
      if ( v4 - 8 > 0 )
      {
        v16 = v5 << 8;
        *((_DWORD *)this + 2604) = v5 << 8;
        goto LABEL_33;
      }
      *((_DWORD *)this + 2604) = v5 << v4;
      v17 = *((_DWORD *)this + 456);
      if ( v17 || (jpeg_decoder::prep_in_buffer(this), (v17 = *((_DWORD *)this + 456)) != 0) )
      {
        v18 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v19 = v18 + 1;
        *((_QWORD *)this + 227) = v18 + 1;
        v20 = *v18;
        v21 = v17 - 1;
        *((_DWORD *)this + 456) = v21;
        if ( v21 )
        {
    LABEL_28:
          *((_QWORD *)this + 227) = v19 + 1;
          v23 = *v19;
          *((_DWORD *)this + 456) = v21 - 1;
          goto LABEL_32;
        }
      }
      else
      {
        v22 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v22 ^ 1;
        if ( v22 )
          v20 = -39;
        else
          v20 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v21 = *((_DWORD *)this + 456);
      if ( v21 )
      {
        v19 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_28;
      }
      v24 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v24 ^ 1;
      if ( v24 )
        v23 = 217;
      else
        v23 = 255;
    LABEL_32:
      v25 = v23 & 0xFFFF00FF | (v20 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
      v26 = *((_DWORD *)this + 2603);
      v16 = v25 << -(char)v26;
      *((_DWORD *)this + 2604) = v16;
      v15 = v26 + 16;
      *((_DWORD *)this + 2603) = v26 + 16;
      if ( v26 <= -17 )
    LABEL_59:
        __assert_rtn(
          "get_bits_1",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          121,
          "m_bits_left >= 0");
    LABEL_33:
      v27 = HIBYTE(v5);
      if ( HIBYTE(v2) == 255 && v27 == 216 )
        return;
      v28 = -4095;
      while ( 1 )
      {
        *((_DWORD *)this + 2603) = v15 - 8;
        if ( v15 - 8 > 0 )
        {
          v29 = v16 << 8;
          *((_DWORD *)this + 2604) = v16 << 8;
          v15 -= 8;
          goto LABEL_52;
        }
        *((_DWORD *)this + 2604) = v16 << v15;
        v30 = *((_DWORD *)this + 456);
        if ( v30 || (jpeg_decoder::prep_in_buffer(this), (v30 = *((_DWORD *)this + 456)) != 0) )
        {
          v31 = (unsigned __int8 *)*((_QWORD *)this + 227);
          v32 = v31 + 1;
          *((_QWORD *)this + 227) = v31 + 1;
          v33 = *v31;
          v34 = v30 - 1;
          *((_DWORD *)this + 456) = v34;
          if ( v34 )
            goto LABEL_47;
        }
        else
        {
          v35 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v35 ^ 1;
          v33 = v35 ? -39 : -1;
        }
        jpeg_decoder::prep_in_buffer(this);
        v34 = *((_DWORD *)this + 456);
        if ( v34 )
        {
          v32 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_47:
          *((_QWORD *)this + 227) = v32 + 1;
          v36 = *v32;
          *((_DWORD *)this + 456) = v34 - 1;
          goto LABEL_51;
        }
        v37 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v37 ^ 1;
        v36 = v37 ? 217 : 255;
    LABEL_51:
        v38 = *((_DWORD *)this + 2603);
        v29 = (v36 & 0xFFFF00FF | (v33 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v38;
        *((_DWORD *)this + 2604) = v29;
        v15 = v38 + 16;
        *((_DWORD *)this + 2603) = v38 + 16;
        if ( v38 <= -17 )
          goto LABEL_59;
    LABEL_52:
        v39 = HIBYTE(v16);
        if ( v27 == 255 )
          break;
    LABEL_55:
        ++v28;
        v16 = v29;
        v27 = v39;
        if ( !v28 )
          goto LABEL_60;
      }
      if ( v39 != 216 )
      {
        if ( v39 == 217 )
          goto LABEL_60;
        goto LABEL_55;
      }
      if ( HIBYTE(v29) != 255 )
    LABEL_60:
        jpeg_decoder::terminate(this, -217);
    }

    void __fastcall jpeg_decoder::locate_sof_marker(StageBucketRect *this)
    {
      int v2; // w0
    
      jpeg_decoder::locate_soi_marker(this);
      v2 = jpeg_decoder::process_markers(this);
      if ( (unsigned int)(v2 - 192) >= 2 )
      {
        if ( v2 == 201 )
          jpeg_decoder::terminate(this, -215);
        if ( v2 != 194 )
          jpeg_decoder::terminate(this, -218);
        *((_DWORD *)this + 52) = 1;
      }
      jpeg_decoder::read_sof_marker(this);
    }

    __int64 __fastcall jpeg_decoder::locate_sos_marker(StageBucketRect *this)
    {
      int v2; // w0
    
      v2 = jpeg_decoder::process_markers(this);
      if ( v2 == 217 )
        return 0;
      if ( v2 != 218 )
        jpeg_decoder::terminate(this, -216);
      jpeg_decoder::read_sos_marker((__int64)this);
      return 1;
    }

    void __fastcall jpeg_decoder::init(StageBucketRect *this, iAdTitan *a2)
    {
      int v4; // w8
      unsigned __int8 *v5; // x10
      unsigned __int8 *v6; // x9
      unsigned __int8 v7; // w20
      int v8; // w8
      int v9; // w8
      int v10; // w9
      int v11; // w8
      unsigned int v12; // w8
      int v13; // w9
      unsigned int v14; // w8
      int v15; // w8
      unsigned __int8 *v16; // x10
      unsigned __int8 *v17; // x9
      unsigned __int8 v18; // w20
      int v19; // w8
      int v20; // w8
      int v21; // w9
      int v22; // w8
      unsigned int v23; // w8
      int v24; // w9
    
      *((_DWORD *)this + 3664) = 0;
      *((_BYTE *)this + 14660) = 0;
      *((_DWORD *)this + 48) = 0;
      *((_DWORD *)this + 49) = 0;
      *((_QWORD *)this + 25) = a2;
      *((_DWORD *)this + 52) = 0;
      *(_QWORD *)((char *)this + 212) = 0;
      bzero((char *)this + 224, 0x634u);
      *(_QWORD *)((char *)this + 10445) = 0;
      *((_QWORD *)this + 1305) = 0;
      *((_QWORD *)this + 227) = (char *)this + 1961;
      *((_QWORD *)this + 1310) = 0;
      *((_QWORD *)this + 1316) = 0;
      *((_DWORD *)this + 3666) = 0;
      bzero((char *)this + 1824, 0x2189u);
      *(_QWORD *)((char *)this + 10428) = 0;
      *(_QWORD *)((char *)this + 10420) = 0;
      *((_DWORD *)this + 2609) = 0;
      *((_DWORD *)this + 2618) = 0;
      *((_QWORD *)this + 1308) = 0;
      *((_QWORD *)this + 1307) = 0;
      (*(void (__fastcall **)(iAdTitan *))(*(_QWORD *)a2 + 24LL))(a2);
      jpeg_decoder::prep_in_buffer(this);
      *(_QWORD *)((char *)this + 10412) = 0;
      v4 = *((_DWORD *)this + 456);
      if ( v4 || (jpeg_decoder::prep_in_buffer(this), (v4 = *((_DWORD *)this + 456)) != 0) )
      {
        v5 = (unsigned __int8 *)*((_QWORD *)this + 227);
        v6 = v5 + 1;
        *((_QWORD *)this + 227) = v5 + 1;
        v7 = *v5;
        v8 = v4 - 1;
        *((_DWORD *)this + 456) = v8;
        if ( v8 )
        {
    LABEL_10:
          *((_QWORD *)this + 227) = v6 + 1;
          v10 = *v6;
          *((_DWORD *)this + 456) = v8 - 1;
          goto LABEL_14;
        }
      }
      else
      {
        v9 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v9 ^ 1;
        if ( v9 )
          v7 = -39;
        else
          v7 = -1;
      }
      jpeg_decoder::prep_in_buffer(this);
      v8 = *((_DWORD *)this + 456);
      if ( v8 )
      {
        v6 = (unsigned __int8 *)*((_QWORD *)this + 227);
        goto LABEL_10;
      }
      v11 = *((_DWORD *)this + 457);
      *((_DWORD *)this + 457) = v11 ^ 1;
      if ( v11 )
        v10 = 217;
      else
        v10 = 255;
    LABEL_14:
      v12 = v10 & 0xFFFF00FF | (v7 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
      v13 = *((_DWORD *)this + 2603);
      v14 = v12 << -(char)v13;
      *((_DWORD *)this + 2604) = v14;
      *((_DWORD *)this + 2603) = v13 + 16;
      if ( v13 <= -17 )
        goto LABEL_32;
      *((_DWORD *)this + 2603) = v13;
      if ( v13 <= 0 )
      {
        *((_DWORD *)this + 2604) = v14 << (v13 + 16);
        v15 = *((_DWORD *)this + 456);
        if ( v15 || (jpeg_decoder::prep_in_buffer(this), (v15 = *((_DWORD *)this + 456)) != 0) )
        {
          v16 = (unsigned __int8 *)*((_QWORD *)this + 227);
          v17 = v16 + 1;
          *((_QWORD *)this + 227) = v16 + 1;
          v18 = *v16;
          v19 = v15 - 1;
          *((_DWORD *)this + 456) = v19;
          if ( v19 )
            goto LABEL_26;
        }
        else
        {
          v20 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v20 ^ 1;
          if ( v20 )
            v18 = -39;
          else
            v18 = -1;
        }
        jpeg_decoder::prep_in_buffer(this);
        v19 = *((_DWORD *)this + 456);
        if ( !v19 )
        {
          v22 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v22 ^ 1;
          if ( v22 )
            v21 = 217;
          else
            v21 = 255;
    LABEL_30:
          v23 = v21 & 0xFFFF00FF | (v18 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v24 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v23 << -(char)v24;
          *((_DWORD *)this + 2603) = v24 + 16;
          if ( v24 > -17 )
            goto LABEL_31;
    LABEL_32:
          __assert_rtn(
            "get_bits_1",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
            121,
            "m_bits_left >= 0");
        }
        v17 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_26:
        *((_QWORD *)this + 227) = v17 + 1;
        v21 = *v17;
        *((_DWORD *)this + 456) = v19 - 1;
        goto LABEL_30;
      }
      *((_DWORD *)this + 2604) = v14 << 16;
    LABEL_31:
      memset_pattern16((char *)this + 10488, &memset_pattern13, 0x28u);
    }

    __int64 __fastcall jpeg_decoder::create_look_ups(__int64 this)
    {
      unsigned __int64 v1; // x8
      __int64 v2; // x9
      int64x2_t v3; // q1
      int64x2_t v4; // q2
      __int64 v5; // x14
      __int64 v6; // x15
      __int64 v7; // x17
    
      v1 = 0;
      v2 = this + 10536;
      v3 = vdupq_n_s64(0x8000u);
      do
      {
        v4 = vaddq_s64(vdupq_n_s64(v1), (int64x2_t)xmmword_1003EFC30);
        v5 = v4.i64[1];
        v6 = v4.i64[0];
        v7 = 116130 * v4.i64[0];
        v4.i64[0] *= 91881;
        v4.i64[1] *= 91881;
        *(int32x2_t *)v2 = vshr_n_s32(vmovn_s64(vaddq_s64(v4, v3)), 0x10u);
        v4.i64[0] = v7;
        v4.i64[1] = 116130 * v5;
        *(int32x2_t *)(v2 + 1024) = vshr_n_s32(vmovn_s64(vaddq_s64(v4, v3)), 0x10u);
        v4.i64[0] = -46802 * v6;
        v4.i64[1] = -46802 * v5;
        *(int32x2_t *)(v2 + 2052) = vmovn_s64(v4);
        v4.i64[0] = -22554 * v6;
        v4.i64[1] = -22554 * v5;
        *(int32x2_t *)(v2 + 3076) = vmovn_s64(vaddq_s64(v4, v3));
        v1 += 2LL;
        v2 += 8;
      }
      while ( v1 != 256 );
      return this;
    }

    __int64 __fastcall jpeg_decoder::fix_in_buffer(StageBucketRect *this)
    {
      int v2; // w8
      char v3; // w8
      _BYTE *v4; // x10
      int v5; // w8
      _BYTE *v6; // x10
      char v7; // w8
      _BYTE *v8; // x10
      char v9; // w8
      _BYTE *v10; // x10
    
      v2 = *((_DWORD *)this + 2603);
      if ( (v2 & 7) != 0 )
        __assert_rtn(
          "fix_in_buffer",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
          698,
          "(m_bits_left & 7) == 0");
      if ( v2 == 16 )
      {
        v3 = *((_DWORD *)this + 2604);
        v4 = (_BYTE *)(*((_QWORD *)this + 227) - 1LL);
        *((_QWORD *)this + 227) = v4;
        *v4 = v3;
        ++*((_DWORD *)this + 456);
        v2 = *((_DWORD *)this + 2603);
      }
      if ( v2 > 7 )
      {
        v5 = *((_DWORD *)this + 2604) >> 8;
        v6 = (_BYTE *)(*((_QWORD *)this + 227) - 1LL);
        *((_QWORD *)this + 227) = v6;
        *v6 = v5;
        ++*((_DWORD *)this + 456);
      }
      v7 = *((_WORD *)this + 5209);
      v8 = (_BYTE *)(*((_QWORD *)this + 227) - 1LL);
      *((_QWORD *)this + 227) = v8;
      *v8 = v7;
      ++*((_DWORD *)this + 456);
      v9 = *((_BYTE *)this + 10419);
      v10 = (_BYTE *)(*((_QWORD *)this + 227) - 1LL);
      *((_QWORD *)this + 227) = v10;
      *v10 = v9;
      ++*((_DWORD *)this + 456);
      *((_DWORD *)this + 2603) = 16;
      jpeg_decoder::get_bits_2(this, 16);
      return jpeg_decoder::get_bits_2(this, 16);
    }

    __int16 *__fastcall jpeg_decoder::transform_mcu(__int16 *this, int a2)
    {
      __int64 v2; // x19
      int v3; // w8
      __int64 v4; // x22
      int *v5; // x20
      __int16 *v6; // x21
    
      v2 = (__int64)this;
      v3 = *((_DWORD *)this + 141);
      if ( v3 >= 1 )
      {
        v4 = 0;
        v5 = (int *)(*((_QWORD *)this + 1316) + ((a2 * v3) << 6));
        v6 = (__int16 *)*((_QWORD *)this + 1310);
        do
        {
          this = idct(v6, v5, *(_DWORD *)(v2 + 10488 + 4 * v4));
          v6 += 64;
          v5 += 16;
          ++v4;
        }
        while ( v4 < *(int *)(v2 + 564) );
      }
      return this;
    }

    __int64 __fastcall jpeg_decoder::transform_mcu_expand(StageBucketRect *this, int a2)
    {
      __int16 *v3; // x19
      int *v4; // x20
      __int64 v5; // x22
      __int64 v6; // x23
      __int64 v7; // x8
      __int64 v8; // x23
      char *v9; // x28
      __int64 v10; // x8
      int v11; // w8
      int v12; // w8
      int v13; // w9
      int v14; // w8
      int v15; // w8
      __int64 result; // x0
      _QWORD v17[8]; // [xsp+18h] [xbp-258h] BYREF
      _QWORD v18[8]; // [xsp+58h] [xbp-218h] BYREF
      _QWORD v19[6]; // [xsp+98h] [xbp-1D8h] BYREF
      __int64 v20; // [xsp+C8h] [xbp-1A8h]
      __int64 v21; // [xsp+D0h] [xbp-1A0h]
      __int64 v22; // [xsp+D8h] [xbp-198h] BYREF
      _QWORD v23[7]; // [xsp+E0h] [xbp-190h] BYREF
      __int64 v24; // [xsp+118h] [xbp-158h] BYREF
      __int64 v25; // [xsp+120h] [xbp-150h]
      __int64 v26; // [xsp+128h] [xbp-148h]
      __int64 v27; // [xsp+130h] [xbp-140h]
      __int64 v28; // [xsp+138h] [xbp-138h]
      __int64 v29; // [xsp+140h] [xbp-130h]
      __int64 v30; // [xsp+148h] [xbp-128h]
      __int64 v31; // [xsp+150h] [xbp-120h]
      int v32; // [xsp+158h] [xbp-118h] BYREF
      __int64 v33; // [xsp+15Ch] [xbp-114h]
      __int64 v34; // [xsp+164h] [xbp-10Ch]
      __int64 v35; // [xsp+16Ch] [xbp-104h]
      __int64 v36; // [xsp+174h] [xbp-FCh]
      __int64 v37; // [xsp+17Ch] [xbp-F4h]
      __int64 v38; // [xsp+184h] [xbp-ECh]
      __int64 v39; // [xsp+18Ch] [xbp-E4h]
      int v40; // [xsp+194h] [xbp-DCh]
      __int16 v41[64]; // [xsp+198h] [xbp-D8h] BYREF
    
      v3 = (__int16 *)*((_QWORD *)this + 1310);
      v4 = (int *)(*((_QWORD *)this + 1316) + ((a2 * *((_DWORD *)this + 2610)) << 6));
      if ( *((int *)this + 2612) < 1 )
      {
        v7 = 0;
      }
      else
      {
        v5 = 0;
        v6 = 0;
        do
        {
          idct(v3, v4, *((_DWORD *)this + v6 + 2622));
          v3 += 64;
          v4 += 16;
          ++v6;
          v5 += (__int64)&_mh_execute_header;
        }
        while ( v6 < *((int *)this + 2612) );
        v7 = v5 >> 32;
      }
      v8 = 0;
      v9 = (char *)this + 4 * v7 + 10488;
      do
      {
        v10 = *(int *)&v9[4 * v8];
        if ( (int)v10 < 1 )
          __assert_rtn(
            "transform_mcu_expand",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
            755,
            "m_mcu_block_max_zag[mcu_block] >= 1");
        if ( (int)v10 >= 65 )
          __assert_rtn(
            "transform_mcu_expand",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
            756,
            "m_mcu_block_max_zag[mcu_block] <= 64");
        v11 = max_rc[v10 - 1];
        if ( v11 > 117 )
        {
          if ( v11 > 119 )
          {
            if ( v11 == 120 )
            {
              DCT_Upsample::P_Q<7,8>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<7,8>::calc(&v22, v19, v3);
            }
            else
            {
              if ( v11 != 136 )
                goto LABEL_45;
              DCT_Upsample::P_Q<8,8>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<8,8>::calc(&v22, v19, v3);
            }
          }
          else if ( v11 == 118 )
          {
            DCT_Upsample::P_Q<7,6>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<7,6>::calc(&v22, v19, v3);
          }
          else
          {
            DCT_Upsample::P_Q<7,7>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<7,7>::calc(&v22, v19, v3);
          }
        }
        else if ( v11 > 83 )
        {
          if ( v11 > 85 )
          {
            if ( v11 == 86 )
            {
              DCT_Upsample::P_Q<5,6>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<5,6>::calc(&v22, v19, v3);
            }
            else
            {
              if ( v11 != 102 )
                goto LABEL_45;
              DCT_Upsample::P_Q<6,6>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<6,6>::calc(&v22, v19, v3);
            }
          }
          else if ( v11 == 84 )
          {
            DCT_Upsample::P_Q<5,4>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<5,4>::calc(&v22, v19, v3);
          }
          else
          {
            DCT_Upsample::P_Q<5,5>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<5,5>::calc(&v22, v19, v3);
          }
        }
        else if ( v11 > 49 )
        {
          if ( v11 > 51 )
          {
            if ( v11 == 52 )
            {
              DCT_Upsample::P_Q<3,4>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<3,4>::calc(&v22, v19, v3);
            }
            else
            {
              if ( v11 != 68 )
    LABEL_45:
                __assert_rtn(
                  "transform_mcu_expand",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
                  821,
                  "false");
              DCT_Upsample::P_Q<4,4>::calc(&v32, &v24, v3);
              DCT_Upsample::R_S<4,4>::calc(&v22, v19, v3);
            }
          }
          else if ( v11 == 50 )
          {
            DCT_Upsample::P_Q<3,2>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<3,2>::calc(&v22, v19, v3);
          }
          else
          {
            DCT_Upsample::P_Q<3,3>::calc(&v32, &v24, v3);
            DCT_Upsample::R_S<3,3>::calc(&v22, v19, v3);
          }
        }
        else
        {
          if ( v11 == 17 )
          {
            v15 = *v3;
            v38 = 0;
            v39 = 0;
            v36 = 0;
            v37 = 0;
            v34 = 0;
            v35 = 0;
            v33 = 0;
            v32 = v15;
            v40 = 0;
            v30 = 0;
            v31 = 0;
            v28 = 0;
            v29 = 0;
            v26 = 0;
            v27 = 0;
            v24 = 0;
            v25 = 0;
            v22 = 0;
            memset(v23, 0, sizeof(v23));
            v20 = 0;
            v21 = 0;
            goto LABEL_37;
          }
          if ( v11 == 18 )
          {
            v12 = v3[1];
            v13 = *v3;
            v30 = 0;
            v31 = 0;
            v28 = 0;
            v29 = 0;
            v26 = 0;
            v27 = 0;
            v24 = 0;
            v25 = 0;
            v32 = v13;
            v33 = 0;
            LODWORD(v34) = 0;
            HIDWORD(v34) = (426 * v12 + 512) >> 10;
            LODWORD(v38) = 0;
            v36 = 0;
            v37 = 0;
            v35 = 0;
            HIDWORD(v38) = (23 * v12 + 512) >> 10;
            v39 = 0;
            v40 = 0;
            v14 = v3[1];
            memset(v23, 0, 24);
            v20 = 0;
            v21 = 0;
            v22 = (unsigned int)((928 * v14 + 512) >> 10);
            LODWORD(v23[3]) = (512 - 75 * v14) >> 10;
            memset((char *)&v23[3] + 4, 0, 28);
    LABEL_37:
            memset(v19, 0, sizeof(v19));
            goto LABEL_43;
          }
          if ( v11 != 34 )
            goto LABEL_45;
          DCT_Upsample::P_Q<2,2>::calc(&v32, &v24, v3);
          DCT_Upsample::R_S<2,2>::calc(&v22, v19, v3);
        }
    LABEL_43:
        DCT_Upsample::operator+(v18, &v32, &v24);
        DCT_Upsample::Matrix44::operator-=(&v32, &v24);
        DCT_Upsample::operator+(v17, &v22, v19);
        DCT_Upsample::Matrix44::operator-=(&v22, v19);
        DCT_Upsample::Matrix44::add_and_store(v41, v18, v17);
        idct_4x4((__int64)v41, (__int64)v4);
        DCT_Upsample::Matrix44::sub_and_store(v41, v18, v17);
        idct_4x4((__int64)v41, (__int64)(v4 + 16));
        DCT_Upsample::Matrix44::add_and_store(v41, &v32, &v22);
        idct_4x4((__int64)v41, (__int64)(v4 + 32));
        DCT_Upsample::Matrix44::sub_and_store(v41, &v32, &v22);
        result = idct_4x4((__int64)v41, (__int64)(v4 + 48));
        v3 += 64;
        ++v8;
        v4 += 64;
      }
      while ( (int)v8 <= 1 );
      return result;
    }

    __int16 *__fastcall jpeg_decoder::load_next_row(__int16 *this)
    {
      __int64 v1; // x22
      int v2; // w21
      int *v3; // x20
      __int64 v4; // x12
      int v5; // w10
      __int64 v6; // x26
      __int64 v7; // x24
      __int64 v8; // x23
      int v9; // w20
      __int64 v10; // x25
      __int64 v11; // x19
      __int64 v12; // x21
      __int64 v13; // x8
      bool v14; // cc
      __int64 v15; // x9
      __int64 v16; // x8
      __int64 v17; // x8
      __int64 v18; // x8
      __int64 v19; // x10
      _BYTE *v20; // [xsp+8h] [xbp-A8h]
      int v21; // [xsp+14h] [xbp-9Ch]
      int *v22; // [xsp+18h] [xbp-98h]
      int v23; // [xsp+20h] [xbp-90h]
      int v24; // [xsp+24h] [xbp-8Ch]
      __int64 v25; // [xsp+28h] [xbp-88h]
      __int64 v26; // [xsp+30h] [xbp-80h]
      __int64 v27; // [xsp+38h] [xbp-78h]
      int v28; // [xsp+44h] [xbp-6Ch]
      _QWORD v29[2]; // [xsp+48h] [xbp-68h]
    
      v1 = (__int64)this;
      v29[0] = 0;
      v29[1] = 0;
      if ( *((int *)this + 143) <= 0 )
      {
        v3 = (int *)(this + 244);
      }
      else
      {
        v2 = 0;
        v20 = this + 5226;
        v3 = (int *)(this + 244);
        v22 = (int *)(this + 244);
        do
        {
          v21 = v2;
          if ( *(int *)(v1 + 564) >= 1 )
          {
            v4 = 0;
            v24 = 0;
            v5 = 0;
            do
            {
              v27 = v4;
              v28 = v5;
              v26 = *(int *)(v1 + 4 * v4 + 580);
              v6 = v1 + 4 * v26;
              v7 = *(_QWORD *)(v1 + 8LL * *(int *)(v6 + 424) + 352);
              v8 = *(_QWORD *)(v1 + 10480);
              v9 = (_DWORD)v4 << 6;
              v10 = (int)((_DWORD)v4 << 6);
              v11 = v1 + 8 * v26;
              v23 = *((_DWORD *)v29 + v26);
              v12 = (unsigned int)(v23 + v5);
              v25 = jpeg_decoder::coeff_buf_getp(
                      v1,
                      *(_QWORD *)(v11 + 1760),
                      v12,
                      (unsigned int)(*(_DWORD *)(v6 + 1796) + v24));
              *(_WORD *)(v8 + 2LL * v9) = *(_WORD *)jpeg_decoder::coeff_buf_getp(
                                                      v1,
                                                      *(_QWORD *)(v11 + 1728),
                                                      v12,
                                                      (unsigned int)(*(_DWORD *)(v6 + 1796) + v24));
              memcpy((void *)(v8 + 2 * (v9 | 1LL)), (const void *)(v25 + 2), 0x7Eu);
              v13 = 63;
              do
              {
                if ( *(_WORD *)(v8 + 2 * (g_ZAG[v13] + (__int64)v9)) )
                  break;
                v14 = v13-- <= 1;
              }
              while ( !v14 );
              *(_DWORD *)(v1 + 4 * v27 + 10488) = v13 + 1;
              v3 = v22;
              if ( (v13 & 0x80000000) == 0 )
              {
                v13 = (int)v13;
                do
                {
                  v15 = g_ZAG[v13] + v10;
                  if ( *(_WORD *)(v8 + 2 * v15) )
                    *(_WORD *)(v8 + 2 * v15) *= *(_WORD *)(v7 + 2 * v13);
                  v14 = v13-- <= 0;
                }
                while ( !v14 );
              }
              if ( *v22 == 1 )
              {
                *((_DWORD *)v29 + v26) = v23 + 1;
                v5 = v28;
              }
              else
              {
                v5 = v28 + 1;
                v16 = v1 + 4 * v26;
                if ( v28 + 1 == *(_DWORD *)(v16 + 392) )
                {
                  if ( ++v24 == *(_DWORD *)(v16 + 408) )
                  {
                    v24 = 0;
                    *((_DWORD *)v29 + v26) = v23 + v5;
                  }
                  v5 = 0;
                }
              }
              v4 = v27 + 1;
            }
            while ( v27 + 1 < *(int *)(v1 + 564) );
          }
          if ( *v20 )
            this = (__int16 *)jpeg_decoder::transform_mcu_expand((StageBucketRect *)v1, v21);
          else
            this = jpeg_decoder::transform_mcu((__int16 *)v1, v21);
          v2 = v21 + 1;
        }
        while ( v21 + 1 < *(_DWORD *)(v1 + 572) );
      }
      if ( *v3 == 1 )
      {
        v17 = v1 + 4LL * *(int *)(v1 + 492);
        ++*(_DWORD *)(v17 + 1796);
      }
      else if ( *v3 >= 1 )
      {
        v18 = 0;
        do
        {
          v19 = v1 + 4LL * *(int *)(v1 + 492 + 4 * v18);
          *(_DWORD *)(v19 + 1796) += *(_DWORD *)(v19 + 408);
          ++v18;
        }
        while ( v18 < *(int *)(v1 + 488) );
      }
      return this;
    }

    __int64 __fastcall jpeg_decoder::coeff_buf_getp(StageBucketRect *a1, __int64 a2, int a3, int a4)
    {
      int v4; // w8
    
      v4 = *(_DWORD *)(a2 + 8);
      if ( v4 <= a3 || *(_DWORD *)(a2 + 12) <= a4 )
        jpeg_decoder::terminate(a1, -229);
      return *(_QWORD *)a2 + v4 * a4 * *(_DWORD *)(a2 + 24) + (__int64)(*(_DWORD *)(a2 + 24) * a3);
    }

    __int64 __fastcall jpeg_decoder::process_restart(__int64 a1)
    {
      int v2; // w8
      int v3; // w20
      unsigned __int8 *v4; // x9
      bool v5; // vf
      int v6; // w9
      int v7; // w9
      int v8; // w8
      unsigned __int8 *v9; // x9
      int v10; // w20
    
      v2 = *(_DWORD *)(a1 + 1824);
      v3 = 1536;
      do
      {
        if ( v2 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v2 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v4 = *(unsigned __int8 **)(a1 + 1816);
          *(_QWORD *)(a1 + 1816) = v4 + 1;
          LODWORD(v4) = *v4;
          *(_DWORD *)(a1 + 1824) = --v2;
          if ( (_DWORD)v4 == 255 )
            break;
        }
        else
        {
          v2 = 0;
          v6 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v6 ^ 1;
          if ( !v6 )
            goto LABEL_11;
        }
        v5 = __OFSUB__(v3--, 1);
      }
      while ( !((v3 < 0) ^ v5 | (v3 == 0)) );
      if ( !v3 )
    LABEL_25:
        jpeg_decoder::terminate((StageBucketRect *)a1, -228);
    LABEL_11:
      if ( v3 <= 0 )
      {
        v7 = 0;
        goto LABEL_21;
      }
      do
      {
        if ( v2 || (jpeg_decoder::prep_in_buffer((StageBucketRect *)a1), (v2 = *(_DWORD *)(a1 + 1824)) != 0) )
        {
          v9 = *(unsigned __int8 **)(a1 + 1816);
          *(_QWORD *)(a1 + 1816) = v9 + 1;
          v7 = *v9;
          *(_DWORD *)(a1 + 1824) = --v2;
          if ( v7 != 255 )
            goto LABEL_21;
        }
        else
        {
          v8 = *(_DWORD *)(a1 + 1828);
          *(_DWORD *)(a1 + 1828) = v8 ^ 1;
          if ( v8 )
          {
            v7 = 217;
            goto LABEL_22;
          }
          v2 = 0;
        }
        v5 = __OFSUB__(v3--, 1);
      }
      while ( !((v3 < 0) ^ v5 | (v3 == 0)) );
      v7 = 255;
    LABEL_21:
      if ( !v3 )
        goto LABEL_25;
    LABEL_22:
      v10 = *(_DWORD *)(a1 + 10428);
      if ( v7 != v10 + 208 )
        goto LABEL_25;
      bzero((void *)(a1 + 10460), 4LL * *(int *)(a1 + 388));
      *(_DWORD *)(a1 + 1792) = 0;
      *(_DWORD *)(a1 + 10424) = *(_DWORD *)(a1 + 10420);
      *(_DWORD *)(a1 + 10428) = ((_BYTE)v10 + 1) & 7;
      *(_DWORD *)(a1 + 10412) = 16;
      jpeg_decoder::get_bits_2((jpeg_decoder *)a1, 16);
      return jpeg_decoder::get_bits_2((jpeg_decoder *)a1, 16);
    }

    __int16 *__fastcall jpeg_decoder::decode_next_row(__int16 *result)
    {
      __int64 v1; // x19
      int v2; // w20
      __int64 v3; // x26
      _WORD *v4; // x25
      __int64 v5; // x22
      __int64 v6; // x8
      _WORD *v7; // x27
      __int64 v8; // x8
      unsigned int v9; // w9
      int v10; // w20
      int v11; // w1
      int v12; // w23
      int v13; // w8
      int v14; // w21
      int v15; // w9
      int v16; // w0
      int v17; // w10
      int v18; // w1
      jpeg_decoder *v19; // x0
      __int64 v20; // x8
      int v21; // w9
      int v22; // w26
      __int64 v23; // x23
      int v24; // w28
      unsigned int v25; // w8
      int v26; // w22
      int v27; // w1
      int v28; // w20
      int v29; // w21
      int v30; // w9
      int bits_2; // w0
      int v32; // w9
      int v33; // w1
      jpeg_decoder *v34; // x0
      int v35; // w10
      int v36; // w9
      int v37; // w11
      int *v38; // x11
      int v39; // w10
      int v40; // w10
      __int64 v41; // t1
      int v42; // w9
      int v43; // w10
      unsigned int v44; // w9
      __int16 v45; // w11
      int v46; // w9
      int v47; // w8
      __int64 v48; // x9
      int v49; // w8
      int v50; // w8
      __int64 v51; // x10
      int v52; // w8
      int *v53; // x9
      __int64 v54; // t1
      _BYTE *v55; // [xsp+8h] [xbp-78h]
      int v56; // [xsp+14h] [xbp-6Ch]
      int *v57; // [xsp+18h] [xbp-68h]
      __int64 v58; // [xsp+20h] [xbp-60h]
      int v59; // [xsp+2Ch] [xbp-54h]
    
      v1 = (__int64)result;
      if ( *((int *)result + 143) >= 1 )
      {
        v2 = 0;
        v55 = result + 5226;
        while ( 1 )
        {
          v56 = v2;
          if ( *(_DWORD *)(v1 + 10420) && !*(_DWORD *)(v1 + 10424) )
            jpeg_decoder::process_restart(v1);
          if ( *(int *)(v1 + 564) >= 1 )
            break;
    LABEL_78:
          if ( *v55 )
            result = (__int16 *)jpeg_decoder::transform_mcu_expand((StageBucketRect *)v1, v56);
          else
            result = jpeg_decoder::transform_mcu((__int16 *)v1, v56);
          --*(_DWORD *)(v1 + 10424);
          v2 = v56 + 1;
          if ( v56 + 1 >= *(_DWORD *)(v1 + 572) )
            return result;
        }
        v3 = 0;
        v4 = *(_WORD **)(v1 + 10480);
    LABEL_8:
        v5 = *(int *)(v1 + 4 * v3 + 580);
        v6 = v1 + 4 * v5;
        v7 = *(_WORD **)(v1 + 8LL * *(int *)(v6 + 424) + 352);
        v8 = *(_QWORD *)(v1 + 8LL * *(int *)(v6 + 508) + 1664);
        v9 = *(_DWORD *)(v1 + 10416);
        v10 = *(_DWORD *)(v8 + 4LL * HIBYTE(v9) + 1028);
        if ( v10 < 0 )
        {
          v17 = -8;
          v12 = *(_DWORD *)(v8 + 4LL * HIBYTE(v9) + 1028);
          do
            v12 = *(_DWORD *)(v8 + 4LL * -(v12 + ((v9 >> (v17-- + 31)) & 1)) + 2308);
          while ( v12 < 0 );
          jpeg_decoder::get_bits_2((jpeg_decoder *)v1, -v17);
          v18 = v12 & 0xF;
          v19 = (jpeg_decoder *)v1;
        }
        else
        {
          v11 = ((unsigned int)v10 >> 8) & 0x1F;
          v12 = (unsigned __int8)*(_DWORD *)(v8 + 4LL * HIBYTE(v9) + 1028);
          v13 = *(unsigned __int8 *)(v8 + (unsigned __int8)*(_DWORD *)(v8 + 4LL * HIBYTE(v9) + 1028) + 2052);
          v14 = v10 & 0xF;
          if ( (v10 & 0x8000) != 0 )
            v15 = v10 & 0xF;
          else
            v15 = 0;
          if ( v11 != v13 + v15 )
    LABEL_85:
            __assert_rtn(
              "huff_decode",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
              216,
              "((symbol >> 8) & 31) == Ph->code_size[symbol & 255] + ((symbol & 0x8000) ? (symbol & 15) : 0)");
          if ( (v10 & 0x8000) != 0 )
          {
            jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v11);
            v16 = v10 >> 16;
    LABEL_22:
            if ( v16 < extend_test[v12] )
              v16 += extend_offset[v12];
            v20 = v1 + 4 * v5;
            v21 = *(_DWORD *)(v20 + 10460) + v16;
            *(_DWORD *)(v20 + 10460) = v21;
            *v4 = *v7 * v21;
            v57 = (int *)(v1 + 4 * v3 + 10488);
            v58 = v3;
            v22 = *v57;
            v23 = *(_QWORD *)(v1 + 8LL * *(int *)(v20 + 524) + 1664);
            v59 = ~*v57;
            v24 = 1;
            while ( 1 )
            {
              v25 = *(_DWORD *)(v1 + 10416);
              v26 = *(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028);
              if ( v26 < 0 )
                break;
              v27 = ((unsigned int)v26 >> 8) & 0x1F;
              v28 = (unsigned __int8)*(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028);
              v29 = *(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028) & 0xF;
              if ( (v26 & 0x8000) != 0 )
                v30 = *(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028) & 0xF;
              else
                v30 = 0;
              if ( v27 != *(unsigned __int8 *)(v23 + (unsigned __int8)*(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028) + 2052)
                        + v30 )
                goto LABEL_85;
              if ( (v26 & 0x8000) == 0 )
              {
                if ( v27 + v29 <= *(_DWORD *)(v1 + 10412) + 16 )
                {
                  bits_2 = jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v27 + v29) & ((1 << v29) - 1);
                  goto LABEL_39;
                }
                jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v27);
                v34 = (jpeg_decoder *)v1;
                v33 = v26 & 0xF;
                goto LABEL_37;
              }
              jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v27);
              bits_2 = v26 >> 16;
    LABEL_39:
              v35 = v28 >> 4;
              if ( (v28 & 0xF) != 0 )
              {
                if ( v35 )
                {
                  v36 = v35 + v24;
                  if ( v35 + v24 >= 64 )
                    goto LABEL_84;
                  v37 = v22 - v24;
                  if ( v22 > v24 )
                  {
                    if ( v35 < v37 )
                      v37 = v28 >> 4;
                    if ( v37 )
                    {
                      v38 = &g_ZAG[v24];
                      if ( v59 + v24 <= ~v35 )
                        v39 = ~v35;
                      else
                        v39 = v59 + v24;
                      v40 = v39 + 1;
                      do
                      {
                        v41 = *v38++;
                        v4[v41] = 0;
                        ++v40;
                      }
                      while ( v40 );
                    }
                  }
                  v24 = v36;
                }
                if ( bits_2 < extend_test[v28 & 0xF] )
                  bits_2 += extend_offset[v28 & 0xF];
                v42 = (__int16)v7[v24];
                v43 = v42 * bits_2;
                v44 = (unsigned int)(v42 * v42 + 64) >> 7;
                v45 = v43 - v44;
                if ( (int)(v43 - v44) < 0 )
                  v45 = 0;
                v46 = v44 + v43;
                if ( v46 > 0 )
                  LOWORD(v46) = 0;
                if ( v43 >= 0 )
                  LOWORD(v46) = v45;
                v4[g_ZAG[v24]] = v46;
              }
              else
              {
                if ( v35 != 15 )
                  goto LABEL_74;
                if ( v24 + 16 >= 65 )
    LABEL_84:
                  jpeg_decoder::terminate((StageBucketRect *)v1, -227);
                v47 = v22 - v24;
                if ( v22 > v24 )
                {
                  if ( v47 > 16 )
                    v47 = 16;
                  if ( v47 )
                  {
                    v48 = v24;
                    v49 = v59 + v24;
                    if ( v59 + v24 <= -17 )
                      v49 = -17;
                    v50 = v49 + 1;
                    do
                    {
                      if ( v48 >= 64 )
                        __assert_rtn(
                          "decode_next_row",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
                          1077,
                          "kt <= 63");
                      v51 = g_ZAG[v48++];
                      v4[v51] = 0;
                      ++v50;
                    }
                    while ( v50 );
                  }
                }
                v24 += 15;
                if ( v4[g_ZAG[v24]] )
                  __assert_rtn(
                    "decode_next_row",
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
                    1083,
                    "p[g_ZAG[k]] == 0");
              }
              if ( ++v24 >= 64 )
              {
    LABEL_74:
                v52 = v22 - v24;
                if ( v22 > v24 )
                {
                  v53 = &g_ZAG[v24];
                  do
                  {
                    v54 = *v53++;
                    v4[v54] = 0;
                    --v52;
                  }
                  while ( v52 );
                }
                *v57 = v24;
                v3 = v58 + 1;
                v4 += 64;
                if ( v58 + 1 >= *(int *)(v1 + 564) )
                  goto LABEL_78;
                goto LABEL_8;
              }
            }
            v32 = -8;
            v28 = *(_DWORD *)(v23 + 4LL * HIBYTE(v25) + 1028);
            do
              v28 = *(_DWORD *)(v23 + 4LL * -(v28 + ((v25 >> (v32-- + 31)) & 1)) + 2308);
            while ( v28 < 0 );
            jpeg_decoder::get_bits_2((jpeg_decoder *)v1, -v32);
            v33 = v28 & 0xF;
            v34 = (jpeg_decoder *)v1;
    LABEL_37:
            bits_2 = jpeg_decoder::get_bits_2(v34, v33);
            goto LABEL_39;
          }
          if ( v11 + v14 <= *(_DWORD *)(v1 + 10412) + 16 )
          {
            v16 = jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v11 + v14) & ((1 << v14) - 1);
            goto LABEL_22;
          }
          jpeg_decoder::get_bits_2((jpeg_decoder *)v1, v11);
          v19 = (jpeg_decoder *)v1;
          v18 = v10 & 0xF;
        }
        v16 = jpeg_decoder::get_bits_2(v19, v18);
        goto LABEL_22;
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::H1V1Convert(__int64 result)
    {
      int v1; // w8
      __int64 v2; // x9
      __int64 v3; // x10
      __int64 v4; // x12
      unsigned __int8 *v5; // x13
      _BYTE *v6; // x15
      int v7; // w16
      __int64 v8; // x17
      __int64 v9; // x14
      unsigned int v10; // w1
      __int64 v11; // x17
      unsigned int v12; // w14
      unsigned int v13; // w14
      bool v14; // vf
    
      v1 = *(_DWORD *)(result + 10432);
      if ( v1 >= 1 )
      {
        v2 = *(_QWORD *)(result + 14640);
        v3 = *(_QWORD *)(result + 10528) + 8 * *(_DWORD *)(result + 560) - 8 * *(_DWORD *)(result + 624) + 64LL;
        do
        {
          v4 = 0;
          v5 = (unsigned __int8 *)v3;
          do
          {
            v6 = (_BYTE *)(v2 + v4);
            v7 = *(v5 - 64);
            v8 = *v5;
            v9 = result + 4LL * v5[64];
            v10 = *(_DWORD *)(v9 + 10536) + v7;
            if ( v10 >= 0x100 )
              LOBYTE(v10) = (int)~v10 >> 31;
            *v6 = v10;
            v11 = result + 4 * v8;
            v12 = v7 + ((*(_DWORD *)(v11 + 13612) + *(_DWORD *)(v9 + 12588)) >> 16);
            if ( v12 >= 0x100 )
              LOBYTE(v12) = (int)~v12 >> 31;
            v6[1] = v12;
            v13 = *(_DWORD *)(v11 + 11560) + v7;
            if ( v13 >= 0x100 )
              LOBYTE(v13) = (int)~v13 >> 31;
            v6[3] = -1;
            ++v5;
            v4 += 4;
            v6[2] = v13;
          }
          while ( v4 != 32 );
          v2 += 32;
          v3 += 192;
          v14 = __OFSUB__(v1--, 1);
        }
        while ( !((v1 < 0) ^ v14 | (v1 == 0)) );
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::H2V1Convert(__int64 result)
    {
      int v1; // w10
      int v2; // w11
      int v3; // w8
      __int64 v4; // x12
      __int64 v5; // x9
      __int64 v6; // x10
      __int64 v7; // x11
      unsigned __int8 *v8; // x10
      int v9; // w13
      __int64 v10; // x14
      unsigned __int8 *v11; // x15
      __int64 v12; // x16
      __int64 v13; // x1
      __int64 v14; // x2
      unsigned __int8 *v15; // x3
      _BYTE *v16; // x4
      int v17; // w6
      __int64 v18; // x7
      __int64 v19; // x5
      int v20; // w19
      int v21; // w20
      int v22; // w7
      int v23; // w5
      int v24; // w19
      unsigned int v25; // w20
      int v26; // w19
      unsigned int v27; // w21
      unsigned int v28; // w6
      char v29; // w6
      int v30; // w6
      unsigned int v31; // w7
      unsigned int v32; // w19
      char v33; // w7
      unsigned int v34; // w5
      bool v35; // vf
    
      v1 = *(_DWORD *)(result + 560);
      v2 = *(_DWORD *)(result + 624);
      v3 = *(_DWORD *)(result + 10432);
      if ( v3 >= 1 )
      {
        v4 = *(_QWORD *)(result + 10528);
        v5 = 8 * (v1 - v2) + v4 + 128;
        v6 = v4 + 8 * v1 - 8 * v2;
        v7 = *(_QWORD *)(result + 14640);
        v8 = (unsigned __int8 *)(v6 + 1);
        do
        {
          v9 = 0;
          v10 = v7;
          v7 += 64;
          v11 = v8;
          v12 = v5;
          do
          {
            v13 = 0;
            v14 = 0;
            v15 = v11;
            do
            {
              v16 = (_BYTE *)(v10 + v13);
              v17 = *(v15 - 1);
              v18 = result + 4LL * *(unsigned __int8 *)(v12 + v14 + 64);
              v19 = result + 4LL * *(unsigned __int8 *)(v12 + v14);
              v20 = *(_DWORD *)(v18 + 12588);
              v21 = *(_DWORD *)(v19 + 13612);
              v22 = *(_DWORD *)(v18 + 10536);
              v23 = *(_DWORD *)(v19 + 11560);
              *(_BYTE *)(v10 + v13 + 3) = -1;
              v24 = v21 + v20;
              v25 = v17 + v22;
              v26 = v24 >> 16;
              v27 = v17 + v23;
              v28 = v17 + v26;
              if ( v25 >= 0x100 )
                LOBYTE(v25) = (int)~v25 >> 31;
              *v16 = v25;
              if ( v28 >= 0x100 )
                LOBYTE(v28) = (int)~v28 >> 31;
              v16[1] = v28;
              if ( v27 >= 0x100 )
                v29 = (int)~v27 >> 31;
              else
                v29 = v27;
              v16[2] = v29;
              v30 = *v15;
              v31 = v30 + v22;
              v32 = v30 + v26;
              if ( v31 >= 0x100 )
                LOBYTE(v31) = (int)~v31 >> 31;
              v16[4] = v31;
              if ( v32 >= 0x100 )
                v33 = (int)~v32 >> 31;
              else
                v33 = v32;
              v16[5] = v33;
              v34 = v30 + v23;
              if ( v34 >= 0x100 )
                LOBYTE(v34) = (int)~v34 >> 31;
              v16[6] = v34;
              v16[7] = -1;
              ++v14;
              v15 += 2;
              v13 += 8;
            }
            while ( v14 != 4 );
            v10 += 32;
            ++v9;
            v11 += 64;
            v12 += 4;
          }
          while ( v9 != 2 );
          v5 += 256;
          v8 += 256;
          v35 = __OFSUB__(v3--, 1);
        }
        while ( !((v3 < 0) ^ v35 | (v3 == 0)) );
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::H1V2Convert(__int64 result)
    {
      int v1; // w10
      __int64 v2; // x11
      int v3; // w8
      __int64 v4; // x9
      __int64 v5; // x13
      __int64 v6; // x12
      __int64 v7; // x10
      __int64 v8; // x11
      __int64 v9; // x15
      unsigned __int8 *v10; // x16
      unsigned __int8 *v11; // x17
      _BYTE *v12; // x1
      _BYTE *v13; // x2
      int v14; // w5
      __int64 v15; // x3
      __int64 v16; // x4
      int v17; // w6
      int v18; // w7
      int v19; // w3
      int v20; // w4
      int v21; // w6
      unsigned int v22; // w7
      int v23; // w6
      unsigned int v24; // w19
      unsigned int v25; // w5
      char v26; // w5
      int v27; // w1
      unsigned int v28; // w3
      unsigned int v29; // w6
      char v30; // w3
      unsigned int v31; // w1
      bool v32; // vf
    
      v1 = *(_DWORD *)(result + 560) - *(_DWORD *)(result + 624);
      if ( v1 <= 7 )
        v2 = 8 * v1;
      else
        v2 = (8 * v1) & 0x38 | 0x40LL;
      v3 = *(_DWORD *)(result + 10432);
      if ( v3 >= 1 )
      {
        v4 = *(_QWORD *)(result + 14640);
        v5 = *(_QWORD *)(result + 14648);
        v6 = *(_QWORD *)(result + 10528);
        v7 = v6 + (int)((4 * v1) & 0xFFFFFFF8) + 192;
        v8 = v2 + v6 + 8;
        do
        {
          v9 = 0;
          v10 = (unsigned __int8 *)v8;
          v11 = (unsigned __int8 *)v7;
          do
          {
            v12 = (_BYTE *)(v4 + v9);
            v13 = (_BYTE *)(v5 + v9);
            v14 = *(v10 - 8);
            v15 = result + 4LL * *v11;
            v16 = result + 4LL * *(v11 - 64);
            v17 = *(_DWORD *)(v15 + 12588);
            v18 = *(_DWORD *)(v16 + 13612);
            v19 = *(_DWORD *)(v15 + 10536);
            v20 = *(_DWORD *)(v16 + 11560);
            *(_BYTE *)(v4 + v9 + 3) = -1;
            v21 = v18 + v17;
            v22 = v14 + v19;
            v23 = v21 >> 16;
            v24 = v14 + v20;
            v25 = v14 + v23;
            if ( v22 >= 0x100 )
              LOBYTE(v22) = (int)~v22 >> 31;
            *v12 = v22;
            if ( v25 >= 0x100 )
              LOBYTE(v25) = (int)~v25 >> 31;
            v12[1] = v25;
            if ( v24 >= 0x100 )
              v26 = (int)~v24 >> 31;
            else
              v26 = v24;
            v12[2] = v26;
            v27 = *v10;
            v28 = v27 + v19;
            v29 = v27 + v23;
            if ( v28 >= 0x100 )
              LOBYTE(v28) = (int)~v28 >> 31;
            *v13 = v28;
            if ( v29 >= 0x100 )
              v30 = (int)~v29 >> 31;
            else
              v30 = v29;
            v13[1] = v30;
            v31 = v27 + v20;
            if ( v31 >= 0x100 )
              LOBYTE(v31) = (int)~v31 >> 31;
            v13[2] = v31;
            v13[3] = -1;
            ++v11;
            ++v10;
            v9 += 4;
          }
          while ( v9 != 32 );
          v4 += 32;
          v7 += 256;
          v8 += 256;
          v5 += 32;
          v32 = __OFSUB__(v3--, 1);
        }
        while ( !((v3 < 0) ^ v32 | (v3 == 0)) );
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::H2V2Convert(__int64 result)
    {
      int v1; // w11
      __int64 v2; // x12
      int v3; // w8
      __int64 v4; // x9
      __int64 v5; // x10
      __int64 v6; // x13
      __int64 v7; // x11
      __int64 v8; // x12
      int v9; // w14
      __int64 v10; // x15
      __int64 v11; // x1
      __int64 v12; // x16
      __int64 v13; // x17
      __int64 v14; // x3
      __int64 v15; // x4
      __int64 i; // x5
      _BYTE *v17; // x21
      _BYTE *v18; // x6
      __int64 v19; // x20
      int v20; // w19
      __int64 v21; // x7
      int v22; // w20
      int v23; // w7
      int v24; // w22
      int v25; // w23
      unsigned int v26; // w24
      unsigned int v27; // w22
      unsigned __int8 *v28; // x23
      int v29; // w22
      unsigned int v30; // w24
      unsigned int v31; // w25
      unsigned int v32; // w22
      char v33; // w24
      int v34; // w21
      unsigned int v35; // w22
      unsigned int v36; // w24
      unsigned int v37; // w21
      char v38; // w22
      int v39; // w21
      unsigned int v40; // w19
      unsigned int v41; // w20
      char v42; // w19
      unsigned int v43; // w7
      bool v44; // vf
    
      v1 = *(_DWORD *)(result + 560) - *(_DWORD *)(result + 624);
      if ( v1 <= 7 )
        v2 = 8 * v1;
      else
        v2 = (8 * v1) & 0x38 | 0x80LL;
      v3 = *(_DWORD *)(result + 10432);
      if ( v3 >= 1 )
      {
        v4 = *(_QWORD *)(result + 14640);
        v5 = *(_QWORD *)(result + 14648);
        v6 = *(_QWORD *)(result + 10528);
        v7 = v6 + (int)((4 * v1) & 0xFFFFFFF8) + 256;
        v8 = v6 + v2;
        do
        {
          v9 = 0;
          v10 = v4;
          v4 += 64;
          v11 = v5;
          v12 = v8;
          v13 = v7;
          do
          {
            v14 = 0;
            v15 = 0;
            for ( i = 0; i < 8; i += 2 )
            {
              v17 = (_BYTE *)(v10 + v15);
              v18 = (_BYTE *)(v11 + v15);
              v19 = result + 4LL * *(unsigned __int8 *)(v13 + v14 + 64);
              v20 = *(_DWORD *)(v19 + 10536);
              v21 = result + 4LL * *(unsigned __int8 *)(v13 + v14);
              v22 = (*(_DWORD *)(v21 + 13612) + *(_DWORD *)(v19 + 12588)) >> 16;
              v23 = *(_DWORD *)(v21 + 11560);
              v24 = *(unsigned __int8 *)(v12 + i);
              v25 = v24 + v20;
              if ( (unsigned int)(v24 + v20) >= 0x100 )
                LOBYTE(v25) = ~v25 >> 31;
              v26 = v24 + v22;
              *v17 = v25;
              v27 = v24 + v23;
              v17[3] = -1;
              v28 = (unsigned __int8 *)(v12 + i);
              if ( v26 >= 0x100 )
                LOBYTE(v26) = (int)~v26 >> 31;
              v17[1] = v26;
              if ( v27 >= 0x100 )
                LOBYTE(v27) = (int)~v27 >> 31;
              v17[2] = v27;
              v29 = v28[1];
              v17[7] = -1;
              v30 = v29 + v20;
              v31 = v29 + v22;
              v32 = v29 + v23;
              if ( v30 >= 0x100 )
                LOBYTE(v30) = (int)~v30 >> 31;
              v17[4] = v30;
              if ( v31 >= 0x100 )
                v33 = (int)~v31 >> 31;
              else
                v33 = v31;
              v17[5] = v33;
              if ( v32 >= 0x100 )
                LOBYTE(v32) = (int)~v32 >> 31;
              v17[6] = v32;
              v34 = v28[8];
              v18[3] = -1;
              v35 = v34 + v20;
              v36 = v34 + v22;
              v37 = v34 + v23;
              if ( v35 >= 0x100 )
                LOBYTE(v35) = (int)~v35 >> 31;
              *v18 = v35;
              if ( v36 >= 0x100 )
                v38 = (int)~v36 >> 31;
              else
                v38 = v36;
              v18[1] = v38;
              if ( v37 >= 0x100 )
                LOBYTE(v37) = (int)~v37 >> 31;
              v18[2] = v37;
              v39 = v28[9];
              v40 = v39 + v20;
              v41 = v39 + v22;
              if ( v40 >= 0x100 )
                LOBYTE(v40) = (int)~v40 >> 31;
              v18[4] = v40;
              if ( v41 >= 0x100 )
                v42 = (int)~v41 >> 31;
              else
                v42 = v41;
              v18[5] = v42;
              v43 = v39 + v23;
              if ( v43 >= 0x100 )
                LOBYTE(v43) = (int)~v43 >> 31;
              v18[6] = v43;
              v18[7] = -1;
              v15 += 8;
              ++v14;
            }
            v13 += 4;
            v10 += 32;
            v12 += 64;
            ++v9;
            v11 += 32;
          }
          while ( v9 != 2 );
          v5 += 64;
          v8 += 384;
          v7 += 384;
          v44 = __OFSUB__(v3--, 1);
        }
        while ( !((v3 < 0) ^ v44 | (v3 == 0)) );
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::grey_convert(__int64 result)
    {
      int v1; // w10
      _DWORD *v2; // x8
      _DWORD *v3; // x9
      int v4; // w10
    
      v1 = *(_DWORD *)(result + 10432);
      if ( v1 >= 1 )
      {
        v2 = (_DWORD *)(*(_QWORD *)(result + 10528) + 8 * (*(int *)(result + 560) - (__int64)*(int *)(result + 624)));
        v3 = *(_DWORD **)(result + 14640);
        v4 = v1 + 1;
        do
        {
          *v3 = *v2;
          v3[1] = v2[1];
          --v4;
          v2 += 16;
          v3 += 2;
        }
        while ( v4 > 1 );
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::expanded_convert(__int64 result)
    {
      int v1; // w8
      int v2; // w10
      __int64 v3; // x9
      int v4; // w12
      __int64 v5; // x10
      __int64 v6; // x14
      int v7; // w12
      __int64 v8; // x13
      __int64 v9; // x14
      unsigned __int8 *v10; // x15
      int v11; // w17
      unsigned __int8 *v12; // x16
      unsigned __int8 *v13; // x17
      _BYTE *v14; // x2
      int v15; // w3
      __int64 v16; // x4
      __int64 v17; // x1
      unsigned int v18; // w5
      __int64 v19; // x4
      unsigned int v20; // w1
      unsigned int v21; // w1
      bool v22; // vf
    
      v1 = *(_DWORD *)(result + 10432);
      if ( v1 >= 1 )
      {
        v2 = *(_DWORD *)(result + 560) - *(_DWORD *)(result + 624);
        v3 = *(_QWORD *)(result + 14640);
        v4 = v2 + 7;
        if ( v2 >= 0 )
          v4 = *(_DWORD *)(result + 560) - *(_DWORD *)(result + 624);
        v5 = *(_QWORD *)(result + 10528)
           + (((int)((8 * v4) & 0xFFFFFFC0) * (__int64)*(int *)(result + 392)) | (8 * v2) & 0x38);
        LODWORD(v6) = *(_DWORD *)(result + 556);
        do
        {
          if ( (int)v6 >= 1 )
          {
            v7 = 0;
            v8 = 0;
            do
            {
              v9 = 0;
              v10 = (unsigned __int8 *)(v5 + v7);
              v11 = *(_DWORD *)(result + 10448);
              v12 = (unsigned __int8 *)(v5 + v7 + (v11 << 6));
              v13 = (unsigned __int8 *)(v5 + v7 + (v11 << 7));
              do
              {
                v14 = (_BYTE *)(v3 + v9);
                v15 = *v10;
                v16 = *v12;
                v17 = result + 4LL * *v13;
                v18 = *(_DWORD *)(v17 + 10536) + v15;
                if ( v18 >= 0x100 )
                  LOBYTE(v18) = (int)~v18 >> 31;
                *v14 = v18;
                v19 = result + 4 * v16;
                v20 = v15 + ((*(_DWORD *)(v19 + 13612) + *(_DWORD *)(v17 + 12588)) >> 16);
                if ( v20 >= 0x100 )
                  LOBYTE(v20) = (int)~v20 >> 31;
                v14[1] = v20;
                v21 = *(_DWORD *)(v19 + 11560) + v15;
                v14[3] = -1;
                if ( v21 >= 0x100 )
                  LOBYTE(v21) = (int)~v21 >> 31;
                ++v12;
                ++v13;
                ++v10;
                v9 += 4;
                v14[2] = v21;
              }
              while ( v9 != 32 );
              v3 += 32;
              v8 += 8;
              v6 = *(int *)(result + 556);
              v7 += 64;
            }
            while ( v8 < v6 );
          }
          v5 += (__int64)*(int *)(result + 10440) << 6;
          v22 = __OFSUB__(v1--, 1);
        }
        while ( !((v1 < 0) ^ v22 | (v1 == 0)) );
      }
      return result;
    }

    StageBucketRect *__fastcall jpeg_decoder::find_eoi(StageBucketRect *result)
    {
      StageBucketRect *v1; // x19
      int v2; // w8
      int v3; // w8
      unsigned __int8 *v4; // x10
      unsigned __int8 *v5; // x9
      unsigned __int8 v6; // w20
      int v7; // w8
      int v8; // w8
      int v9; // w9
      int v10; // w8
      int v11; // w9
      int v12; // w10
      unsigned int v13; // w9
      unsigned __int8 *v14; // x10
      unsigned __int8 *v15; // x9
      unsigned __int8 v16; // w20
      int v17; // w8
      int v18; // w8
      int v19; // w9
      int v20; // w8
      unsigned int v21; // w8
      int v22; // w9
    
      v1 = result;
      if ( !*((_DWORD *)result + 52) )
      {
        v2 = *((_DWORD *)result + 2604);
        *((_DWORD *)result + 2603) = 0;
        *((_DWORD *)result + 2604) = v2 << 16;
        v3 = *((_DWORD *)result + 456);
        if ( v3 || (jpeg_decoder::prep_in_buffer(result), (v3 = *((_DWORD *)v1 + 456)) != 0) )
        {
          v4 = (unsigned __int8 *)*((_QWORD *)v1 + 227);
          v5 = v4 + 1;
          *((_QWORD *)v1 + 227) = v4 + 1;
          v6 = *v4;
          v7 = v3 - 1;
          *((_DWORD *)v1 + 456) = v7;
          if ( v7 )
            goto LABEL_11;
        }
        else
        {
          v8 = *((_DWORD *)v1 + 457);
          *((_DWORD *)v1 + 457) = v8 ^ 1;
          if ( v8 )
            v6 = -39;
          else
            v6 = -1;
        }
        jpeg_decoder::prep_in_buffer(v1);
        v7 = *((_DWORD *)v1 + 456);
        if ( !v7 )
        {
          v10 = 0;
          v11 = *((_DWORD *)v1 + 457);
          *((_DWORD *)v1 + 457) = v11 ^ 1;
          if ( v11 )
            v9 = 217;
          else
            v9 = 255;
    LABEL_15:
          v12 = *((_DWORD *)v1 + 2603);
          v13 = (v9 & 0xFFFF00FF | (v6 << 8) | *((_DWORD *)v1 + 2604) & 0xFFFF0000) << -(char)v12;
          *((_DWORD *)v1 + 2604) = v13;
          *((_DWORD *)v1 + 2603) = v12 + 16;
          if ( v12 <= -17 )
            goto LABEL_34;
          *((_DWORD *)v1 + 2603) = v12;
          if ( v12 > 0 )
          {
            *((_DWORD *)v1 + 2604) = v13 << 16;
    LABEL_32:
            result = (StageBucketRect *)jpeg_decoder::process_markers(v1);
            goto LABEL_33;
          }
          *((_DWORD *)v1 + 2604) = v13 << (v12 + 16);
          if ( v10 || (jpeg_decoder::prep_in_buffer(v1), (v10 = *((_DWORD *)v1 + 456)) != 0) )
          {
            v14 = (unsigned __int8 *)*((_QWORD *)v1 + 227);
            v15 = v14 + 1;
            *((_QWORD *)v1 + 227) = v14 + 1;
            v16 = *v14;
            v17 = v10 - 1;
            *((_DWORD *)v1 + 456) = v17;
            if ( v17 )
              goto LABEL_27;
          }
          else
          {
            v18 = *((_DWORD *)v1 + 457);
            *((_DWORD *)v1 + 457) = v18 ^ 1;
            if ( v18 )
              v16 = -39;
            else
              v16 = -1;
          }
          jpeg_decoder::prep_in_buffer(v1);
          v17 = *((_DWORD *)v1 + 456);
          if ( !v17 )
          {
            v20 = *((_DWORD *)v1 + 457);
            *((_DWORD *)v1 + 457) = v20 ^ 1;
            if ( v20 )
              v19 = 217;
            else
              v19 = 255;
    LABEL_31:
            v21 = v19 & 0xFFFF00FF | (v16 << 8) | *((_DWORD *)v1 + 2604) & 0xFFFF0000;
            v22 = *((_DWORD *)v1 + 2603);
            *((_DWORD *)v1 + 2604) = v21 << -(char)v22;
            *((_DWORD *)v1 + 2603) = v22 + 16;
            if ( v22 > -17 )
              goto LABEL_32;
    LABEL_34:
            __assert_rtn(
              "get_bits_1",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
              121,
              "m_bits_left >= 0");
          }
          v15 = (unsigned __int8 *)*((_QWORD *)v1 + 227);
    LABEL_27:
          *((_QWORD *)v1 + 227) = v15 + 1;
          v19 = *v15;
          *((_DWORD *)v1 + 456) = v17 - 1;
          goto LABEL_31;
        }
        v5 = (unsigned __int8 *)*((_QWORD *)v1 + 227);
    LABEL_11:
        *((_QWORD *)v1 + 227) = v5 + 1;
        v9 = *v5;
        v10 = v7 - 1;
        *((_DWORD *)v1 + 456) = v10;
        goto LABEL_15;
      }
    LABEL_33:
      *((_DWORD *)v1 + 3666) -= *((_DWORD *)v1 + 456);
      return result;
    }

    __int64 __fastcall jpeg_decoder::decode(__int64 a1, _QWORD *a2, _DWORD *a3)
    {
      int v6; // w8
      __int64 v8; // x8
    
      if ( *(_DWORD *)(a1 + 14656) || !*(_BYTE *)(a1 + 14660) )
        return 0xFFFFFFFFLL;
      if ( !*(_DWORD *)(a1 + 620) )
        return 1;
      v6 = *(_DWORD *)(a1 + 624);
      if ( !v6 )
      {
        if ( setjmp((int *)a1) )
          return 4294967069LL;
        if ( *(_DWORD *)(a1 + 208) )
          jpeg_decoder::load_next_row((__int16 *)a1);
        else
          jpeg_decoder::decode_next_row((__int16 *)a1);
        v6 = *(_DWORD *)(a1 + 560);
        if ( *(_DWORD *)(a1 + 620) <= v6 )
        {
          jpeg_decoder::find_eoi((StageBucketRect *)a1);
          v6 = *(_DWORD *)(a1 + 560);
        }
        *(_DWORD *)(a1 + 624) = v6;
      }
      if ( *(_BYTE *)(a1 + 10452) )
      {
        jpeg_decoder::expanded_convert(a1);
    LABEL_17:
        v8 = *(_QWORD *)(a1 + 14640);
      }
      else
      {
        switch ( *(_DWORD *)(a1 + 384) )
        {
          case 0:
            jpeg_decoder::grey_convert(a1);
            goto LABEL_17;
          case 1:
            jpeg_decoder::H1V1Convert(a1);
            goto LABEL_17;
          case 2:
            jpeg_decoder::H2V1Convert(a1);
            goto LABEL_17;
          case 3:
            if ( (v6 & 1) != 0 )
              goto LABEL_29;
            jpeg_decoder::H1V2Convert(a1);
            goto LABEL_17;
          case 4:
            if ( (v6 & 1) == 0 )
            {
              jpeg_decoder::H2V2Convert(a1);
              goto LABEL_17;
            }
    LABEL_29:
            v8 = *(_QWORD *)(a1 + 14648);
            break;
          default:
            goto LABEL_20;
        }
      }
      *a2 = v8;
    LABEL_20:
      *a3 = *(_DWORD *)(a1 + 628);
      --*(_DWORD *)(a1 + 624);
      --*(_DWORD *)(a1 + 620);
      return 0;
    }

    void __fastcall jpeg_decoder::make_huff_table(__int64 a1, int a2, bool *a3)
    {
      int v5; // w23
      __int64 v6; // x24
      __int64 v7; // x25
      __int64 i; // x21
      int v9; // w8
      bool v10; // cf
      __int64 v11; // x8
      __int64 v12; // x9
      int v13; // w27
      unsigned __int8 v14; // w21
      __int64 v15; // x12
      int v16; // w9
      int v17; // w14
      int v18; // w13
      int v19; // w15
      __int64 v20; // x14
      _BYTE *v21; // x16
      __int64 v22; // x8
      _QWORD *v23; // x10
      __int64 v24; // x16
      __int64 v25; // x17
      unsigned int v26; // w2
      int v27; // w0
      char v28; // w1
      unsigned int v29; // w7
      unsigned int v30; // w0
      int v31; // w6
      __int64 v32; // x20
      int v33; // w7
      bool *v34; // x3
      _DWORD *v35; // x3
      int v36; // w4
      int v37; // t1
      __int64 v38; // x1
      unsigned int v39; // w2
      bool *v40; // x3
      int v41; // w3
      _DWORD v42[257]; // [xsp+0h] [xbp-560h]
      _BYTE v43[257]; // [xsp+407h] [xbp-159h] BYREF
    
      v5 = 0;
      v6 = a2;
      *a3 = *(_BYTE *)(a1 + a2 + 212) != 0;
      v7 = *(_QWORD *)(a1 + 8LL * a2 + 224);
      for ( i = 1; i != 17; ++i )
      {
        v9 = *(unsigned __int8 *)(v7 + i);
        if ( *(_BYTE *)(v7 + i) )
        {
          v10 = v9 != 0;
          v11 = (unsigned int)(v9 - 1);
          if ( (_DWORD)v11 != 0 && v10 )
            v12 = v11;
          else
            v12 = 0;
          if ( (_DWORD)v11 != 0 && v10 )
            v13 = v11;
          else
            v13 = 0;
          memset(&v43[v5], i, v12 + 1);
          v5 += v13 + 1;
        }
      }
      v43[v5] = 0;
      v14 = v43[0];
      if ( v43[0] )
      {
        v15 = 0;
        v16 = 0;
        LOBYTE(v17) = v43[0];
        v18 = v43[0];
        do
        {
          while ( (unsigned __int8)v17 != v18 )
          {
            v16 *= 2;
            ++v18;
          }
          v19 = v16;
          v20 = v15 << 32;
          v15 = (int)v15;
          v16 *= 2;
          do
          {
            v42[v15] = v19;
            v21 = &v43[v15++];
            ++v19;
            v20 += (__int64)&_mh_execute_header;
            v16 += 2;
          }
          while ( (unsigned __int8)v21[1] == v18 );
          v17 = (unsigned __int8)v43[v20 >> 32];
          ++v18;
        }
        while ( v17 );
      }
      bzero(a3 + 4, 0x1100u);
      if ( v5 >= 1 )
      {
        v22 = 0;
        v23 = (_QWORD *)(a1 + 8 * v6 + 288);
        v24 = 0xFFFFFFFFLL;
        while ( 1 )
        {
          v25 = *(unsigned __int8 *)(*v23 + v22);
          v26 = v42[v22];
          v27 = v14;
          a3[v25 + 2052] = v14;
          if ( v14 > 8u )
          {
            v34 = &a3[4 * (unsigned __int8)(v26 >> (v14 - 8))];
            v37 = *((_DWORD *)v34 + 1);
            v35 = v34 + 4;
            v36 = v37;
            if ( v37 )
            {
              v38 = v24;
              LODWORD(v24) = v36;
            }
            else
            {
              *v35 = v24;
              *(_DWORD *)&a3[4 * (unsigned __int8)(v26 >> (v14 - 8)) + 1028] = v24;
              v38 = (unsigned int)(v24 - 2);
            }
            v39 = v26 << (24 - v14);
            v40 = &a3[4 * (int)~(((v39 >> 15) & 1) + v24 - 1) + 2308];
            if ( v14 < 0xAu )
            {
              v24 = v38;
            }
            else
            {
              do
              {
                if ( *(_DWORD *)v40 )
                {
                  v24 = v38;
                  LODWORD(v38) = *(_DWORD *)v40;
                }
                else
                {
                  *(_DWORD *)v40 = v38;
                  v24 = (unsigned int)(v38 - 2);
                }
                --v27;
                v41 = (v39 >> 14) & 1;
                v39 *= 2;
                v40 = &a3[4 * ~(v41 + (int)v38 - 1) + 2308];
                v38 = v24;
              }
              while ( v27 > 9 );
            }
            *(_DWORD *)v40 = v25;
          }
          else
          {
            v28 = 8 - v14;
            if ( v14 != -23 )
            {
              v29 = v26 << v28;
              v30 = v14 + (v25 & 0xF);
              v31 = (1 << v28) + 1;
              do
              {
                v32 = v29;
                *(_DWORD *)&a3[4 * v29 + 4] = v25;
                if ( (v25 & 0xF) != 0 && v30 <= 8 )
                {
                  v33 = (v29 >> (8 - v30)) & ((1 << (v25 & 0xF)) - 1);
                  if ( v33 >= 0x8000 )
                    __assert_rtn(
                      "make_huff_table",
                      "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.cpp",
                      1546,
                      "extra_bits <= 0x7FFF");
                  *(_DWORD *)&a3[4 * v32 + 1028] = (unsigned __int8)v25 | (v30 << 8) | (v33 << 16) | 0x8000;
                }
                else
                {
                  *(_DWORD *)&a3[4 * v29 + 1028] = v25 & 0xFFFF00FF | (v14 << 8);
                }
                v29 = v32 + 1;
                --v31;
              }
              while ( v31 > 1 );
            }
          }
          if ( ++v22 >= v5 )
            break;
          v14 = v43[v22];
        }
      }
    }

    int *__fastcall jpeg_decoder::check_quant_tables(int *result)
    {
      __int64 v1; // x8
      __int64 i; // x9
    
      v1 = result[122];
      if ( (int)v1 > 0 )
      {
        for ( i = 0; i < v1; ++i )
        {
          if ( !*(_QWORD *)&result[2 * result[result[i + 123] + 106] + 88] )
            jpeg_decoder::terminate((StageBucketRect *)result, -222);
        }
      }
      return result;
    }

    void __fastcall jpeg_decoder::check_huff_tables(int *a1)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x20
      int *v5; // x8
      bool *v6; // x2
    
      v2 = a1[122];
      if ( (int)v2 < 1 )
      {
        v4 = 0;
      }
      else
      {
        v3 = 0;
        v4 = 0;
        do
        {
          if ( !a1[135] && !*(_QWORD *)&a1[2 * a1[a1[v3 + 123] + 127] + 56]
            || a1[136] >= 1 && !*(_QWORD *)&a1[2 * a1[a1[v3 + 123] + 131] + 56] )
          {
            jpeg_decoder::terminate((StageBucketRect *)a1, -223);
          }
          ++v3;
        }
        while ( v3 < v2 );
      }
      do
      {
        v5 = &a1[2 * v4];
        if ( *((_QWORD *)v5 + 28) )
        {
          v6 = (bool *)*((_QWORD *)v5 + 208);
          if ( !v6 )
          {
            v6 = (bool *)jpeg_decoder::alloc((StageBucketRect *)a1, 4356);
            *(_QWORD *)&a1[2 * v4 + 416] = v6;
          }
          jpeg_decoder::make_huff_table((__int64)a1, v4, v6);
        }
        ++v4;
      }
      while ( v4 != 8 );
    }

    _DWORD *__fastcall jpeg_decoder::calc_mcu_block_order(_DWORD *result)
    {
      __int64 v1; // x10
      __int64 v2; // x11
      int v3; // w8
      int v4; // w9
      _DWORD *v5; // x12
      int v6; // w12
      __int64 v7; // x10
      _DWORD *v8; // x13
      int v9; // w14
      int v10; // w15
      int v11; // w14
      int v12; // w14
      int v13; // w15
      int v14; // w14
      int v15; // w10
      _DWORD *v16; // x8
      int v17; // w11
      int v18; // w12
      int v19; // w13
      int v20; // w11
      int v21; // w9
      __int64 i; // x8
      __int64 v23; // x9
      _DWORD *v24; // x12
      int v25; // w11
      int v26; // w12
      int v27; // w10
      __int64 v28; // x11
    
      v1 = (int)result[97];
      if ( (int)v1 < 1 )
      {
        v4 = 0;
        v3 = 0;
      }
      else
      {
        v2 = 0;
        v3 = 0;
        v4 = 0;
        do
        {
          v5 = &result[v2];
          if ( v5[98] > v4 )
            v4 = v5[98];
          v6 = v5[102];
          if ( v6 > v3 )
            v3 = v6;
          ++v2;
        }
        while ( v2 < v1 );
        v7 = 0;
        do
        {
          v8 = &result[v7];
          v9 = (v4 - 1 + v8[98] * result[48]) / v4;
          v10 = v9 + 7;
          v11 = v9 + 14;
          if ( v10 >= 0 )
            v11 = v10;
          v8[114] = v11 >> 3;
          v12 = (v3 - 1 + v8[102] * result[49]) / v3;
          v13 = v12 + 7;
          v14 = v12 + 14;
          if ( v13 >= 0 )
            v14 = v13;
          v8[118] = v14 >> 3;
          ++v7;
        }
        while ( v7 < (int)result[97] );
      }
      v15 = result[122];
      if ( v15 == 1 )
      {
        v16 = &result[result[123]];
        result[143] = v16[114];
        result[144] = v16[118];
        result[145] = result[123];
        result[141] = 1;
      }
      else
      {
        v17 = result[48];
        v18 = result[49];
        v19 = v17 + 7;
        v20 = v17 + 14;
        if ( v19 >= 0 )
          v20 = v19;
        result[143] = (v4 + (v20 >> 3) - 1) / v4;
        v21 = v18 + 7;
        if ( v18 + 7 < 0 )
          v21 = v18 + 14;
        result[144] = (v3 + (v21 >> 3) - 1) / v3;
        result[141] = 0;
        if ( v15 >= 1 )
        {
          for ( i = 0; i < v15; ++i )
          {
            v23 = (int)result[i + 123];
            v24 = &result[v23];
            v25 = v24[98];
            v26 = v24[102];
            if ( v26 * v25 )
            {
              v27 = -(v26 * v25);
              do
              {
                v28 = (int)result[141];
                result[141] = v28 + 1;
                result[v28 + 145] = v23;
                ++v27;
              }
              while ( v27 );
              v15 = result[122];
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall jpeg_decoder::init_scan(int *a1)
    {
      int v2; // w8
    
      if ( !(unsigned int)jpeg_decoder::locate_sos_marker((StageBucketRect *)a1) )
        return 0;
      jpeg_decoder::calc_mcu_block_order(a1);
      jpeg_decoder::check_huff_tables(a1);
      jpeg_decoder::check_quant_tables(a1);
      bzero(a1 + 2615, 4LL * a1[97]);
      a1[448] = 0;
      v2 = a1[2605];
      if ( v2 )
      {
        a1[2606] = v2;
        a1[2607] = 0;
      }
      jpeg_decoder::fix_in_buffer((StageBucketRect *)a1);
      return 1;
    }

    __int64 __fastcall jpeg_decoder::init_frame(StageBucketRect *this)
    {
      int v2; // w8
      int v3; // w8
      int *v4; // x20
      int v5; // w8
      int v6; // w10
      int v7; // w9
      int v8; // w11
      int v9; // w9
      int v10; // w9
      void *v11; // x0
      void *v12; // x0
      int v13; // w8
      int v14; // w9
      __int64 v15; // x8
      int v16; // w8
      int v17; // w9
      int v18; // w8
    
      v2 = *((_DWORD *)this + 97);
      if ( v2 != 3 )
      {
        if ( v2 != 1 )
          jpeg_decoder::terminate(this, -225);
        if ( *((_DWORD *)this + 98) == 1 && *((_DWORD *)this + 102) == 1 )
        {
          *((_DWORD *)this + 96) = 0;
          v4 = (int *)((char *)this + 10436);
          v5 = 1;
          *((_DWORD *)this + 2609) = 1;
          v7 = 8;
          *((_DWORD *)this + 139) = 8;
          *((_DWORD *)this + 140) = 8;
          v6 = 8;
          goto LABEL_20;
        }
        goto LABEL_27;
      }
      if ( *((_DWORD *)this + 99) != 1
        || *((_DWORD *)this + 103) != 1
        || *((_DWORD *)this + 100) != 1
        || *((_DWORD *)this + 104) != 1 )
      {
        goto LABEL_27;
      }
      v3 = *((_DWORD *)this + 98);
      if ( v3 == 2 )
      {
        if ( *((_DWORD *)this + 102) == 1 )
        {
          *((_DWORD *)this + 96) = 2;
          v4 = (int *)((char *)this + 10436);
          v5 = 4;
          *((_DWORD *)this + 2609) = 4;
          v6 = 16;
          *((_DWORD *)this + 139) = 16;
          v7 = 8;
          *((_DWORD *)this + 140) = 8;
          goto LABEL_20;
        }
        if ( *((_DWORD *)this + 102) == 2 )
        {
          v5 = 4;
          *((_DWORD *)this + 96) = 4;
          v4 = (int *)((char *)this + 10436);
          *((_DWORD *)this + 2609) = 6;
          v7 = 16;
          *((_DWORD *)this + 139) = 16;
          *((_DWORD *)this + 140) = 16;
          v6 = 16;
          goto LABEL_20;
        }
    LABEL_27:
        jpeg_decoder::terminate(this, -226);
      }
      if ( v3 != 1 )
        goto LABEL_27;
      if ( *((_DWORD *)this + 102) == 1 )
      {
        *((_DWORD *)this + 96) = 1;
        v4 = (int *)((char *)this + 10436);
        *((_DWORD *)this + 2609) = 3;
        v7 = 8;
        *((_DWORD *)this + 139) = 8;
        *((_DWORD *)this + 140) = 8;
        v5 = 4;
        v6 = 8;
        goto LABEL_20;
      }
      if ( *((_DWORD *)this + 102) != 2 )
        goto LABEL_27;
      *((_DWORD *)this + 96) = 3;
      v4 = (int *)((char *)this + 10436);
      v5 = 4;
      *((_DWORD *)this + 2609) = 4;
      v6 = 8;
      *((_DWORD *)this + 139) = 8;
      v7 = 16;
      *((_DWORD *)this + 140) = 16;
    LABEL_20:
      v8 = *((_DWORD *)this + 48);
      v9 = (*((_DWORD *)this + 49) + v7 - 1) / v7;
      *((_DWORD *)this + 2608) = (v8 + v6 - 1) / v6;
      *((_DWORD *)this + 2614) = v9;
      *((_DWORD *)this + 159) = v5;
      v10 = (((_WORD)v8 + 15) & 0xFFF0) * v5;
      *((_DWORD *)this + 158) = v10;
      *((_DWORD *)this + 157) = v5 * v8;
      v11 = jpeg_decoder::alloc(this, v10 | 8u);
      *((_QWORD *)this + 1830) = v11;
      bzero(v11, *((int *)this + 158));
      v12 = jpeg_decoder::alloc(this, *((_DWORD *)this + 158) + 8);
      *((_QWORD *)this + 1831) = v12;
      bzero(v12, *((int *)this + 158));
      v13 = *((_DWORD *)this + 2609);
      v14 = v13 * *((_DWORD *)this + 2608);
      *((_DWORD *)this + 142) = v14;
      if ( v14 > 0x2000 )
        jpeg_decoder::terminate(this, -229);
      *((_QWORD *)this + 1310) = jpeg_decoder::alloc(this, (v13 << 7) | 8u);
      if ( *((int *)this + 2609) >= 1 )
      {
        v15 = 0;
        do
          *((_DWORD *)this + v15++ + 2622) = 64;
        while ( v15 < *v4 );
      }
      v16 = *((_DWORD *)this + 102) * *((_DWORD *)this + 98);
      *((_DWORD *)this + 2612) = v16;
      v17 = v16 * *((_DWORD *)this + 97);
      *((_DWORD *)this + 2610) = v17;
      v18 = *((_DWORD *)this + 2608) * v17;
      *((_DWORD *)this + 2611) = v18;
      *((_BYTE *)this + 10452) = v17 == 12;
      if ( v17 != 12 )
        v18 = *((_DWORD *)this + 142);
      *((_QWORD *)this + 1316) = jpeg_decoder::alloc(this, (v18 << 6) | 8u);
      *(_QWORD *)((char *)this + 620) = *((unsigned int *)this + 49);
      return jpeg_decoder::create_look_ups((__int64)this);
    }

    _DWORD *__fastcall jpeg_decoder::decode_scan(_DWORD *this, void (__fastcall *a2)(StageBucketRect *, int, int, int))
    {
      _DWORD *v3; // x20
      int v4; // w14
      int v5; // w8
      int i; // w26
      __int64 v7; // x27
      int v8; // w21
      int v9; // w28
      __int64 v10; // x22
      int v11; // w23
      _DWORD *v12; // x8
      __int64 v13; // x9
      int v14; // w14
      __int64 j; // x10
      _DWORD *v16; // [xsp+8h] [xbp-88h]
      int v17; // [xsp+14h] [xbp-7Ch]
      _QWORD v18[2]; // [xsp+18h] [xbp-78h]
      _QWORD v19[2]; // [xsp+28h] [xbp-68h]
    
      v3 = this;
      v18[0] = 0;
      v18[1] = 0;
      if ( (int)*(this + 144) >= 1 )
      {
        v4 = 0;
        v5 = *(this + 143);
        v16 = this + 123;
        do
        {
          v17 = v4;
          v19[0] = 0;
          v19[1] = 0;
          if ( v5 >= 1 )
          {
            for ( i = 0; i < v5; ++i )
            {
              if ( v3[2605] && !v3[2606] )
                this = (_DWORD *)jpeg_decoder::process_restart((__int64)v3);
              if ( (int)v3[141] >= 1 )
              {
                v7 = 0;
                v8 = 0;
                v9 = 0;
                do
                {
                  v10 = (int)v3[v7 + 145];
                  v11 = *((_DWORD *)v19 + v10);
                  this = (_DWORD *)((__int64 (__fastcall *)(_DWORD *))a2)(v3);
                  if ( v3[122] == 1 )
                  {
                    *((_DWORD *)v19 + v10) = v11 + 1;
                  }
                  else
                  {
                    ++v9;
                    v12 = &v3[v10];
                    if ( v9 == v12[98] )
                    {
                      if ( ++v8 == v12[102] )
                      {
                        v8 = 0;
                        *((_DWORD *)v19 + v10) = v11 + v9;
                      }
                      v9 = 0;
                    }
                  }
                  ++v7;
                }
                while ( v7 < (int)v3[141] );
              }
              --v3[2606];
              v5 = v3[143];
            }
          }
          v13 = (int)v3[122];
          if ( (_DWORD)v13 == 1 )
          {
            ++*((_DWORD *)v18 + (int)v3[123]);
            v14 = v17;
          }
          else
          {
            v14 = v17;
            if ( (int)v13 >= 1 )
            {
              for ( j = 0; j < v13; ++j )
                *((_DWORD *)v18 + (int)v16[j]) += v3[v16[j] + 102];
            }
          }
          v4 = v14 + 1;
        }
        while ( v4 < v3[144] );
      }
      return this;
    }

    _DWORD *__fastcall jpeg_decoder::init_progressive(StageBucketRect *this)
    {
      int v2; // w8
      __int64 v3; // x21
      char *v4; // x26
      int v5; // w27
      int v6; // w28
      _DWORD *v7; // x20
      char *v8; // x27
      int v9; // w28
      _DWORD *v10; // x20
      int v11; // w8
      int v12; // w10
      int v13; // w9
      bool v14; // zf
      void (__fastcall *v15)(StageBucketRect *, int, int, int); // x9
      void (__fastcall *v16)(StageBucketRect *, int, int, int); // x10
      void (__fastcall *v17)(StageBucketRect *, int, int, int); // x1
      int v18; // w8
      int v19; // w8
      unsigned __int8 *v20; // x10
      unsigned __int8 *v21; // x9
      unsigned __int8 v22; // w26
      int v23; // w8
      int v24; // w8
      int v25; // w9
      int v26; // w8
      int v27; // w9
      int v28; // w10
      unsigned int v29; // w9
      unsigned __int8 *v30; // x10
      unsigned __int8 *v31; // x9
      unsigned __int8 v32; // w26
      int v33; // w8
      int v34; // w8
      int v35; // w9
      int v36; // w8
      unsigned int v37; // w8
      int v38; // w9
      int v39; // w8
      __int64 v40; // x8
    
      v2 = *((_DWORD *)this + 97);
      if ( v2 == 4 )
        jpeg_decoder::terminate(this, -225);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = (char *)this + 4 * v3;
          v5 = *((_DWORD *)v4 + 98) * *((_DWORD *)this + 2608);
          v6 = *((_DWORD *)v4 + 102) * *((_DWORD *)this + 2614);
          v7 = jpeg_decoder::alloc(this, 32);
          v7[2] = v5;
          v7[3] = v6;
          v7[4] = 1;
          v7[5] = 1;
          v7[6] = 2;
          *(_QWORD *)v7 = jpeg_decoder::alloc(this, 2 * v5 * v6);
          v8 = (char *)this + 8 * v3;
          *((_QWORD *)v8 + 216) = v7;
          v9 = *((_DWORD *)v4 + 98) * *((_DWORD *)this + 2608);
          LODWORD(v4) = *((_DWORD *)v4 + 102) * *((_DWORD *)this + 2614);
          v10 = jpeg_decoder::alloc(this, 32);
          v10[2] = v9;
          v10[3] = (_DWORD)v4;
          v10[4] = 8;
          v10[5] = 8;
          v10[6] = 128;
          *(_QWORD *)v10 = jpeg_decoder::alloc(this, (v9 * (int)v4) << 7);
          *((_QWORD *)v8 + 220) = v10;
          ++v3;
        }
        while ( v3 < *((int *)this + 97) );
      }
      while ( (unsigned int)jpeg_decoder::init_scan((int *)this) )
      {
        v11 = *((_DWORD *)this + 135);
        v12 = *((_DWORD *)this + 136);
        if ( v11 > v12 || v12 >= 64 )
    LABEL_58:
          jpeg_decoder::terminate(this, -230);
        v13 = *((_DWORD *)this + 138);
        if ( v11 )
        {
          if ( *((_DWORD *)this + 122) != 1 )
            goto LABEL_58;
        }
        else if ( v12 )
        {
          goto LABEL_58;
        }
        if ( v13 && *((_DWORD *)this + 137) != v13 - 1 )
          jpeg_decoder::terminate(this, -231);
        v14 = v13 == 0;
        if ( v13 )
          v15 = (void (__fastcall *)(StageBucketRect *, int, int, int))progressive_block_decoder::decode_block_ac_refine;
        else
          v15 = (void (__fastcall *)(StageBucketRect *, int, int, int))progressive_block_decoder::decode_block_ac_first;
        if ( v14 )
          v16 = (void (__fastcall *)(StageBucketRect *, int, int, int))progressive_block_decoder::decode_block_dc_first;
        else
          v16 = (void (__fastcall *)(StageBucketRect *, int, int, int))progressive_block_decoder::decode_block_dc_refine;
        if ( v11 )
          v17 = v15;
        else
          v17 = v16;
        jpeg_decoder::decode_scan(this, v17);
        v18 = *((_DWORD *)this + 2604);
        *((_DWORD *)this + 2603) = 0;
        *((_DWORD *)this + 2604) = v18 << 16;
        v19 = *((_DWORD *)this + 456);
        if ( v19 || (jpeg_decoder::prep_in_buffer(this), (v19 = *((_DWORD *)this + 456)) != 0) )
        {
          v20 = (unsigned __int8 *)*((_QWORD *)this + 227);
          v21 = v20 + 1;
          *((_QWORD *)this + 227) = v20 + 1;
          v22 = *v20;
          v23 = v19 - 1;
          *((_DWORD *)this + 456) = v23;
          if ( v23 )
            goto LABEL_32;
        }
        else
        {
          v24 = *((_DWORD *)this + 457);
          *((_DWORD *)this + 457) = v24 ^ 1;
          if ( v24 )
            v22 = -39;
          else
            v22 = -1;
        }
        jpeg_decoder::prep_in_buffer(this);
        v23 = *((_DWORD *)this + 456);
        if ( v23 )
        {
          v21 = (unsigned __int8 *)*((_QWORD *)this + 227);
    LABEL_32:
          *((_QWORD *)this + 227) = v21 + 1;
          v25 = *v21;
          v26 = v23 - 1;
          *((_DWORD *)this + 456) = v26;
          goto LABEL_36;
        }
        v26 = 0;
        v27 = *((_DWORD *)this + 457);
        *((_DWORD *)this + 457) = v27 ^ 1;
        if ( v27 )
          v25 = 217;
        else
          v25 = 255;
    LABEL_36:
        v28 = *((_DWORD *)this + 2603);
        v29 = (v25 & 0xFFFF00FF | (v22 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000) << -(char)v28;
        *((_DWORD *)this + 2604) = v29;
        *((_DWORD *)this + 2603) = v28 + 16;
        if ( v28 <= -17 )
          goto LABEL_59;
        *((_DWORD *)this + 2603) = v28;
        if ( v28 <= 0 )
        {
          *((_DWORD *)this + 2604) = v29 << (v28 + 16);
          if ( v26 || (jpeg_decoder::prep_in_buffer(this), (v26 = *((_DWORD *)this + 456)) != 0) )
          {
            v30 = (unsigned __int8 *)*((_QWORD *)this + 227);
            v31 = v30 + 1;
            *((_QWORD *)this + 227) = v30 + 1;
            v32 = *v30;
            v33 = v26 - 1;
            *((_DWORD *)this + 456) = v33;
            if ( !v33 )
              goto LABEL_46;
    LABEL_48:
            *((_QWORD *)this + 227) = v31 + 1;
            v35 = *v31;
            *((_DWORD *)this + 456) = v33 - 1;
          }
          else
          {
            v34 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v34 ^ 1;
            if ( v34 )
              v32 = -39;
            else
              v32 = -1;
    LABEL_46:
            jpeg_decoder::prep_in_buffer(this);
            v33 = *((_DWORD *)this + 456);
            if ( v33 )
            {
              v31 = (unsigned __int8 *)*((_QWORD *)this + 227);
              goto LABEL_48;
            }
            v36 = *((_DWORD *)this + 457);
            *((_DWORD *)this + 457) = v36 ^ 1;
            if ( v36 )
              v35 = 217;
            else
              v35 = 255;
          }
          v37 = v35 & 0xFFFF00FF | (v32 << 8) | *((_DWORD *)this + 2604) & 0xFFFF0000;
          v38 = *((_DWORD *)this + 2603);
          *((_DWORD *)this + 2604) = v37 << -(char)v38;
          *((_DWORD *)this + 2603) = v38 + 16;
          if ( v38 < -16 )
    LABEL_59:
            __assert_rtn(
              "get_bits_1",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
              121,
              "m_bits_left >= 0");
          continue;
        }
        *((_DWORD *)this + 2604) = v29 << 16;
      }
      v39 = *((_DWORD *)this + 97);
      *((_DWORD *)this + 122) = v39;
      if ( v39 >= 1 )
      {
        v40 = 0;
        do
        {
          *((_DWORD *)this + v40 + 123) = v40;
          ++v40;
        }
        while ( v40 < *((int *)this + 97) );
      }
      return jpeg_decoder::calc_mcu_block_order(this);
    }

    __int64 __fastcall jpeg_decoder::init_sequential(int *a1)
    {
      __int64 result; // x0
    
      result = jpeg_decoder::init_scan(a1);
      if ( !(_DWORD)result )
        jpeg_decoder::terminate((StageBucketRect *)a1, -216);
      return result;
    }

    _DWORD *__fastcall jpeg_decoder::decode_start(StageBucketRect *a1)
    {
      jpeg_decoder::init_frame(a1);
      if ( *((_DWORD *)a1 + 52) )
        return jpeg_decoder::init_progressive(a1);
      else
        return (_DWORD *)jpeg_decoder::init_sequential((int *)a1);
    }

    StageBucketRect *__fastcall jpeg_decoder::jpeg_decoder(StageBucketRect *a1, iAdTitan *a2)
    {
      if ( !setjmp((int *)a1) )
      {
        jpeg_decoder::init(a1, a2);
        jpeg_decoder::locate_sof_marker(a1);
      }
      return a1;
    }

    StageBucketRect *__fastcall jpeg_decoder::jpeg_decoder(StageBucketRect *a1, iAdTitan *a2)
    {
      jpeg_decoder::jpeg_decoder(a1, a2);
      return a1;
    }

    __int64 __fastcall jpeg_decoder::begin(__int64 a1)
    {
      _BYTE *v2; // x20
    
      v2 = (_BYTE *)(a1 + 14660);
      if ( *(_BYTE *)(a1 + 14660) )
        return 0;
      if ( *(_DWORD *)(a1 + 14656) || setjmp((int *)a1) )
        return 0xFFFFFFFFLL;
      jpeg_decoder::decode_start((StageBucketRect *)a1);
      *v2 = 1;
      return 0;
    }

    StageBucketRect *__fastcall jpeg_decoder::~jpeg_decoder(StageBucketRect *a1)
    {
      jpeg_decoder::free_all_blocks(a1);
      return a1;
    }

    __int64 __fastcall jpeg_decoder::get_bits_2(__int64 a1, int a2)
    {
      unsigned int v3; // w9
      __int64 v4; // x19
      int v5; // w10
      int v6; // w8
      int v7; // w10
      int v8; // w9
      int v9; // w11
      int v10; // w8
      int v11; // w21
      unsigned __int8 *v12; // x12
      int v13; // w13
      int v14; // w14
      unsigned int v15; // w9
      unsigned __int8 *v16; // x8
      _BYTE *v17; // x10
      int v18; // w8
      int v19; // w9
      __int64 v20; // x8
      unsigned __int8 *v21; // x9
      _BYTE *v22; // x10
      int v23; // w9
      int v24; // w8
      int v25; // w11
      __int64 v26; // x8
      int v27; // w8
    
      if ( !a2 )
        return 0;
      v3 = *(_DWORD *)(a1 + 10416);
      v4 = v3 >> (32 - a2);
      v5 = *(_DWORD *)(a1 + 10412);
      v6 = v5 - a2;
      *(_DWORD *)(a1 + 10412) = v5 - a2;
      if ( v5 - a2 > 0 )
      {
        *(_DWORD *)(a1 + 10416) = v3 << a2;
        return v4;
      }
      v7 = v3 << v5;
      *(_DWORD *)(a1 + 10416) = v7;
      v8 = *(_DWORD *)(a1 + 1824);
      v9 = v8 - 2;
      if ( v8 >= 2 )
      {
        v12 = *(unsigned __int8 **)(a1 + 1816);
        v13 = *v12;
        if ( v13 != 255 )
        {
          v14 = v12[1];
          if ( v14 != 255 )
          {
            v15 = v7 | (v13 << 8) | v14;
            *(_DWORD *)(a1 + 10416) = v15;
            *(_DWORD *)(a1 + 1824) = v9;
            *(_QWORD *)(a1 + 1816) = v12 + 2;
            goto LABEL_36;
          }
        }
    LABEL_14:
        v16 = *(unsigned __int8 **)(a1 + 1816);
        v17 = v16 + 1;
        *(_QWORD *)(a1 + 1816) = v16 + 1;
        v11 = *v16;
        v18 = v8 - 1;
        *(_DWORD *)(a1 + 1824) = v8 - 1;
        if ( v11 != 255 )
          goto LABEL_22;
        if ( v8 == 1 )
        {
          jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
          v18 = *(_DWORD *)(a1 + 1824);
          if ( !v18 )
          {
            *(_DWORD *)(a1 + 1828) ^= 1u;
            v20 = *(_QWORD *)(a1 + 1816);
            *(_QWORD *)(a1 + 1816) = v20 - 1;
            LOBYTE(v11) = -1;
            goto LABEL_21;
          }
          v17 = *(_BYTE **)(a1 + 1816);
        }
        *(_QWORD *)(a1 + 1816) = v17 + 1;
        v19 = (unsigned __int8)*v17;
        *(_DWORD *)(a1 + 1824) = --v18;
        LOBYTE(v11) = -1;
        if ( !v19 )
          goto LABEL_22;
        *(_QWORD *)(a1 + 1816) = v17;
        *v17 = v19;
        ++*(_DWORD *)(a1 + 1824);
        v20 = *(_QWORD *)(a1 + 1816);
        *(_QWORD *)(a1 + 1816) = v20 - 1;
    LABEL_21:
        *(_BYTE *)(v20 - 1) = -1;
        v18 = *(_DWORD *)(a1 + 1824) + 1;
        *(_DWORD *)(a1 + 1824) = v18;
    LABEL_22:
        if ( v18 )
          goto LABEL_24;
        goto LABEL_23;
      }
      if ( v8 )
        goto LABEL_14;
      jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
      v8 = *(_DWORD *)(a1 + 1824);
      if ( v8 )
        goto LABEL_14;
      v10 = *(_DWORD *)(a1 + 1828);
      *(_DWORD *)(a1 + 1828) = v10 ^ 1;
      if ( v10 )
        LOBYTE(v11) = -39;
      else
        LOBYTE(v11) = -1;
    LABEL_23:
      jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
      v18 = *(_DWORD *)(a1 + 1824);
      if ( !v18 )
      {
        v27 = *(_DWORD *)(a1 + 1828);
        *(_DWORD *)(a1 + 1828) = v27 ^ 1;
        if ( v27 )
          v23 = 217;
        else
          v23 = 255;
        goto LABEL_35;
      }
    LABEL_24:
      v21 = *(unsigned __int8 **)(a1 + 1816);
      v22 = v21 + 1;
      *(_QWORD *)(a1 + 1816) = v21 + 1;
      v23 = *v21;
      v24 = v18 - 1;
      *(_DWORD *)(a1 + 1824) = v24;
      if ( v23 == 255 )
      {
        if ( !v24 )
        {
          jpeg_decoder::prep_in_buffer((StageBucketRect *)a1);
          v24 = *(_DWORD *)(a1 + 1824);
          if ( !v24 )
          {
            *(_DWORD *)(a1 + 1828) ^= 1u;
            v26 = *(_QWORD *)(a1 + 1816);
            *(_QWORD *)(a1 + 1816) = v26 - 1;
            v23 = 255;
            goto LABEL_34;
          }
          v22 = *(_BYTE **)(a1 + 1816);
        }
        *(_QWORD *)(a1 + 1816) = v22 + 1;
        v25 = (unsigned __int8)*v22;
        *(_DWORD *)(a1 + 1824) = v24 - 1;
        v23 = 255;
        if ( v25 )
        {
          *(_QWORD *)(a1 + 1816) = v22;
          *v22 = v25;
          ++*(_DWORD *)(a1 + 1824);
          v26 = *(_QWORD *)(a1 + 1816);
          *(_QWORD *)(a1 + 1816) = v26 - 1;
    LABEL_34:
          *(_BYTE *)(v26 - 1) = -1;
          ++*(_DWORD *)(a1 + 1824);
        }
      }
    LABEL_35:
      v15 = v23 & 0xFFFF00FF | ((unsigned __int8)v11 << 8) | *(_DWORD *)(a1 + 10416);
      *(_DWORD *)(a1 + 10416) = v15;
      v6 = *(_DWORD *)(a1 + 10412);
    LABEL_36:
      *(_DWORD *)(a1 + 10416) = v15 << -(char)v6;
      *(_DWORD *)(a1 + 10412) = v6 + 16;
      if ( v6 <= -17 )
        __assert_rtn(
          "get_bits_2",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/jpegdecoder.inl",
          162,
          "m_bits_left >= 0");
      return v4;
    }

}; // end class jpeg_decoder
